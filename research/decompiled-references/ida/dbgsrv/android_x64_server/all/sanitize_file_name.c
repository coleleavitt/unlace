/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sanitize_file_name
// Address: 0x00000000000C1520

//----- (00000000000C1520) ----------------------------------------------------
char __fastcall sanitize_file_name(char *s, __int64 a2)
{
  char *v2; // r15
  char *v3; // rax
  char v4; // cl
  char *v5; // rcx
  char v6; // bl
  unsigned __int8 v7; // dl
  const void *v8; // r15
  size_t v9; // rax
  char v10; // al
  char *v11; // r12
  __int64 v12; // rcx
  unsigned __int8 v13; // al

  while ( 1 )
  {
    v2 = strrchr(s, 47);
    v3 = strrchr(s, 92);
    if ( v2 > v3 )
      v3 = v2;
    if ( !v3 )
      break;
    v4 = v3[1];
    if ( (unsigned __int8)v4 > 0x1Fu )
      goto LABEL_11;
    if ( (unsigned __int8)(v4 - 1) <= 0x1Eu )
    {
      v5 = v3 + 2;
      do
      {
        v6 = *v5;
        v7 = *v5++ - 1;
      }
      while ( v7 < 0x1Fu );
      if ( v6 )
      {
LABEL_11:
        v8 = v3 + 1;
        v9 = strlen(v3);
        memmove(s, v8, v9);
        break;
      }
    }
    *v3 = 0;
  }
  v10 = *s;
  if ( *s )
    goto LABEL_13;
  if ( a2 )
  {
    qtmpnam(s, a2);
    v10 = *s;
    if ( !*s )
      return 1;
LABEL_13:
    v11 = s + 1;
    v12 = 0xA000000200001LL;
    do
    {
      if ( (unsigned __int8)v10 < 0x20u || (v13 = v10 - 42, v13 <= 0x33u) && _bittest64(&v12, v13) )
        *(v11 - 1) = 95;
      v10 = *v11++;
    }
    while ( v10 );
    return 1;
  }
  return 0;
}
