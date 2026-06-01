unsigned __int64 __fastcall sub_981CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  __m128i v9; // xmm1
  unsigned __int64 v10; // rax
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v14; // xmm1
  unsigned __int64 v15; // rax
  __m128i *v16; // rbp
  __m128i v17; // xmm2
  __m128i v18; // xmm0
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  __m128i v20; // [rsp+10h] [rbp-58h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v4 = (a2 - 1) / 2;
  v21 = __readfsqword(0x28u);
  if ( a2 > a3 )
  {
    while ( 1 )
    {
      v7 = a1 + 48 * v4;
      v8 = *(_BYTE *)(v7 + 32);
      if ( *(_BYTE *)(a4 + 32) >= v8 && (*(_BYTE *)(a4 + 32) != v8 || *(_QWORD *)(a4 + 40) >= *(_QWORD *)(v7 + 40)) )
        break;
      v14 = _mm_loadl_epi64((const __m128i *)(v7 + 24));
      v15 = *(_QWORD *)(v7 + 16);
      v19 = 0;
      v20.m128i_i64[0] = 0;
      v16 = (__m128i *)(a1 + 48 * a2);
      v20.m128i_i64[1] = v14.m128i_i64[0];
      if ( v15 )
      {
        v19 = _mm_loadu_si128((const __m128i *)v7);
        *(_OWORD *)(v7 + 16) = 0;
      }
      v17 = _mm_loadu_si128(v16);
      *v16 = _mm_load_si128(&v19);
      v18 = _mm_loadu_si128(v16 + 1);
      v19 = v17;
      v20 = v18;
      v16[1] = _mm_unpacklo_epi64((__m128i)v15, v14);
      if ( v18.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v18.m128i_i64[0])(&v19, &v19, 3);
      a2 = v4;
      v16[2].m128i_i8[0] = *(_BYTE *)(v7 + 32);
      v16[2].m128i_i64[1] = *(_QWORD *)(v7 + 40);
      if ( a3 >= v4 )
        goto LABEL_6;
      v4 = (v4 - 1) / 2;
    }
  }
  v7 = a1 + 48 * a2;
LABEL_6:
  v9 = _mm_loadl_epi64((const __m128i *)(a4 + 24));
  v10 = *(_QWORD *)(a4 + 16);
  v20.m128i_i64[0] = 0;
  v19 = 0;
  v20.m128i_i64[1] = v9.m128i_i64[0];
  if ( v10 )
  {
    v19 = _mm_loadu_si128((const __m128i *)a4);
    *(_OWORD *)(a4 + 16) = 0;
  }
  v11 = _mm_loadu_si128((const __m128i *)v7);
  *(__m128i *)v7 = _mm_load_si128(&v19);
  v12 = _mm_loadu_si128((const __m128i *)(v7 + 16));
  v19 = v11;
  v20 = v12;
  *(__m128i *)(v7 + 16) = _mm_unpacklo_epi64((__m128i)v10, v9);
  if ( v12.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12.m128i_i64[0])(&v19, &v19, 3);
  *(_BYTE *)(v7 + 32) = *(_BYTE *)(a4 + 32);
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(a4 + 40);
  return v21 - __readfsqword(0x28u);
}
