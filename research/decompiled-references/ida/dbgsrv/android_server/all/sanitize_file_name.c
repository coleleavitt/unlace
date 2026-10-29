/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sanitize_file_name
// Address: 0x00000000000BC820

//----- (00000000000BC820) ----------------------------------------------------
__int64 __fastcall sanitize_file_name(char *s, size_t a2)
{
  char *v4; // x21
  char *v5; // x0
  unsigned int v6; // w8
  const void *v7; // x21
  unsigned __int8 *v8; // x8
  int v9; // w9
  int v10; // t1
  size_t v11; // x0
  unsigned __int8 v12; // w12
  char *v13; // x8
  unsigned int v14; // w12
  int v15; // t1

  while ( 1 )
  {
    v4 = strrchr(s, 47);
    v5 = strrchr(s, 92);
    if ( v4 > v5 )
      v5 = v4;
    if ( !v5 )
      break;
    v7 = v5 + 1;
    v6 = (unsigned __int8)v5[1];
    if ( v6 > 0x1F )
      goto LABEL_11;
    if ( v6 - 1 <= 0x1E )
    {
      v8 = (unsigned __int8 *)(v5 + 2);
      do
      {
        v10 = *v8++;
        v9 = v10;
      }
      while ( (unsigned int)(v10 - 1) < 0x1F );
      if ( v9 )
      {
LABEL_11:
        v11 = strlen(v5);
        memmove(s, v7, v11);
        break;
      }
    }
    *v5 = 0;
  }
  v12 = *s;
  if ( *s )
    goto LABEL_13;
  if ( a2 )
  {
    qtmpnam(s, a2);
    v12 = *s;
    if ( !*s )
      return 1;
LABEL_13:
    v13 = s + 1;
    do
    {
      if ( v12 < 0x20u || (v14 = v12 - 42, v14 <= 0x33) && ((1LL << v14) & 0xA000000200001LL) != 0 )
        *(v13 - 1) = 95;
      v15 = (unsigned __int8)*v13++;
      v12 = v15;
    }
    while ( v15 );
    return 1;
  }
  return 0;
}
