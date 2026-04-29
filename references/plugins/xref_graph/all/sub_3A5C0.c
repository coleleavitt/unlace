void __fastcall sub_3A5C0(__int64 *a1, struct _Unwind_Exception *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i si128; // xmm0
  int *v10; // rbx
  __int64 v11; // r12
  __m128i v12; // xmm5
  __int64 v13; // rdx
  __m128i v14; // xmm7
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  int *v17; // xmm3_8
  __int64 v18; // rbp
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128d v23; // xmm1
  __m128d v24; // xmm0
  __int64 v25; // r11
  unsigned __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // r9
  __int64 v31; // rcx
  double v32; // xmm1_8
  __int64 v33; // r8
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  void *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128i v40; // xmm0
  int *v41; // rsi
  __m128i v42; // xmm4
  __m128i v43; // xmm0
  __int64 v44; // r10
  __int64 v45; // rsi
  __int64 v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __m128d v51; // xmm4
  __m128d v52; // xmm2
  __m128d v53; // xmm3
  __m128d v54; // xmm5
  __m128i v55; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v56; // [rsp+10h] [rbp-D8h] BYREF
  struct _Unwind_Exception *v57; // [rsp+20h] [rbp-C8h]
  __int64 v58; // [rsp+28h] [rbp-C0h]
  __m128i v59; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v60; // [rsp+40h] [rbp-A8h]
  __int64 v61; // [rsp+48h] [rbp-A0h]
  __int64 v62; // [rsp+50h] [rbp-98h]
  __int64 v63; // [rsp+58h] [rbp-90h]
  void *ptr[2]; // [rsp+60h] [rbp-88h] BYREF
  __m128i v65; // [rsp+70h] [rbp-78h] BYREF
  __m128i v66[2]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+A8h] [rbp-40h]

  v57 = a2;
  v67 = __readfsqword(0x28u);
  v66[0].m128i_i64[1] = a3;
  v66[0].m128i_i64[0] = 0;
  v65.m128i_i64[0] = 0;
  *(_OWORD *)ptr = 0;
  sub_3A2B0((int **)ptr, nullptr, v66, a4, a5, a6);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v10 = (int *)si128.m128i_i64[0];
  v55.m128i_i64[0] = v65.m128i_i64[0];
  if ( si128.m128i_i64[0] && *(int *)si128.m128i_i64[0] <= 1 )
  {
    if ( v65.m128i_i64[0] )
    {
      v56 = _mm_srli_si128(si128, 8);
      goto LABEL_6;
    }
LABEL_27:
    if ( !_InterlockedSub(v10, 1u) )
      free(v10);
    return;
  }
  *(__m128i *)ptr = si128;
  v65.m128i_i64[0] = v55.m128i_i64[0];
  sub_39EC0((__int64)ptr, 0, 0, 0, v7, v8);
LABEL_4:
  v10 = (int *)ptr[0];
  v56 = _mm_loadl_epi64((const __m128i *)&ptr[1]);
  v55.m128i_i64[0] = v65.m128i_i64[0];
  v11 = v65.m128i_i64[0];
LABEL_5:
  if ( v11 )
  {
LABEL_6:
    while ( 2 )
    {
      if ( !v10 )
      {
LABEL_7:
        ptr[0] = v10;
        ptr[1] = (void *)v56.m128i_i64[0];
        v65.m128i_i64[0] = v55.m128i_i64[0];
        sub_39EC0((__int64)ptr, 0, 0, 0, v7, v8);
        v10 = (int *)ptr[0];
        v56 = _mm_loadl_epi64((const __m128i *)&ptr[1]);
        v55 = _mm_loadl_epi64(&v65);
        goto LABEL_8;
      }
      while ( 1 )
      {
        if ( *v10 > 1 )
          goto LABEL_7;
LABEL_8:
        while ( 1 )
        {
          v12 = _mm_loadl_epi64(&v55);
          v13 = *a1;
          v14 = _mm_loadl_epi64(&v56);
          v15 = _mm_add_epi64(_mm_slli_epi64(v12, 4u), v14).m128i_u64[0];
          v16 = *(_QWORD *)(v15 - 16);
          v7 = *(_QWORD *)(v15 - 8);
          v17 = (int *)_mm_add_epi64((__m128i)-1LL, v12).m128i_u64[0];
          v55.m128i_i64[0] = (__int64)v17;
          v11 = (__int64)v17;
          v18 = 96 * v16;
          v19 = *(_QWORD *)(&v57->private_2 + 1);
          v20 = 96 * v16 + v13;
          v21 = *(_QWORD *)v20;
          v22 = v19 + 80 * v7;
          if ( *(_QWORD *)v20 != -1 )
            break;
          v23 = (__m128d)0x3FE0000000000000uLL;
          v23.m128d_f64[0] = 0.5 * *(double *)(v20 + 32) + *(double *)(v20 + 16);
          *(__m128d *)(v20 + 40) = _mm_add_pd(
                                     _mm_mul_pd(
                                       _mm_unpacklo_pd(
                                         (__m128d)*(unsigned __int64 *)(v22 + 72),
                                         (__m128d)*(unsigned __int64 *)(v22 + 72)),
                                       *(__m128d *)(v22 + 8)),
                                     *(__m128d *)(v20 + 40));
          *(double *)(v20 + 56) = *(double *)(v20 + 56) + *(double *)(v22 + 72);
          v24 = (__m128d)0x3FE0000000000000uLL;
          v24.m128d_f64[0] = 0.5 * *(double *)(v20 + 24) + *(double *)(v20 + 8);
          v8 = *(double *)(v22 + 8) > v24.m128d_f64[0];
          if ( *(double *)(v22 + 16) > v23.m128d_f64[0] )
            v8 += 2;
          v25 = v8 + 8;
          v26 = *(_QWORD *)(v20 + 8 * (v8 + 8));
          if ( !v26 )
          {
            v44 = a1[1];
            v45 = *a1;
            v46 = v44;
            if ( a1[2] < (unsigned __int64)(v44 + 1) )
            {
              v63 = v8 + 8;
              v62 = v7;
              v61 = v44;
              v58 = v8;
              v59.m128i_i64[0] = *(_QWORD *)&v24.m128d_f64[0];
              v60 = *(_QWORD *)&v23.m128d_f64[0];
              v45 = qvector_reserve(a1, v45, v44 + 1, 96);
              v25 = v63;
              v7 = v62;
              *a1 = v45;
              v44 = v61;
              v46 = a1[1];
              v24 = (__m128d)v59.m128i_u64[0];
              v23 = (__m128d)v60;
              v8 = v58;
            }
            v47 = (_QWORD *)(v45 + 96 * v46);
            memset(v47, 0, 0x60u);
            *v47 = -1;
            v48 = *a1;
            ++a1[1];
            v49 = v48 + 96 * v44;
            v50 = v18 + v48;
            *(_QWORD *)v49 = v7;
            v51 = (__m128d)*(unsigned __int64 *)(v50 + 16);
            v52 = (__m128d)*(unsigned __int64 *)(v50 + 8);
            if ( v8 )
            {
              if ( v8 == 1 )
              {
                v54.m128d_f64[1] = v23.m128d_f64[1];
                v54.m128d_f64[0] = v23.m128d_f64[0] - v51.m128d_f64[0];
                v52.m128d_f64[0] = v52.m128d_f64[0] + *(double *)(v50 + 24) - v24.m128d_f64[0];
                v53 = v52;
                v52 = v24;
              }
              else
              {
                v51.m128d_f64[0] = v51.m128d_f64[0] + *(double *)(v50 + 32) - v23.m128d_f64[0];
                v54 = v51;
                if ( v8 == 2 )
                {
                  v53.m128d_f64[1] = v24.m128d_f64[1];
                  v51 = v23;
                  v53.m128d_f64[0] = v24.m128d_f64[0] - v52.m128d_f64[0];
                }
                else
                {
                  v51 = v23;
                  v52.m128d_f64[0] = v52.m128d_f64[0] + *(double *)(v50 + 24) - v24.m128d_f64[0];
                  v53 = v52;
                  v52 = v24;
                }
              }
            }
            else
            {
              v53.m128d_f64[1] = v24.m128d_f64[1];
              v54.m128d_f64[1] = v23.m128d_f64[1];
              v53.m128d_f64[0] = v24.m128d_f64[0] - v52.m128d_f64[0];
              v54.m128d_f64[0] = v23.m128d_f64[0] - v51.m128d_f64[0];
            }
            *(__m128d *)(v49 + 8) = _mm_unpacklo_pd(v52, v51);
            *(__m128d *)(v49 + 24) = _mm_unpacklo_pd(v53, v54);
            *(_QWORD *)(v50 + 8 * v25) = v44;
            goto LABEL_5;
          }
          ptr[0] = v10;
          v66[0] = _mm_unpacklo_epi64((__m128i)v26, (__m128i)(unsigned __int64)v7);
          ptr[1] = (void *)v14.m128i_i64[0];
          v65.m128i_i64[0] = (__int64)v17;
          sub_3A2B0((int **)ptr, v17, v66, v16, v7, v8);
          v27 = _mm_load_si128((const __m128i *)ptr);
          v10 = (int *)v27.m128i_i64[0];
          v55.m128i_i64[0] = v65.m128i_i64[0];
          if ( !v27.m128i_i64[0] || *(int *)v27.m128i_i64[0] > 1 )
          {
            *(__m128i *)ptr = v27;
            v65.m128i_i64[0] = v55.m128i_i64[0];
            sub_39EC0((__int64)ptr, 0, 0, 0, v7, v8);
            goto LABEL_4;
          }
          if ( !v65.m128i_i64[0] )
            goto LABEL_26;
          v56 = _mm_srli_si128(v27, 8);
          if ( *(int *)v27.m128i_i64[0] > 1 )
            goto LABEL_7;
        }
        v61 = v7;
        v59.m128i_i64[0] = v16;
        v28 = _mm_loadu_si128((const __m128i *)(v19 + 80 * v21 + 8));
        v60 = v20;
        v58 = v21;
        v66[0] = v28;
        v29 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        v66[1] = v29;
        QT::QLineF::length((QT::QLineF *)v66);
        v31 = v59.m128i_i64[0];
        v32 = *(double *)v29.m128i_i64;
        v33 = v61;
        v34 = (__m128i)v59.m128i_u64[0];
        v59 = _mm_unpacklo_epi64((__m128i)v59.m128i_u64[0], (__m128i)(unsigned __int64)v61);
        v35 = _mm_unpacklo_epi64(v34, (__m128i)(unsigned __int64)v58);
        if ( v32 < 0.1 )
          goto LABEL_26;
        v36 = (void *)v56.m128i_i64[0];
        ptr[0] = v10;
        *(_QWORD *)v60 = -1;
        ptr[1] = v36;
        v66[0] = v35;
        v65.m128i_i64[0] = v55.m128i_i64[0];
        sub_3A2B0((int **)ptr, v17, v66, v31, v33, v30);
        v40 = _mm_load_si128((const __m128i *)ptr);
        v41 = (int *)v65.m128i_i64[0];
        if ( !v40.m128i_i64[0] || *(int *)v40.m128i_i64[0] > 1 )
        {
          *(__m128i *)ptr = v40;
          sub_39EC0((__int64)ptr, 0, 0, 0, v38, v39);
          v40 = _mm_load_si128((const __m128i *)ptr);
          v41 = (int *)v65.m128i_i64[0];
        }
        v42 = _mm_load_si128(&v59);
        v65.m128i_i64[0] = (__int64)v41;
        *(__m128i *)ptr = v40;
        v66[0] = v42;
        sub_3A2B0((int **)ptr, v41, v66, v37, v38, v39);
        v43 = _mm_load_si128((const __m128i *)ptr);
        v10 = (int *)v43.m128i_i64[0];
        v55.m128i_i64[0] = v65.m128i_i64[0];
        if ( !v43.m128i_i64[0] || *(int *)v43.m128i_i64[0] > 1 )
          break;
        if ( !v65.m128i_i64[0] )
          goto LABEL_26;
        v56 = _mm_srli_si128(v43, 8);
      }
      *(__m128i *)ptr = v43;
      v65.m128i_i64[0] = v55.m128i_i64[0];
      sub_39EC0((__int64)ptr, 0, 0, 0, v7, v8);
      v10 = (int *)ptr[0];
      v56 = _mm_loadl_epi64((const __m128i *)&ptr[1]);
      v55.m128i_i64[0] = v65.m128i_i64[0];
      if ( v65.m128i_i64[0] )
        continue;
      break;
    }
  }
LABEL_26:
  if ( v10 )
    goto LABEL_27;
}
