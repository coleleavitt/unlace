/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71334
// Address: 0x00071334

//----- (00071334) --------------------------------------------------------
int __fastcall sub_71334(unsigned __int16 *a1)
{
  unsigned int v2; // r4
  unsigned __int16 *v3; // r2
  __int16 v4; // r3
  int v5; // r6
  const void *v6; // r8
  void *v7; // r7
  unsigned int v9; // r1
  unsigned __int16 *v10; // r3
  unsigned int v11; // r2
  unsigned __int16 v12; // r0

  v2 = a1[2];
  if ( a1[2] )
  {
    if ( (v2 & 0xFF00) != 0 )
    {
      v3 = a1 + 2;
      v4 = 0;
      while ( 1 )
      {
        *v3++ = v4 | (v2 >> 8);
        v4 = (_WORD)v2 << 8;
        if ( v3 == a1 + 11 )
          break;
        v2 = *v3;
      }
      v2 = -8;
      if ( !a1[2] )
        return v2;
    }
    else
    {
      v2 = 0;
    }
    do
    {
      --v2;
      sub_70FFC((int)a1);
    }
    while ( a1[2] );
  }
  else
  {
    v5 = a1[3];
    if ( (v5 & 0x8000) == 0 )
    {
      v6 = a1 + 3;
      v7 = a1 + 2;
      while ( !v5 )
      {
        v2 += 16;
        memmove(v7, v6, 0x10u);
        a1[10] = 0;
        if ( v2 == 128 )
          return 128;
        v5 = a1[3];
      }
      for ( ; (v5 & 0xFF00) == 0; v2 += 8 )
      {
        LOWORD(v9) = 0;
        v10 = a1 + 10;
        do
        {
          v11 = *v10;
          v12 = v9 | ((_WORD)v11 << 8);
          v9 = v11 >> 8;
          *v10-- = v12;
        }
        while ( v10 != a1 + 1 );
        LOWORD(v5) = a1[3];
      }
      if ( (v5 & 0x8000) == 0 )
      {
        do
        {
          ++v2;
          sub_7103C((int)a1);
        }
        while ( (a1[3] & 0x8000u) == 0 );
      }
    }
  }
  return v2;
}
