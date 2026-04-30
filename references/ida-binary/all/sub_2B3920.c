__int64 __fastcall GraphRenderer::update_pending_selection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13)
{
  __m128 v14; // xmm7
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned __int64 *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm1
  __m128 v31; // xmm3
  __m128 v32; // xmm2
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rbx
  double *v36; // rax
  double v37; // xmm0_8
  double v38; // xmm3_8
  double v39; // xmm2_8
  int v40; // ecx
  int v41; // edx
  const __m128i **v42; // rbx
  const __m128i *v43; // rdx
  const __m128i *v44; // rax
  int v45; // edi
  __int64 v46; // rcx
  const __m128i *v47; // r12
  unsigned __int64 v48; // rdx
  __int64 v49; // rbp
  int v50; // ebx
  char v51; // r15
  __int64 v52; // r13
  int v53; // r12d
  unsigned __int64 *v54; // rax
  int *v55; // rcx
  int v56; // edx
  int v57; // ecx
  int v58; // eax
  const __m128i **v59; // r15
  const __m128i *v60; // rdx
  const __m128i *v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v66; // rax
  const __m128i *v67; // rdx
  const __m128i *v68; // rdi
  __int64 v69; // r13
  __int64 v70; // rdx
  bool v71; // cf
  const __m128i *v72; // rax
  const char *v73; // rsi
  __int64 v74; // rax
  const __m128i *v75; // rcx
  const __m128i *v76; // r14
  const __m128i *v77; // rdi
  __int64 v78; // r13
  __int64 v79; // rcx
  __int64 v80; // rdx
  __m128i v81; // xmm0
  const __m128i *v82; // rax
  __int64 v83; // [rsp+0h] [rbp-88h]
  __int64 v84; // [rsp+0h] [rbp-88h]
  double v85; // [rsp+8h] [rbp-80h]
  double v86; // [rsp+8h] [rbp-80h]
  double v87; // [rsp+8h] [rbp-80h]
  __int64 v88; // [rsp+10h] [rbp-78h]
  unsigned __int64 v89; // [rsp+10h] [rbp-78h]
  __int64 v90; // [rsp+18h] [rbp-70h]
  int v91; // [rsp+18h] [rbp-70h]
  __int64 v92; // [rsp+20h] [rbp-68h]
  __int64 v93; // [rsp+20h] [rbp-68h]
  __int64 v94; // [rsp+28h] [rbp-60h]
  __int64 v95; // [rsp+28h] [rbp-60h]
  const __m128i *v96; // [rsp+28h] [rbp-60h]
  __int64 v97; // [rsp+30h] [rbp-58h]
  __int64 v98; // [rsp+30h] [rbp-58h]
  unsigned __int64 v99; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v100; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v101; // [rsp+48h] [rbp-40h]
  int v102; // [rsp+50h] [rbp-38h]
  int v103; // [rsp+58h] [rbp-30h]
  __int64 v104; // [rsp+60h] [rbp-28h]

  v88 = a2;
  v101 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 24) )
  {
    v49 = a3;
    v50 = 0;
    v51 = 0;
    v14 = (__m128)0x3FF0000000000000uLL;
    v52 = 0;
    v53 = a2;
    v90 = a2 >> 32;
    HIDWORD(v92) = HIDWORD(a2);
    LODWORD(v85) = 0;
    do
    {
      v54 = (unsigned __int64 *)sub_1EA6C0(
                                  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 384LL,
                                  a2,
                                  a3,
                                  a4,
                                  a5,
                                  a6,
                                  a7,
                                  a8,
                                  a9,
                                  a10,
                                  a11,
                                  a12,
                                  a13,
                                  (__m128)0x3FF0000000000000uLL,
                                  v83,
                                  SLODWORD(v85),
                                  v88,
                                  v90,
                                  v92,
                                  v94,
                                  v97,
                                  v99,
                                  v100,
                                  v101,
                                  v102,
                                  v103,
                                  v104);
      a8 = (__m128)*v54;
      v55 = (int *)(*(_QWORD *)(v49 + 16) + 8 * v52);
      a10 = (__m128)v54[2];
      a9 = (__m128)v54[1];
      v56 = *v55;
      v57 = v55[1];
      if ( *(double *)a8.m128_u64 == v85 )
      {
        a2 = (unsigned int)(int)*(double *)a9.m128_u64;
        a4 = (unsigned int)(v57 - (int)*(double *)a10.m128_u64);
        v58 = v56 - a2;
      }
      else
      {
        a4 = (unsigned int)(int)(((double)v57 - *(double *)a10.m128_u64) * *(double *)a8.m128_u64);
        a7 = 0;
        *(double *)a7.m128_u64 = ((double)v56 - *(double *)a9.m128_u64) * *(double *)a8.m128_u64;
        v58 = (int)*(double *)a7.m128_u64;
      }
      a3 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a3 + 224) <= v58
        && *(_DWORD *)(a3 + 232) > v58
        && *(_DWORD *)(a3 + 228) <= (int)a4
        && *(_DWORD *)(a3 + 236) > (int)a4 )
      {
        v59 = *(const __m128i ***)(a1 + 16);
        v60 = v59[1];
        v61 = *v59;
        v62 = (__int64)(*v59)->m128i_i64 + 20 * (_QWORD)v60;
        if ( *v59 == (const __m128i *)v62 )
          goto LABEL_32;
        while ( 1 )
        {
          if ( !v61->m128i_i8[0] && v61->m128i_i32[3] == v53 )
          {
            a2 = HIDWORD(v92);
            if ( v61[1].m128i_i32[0] <= SHIDWORD(v92)
              && v61[1].m128i_i32[0] >= SHIDWORD(v92)
              && v61->m128i_i32[2] == v50 )
            {
              break;
            }
          }
          v61 = (const __m128i *)((char *)v61 + 20);
          if ( (const __m128i *)v62 == v61 )
            goto LABEL_32;
        }
        if ( (const __m128i *)v62 == v61 )
        {
LABEL_32:
          v63 = (unsigned __int64)v60->m128i_u64 + 1;
          if ( (unsigned __int64)v59[2] < v63 )
          {
            v96 = v59[2];
            v66 = qvector_reserve(*(_QWORD *)(a1 + 16), 0, v63, 20);
            v67 = v59[1];
            a2 = (__int64)v59[2];
            v68 = *v59;
            v69 = v66;
            v59[2] = v96;
            v70 = (__int64)&v67[-1].m128i_i64[1] + 7;
            if ( v70 >= 0 )
            {
              do
              {
                a7 = (__m128)_mm_loadu_si128(v68);
                v66 += 20;
                v68 = (const __m128i *)((char *)v68 + 20);
                *(__m128 *)(v66 - 20) = a7;
                *(_DWORD *)(v66 - 4) = v68[-1].m128i_i32[3];
                v71 = v70-- == 0;
              }
              while ( !v71 );
              v68 = *v59;
            }
            v94 = a2;
            *(double *)a7.m128_u64 = qfree(v68, (const char *)a2);
            v72 = v59[1];
            *v59 = (const __m128i *)v69;
            v59[2] = (const __m128i *)a2;
            v62 = v69 + 20LL * (_QWORD)v72;
          }
          *(_BYTE *)v62 = 0;
          *(_DWORD *)(v62 + 4) = -1;
          *(_DWORD *)(v62 + 12) = v88;
          *(_DWORD *)(v62 + 8) = v50;
          *(_DWORD *)(v62 + 16) = v90;
          v59[1] = (const __m128i *)((char *)v59[1] + 1);
        }
        v64 = (__int64)v59;
        v51 = 1;
        sub_2B38C0(v64);
      }
      v52 = ++v50;
    }
    while ( (unsigned __int64)v50 < *(_QWORD *)(v49 + 24) );
    if ( v51 )
      return 0;
  }
  else
  {
    v14 = (__m128)0x3FF0000000000000uLL;
    LODWORD(v85) = 0;
  }
  v99 = 0;
  v15 = *(_QWORD *)(a1 + 24);
  v100 = 0;
  v16 = *(_QWORD *)(v15 + 440);
  if ( v16 )
    v16 = *(_QWORD *)(v16 + 8);
  v17 = v88;
  sub_298C80(v16, v88, &v99, &v100);
  v18 = *(_QWORD *)(a1 + 24);
  v25 = (unsigned __int64 *)sub_1EA6C0(
                              *(_QWORD *)(v18 + 16) + 384LL,
                              v88,
                              v19,
                              v20,
                              v21,
                              v22,
                              a7,
                              a8,
                              a9,
                              a10,
                              v23,
                              v24,
                              a13,
                              v14,
                              v83,
                              SLODWORD(v85),
                              v88,
                              v90,
                              v92,
                              v94,
                              v97,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104);
  v30 = (__m128)*v25;
  v31 = (__m128)v25[2];
  v32 = (__m128)v25[1];
  if ( *(double *)v30.m128_u64 == v86 )
  {
    v17 = (unsigned int)(int)*(double *)v32.m128_u64;
    v33 = (unsigned int)(HIDWORD(v99) - (int)*(double *)v31.m128_u64);
    v34 = v99 - v17;
  }
  else
  {
    v33 = (unsigned int)(int)(((double)SHIDWORD(v99) - *(double *)v31.m128_u64) * *(double *)v30.m128_u64);
    a7 = 0;
    *(double *)a7.m128_u64 = ((double)(int)v99 - *(double *)v32.m128_u64) * *(double *)v30.m128_u64;
    v34 = (int)*(double *)a7.m128_u64;
  }
  if ( *(_DWORD *)(v18 + 224) <= v34
    && *(_DWORD *)(v18 + 232) > v34
    && *(_DWORD *)(v18 + 228) <= (int)v33
    && *(_DWORD *)(v18 + 236) > (int)v33 )
  {
    goto LABEL_14;
  }
  v35 = *(_QWORD *)(a1 + 24);
  v36 = (double *)sub_1EA6C0(
                    *(_QWORD *)(v35 + 16) + 384LL,
                    v17,
                    (unsigned int)v99,
                    v33,
                    v26,
                    v27,
                    a7,
                    v30,
                    v32,
                    v31,
                    v28,
                    v29,
                    a13,
                    v14,
                    v84,
                    SLODWORD(v86),
                    v89,
                    v91,
                    v93,
                    v95,
                    v98,
                    v99,
                    v100,
                    v101,
                    v102,
                    v103,
                    v104);
  v37 = *v36;
  v38 = v36[2];
  v39 = v36[1];
  if ( *v36 == v87 )
  {
    v40 = HIDWORD(v100) - (int)v38;
    v41 = v100 - (int)v39;
    if ( v41 < *(_DWORD *)(v35 + 224) )
      return 0;
  }
  else
  {
    v40 = (int)(((double)SHIDWORD(v100) - v38) * v37);
    v41 = (int)(((double)(int)v100 - v39) * v37);
    if ( v41 < *(_DWORD *)(v35 + 224) )
      return 0;
  }
  if ( v41 < *(_DWORD *)(v35 + 232) && *(_DWORD *)(v35 + 228) <= v40 && *(_DWORD *)(v35 + 236) > v40 )
  {
LABEL_14:
    v42 = *(const __m128i ***)(a1 + 16);
    v43 = v42[1];
    v44 = *v42;
    v45 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)v89, 229));
    v46 = (__int64)(*v42)->m128i_i64 + 20 * (_QWORD)v43;
    if ( *v42 == (const __m128i *)v46 )
      goto LABEL_18;
    while ( v44->m128i_i8[0]
         || (_DWORD)v89 != v44->m128i_i32[3]
         || v44[1].m128i_i32[0] > v45
         || v44[1].m128i_i32[0] < v45
         || v44->m128i_i32[2] != -1 )
    {
      v44 = (const __m128i *)((char *)v44 + 20);
      if ( (const __m128i *)v46 == v44 )
        goto LABEL_18;
    }
    if ( (const __m128i *)v46 == v44 )
    {
LABEL_18:
      v47 = v42[2];
      v48 = (unsigned __int64)v43->m128i_u64 + 1;
      if ( (unsigned __int64)v47 < v48 )
      {
        v73 = nullptr;
        v74 = qvector_reserve(*(_QWORD *)(a1 + 16), 0, v48, 20);
        v75 = v42[1];
        v76 = v42[2];
        v42[2] = v47;
        v77 = *v42;
        v78 = v74;
        v79 = (__int64)&v75[-1].m128i_i64[1] + 7;
        if ( v79 >= 0 )
        {
          v80 = v74;
          do
          {
            v81 = _mm_loadu_si128(v77);
            v80 += 20;
            v77 = (const __m128i *)((char *)v77 + 20);
            *(__m128i *)(v80 - 20) = v81;
            v73 = (const char *)v77[-1].m128i_u32[3];
            *(_DWORD *)(v80 - 4) = (_DWORD)v73;
            v71 = v79-- == 0;
          }
          while ( !v71 );
          v77 = *v42;
        }
        qfree(v77, v73);
        v82 = v42[1];
        *v42 = (const __m128i *)v78;
        v42[2] = v76;
        v46 = v78 + 20LL * (_QWORD)v82;
      }
      *(_BYTE *)v46 = 0;
      *(_QWORD *)(v46 + 4) = -1;
      *(_QWORD *)(v46 + 12) = v89;
      v42[1] = (const __m128i *)((char *)v42[1] + 1);
    }
    sub_2B38C0((__int64)v42);
  }
  return 0;
}
