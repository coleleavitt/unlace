unsigned __int64 __fastcall sub_2753B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // r12
  __int64 v11; // r15
  unsigned __int8 v12; // al
  __m128i *v13; // rcx
  __m128i *v14; // rax
  __int64 v15; // r14
  const __m128i *v16; // r13
  char v17; // cl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+8h] [rbp-70h]
  __m128i v22; // [rsp+10h] [rbp-68h] BYREF
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v9 = (a3 - 1) / 2;
  v24 = __readfsqword(0x28u);
  v21 = a3 & 1;
  if ( a2 >= v9 )
  {
    v14 = (__m128i *)(a1 + 32 * a2);
    if ( (a3 & 1) != 0 )
    {
      v22 = _mm_loadu_si128((const __m128i *)&a7);
      v23 = _mm_loadu_si128((const __m128i *)&a8);
      goto LABEL_10;
    }
    v11 = a2;
  }
  else
  {
    v11 = a2;
    do
    {
      v12 = a4(a1 + ((v11 + 1) << 6), a1 + ((v11 + 1) << 6) - 32);
      v13 = (__m128i *)(a1 + 32 * v11);
      v11 = 2 * (v11 + 1) - v12;
      v14 = (__m128i *)(a1 + 32 * v11);
      *v13 = _mm_loadu_si128(v14);
      v13[1] = _mm_loadu_si128(v14 + 1);
    }
    while ( v11 < v9 );
    if ( v21 )
      goto LABEL_5;
  }
  if ( (a3 - 2) / 2 == v11 )
  {
    v19 = v11 + 1;
    v11 = 2 * (v11 + 1) - 1;
    v20 = a1 + (v19 << 6);
    *v14 = _mm_loadu_si128((const __m128i *)(v20 - 32));
    v14[1] = _mm_loadu_si128((const __m128i *)(v20 - 16));
    v14 = (__m128i *)(a1 + 32 * v11);
  }
LABEL_5:
  v22 = _mm_loadu_si128((const __m128i *)&a7);
  v23 = _mm_loadu_si128((const __m128i *)&a8);
  v15 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      v16 = (const __m128i *)(a1 + 32 * v15);
      v17 = a4((__int64)v16, (__int64)&v22);
      v14 = (__m128i *)(a1 + 32 * v11);
      if ( !v17 )
        break;
      v11 = v15;
      *v14 = _mm_loadu_si128(v16);
      v14[1] = _mm_loadu_si128(v16 + 1);
      if ( a2 >= v15 )
      {
        v14 = (__m128i *)(a1 + 32 * v15);
        break;
      }
      v15 = (v15 - 1) / 2;
    }
  }
LABEL_10:
  *v14 = _mm_load_si128(&v22);
  v14[1] = _mm_load_si128(&v23);
  return v24 - __readfsqword(0x28u);
}
