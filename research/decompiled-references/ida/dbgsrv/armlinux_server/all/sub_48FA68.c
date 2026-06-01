/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FA68
// Address: 0x000000000048FA68

//----- (000000000048FA68) ----------------------------------------------------
__int64 __fastcall sub_48FA68(char *s, unsigned __int64 a2)
{
  char *v4; // x21
  char *v5; // x0
  unsigned int v6; // w2
  const void *v7; // x21
  char *v8; // x4
  int v9; // w3
  int v10; // t1
  size_t v11; // x0
  __int64 result; // x0
  int v15; // t1

  while ( 1 )
  {
    v4 = strrchr(s, 47);
    v5 = strrchr(s, 92);
    if ( v5 < v4 )
      v5 = v4;
    if ( !v5 )
      break;
    v7 = v5 + 1;
    v6 = (unsigned __int8)v5[1];
    if ( v6 > 0x1F )
      goto LABEL_9;
    if ( (unsigned __int8)(v6 - 1) <= 0x1Eu )
    {
      v8 = v5 + 1;
      do
      {
        v10 = (unsigned __int8)*++v8;
        v9 = v10;
      }
      while ( (unsigned __int8)(v10 - 1) <= 0x1Eu );
      if ( v9 )
      {
LABEL_9:
        v11 = strlen(v5);
        memmove(s, v7, v11);
        break;
      }
    }
    *v5 = 0;
  }
  result = (unsigned __int8)*s;
  if ( *s )
    goto LABEL_29;
  if ( !a2 )
    return result;
  sub_48F718(s, a2);
  LODWORD(result) = (unsigned __int8)*s;
  if ( *s )
  {
LABEL_29:
    do
    {
      if ( (_DWORD)result == 63 || (unsigned int)result <= 0x1F || (_DWORD)result == 42 )
        *s = 95;
      if ( (((_BYTE)result - 91) & 0xFD) == 0 )
        *s = 95;
      v15 = (unsigned __int8)*++s;
      LODWORD(result) = v15;
    }
    while ( v15 );
  }
  return 1;
}
