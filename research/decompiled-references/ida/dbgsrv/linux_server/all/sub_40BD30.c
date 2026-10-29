/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BD30
// Address: 0x000000000040BD30

//----- (000000000040BD30) ----------------------------------------------------
__int64 sub_40BD30()
{
  __int64 *v0; // rbx
  __pid_t v1; // eax
  FILE *v2; // rax
  FILE *v3; // r12
  int v4; // ebp
  __int64 v6; // [rsp+0h] [rbp-438h] BYREF
  __int16 v7; // [rsp+8h] [rbp-430h]
  char nptr[1022]; // [rsp+Ah] [rbp-42Eh] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-30h]

  LODWORD(v0) = 0;
  v9 = __readfsqword(0x28u);
  v1 = getpid();
  sub_485490((char *)&v6, 1024, "/proc/%d/status", v1);
  v2 = fopen((const char *)&v6, "r");
  if ( v2 )
  {
    v0 = &v6;
    v3 = v2;
    v4 = 16;
    while ( 1 )
    {
      if ( !fgets((char *)&v6, 1024, v3) )
      {
LABEL_6:
        LODWORD(v0) = 0;
        goto LABEL_7;
      }
      if ( v6 == 0x6950726563617254LL && v7 == 14948 )
        break;
      if ( !--v4 )
        goto LABEL_6;
    }
    LOBYTE(v0) = (unsigned int)strtol(nptr, nullptr, 10) != 0;
LABEL_7:
    fclose(v3);
  }
  return (unsigned int)v0;
}
