/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420150
// Address: 0x0000000000420150

//----- (0000000000420150) ----------------------------------------------------
__int64 __fastcall sub_420150(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8)
{
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // xmm3_8
  unsigned __int64 v14; // xmm4_8
  __int64 v15; // rsi
  void *v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  void *v19; // r10
  unsigned __int64 v20; // r14
  signed __int64 v21; // rbp
  __int64 *v22; // r12
  __int64 *v23; // r9
  __m128 v24; // xmm1
  __m128i v25; // xmm0
  __int64 *v26; // rbx
  __int64 *v27; // r12
  __int64 v28; // rsi
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // r8
  __m128 si128; // xmm1
  __m128i v38; // xmm0
  __int64 v39; // r10
  __int64 *v40; // rbx
  __int64 *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned __int64 *v45; // rcx
  unsigned __int64 v46; // rcx
  __int64 *v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rdx
  __int64 v53; // [rsp+0h] [rbp-B8h]
  __int64 *v54; // [rsp+0h] [rbp-B8h]
  __int64 v55; // [rsp+0h] [rbp-B8h]
  __int64 v56; // [rsp+8h] [rbp-B0h]
  __int64 *v57; // [rsp+8h] [rbp-B0h]
  __int64 v58; // [rsp+8h] [rbp-B0h]
  __int64 v59; // [rsp+10h] [rbp-A8h]
  __int64 v60; // [rsp+10h] [rbp-A8h]
  __int64 v61; // [rsp+10h] [rbp-A8h]
  __int64 v62; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v63; // [rsp+20h] [rbp-98h]
  signed __int64 v64; // [rsp+28h] [rbp-90h]
  __m128 v65; // [rsp+30h] [rbp-88h] BYREF
  __m128i v66; // [rsp+40h] [rbp-78h]
  __m128 v67; // [rsp+50h] [rbp-68h] BYREF
  __m128i v68; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+78h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v10 = (__m128)_mm_loadu_si128(a3);
  v11 = (__m128)_mm_loadu_si128(a3 + 1);
  v12 = v10.m128_u64[0];
  v13 = _mm_movehl_ps(a7, v10).m128_u64[0];
  v14 = _mm_movehl_ps(a8, v11).m128_u64[0];
  v15 = v11.m128_u64[0];
  v16 = (void *)(v10.m128_u64[0] + 72);
  v62 = v14;
  v63 = v13;
  if ( v10.m128_u64[0] + 72 == v11.m128_u64[0] )
  {
    v16 = *(void **)(v14 + 8);
    v62 = v14 + 8;
    v63 = (unsigned __int64)v16;
    v15 = (__int64)v16 + 504;
  }
  v17 = *(_QWORD *)(a2 + 40);
  v18 = *(_QWORD *)(a2 + 72);
  v59 = *(_QWORD *)(a2 + 32);
  v19 = *(void **)(a2 + 56);
  v53 = *(_QWORD *)(a2 + 16);
  v20 = 0x8E38E38E38E38E39LL * ((v59 - v53) >> 3);
  v21 = v20
      - 0x71C71C71C71C71C7LL * ((signed __int64)(v10.m128_u64[0] - v13) >> 3)
      + 7 * ((v14 == 0) + ((__int64)(v14 - v17) >> 3) - 1);
  v64 = v21;
  v56 = *(_QWORD *)(a2 + 48);
  if ( v21 >= (v20 - 0x71C71C71C71C71C7LL * ((v56 - (__int64)v19) >> 3) + 7 * ((v18 == 0) + ((v18 - v17) >> 3) - 1)) >> 1 )
  {
    if ( (void *)v56 != v16 )
    {
      v60 = *(_QWORD *)(a2 + 56);
      v54 = *(__int64 **)(a2 + 72);
      if ( v18 == v62 )
      {
        v67 = v10;
        v68 = (__m128i)v11;
        sub_41FF90(&v65, (__int64)v16, v56, (double *)v67.m128_u64);
      }
      else
      {
        v65 = v10;
        v66 = (__m128i)v11;
        sub_41FF90(&v67, (__int64)v16, v15, (double *)v65.m128_u64);
        v36 = v54;
        si128 = (__m128)_mm_load_si128((const __m128i *)&v67);
        v38 = _mm_load_si128(&v68);
        v39 = v60;
        if ( v54 != (__int64 *)(v62 + 8) )
        {
          v55 = v60;
          v61 = a2;
          v40 = (__int64 *)(v62 + 8);
          v41 = v36;
          do
          {
            v42 = *v40++;
            v65 = si128;
            v66 = v38;
            sub_41FF90(&v67, v42, v42 + 504, (double *)v65.m128_u64);
            si128 = (__m128)_mm_load_si128((const __m128i *)&v67);
            v38 = _mm_load_si128(&v68);
          }
          while ( v41 != v40 );
          v39 = v55;
          a2 = v61;
        }
        v67 = si128;
        v68 = v38;
        sub_41FF90(&v65, v39, v56, (double *)v67.m128_u64);
      }
      v16 = *(void **)(a2 + 48);
      v19 = *(void **)(a2 + 56);
    }
    if ( v16 == v19 )
    {
      operator delete(v16, 0x1F8u);
      v48 = (__int64 *)(*(_QWORD *)(a2 + 72) - 8LL);
      *(_QWORD *)(a2 + 72) = v48;
      v49 = *v48;
      v50 = *v48 + 504;
      *(_QWORD *)(a2 + 56) = *v48;
      v43 = v49 + 432;
      *(_QWORD *)(a2 + 64) = v50;
    }
    else
    {
      v43 = (__int64)v16 - 72;
    }
    *(_QWORD *)(a2 + 48) = v43;
    sub_478720(v43);
    v33 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v31 = *(__int64 **)(a2 + 40);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 32);
    *(__m128i *)a1 = v33;
    v21 += 0x8E38E38E38E38E39LL * (_mm_sub_epi64(v33, _mm_srli_si128(v33, 8)).m128i_i64[0] >> 3);
    if ( v21 >= 0 )
      goto LABEL_14;
    goto LABEL_28;
  }
  if ( v53 != v10.m128_u64[0] )
  {
    v57 = *(__int64 **)(a2 + 40);
    if ( v17 == v14 )
    {
      v68.m128i_i64[0] = v15;
      v67.m128_u64[0] = (unsigned __int64)v16;
      v67.m128_u64[1] = v63;
      v68.m128i_i64[1] = v62;
      sub_41FD70(
        (__m128i *)&v65,
        v53,
        v10.m128_i64[0],
        (__m128i *)&v67,
        *(double *)v11.m128_u64,
        *(double *)v10.m128_u64,
        a6);
    }
    else
    {
      v65.m128_u64[0] = (unsigned __int64)v16;
      v66.m128i_i64[0] = v15;
      v65.m128_u64[1] = v63;
      v22 = (__int64 *)(v14 - 8);
      v66.m128i_i64[1] = v62;
      sub_41FD70(
        (__m128i *)&v67,
        v13,
        v10.m128_i64[0],
        (__m128i *)&v65,
        *(double *)v11.m128_u64,
        *(double *)v10.m128_u64,
        a6);
      v23 = v57;
      v24 = (__m128)_mm_load_si128((const __m128i *)&v67);
      v25 = _mm_load_si128(&v68);
      if ( v57 != v22 )
      {
        v58 = a2;
        v26 = v22;
        v27 = v23;
        do
        {
          v28 = *v26--;
          v65 = v24;
          v66 = v25;
          sub_41FD70(
            (__m128i *)&v67,
            v28,
            v28 + 504,
            (__m128i *)&v65,
            *(double *)v25.m128i_i64,
            *(double *)v24.m128_u64,
            a6);
          v24 = (__m128)_mm_load_si128((const __m128i *)&v67);
          v25 = _mm_load_si128(&v68);
        }
        while ( v27 != v26 );
        a2 = v58;
      }
      v67 = v24;
      v68 = v25;
      sub_41FD70((__m128i *)&v65, v53, v59, (__m128i *)&v67, *(double *)v25.m128i_i64, *(double *)v24.m128_u64, a6);
    }
    v12 = *(_QWORD *)(a2 + 16);
    v59 = *(_QWORD *)(a2 + 32);
  }
  if ( v12 != v59 - 72 )
  {
    sub_478720(v12);
    v29 = *(_QWORD *)(a2 + 24);
    v30 = *(_QWORD *)(a2 + 32);
    v31 = *(__int64 **)(a2 + 40);
    v32 = *(_QWORD *)(a2 + 16) + 72LL;
    *(_QWORD *)(a2 + 16) = v32;
    v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)v29);
    *(_QWORD *)(a1 + 16) = v30;
    *(__m128i *)a1 = v33;
    v21 += 0x8E38E38E38E38E39LL * ((__int64)(v32 - v29) >> 3);
    if ( v21 >= 0 )
    {
LABEL_14:
      v34 = v33.m128i_i64[0];
      goto LABEL_15;
    }
LABEL_28:
    v44 = ~(~v21 / 7);
LABEL_29:
    v45 = (unsigned __int64 *)&v31[v44];
    *(_QWORD *)(a1 + 24) = v45;
    v46 = *v45;
    v35 = v46 + 72 * (v21 - 7 * v44);
    *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)v46, (__m128i)(v46 + 504));
    goto LABEL_30;
  }
  sub_478720(v12);
  operator delete(*(void **)(a2 + 24), 0x1F8u);
  v31 = (__int64 *)(*(_QWORD *)(a2 + 40) + 8LL);
  *(_QWORD *)(a2 + 40) = v31;
  v34 = *v31;
  v51 = (__m128i)(unsigned __int64)*v31;
  v52 = *v31 + 504;
  *(_QWORD *)(a2 + 24) = *v31;
  *(_QWORD *)(a2 + 32) = v52;
  *(_QWORD *)(a2 + 16) = v34;
  *(_QWORD *)(a1 + 16) = v52;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v51, v51);
LABEL_15:
  if ( v21 > 6 )
  {
    v44 = v21 / 7;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 24) = v31;
  v35 = v34 + 72 * v64;
LABEL_30:
  *(_QWORD *)a1 = v35;
  return a1;
}
