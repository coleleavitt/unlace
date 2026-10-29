unsigned __int64 __fastcall sub_48F720(QT::QAbstractItemView *a1, __m128i *a2, __int64 a3, const __m128i *a4, char a5)
{
  __m128i *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  __m128i v12; // xmm2
  unsigned __int64 v13; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm3
  __m128i *v16; // rdi
  __int64 v17; // rax
  __m128 v18; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r15
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i *v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdi
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r9
  __m128i v32; // xmm0
  __m128i v34; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v35; // [rsp+20h] [rbp-98h] BYREF
  __m128i v36; // [rsp+30h] [rbp-88h] BYREF
  __int64 v37; // [rsp+40h] [rbp-78h]
  __m128i *v38; // [rsp+50h] [rbp-68h] BYREF
  __m256i v39; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v8 = a2;
  v40 = __readfsqword(0x28u);
  QT::QAbstractItemView::model(a1);
  v9 = *(_QWORD *)(a3 + 16);
  v38 = nullptr;
  *(_OWORD *)v39.m256i_i8 = 0;
  *(_OWORD *)&v39.m256i_u64[2] = -1;
  if ( v9 )
  {
    a2 = nullptr;
    v38 = (__m128i *)qvector_reserve(&v38, 0, v9, 16);
    v20 = *(_QWORD *)(a3 + 8);
    v21 = v20 + 24LL * *(_QWORD *)(a3 + 16);
    if ( v21 != v20 )
    {
      v22 = v20;
      if ( a5 )
      {
        while ( 1 )
        {
          a2 = &v35;
          v35 = (__m128i)-1LL;
          if ( sub_48F550(a1, &v35, v20) )
          {
            v23 = v39.m256i_i64[0];
            v24 = _mm_loadl_epi64(&v35);
            v25 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
            a2 = v38;
            if ( v39.m256i_i64[1] < (unsigned __int64)(v39.m256i_i64[0] + 1) )
            {
              v34.m128i_i64[1] = v24.m128i_i64[0];
              v34.m128i_i64[0] = v25.m128i_i64[0];
              v38 = (__m128i *)qvector_reserve(&v38, v38, v39.m256i_i64[0] + 1, 16);
              v23 = v39.m256i_i64[0];
              a2 = v38;
              v24 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
              v25 = _mm_loadl_epi64(&v34);
            }
            a2[v23] = _mm_unpacklo_epi64(v24, v25);
            ++v39.m256i_i64[0];
          }
          v22 += 24;
          if ( v21 == v22 )
            break;
          v20 = v22;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( *(int *)v20 >= 0 && *(int *)(v20 + 4) >= 0 && *(_QWORD *)(v20 + 16) )
          {
            v27 = *(_QWORD *)(v20 + 8);
            v31 = (unsigned int)v27;
            v29 = HIDWORD(v27);
            if ( v29 == 0xFFFFFFFFLL )
              v29 = -1;
          }
          else
          {
            v31 = -1;
            v29 = -1;
          }
          v30 = v39.m256i_i64[0];
          a2 = v38;
          v36.m128i_i64[0] = v29;
          v36.m128i_i64[1] = v31;
          v28 = v39.m256i_i64[0] + 1;
          if ( &v36 < v38 || &v36 >= &v38[v39.m256i_i64[1]] )
          {
            if ( v39.m256i_i64[1] < v28 )
            {
              v38 = (__m128i *)qvector_reserve(&v38, v38, v39.m256i_i64[0] + 1, 16);
              a2 = v38;
              v30 = v39.m256i_i64[0];
            }
            a2[v30] = _mm_load_si128(&v36);
          }
          else
          {
            if ( v39.m256i_i64[1] < v28 )
            {
              v34.m128i_i64[1] = v29;
              v34.m128i_i64[0] = v31;
              v38 = (__m128i *)qvector_reserve(&v38, v38, v39.m256i_i64[0] + 1, 16);
              a2 = v38;
              v29 = v34.m128i_i64[1];
              v30 = v39.m256i_i64[0];
              v31 = v34.m128i_i64[0];
            }
            v26 = &a2[v30];
            v26->m128i_i64[0] = v29;
            v26->m128i_i64[1] = v31;
          }
          v22 += 24;
          ++v39.m256i_i64[0];
          if ( v21 == v22 )
            break;
          v20 = v22;
        }
      }
    }
  }
  v10 = a4->m128i_u32[0];
  if ( (int)v10 >= 0 && (v11 = a4->m128i_i32[1], v11 >= 0) && (a2 = (__m128i *)a4[1].m128i_i64[0]) != nullptr )
  {
    if ( v11 )
    {
      (*(void (__fastcall **)(__m128i *, __m128i *, __int64, _QWORD, const __m128i *))(a2->m128i_i64[0] + 112))(
        &v36,
        a2,
        v10,
        0,
        a4);
    }
    else
    {
      v32 = _mm_loadu_si128(a4);
      v37 = a4[1].m128i_i64[0];
      v36 = v32;
    }
    if ( a5 )
    {
      a2 = (__m128i *)&v39.m256i_u64[2];
      sub_48F550(a1, (__m128i *)&v39.m256i_u64[2], (__int64)&v36);
      v14 = _mm_loadl_epi64((const __m128i *)&v39.m256i_u64[2]);
      v12 = _mm_loadl_epi64((const __m128i *)&v39.m256i_u64[3]);
    }
    else if ( (v36.m128i_i32[1] | v36.m128i_i32[0]) >= 0 && v37 )
    {
      v12 = _mm_cvtsi32_si128(v36.m128i_u32[2]);
      v13 = HIDWORD(v36.m128i_i64[1]);
      if ( HIDWORD(v36.m128i_i64[1]) == 0xFFFFFFFF )
        v13 = -1;
      v14 = (__m128i)v13;
    }
    else
    {
      v12 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v14 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v12 = _mm_loadl_epi64((const __m128i *)&v39.m256i_u64[3]);
    v14 = _mm_loadl_epi64((const __m128i *)&v39.m256i_u64[2]);
  }
  v15 = _mm_loadu_si128(v8 + 1);
  v16 = (__m128i *)v8->m128i_i64[0];
  v8->m128i_i64[0] = (__int64)v38;
  v17 = v8[2].m128i_i64[0];
  v18 = _mm_loadh_ps((const double *)&v39.m256i_i64[1]);
  v38 = v16;
  v39.m256i_i64[3] = v17;
  *(__m128i *)&v39.m256i_u64[1] = v15;
  *(__m128 *)((char *)v8 + 8) = v18;
  *(__m128i *)((char *)v8 + 24) = _mm_unpacklo_epi64(v14, v12);
  if ( v16 )
  {
    v39.m256i_i64[0] = 0;
    qfree(v16, a2->m128i_i8);
  }
  return v40 - __readfsqword(0x28u);
}
