/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52CB0
// Address: 0x00052CB0

//----- (00052CB0) --------------------------------------------------------
unsigned __int8 *__fastcall sub_52CB0(int a1)
{
  int v1; // r3
  unsigned __int8 *i; // r4
  int v3; // r6
  unsigned __int8 v4; // r7
  unsigned __int8 *v5; // r5
  int v6; // r0
  unsigned __int8 *v7; // r0
  int v8; // r6
  int v9; // r0
  _BYTE *v10; // r0

  v1 = a1;
  for ( i = *(unsigned __int8 **)(a1 + 4); ; *(_DWORD *)(a1 + 4) = i )
  {
    v3 = *i;
    v4 = *i;
    if ( (unsigned int)(v3 - 9) >= 5 && v3 != 32 )
      break;
    ++i;
  }
  v5 = i + 1;
  if ( (v3 & 0x80u) == 0 && (v6 = isalpha(v3), v1 = a1, v6) || v3 == 36 || v3 == 95 )
  {
    while ( 1 )
    {
      if ( (char)v4 <= -1 || (v8 = v1, v9 = isalnum(v4), v1 = v8, !v9) )
      {
        if ( v4 != 95 && v4 != 36 )
          break;
      }
      *(_DWORD *)(v1 + 4) = v5;
      v4 = *v5++;
    }
    v7 = v5 - 1;
  }
  else
  {
    v7 = i;
  }
  *(_BYTE *)(v1 + 460) = v4;
  if ( *v7 )
  {
    *v7 = 0;
    v10 = *(_BYTE **)(v1 + 4);
    do
    {
      do
        *(_DWORD *)(v1 + 4) = ++v10;
      while ( (unsigned int)(unsigned __int8)*v10 - 9 < 5 );
    }
    while ( *v10 == 32 );
  }
  return i;
}
