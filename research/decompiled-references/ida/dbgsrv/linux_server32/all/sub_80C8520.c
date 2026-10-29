/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C8520
// Address: 0x080C8520

//----- (080C8520) --------------------------------------------------------
int __cdecl sub_80C8520(int a1, int a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  __m128i v4; // xmm0
  unsigned __int16 *v5; // edx
  __int16 v6; // cx
  unsigned __int16 v7; // ax
  __int16 v8; // di
  int v10; // edi
  int v11; // eax
  __int16 v12; // si
  __m128i v13; // xmm0
  unsigned __int16 *v14; // edx
  __int16 v15; // cx
  unsigned __int16 v16; // ax
  __int16 v17; // di
  int v18; // [esp+Ch] [ebp-20h]

  v2 = a2;
  if ( !a2 )
    return 1;
  if ( a2 >= 0 )
  {
    v3 = a2;
    if ( a2 <= 15 )
    {
      if ( a2 <= 7 )
      {
        do
        {
LABEL_10:
          sub_80C7EC0(a1);
          --v2;
        }
        while ( v2 );
        return 1;
      }
    }
    else
    {
      do
      {
        v4 = _mm_loadu_si128((const __m128i *)(a1 + 6));
        v3 -= 16;
        *(_WORD *)(a1 + 20) = 0;
        *(__m128i *)(a1 + 4) = v4;
      }
      while ( v3 > 15 );
      v2 = a2 & 0xF;
      if ( v2 <= 7 )
      {
LABEL_9:
        if ( v2 )
          goto LABEL_10;
        return 1;
      }
    }
    v5 = (unsigned __int16 *)(a1 + 20);
    v6 = 0;
    do
    {
      v7 = *v5;
      v8 = v6;
      --v5;
      v6 = HIBYTE(v7);
      v5[1] = v8 | (v7 << 8);
    }
    while ( (unsigned __int16 *)(a1 + 2) != v5 );
    v2 -= 8;
    goto LABEL_9;
  }
  v10 = -a2;
  if ( -a2 > 15 )
  {
    v11 = -a2;
    v12 = 0;
    do
    {
      v13 = _mm_loadu_si128((const __m128i *)(a1 + 4));
      v11 -= 16;
      v12 |= *(_WORD *)(a1 + 20);
      *(_WORD *)(a1 + 4) = 0;
      *(__m128i *)(a1 + 6) = v13;
    }
    while ( v11 > 15 );
    v10 = -(v10 & 0xFFFFFFF0) - a2;
    if ( v10 <= 7 )
    {
LABEL_19:
      if ( !v10 )
        goto LABEL_21;
      goto LABEL_20;
    }
LABEL_16:
    v18 = v10;
    v14 = (unsigned __int16 *)(a1 + 4);
    v15 = 0;
    v12 |= *(unsigned __int8 *)(a1 + 20);
    do
    {
      v16 = *v14;
      v17 = v15;
      ++v14;
      v15 = v16 << 8;
      *(v14 - 1) = v17 | HIBYTE(v16);
    }
    while ( v14 != (unsigned __int16 *)(a1 + 22) );
    v10 = v18 - 8;
    goto LABEL_19;
  }
  v12 = 0;
  if ( v10 > 7 )
    goto LABEL_16;
  do
  {
LABEL_20:
    v12 |= *(_WORD *)(a1 + 20) & 1;
    sub_80C7E40(a1);
    --v10;
  }
  while ( v10 );
LABEL_21:
  if ( !v12 )
    return 1;
  return 2;
}
// 80C86DB: conditional instruction was optimized away because %arg_4.4<0
