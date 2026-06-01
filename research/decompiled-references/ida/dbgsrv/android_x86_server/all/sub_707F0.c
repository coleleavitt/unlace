/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_707F0
// Address: 0x000707F0

//----- (000707F0) --------------------------------------------------------
char *__cdecl sub_707F0(int a1)
{
  char *i; // edi
  char v2; // cl
  int v3; // eax
  char *v4; // esi
  int v5; // eax
  char *v6; // esi
  _BYTE *v7; // eax
  char v9; // [esp+Bh] [ebp-11h]
  char v10; // [esp+Bh] [ebp-11h]

  for ( i = *(char **)(a1 + 4); ; *(_DWORD *)(a1 + 4) = i )
  {
    v2 = *i;
    if ( (unsigned __int8)(*i - 9) >= 5u && v2 != 32 )
      break;
    ++i;
  }
  if ( v2 >= 0 && (v9 = *i, v3 = isalpha((unsigned __int8)v2), v2 = v9, v3) || v2 == 36 || v2 == 95 )
  {
    v4 = i + 1;
    while ( 1 )
    {
      v10 = v2;
      v5 = isalnum((unsigned __int8)v2);
      v2 = v10;
      if ( v5 )
        goto LABEL_10;
      do
      {
        if ( v2 != 95 && v2 != 36 )
        {
          v6 = v4 - 1;
          goto LABEL_16;
        }
LABEL_10:
        *(_DWORD *)(a1 + 4) = v4;
        v2 = *v4++;
      }
      while ( v2 < 0 );
    }
  }
  v6 = i;
LABEL_16:
  *(_BYTE *)(a1 + 244) = v2;
  if ( *v6 )
  {
    *v6 = 0;
    v7 = *(_BYTE **)(a1 + 4);
    do
    {
      do
        *(_DWORD *)(a1 + 4) = ++v7;
      while ( (unsigned __int8)(*v7 - 9) < 5u );
    }
    while ( *v7 == 32 );
  }
  return i;
}
// 70851: conditional instruction was optimized away because cl.1 is in (<20u|>=21)
