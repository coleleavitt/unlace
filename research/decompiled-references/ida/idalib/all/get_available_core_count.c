__int64 get_available_core_count()
{
  __int64 v0; // rax
  __int64 v1; // rbp
  unsigned int v2; // r12d
  __int16 v4; // [rsp+0h] [rbp-428h] BYREF
  char v5; // [rsp+2h] [rbp-426h]
  char v6; // [rsp+3h] [rbp-425h]
  unsigned __int64 v7; // [rsp+408h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v0 = qfopen("/proc/stat", "r");
  if ( v0 )
  {
    v1 = v0;
    v2 = 0;
    while ( qfgets(&v4, 1024, v1) )
    {
      if ( (unsigned __int8)(v6 - 48) <= 9u && v4 == 28771 && v5 == 117 )
        ++v2;
    }
    qfclose(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v2;
}
