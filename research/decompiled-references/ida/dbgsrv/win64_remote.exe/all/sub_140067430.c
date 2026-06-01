/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140067430
// Address: 0x0000000140067430

//----- (0000000140067430) ----------------------------------------------------
__int64 __fastcall sub_140067430(_WORD *a1, int a2)
{
  int v2; // ebx
  int v5; // ebp
  __int16 v6; // si
  int v7; // ebx
  unsigned __int64 v8; // r14
  __int16 v9; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // r14
  __int64 v12; // r10

  v2 = a2;
  if ( !a2 )
    return 1;
  v5 = 0;
  v6 = 0;
  if ( a2 >= 0 )
  {
    if ( a2 >= 16 )
    {
      v11 = (unsigned __int64)(unsigned int)a2 >> 4;
      v2 = -16 * ((unsigned int)a2 >> 4) + a2;
      do
      {
        memcpy(a1 + 2, a1 + 3, 0x10u);
        a1[10] = 0;
        --v11;
      }
      while ( v11 );
    }
    if ( v2 >= 8 )
    {
      v2 -= 8 * ((unsigned int)v2 >> 3);
      do
        sub_140065C30(a1);
      while ( v12 != 1 );
    }
    for ( ; v2 > 0; --v2 )
      sub_140065AC0(a1);
  }
  else
  {
    v7 = -a2;
    if ( -a2 >= 16 )
    {
      v8 = (unsigned __int64)(unsigned int)v7 >> 4;
      v7 = -16 * ((unsigned int)-a2 >> 4) - a2;
      do
      {
        v6 |= a1[10];
        memcpy(a1 + 3, a1 + 2, 0x10u);
        a1[2] = 0;
        --v8;
      }
      while ( v8 );
    }
    if ( v7 >= 8 )
    {
      v9 = 255;
      v7 -= 8 * ((unsigned int)v7 >> 3);
      do
      {
        v6 |= v9 & a1[10];
        sub_1400659F0((__int64)a1);
      }
      while ( v10 != 1 );
    }
    for ( ; v7 > 0; --v7 )
    {
      v6 |= a1[10] & 1;
      sub_140065870(a1);
    }
  }
  LOBYTE(v5) = v6 != 0;
  return (unsigned int)(v5 + 1);
}
// 1400674D7: variable 'v9' is possibly undefined
// 1400674E7: variable 'v10' is possibly undefined
// 14006755F: variable 'v12' is possibly undefined
