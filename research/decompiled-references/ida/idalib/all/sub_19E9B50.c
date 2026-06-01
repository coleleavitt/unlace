char __fastcall sub_19E9B50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 i; // r14
  __int64 v12; // r15
  __m128i *v13; // rcx
  __m128i *v14; // rbx
  __m128i *v15; // rcx
  __int64 v16; // r14
  const __m128i *v17; // r12
  __m128i v18; // xmm7
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // [rsp+10h] [rbp-68h]
  __m128i v24; // [rsp+20h] [rbp-58h] BYREF
  __m128i v25[4]; // [rsp+30h] [rbp-48h] BYREF

  LOBYTE(v8) = a3 - 1;
  v10 = (a3 - 1) / 2;
  v22 = a3 & 1;
  if ( a2 >= v10 )
  {
    v12 = a2;
    v14 = (__m128i *)(a1 + 32 * a2);
    if ( (a3 & 1) != 0 )
    {
      v24 = _mm_loadu_si128((const __m128i *)&a7);
      v25[0] = _mm_loadu_si128((const __m128i *)&a8);
      goto LABEL_13;
    }
LABEL_14:
    if ( (a3 - 2) / 2 == v12 )
    {
      v19 = v12 + 1;
      v12 = 2 * (v12 + 1) - 1;
      v20 = a1 + (v19 << 6);
      *v14 = _mm_loadu_si128((const __m128i *)(v20 - 32));
      v14[1] = _mm_loadu_si128((const __m128i *)(v20 - 16));
      v14 = (__m128i *)(a1 + 32 * v12);
    }
    goto LABEL_8;
  }
  for ( i = a2; ; i = v12 )
  {
    v12 = 2 * (i + 1);
    v14 = (__m128i *)(a1 + ((i + 1) << 6));
    if ( !sub_10246C0(a4, v14[1].m128i_i32[0], v14[-1].m128i_i32[0]) )
      break;
    --v12;
    v13 = (__m128i *)(a1 + 32 * i);
    v14 = (__m128i *)(a1 + 32 * v12);
    *v13 = _mm_loadu_si128(v14);
    v13[1] = _mm_loadu_si128(v14 + 1);
    if ( v12 >= v10 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  v15 = (__m128i *)(a1 + 32 * i);
  *v15 = _mm_loadu_si128(v14);
  v15[1] = _mm_loadu_si128(v14 + 1);
  if ( v12 < v10 )
    goto LABEL_4;
LABEL_7:
  if ( !v22 )
    goto LABEL_14;
LABEL_8:
  LOBYTE(v8) = v12 - 1;
  v24 = _mm_loadu_si128((const __m128i *)&a7);
  v25[0] = _mm_loadu_si128((const __m128i *)&a8);
  v16 = (v12 - 1) / 2;
  if ( v12 > a2 )
  {
    while ( 1 )
    {
      v17 = (const __m128i *)(a1 + 32 * v16);
      LOBYTE(v8) = sub_10246C0(a4, v17[1].m128i_i32[0], v25[0].m128i_i32[0]);
      v14 = (__m128i *)(a1 + 32 * v12);
      if ( !(_BYTE)v8 )
        break;
      v12 = v16;
      *v14 = _mm_loadu_si128(v17);
      v14[1] = _mm_loadu_si128(v17 + 1);
      v8 = (v16 - 1) / 2;
      if ( a2 >= v16 )
      {
        v14 = (__m128i *)(a1 + 32 * v16);
        break;
      }
      v16 = (v16 - 1) / 2;
    }
  }
LABEL_13:
  v18 = _mm_loadu_si128(v25);
  *v14 = _mm_loadu_si128(&v24);
  v14[1] = v18;
  return v8;
}
