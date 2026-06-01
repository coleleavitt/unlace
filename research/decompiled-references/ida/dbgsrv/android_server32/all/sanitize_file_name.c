/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sanitize_file_name
// Address: 0x0007D6A8

//----- (0007D6A8) --------------------------------------------------------
int __fastcall sanitize_file_name(const char *a1, int a2)
{
  char *i; // r4
  char *v4; // r6
  char *v5; // r0
  unsigned int v6; // r0
  unsigned __int8 *v7; // r1
  int v8; // r2
  int v9; // r1
  int result; // r0

  for ( i = (char *)a1; ; a1 = i )
  {
    v4 = strrchr(a1, 47);
    v5 = strrchr(i, 92);
    if ( v4 <= v5 )
      v4 = v5;
    if ( !v4 )
      break;
    v6 = (unsigned __int8)v4[1];
    if ( v6 > 0x1F )
      goto LABEL_11;
    if ( (unsigned __int8)(v6 - 1) <= 0x1Eu )
    {
      v7 = (unsigned __int8 *)(v4 + 2);
      do
        v8 = *v7++;
      while ( (unsigned __int8)(v8 - 1) < 0x1Fu );
      if ( v8 )
      {
LABEL_11:
        memmove(i, v4 + 1, strlen(v4));
        break;
      }
    }
    *v4 = 0;
  }
  LOBYTE(v9) = *i;
  if ( *i )
    goto LABEL_13;
  result = 0;
  if ( a2 )
  {
    qtmpnam(i, a2);
    LOBYTE(v9) = *i;
    if ( !*i )
      return 1;
    do
    {
LABEL_13:
      if ( (unsigned __int8)v9 < 0x20u
        || (unsigned int)(unsigned __int8)v9 - 63 <= 0x1E && ((1 << (v9 - 63)) & 0x50000001) != 0
        || (unsigned __int8)v9 == 42 )
      {
        *i = 95;
      }
      v9 = (unsigned __int8)*++i;
    }
    while ( v9 );
    return 1;
  }
  return result;
}
