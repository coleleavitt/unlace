__int64 __fastcall sub_7A400(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7,
        __int64 (__fastcall *a8)(__m128i *, __m128i *))
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  __m128i *v13; // r10
  __int64 v14; // rbp
  __int64 m128i_i64; // rax
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r13
  __m128i *v21; // rbp
  __m128i *v22; // rbx
  __int64 v23; // r12
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // r12
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r13
  __int64 v36; // rbp
  __m128i *v37; // rbx
  __int64 v38; // r12
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int64 v41; // r12
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __m128i *v44; // rbx
  __int64 v45; // r13
  unsigned __int64 v46; // r14
  __m128i v47; // xmm0
  __int64 v48; // rbp
  __m128i v49; // xmm0
  __int64 v50; // rdi
  __int64 v51; // rbp
  __m128i v52; // xmm0
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r13
  __m128i *v56; // rbp
  unsigned __int64 v57; // r14
  __int64 v58; // r12
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __int64 v61; // r12
  __m128i v62; // xmm0
  __int64 v63; // rdi
  unsigned __int64 v64; // rsi
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r13
  __int64 v68; // rbp
  __m128i *v69; // rbx
  __m128i *v70; // r14
  __m128i v71; // xmm0
  __int64 v72; // r12
  __m128i v73; // xmm0
  __int64 v74; // rdi
  __int64 v75; // r12
  __m128i v76; // xmm0
  __int64 v77; // rdi
  __m128i *v78; // rbx
  __m128i *v79; // r14
  unsigned __int64 v80; // r13
  __m128i *v81; // rbp
  __int64 v82; // r12
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __int64 v85; // r12
  __m128i v86; // xmm0
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  __m128i *v89; // [rsp+0h] [rbp-A8h]
  __int64 v90; // [rsp+8h] [rbp-A0h]
  __int64 v91; // [rsp+10h] [rbp-98h]
  __m128i *v92; // [rsp+10h] [rbp-98h]
  __m128i v94; // [rsp+30h] [rbp-78h] BYREF
  __m128i *v95; // [rsp+40h] [rbp-68h]
  unsigned __int64 v96; // [rsp+48h] [rbp-60h]
  __m128i *v97; // [rsp+50h] [rbp-58h]
  __int64 v98; // [rsp+58h] [rbp-50h]
  __m128i *v99; // [rsp+60h] [rbp-48h]
  __int64 v100; // [rsp+68h] [rbp-40h]

  v8 = a4;
  v9 = a5;
  v10 = (__int64)a2;
  if ( a5 <= a4 )
    v8 = a5;
  v90 = (__int64)a1;
  v95 = a3;
  if ( a7 >= v8 )
    return sub_791C0(a1, a2, v95, a4, a5, a6, a8);
  v11 = a4;
  if ( a4 <= a5 )
    goto LABEL_13;
LABEL_5:
  v91 = v11 / 2;
  v94.m128i_i64[0] = v90 + 80 * (v11 / 2);
  v12 = sub_79F20(v10, (__int64)v95, v94.m128i_i64[0], (unsigned __int8 (__fastcall *)(__int64, __int64))a8);
  v13 = (__m128i *)v94.m128i_i64[0];
  v89 = (__m128i *)v12;
  v11 -= v11 / 2;
  v14 = 0xCCCCCCCCCCCCCCCDLL * ((v12 - v10) >> 4);
  if ( v11 <= v14 )
    goto LABEL_14;
LABEL_6:
  if ( v14 <= a7 )
  {
    if ( !v14 )
      goto LABEL_8;
    if ( (__int64)v89->m128i_i64 - v10 <= 0 )
    {
      v96 = 0;
      v65 = 0;
      v66 = 0xCCCCCCCCCCCCCCCDLL * ((v10 - (__int64)v13) >> 4);
      if ( v10 - (__int64)v13 <= 0 )
        goto LABEL_8;
    }
    else
    {
      v97 = v13;
      v55 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v89->m128i_i64 - v10) >> 4);
      v98 = v10;
      v99 = (__m128i *)v9;
      v96 = v14;
      v56 = a6;
      v57 = v55;
      do
      {
        *v56 = _mm_loadu_si128((const __m128i *)v10);
        v56[1] = _mm_loadu_si128((const __m128i *)(v10 + 16));
        v58 = *(_QWORD *)(v10 + 32);
        v59 = _mm_loadu_si128((const __m128i *)(v10 + 40));
        *(_QWORD *)(v10 + 32) = 0;
        *(_OWORD *)(v10 + 40) = 0;
        v60 = v56[2].m128i_i64[0];
        if ( v60 )
        {
          v56[2].m128i_i64[1] = 0;
          v94 = v59;
          qfree(v60);
          v59 = _mm_load_si128(&v94);
        }
        v56[2].m128i_i64[0] = v58;
        *(__m128i *)((char *)v56 + 40) = v59;
        v61 = *(_QWORD *)(v10 + 56);
        v62 = _mm_loadu_si128((const __m128i *)(v10 + 64));
        *(_QWORD *)(v10 + 56) = 0;
        *(_OWORD *)(v10 + 64) = 0;
        v63 = v56[3].m128i_i64[1];
        if ( v63 )
        {
          v56[4].m128i_i64[0] = 0;
          v94 = v62;
          qfree(v63);
          v62 = _mm_load_si128(&v94);
        }
        v56[3].m128i_i64[1] = v61;
        v10 += 80;
        v56 += 5;
        v56[-1] = v62;
        --v55;
      }
      while ( v55 );
      v64 = v57 - 1;
      v10 = v98;
      v13 = v97;
      v14 = v96;
      v9 = (__int64)v99;
      if ( (__int64)(v57 - 1) < 0 )
        v64 = 0;
      v65 = 80 * v64 + 80;
      v96 = 0xCCCCCCCCCCCCCCCDLL * (v65 >> 4);
      v66 = 0xCCCCCCCCCCCCCCCDLL * ((v98 - (__int64)v97) >> 4);
      if ( v98 - (__int64)v97 <= 0 )
      {
LABEL_63:
        v78 = a6;
        v79 = v13;
        if ( v65 > 0 )
        {
          v98 = v9;
          v80 = v96;
          v97 = (__m128i *)v14;
          v81 = v13;
          do
          {
            *v81 = _mm_loadu_si128(v78);
            v81[1] = _mm_loadu_si128(v78 + 1);
            v82 = v78[2].m128i_i64[0];
            v83 = _mm_loadu_si128((__m128i *)((char *)v78 + 40));
            v78[2].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v78[2] + 8) = 0;
            v84 = v81[2].m128i_i64[0];
            if ( v84 )
            {
              v81[2].m128i_i64[1] = 0;
              v94 = v83;
              qfree(v84);
              v83 = _mm_load_si128(&v94);
            }
            v81[2].m128i_i64[0] = v82;
            *(__m128i *)((char *)v81 + 40) = v83;
            v85 = v78[3].m128i_i64[1];
            v86 = _mm_loadu_si128(v78 + 4);
            v78[3].m128i_i64[1] = 0;
            v78[4] = 0;
            v87 = v81[3].m128i_i64[1];
            if ( v87 )
            {
              v81[4].m128i_i64[0] = 0;
              v94 = v86;
              qfree(v87);
              v86 = _mm_load_si128(&v94);
            }
            v81[3].m128i_i64[1] = v85;
            v78 += 5;
            v81 += 5;
            v81[-1] = v86;
            --v80;
          }
          while ( v80 );
          v14 = (__int64)v97;
          LODWORD(v13) = (_DWORD)v79;
          v9 = v98;
          v88 = v96 - 1;
          if ( (__int64)(v96 - 1) < 0 )
            v88 = 0;
          m128i_i64 = (__int64)v79[5 * v88 + 5].m128i_i64;
          goto LABEL_9;
        }
LABEL_8:
        m128i_i64 = (__int64)v13;
        goto LABEL_9;
      }
    }
    v98 = v65;
    v67 = v66;
    v99 = (__m128i *)v9;
    v97 = (__m128i *)v14;
    v68 = v10;
    v69 = v89;
    v70 = v13;
    do
    {
      v71 = _mm_loadu_si128((const __m128i *)(v68 - 80));
      v68 -= 80;
      v69 -= 5;
      *v69 = v71;
      v69[1] = _mm_loadu_si128((const __m128i *)(v68 + 16));
      v72 = *(_QWORD *)(v68 + 32);
      v73 = _mm_loadu_si128((const __m128i *)(v68 + 40));
      *(_QWORD *)(v68 + 32) = 0;
      *(_OWORD *)(v68 + 40) = 0;
      v74 = v69[2].m128i_i64[0];
      if ( v74 )
      {
        v69[2].m128i_i64[1] = 0;
        v94 = v73;
        qfree(v74);
        v73 = _mm_load_si128(&v94);
      }
      v69[2].m128i_i64[0] = v72;
      *(__m128i *)((char *)v69 + 40) = v73;
      v75 = *(_QWORD *)(v68 + 56);
      v76 = _mm_loadu_si128((const __m128i *)(v68 + 64));
      *(_QWORD *)(v68 + 56) = 0;
      *(_OWORD *)(v68 + 64) = 0;
      v77 = v69[3].m128i_i64[1];
      if ( v77 )
      {
        v69[4].m128i_i64[0] = 0;
        v94 = v76;
        qfree(v77);
        v76 = _mm_load_si128(&v94);
      }
      v69[3].m128i_i64[1] = v75;
      v69[4] = v76;
      --v67;
    }
    while ( v67 );
    v14 = (__int64)v97;
    v65 = v98;
    v13 = v70;
    v9 = (__int64)v99;
    goto LABEL_63;
  }
  while ( 1 )
  {
LABEL_14:
    if ( v11 > a7 )
    {
      v94.m128i_i64[0] = (__int64)v13;
      m128i_i64 = sub_70510(v13, v10, (__int64)v89);
      LODWORD(v13) = v94.m128i_i32[0];
      goto LABEL_9;
    }
    if ( !v11 )
      goto LABEL_16;
    v19 = 0xCCCCCCCCCCCCCCCDLL * ((v10 - (__int64)v13) >> 4);
    if ( v10 - (__int64)v13 <= 0 )
    {
      v33 = (__int64)a6;
      v32 = 0;
      v96 = 0;
      v34 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v89->m128i_i64 - v10) >> 4);
      if ( (__int64)v89->m128i_i64 - v10 <= 0 )
      {
LABEL_16:
        m128i_i64 = (__int64)v89;
        goto LABEL_9;
      }
    }
    else
    {
      v97 = v13;
      v20 = 0xCCCCCCCCCCCCCCCDLL * ((v10 - (__int64)v13) >> 4);
      v99 = (__m128i *)v9;
      v96 = v14;
      v21 = a6;
      v98 = v10;
      v22 = v13;
      do
      {
        *v21 = _mm_loadu_si128(v22);
        v21[1] = _mm_loadu_si128(v22 + 1);
        v23 = v22[2].m128i_i64[0];
        v24 = _mm_loadu_si128((__m128i *)((char *)v22 + 40));
        v22[2].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v22[2] + 8) = 0;
        v25 = v21[2].m128i_i64[0];
        if ( v25 )
        {
          v21[2].m128i_i64[1] = 0;
          v94 = v24;
          qfree(v25);
          v24 = _mm_load_si128(&v94);
        }
        v21[2].m128i_i64[0] = v23;
        *(__m128i *)((char *)v21 + 40) = v24;
        v26 = v22[3].m128i_i64[1];
        v27 = _mm_loadu_si128(v22 + 4);
        v22[3].m128i_i64[1] = 0;
        v22[4] = 0;
        v28 = v21[3].m128i_i64[1];
        if ( v28 )
        {
          v21[4].m128i_i64[0] = 0;
          v94 = v27;
          qfree(v28);
          v27 = _mm_load_si128(&v94);
        }
        v21[3].m128i_i64[1] = v26;
        v22 += 5;
        v21 += 5;
        v21[-1] = v27;
        --v20;
      }
      while ( v20 );
      v29 = v19 - 1;
      v30 = 0;
      if ( v29 >= 0 )
        v30 = v29;
      v14 = v96;
      v10 = v98;
      v13 = v97;
      v9 = (__int64)v99;
      v31 = 5 * v30;
      v32 = 80 * v30 + 80;
      v33 = (__int64)a6[v31 + 5].m128i_i64;
      v96 = 0xCCCCCCCCCCCCCCCDLL * (v32 >> 4);
      v34 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v89->m128i_i64 - v98) >> 4);
      if ( (__int64)v89->m128i_i64 - v98 <= 0 )
        goto LABEL_36;
    }
    v98 = v33;
    v35 = v34;
    v99 = v13;
    v100 = v9;
    v97 = (__m128i *)v14;
    v36 = v10;
    v37 = v13;
    do
    {
      *v37 = _mm_loadu_si128((const __m128i *)v36);
      v37[1] = _mm_loadu_si128((const __m128i *)(v36 + 16));
      v38 = *(_QWORD *)(v36 + 32);
      v39 = _mm_loadu_si128((const __m128i *)(v36 + 40));
      *(_QWORD *)(v36 + 32) = 0;
      *(_OWORD *)(v36 + 40) = 0;
      v40 = v37[2].m128i_i64[0];
      if ( v40 )
      {
        v37[2].m128i_i64[1] = 0;
        v94 = v39;
        qfree(v40);
        v39 = _mm_load_si128(&v94);
      }
      v37[2].m128i_i64[0] = v38;
      *(__m128i *)((char *)v37 + 40) = v39;
      v41 = *(_QWORD *)(v36 + 56);
      v42 = _mm_loadu_si128((const __m128i *)(v36 + 64));
      *(_QWORD *)(v36 + 56) = 0;
      *(_OWORD *)(v36 + 64) = 0;
      v43 = v37[3].m128i_i64[1];
      if ( v43 )
      {
        v37[4].m128i_i64[0] = 0;
        v94 = v42;
        qfree(v43);
        v42 = _mm_load_si128(&v94);
      }
      v37[3].m128i_i64[1] = v41;
      v36 += 80;
      v37 += 5;
      v37[-1] = v42;
      --v35;
    }
    while ( v35 );
    v14 = (__int64)v97;
    v33 = v98;
    v13 = v99;
    v9 = v100;
LABEL_36:
    v44 = v89;
    if ( v32 <= 0 )
      goto LABEL_16;
    v97 = (__m128i *)v14;
    v45 = v33;
    v46 = v96;
    v98 = (__int64)v13;
    do
    {
      v47 = _mm_loadu_si128((const __m128i *)(v45 - 80));
      v45 -= 80;
      v44 -= 5;
      *v44 = v47;
      v44[1] = _mm_loadu_si128((const __m128i *)(v45 + 16));
      v48 = *(_QWORD *)(v45 + 32);
      v49 = _mm_loadu_si128((const __m128i *)(v45 + 40));
      *(_QWORD *)(v45 + 32) = 0;
      *(_OWORD *)(v45 + 40) = 0;
      v50 = v44[2].m128i_i64[0];
      if ( v50 )
      {
        v44[2].m128i_i64[1] = 0;
        v94 = v49;
        qfree(v50);
        v49 = _mm_load_si128(&v94);
      }
      v44[2].m128i_i64[0] = v48;
      *(__m128i *)((char *)v44 + 40) = v49;
      v51 = *(_QWORD *)(v45 + 56);
      v52 = _mm_loadu_si128((const __m128i *)(v45 + 64));
      *(_QWORD *)(v45 + 56) = 0;
      *(_OWORD *)(v45 + 64) = 0;
      v53 = v44[3].m128i_i64[1];
      if ( v53 )
      {
        v44[4].m128i_i64[0] = 0;
        v94 = v52;
        qfree(v53);
        v52 = _mm_load_si128(&v94);
      }
      v44[3].m128i_i64[1] = v51;
      v44[4] = v52;
      --v46;
    }
    while ( v46 );
    v14 = (__int64)v97;
    LODWORD(v13) = v98;
    v54 = v96 - 1;
    if ( (__int64)(v96 - 1) < 0 )
      v54 = 0;
    m128i_i64 = (__int64)v89[-5 * v54 - 5].m128i_i64;
LABEL_9:
    v9 -= v14;
    v16 = v91;
    v92 = (__m128i *)m128i_i64;
    sub_7A400(v90, (_DWORD)v13, m128i_i64, v16, v14, (_DWORD)a6, a7, (__int64)a8);
    v17 = v9;
    if ( v11 <= v9 )
      v17 = v11;
    if ( a7 >= v17 )
      return sub_791C0(v92, v89, v95, v11, v9, a6, a8);
    v90 = (__int64)v92;
    v10 = (__int64)v89;
    if ( v11 > v9 )
      goto LABEL_5;
LABEL_13:
    v14 = v9 / 2;
    v89 = (__m128i *)(v10 + 80 * (v9 / 2));
    v13 = (__m128i *)sub_79FB0(v90, v10, (__int64)v89, (unsigned __int8 (__fastcall *)(__int64, __int64))a8);
    v91 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v13->m128i_i64 - v90) >> 4);
    v11 -= v91;
    if ( v11 > v9 / 2 )
      goto LABEL_6;
  }
}
