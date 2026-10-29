/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_available_core_count
// Address: 0x00000000000C48A0

//----- (00000000000C48A0) ----------------------------------------------------
__int64 get_available_core_count()
{
  FILE *v0; // rax
  FILE *v1; // rbx
  unsigned int v2; // r15d
  char v4[3]; // [rsp+0h] [rbp-428h] BYREF
  char v5; // [rsp+3h] [rbp-425h]
  unsigned __int64 v6; // [rsp+400h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  v0 = qfopen("/proc/stat", (__int64)"r");
  if ( v0 )
  {
    v1 = v0;
    v2 = 0;
    while ( qfgets(v4, 1024, v1) )
    {
      if ( v5 >= 0 && (unsigned int)(unsigned __int8)v5 - 48 <= 9 )
        v2 += strncmp(v4, "cpu", 3u) == 0;
    }
    qfclose(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v2;
}
// C48A0: using guessed type __int64 get_available_core_count();
