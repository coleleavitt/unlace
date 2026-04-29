__m128 *__fastcall sub_361890(__m128 *a1, __int64 a2, __int64 *a3, __m128i *a4)
{
  _QWORD *v5; // rsi
  __m128 v6; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rdx
  _QWORD **i; // rbp
  _QWORD *v12; // rsi
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  __int64 v18; // rdx
  __m128 v19; // [rsp+0h] [rbp-88h] BYREF
  __m128i v20; // [rsp+10h] [rbp-78h]
  __m128 v21; // [rsp+20h] [rbp-68h] BYREF
  __m128i v22; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD **)a2;
  v6 = (__m128)_mm_loadu_si128(a4);
  v23 = __readfsqword(0x28u);
  v8 = _mm_loadu_si128(a4 + 1);
  if ( *(_QWORD *)(a2 + 24) == a3[3] )
  {
    v18 = *a3;
    v21 = v6;
    v22 = v8;
    sub_361750(a1, v5, v18, (__int64)&v21);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 16);
    v20 = v8;
    v19 = v6;
    sub_361750(&v21, v5, v9, (__int64)&v19);
    *a4 = _mm_load_si128((const __m128i *)&v21);
    a4[1] = _mm_load_si128(&v22);
    for ( i = (_QWORD **)(*(_QWORD *)(a2 + 24) + 8LL); (_QWORD **)a3[3] != i; a4[1] = _mm_load_si128(&v22) )
    {
      v12 = *i;
      v13 = _mm_loadu_si128(a4);
      ++i;
      v20 = _mm_loadu_si128(a4 + 1);
      v19 = (__m128)v13;
      sub_361750(&v21, v12, (__int64)(v12 + 64), (__int64)&v19);
      *a4 = _mm_load_si128((const __m128i *)&v21);
    }
    v14 = _mm_loadu_si128(a4 + 1);
    v15 = *a3;
    v16 = (_QWORD *)a3[1];
    v21 = (__m128)_mm_loadu_si128(a4);
    v22 = v14;
    sub_361750(a1, v16, v15, (__int64)&v21);
  }
  return a1;
}
