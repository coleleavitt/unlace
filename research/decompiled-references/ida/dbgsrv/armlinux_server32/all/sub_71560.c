/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71560
// Address: 0x00071560

//----- (00071560) --------------------------------------------------------
int __fastcall sub_71560(int a1, int a2)
{
  int v2; // r5
  void *v4; // r3
  const void *v5; // r8
  int i; // r6
  unsigned int v7; // r1
  _WORD *v8; // r2
  unsigned int v9; // r3
  __int16 v10; // r0
  int result; // r0
  int v12; // r6
  int v13; // r8
  _WORD *v14; // r7
  void *v15; // r9
  unsigned int v16; // r1
  _WORD *v17; // r0
  __int16 v18; // r3

  v2 = a2;
  if ( !a2 )
    return 1;
  if ( a2 >= 0 )
  {
    if ( a2 <= 15 )
    {
      if ( a2 <= 7 )
      {
        do
        {
LABEL_14:
          sub_711A8(a1);
          --v2;
        }
        while ( v2 );
        return 1;
      }
      v7 = *(unsigned __int16 *)(a1 + 20);
    }
    else
    {
      v4 = (void *)(a1 + 4);
      v5 = (const void *)(a1 + 6);
      for ( i = a2; i > 15; i -= 16 )
      {
        v4 = memmove(v4, v5, 0x10u);
        *(_WORD *)(a1 + 20) = 0;
      }
      v2 &= 0xFu;
      if ( v2 <= 7 )
      {
LABEL_13:
        if ( v2 )
          goto LABEL_14;
        return 1;
      }
      v7 = 0;
    }
    v8 = (_WORD *)(a1 + 20);
    LOWORD(v9) = 0;
    while ( 1 )
    {
      v10 = v9 | ((_WORD)v7 << 8);
      v9 = v7 >> 8;
      *v8-- = v10;
      if ( v8 == (_WORD *)(a1 + 2) )
        break;
      v7 = (unsigned __int16)*v8;
    }
    v2 -= 8;
    goto LABEL_13;
  }
  v12 = -a2;
  if ( -a2 > 15 )
  {
    v13 = 0;
    v14 = (_WORD *)(a1 + 4);
    v15 = (void *)(a1 + 6);
    do
    {
      v12 -= 16;
      v13 |= *(unsigned __int16 *)(a1 + 20);
      memmove(v15, v14, 0x10u);
      *(_WORD *)(a1 + 4) = 0;
    }
    while ( v12 > 15 );
    v12 = -v2 & 0xF;
    if ( (unsigned int)v12 <= 7 )
    {
LABEL_26:
      if ( !v12 )
        goto LABEL_28;
      goto LABEL_27;
    }
    v16 = 0;
LABEL_22:
    v17 = v14 + 9;
    v18 = 0;
    v13 |= *(unsigned __int8 *)(a1 + 20);
    while ( 1 )
    {
      *v14++ = v18 | (v16 >> 8);
      v18 = (_WORD)v16 << 8;
      if ( v14 == v17 )
        break;
      v16 = (unsigned __int16)*v14;
    }
    v12 -= 8;
    goto LABEL_26;
  }
  if ( v12 > 7 )
  {
    v16 = *(unsigned __int16 *)(a1 + 4);
    v14 = (_WORD *)(a1 + 4);
    v13 = 0;
    goto LABEL_22;
  }
  v13 = 0;
  do
  {
LABEL_27:
    v13 |= *(_WORD *)(a1 + 20) & 1;
    sub_71168(a1);
    --v12;
  }
  while ( v12 );
LABEL_28:
  result = 2;
  if ( !v13 )
    return 1;
  return result;
}
// 71654: conditional instruction was optimized away because r1.4<0
