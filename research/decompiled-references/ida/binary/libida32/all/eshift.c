__int64 __fastcall eshift(__int64 a1, int a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  int v4; // eax
  __m128i v5; // xmm0
  unsigned __int16 *v6; // rdx
  unsigned __int16 *v7; // rdi
  __int16 v8; // cx
  unsigned __int16 v9; // ax
  __int16 v10; // si
  int v11; // r8d
  int v13; // r11d
  int v14; // eax
  __int16 v15; // r10
  __m128i v16; // xmm0
  __int16 v17; // ax
  unsigned __int16 *v18; // rdx
  unsigned __int16 *v19; // rdi
  __int16 v20; // cx
  unsigned __int16 v21; // ax
  __int16 v22; // si
  int v23; // r11d

  if ( !a2 )
    return 1;
  v2 = a1;
  v3 = a2;
  if ( a2 >= 0 )
  {
    v4 = a2;
    if ( a2 <= 15 )
    {
      if ( a2 <= 7 )
      {
        do
LABEL_10:
          sub_80CCC0(v2);
        while ( v11 != 1 );
        return 1;
      }
    }
    else
    {
      do
      {
        v5 = _mm_loadu_si128((const __m128i *)(a1 + 6));
        v4 -= 16;
        *(_WORD *)(a1 + 20) = 0;
        *(__m128i *)(a1 + 4) = v5;
      }
      while ( v4 > 15 );
      v3 = a2 & 0xF;
      if ( v3 <= 7 )
      {
LABEL_9:
        if ( v3 )
          goto LABEL_10;
        return 1;
      }
    }
    v6 = (unsigned __int16 *)(a1 + 20);
    v7 = (unsigned __int16 *)(a1 + 2);
    v8 = 0;
    do
    {
      v9 = *v6;
      v10 = v8;
      --v6;
      v8 = HIBYTE(v9);
      v6[1] = v10 | (v9 << 8);
    }
    while ( v6 != v7 );
    v3 -= 8;
    goto LABEL_9;
  }
  v13 = -a2;
  if ( -a2 > 15 )
  {
    v14 = -a2;
    v15 = 0;
    do
    {
      v16 = _mm_loadu_si128((const __m128i *)(a1 + 4));
      v14 -= 16;
      v15 |= *(_WORD *)(a1 + 20);
      *(_WORD *)(a1 + 4) = 0;
      *(__m128i *)(a1 + 6) = v16;
    }
    while ( v14 > 15 );
    v13 = -(v13 & 0xFFFFFFF0) - a2;
    if ( v13 <= 7 )
    {
LABEL_19:
      if ( !v13 )
        goto LABEL_21;
      goto LABEL_20;
    }
LABEL_16:
    v17 = *(unsigned __int8 *)(a1 + 20);
    v18 = (unsigned __int16 *)(a1 + 4);
    v19 = (unsigned __int16 *)(a1 + 22);
    v20 = 0;
    v15 |= v17;
    do
    {
      v21 = *v18;
      v22 = v20;
      ++v18;
      v20 = v21 << 8;
      *(v18 - 1) = v22 | HIBYTE(v21);
    }
    while ( v18 != v19 );
    v13 -= 8;
    goto LABEL_19;
  }
  v15 = 0;
  if ( v13 > 7 )
    goto LABEL_16;
  do
LABEL_20:
    sub_80CC40(v2);
  while ( v23 != 1 );
LABEL_21:
  if ( !v15 )
    return 1;
  return 2;
}

