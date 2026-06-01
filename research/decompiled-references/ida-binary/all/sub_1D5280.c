unsigned __int64 __fastcall sub_1D5280(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // r12
  unsigned __int64 v11; // xmm3_8
  bool v12; // zf
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // r13
  __m128i v16; // xmm0
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __m128i v24; // [rsp+10h] [rbp-48h] BYREF
  __int64 v25; // [rsp+20h] [rbp-38h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v8 = a1->m128i_i64[0];
  if ( a1->m128i_i64[0] )
  {
    v9 = _mm_loadu_si128(a3);
    v10 = a3[1].m128i_i64[0];
    v11 = _mm_srli_si128(v9, 8).m128i_u64[0];
    if ( *(int *)v8 <= 1 )
    {
      if ( a1[1].m128i_i64[0] == a2 )
      {
        v18 = a1->m128i_i64[1];
        v19 = (v8 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( a2 != *(_QWORD *)(v8 + 8) - 0xAAAAAAAAAAAAAAABLL * ((__int64)(v18 - v19) >> 3) )
        {
          a3->m128i_i64[0] = 0;
          v22 = (_QWORD *)(v18 + 24 * a2);
          a3->m128i_i64[1] = 0;
          a3[1].m128i_i64[0] = 0;
          v22[2] = v10;
          *v22 = v9.m128i_i64[0];
          v22[1] = v11;
          v21 = a1[1].m128i_i64[0] + 1;
          goto LABEL_18;
        }
        if ( a2 )
          goto LABEL_8;
      }
      else
      {
        if ( a2 )
        {
LABEL_8:
          a3[1].m128i_i64[0] = 0;
          v25 = v10;
          *a3 = 0;
          v24 = v9;
LABEL_9:
          v23 = v9;
          sub_1D50F0(a1, 0, 1, nullptr, nullptr, a6);
          v15 = (__m128i *)(a1->m128i_i64[1] + 24 * a2);
          memmove(&v15[1].m128i_u64[1], v15, 24 * (a1[1].m128i_i64[0] - a2));
          v16 = _mm_load_si128(&v23);
          v25 = 0;
          v15[1].m128i_i64[0] = v10;
          v24 = 0;
          *v15 = v16;
          ++a1[1].m128i_i64[0];
          goto LABEL_10;
        }
        v18 = a1->m128i_i64[1];
        v19 = (v8 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( v19 == v18 )
        goto LABEL_3;
      a3->m128i_i64[0] = 0;
      a3->m128i_i64[1] = 0;
      a3[1].m128i_i64[0] = 0;
      *(_QWORD *)(v18 - 8) = v10;
      *(_QWORD *)(v18 - 24) = v9.m128i_i64[0];
      *(_QWORD *)(v18 - 16) = v11;
      v20 = a1[1].m128i_i64[0];
      a1->m128i_i64[1] -= 24;
      v21 = v20 + 1;
LABEL_18:
      a1[1].m128i_i64[0] = v21;
      return v26 - __readfsqword(0x28u);
    }
  }
LABEL_3:
  v9 = _mm_loadu_si128(a3);
  v10 = a3[1].m128i_i64[0];
  a3[1].m128i_i64[0] = 0;
  *a3 = 0;
  v12 = a1[1].m128i_i64[0] == 0;
  v25 = v10;
  v24 = v9;
  if ( v12 || a2 )
    goto LABEL_9;
  v23 = v9;
  sub_1D50F0(a1, 1, 1, nullptr, nullptr, a6);
  v13 = a1->m128i_i64[1];
  v14 = _mm_load_si128(&v23);
  v25 = 0;
  v24 = 0;
  *(_QWORD *)(v13 - 8) = v10;
  *(__m128i *)(v13 - 24) = v14;
  a1->m128i_i64[1] -= 24;
  ++a1[1].m128i_i64[0];
LABEL_10:
  sub_16D970((void **)&v24);
  return v26 - __readfsqword(0x28u);
}
