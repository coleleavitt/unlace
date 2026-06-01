__int64 __fastcall sub_E0BFE0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  char **exception; // r12
  _OWORD *v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // r13
  __int64 v20; // rcx
  bool v21; // zf
  __int64 *v22; // rbx
  unsigned __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v27; // esi
  _QWORD *v28; // rdi
  _QWORD *v29; // rax
  char *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // r15d
  __int64 v34; // r13
  int v35; // eax
  _QWORD *v36; // rcx
  __m128 v37; // xmm0
  __int64 v38; // rcx
  unsigned int v39; // edx
  __int64 v40; // r15
  unsigned int v41; // eax
  __int64 v42; // rsi
  int v43; // eax
  _QWORD *v44; // rsi
  _DWORD *v45; // rdi
  char *v46; // r13
  __int64 *v47; // rax
  unsigned int v48; // r15d
  _QWORD *v49; // rax
  const __m128i *v50; // r8
  unsigned __int64 v51; // rdx
  _QWORD *v52; // r15
  __m128i v53; // xmm0
  __int64 v54; // rax
  unsigned int *v55; // rax
  unsigned int v56; // r13d
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  __m128i v60; // xmm1
  __m128 v61; // xmm0
  char *v62; // rdx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rsi
  __int64 v66; // rdx
  unsigned __int64 *v67; // rdi
  __int64 v68; // rax
  __int64 *v69; // r12
  __int64 v70; // r14
  __int64 *v71; // rbx
  __int64 v72; // rsi
  __int64 v73; // rdi
  unsigned int v74; // ecx
  size_t v75; // rsi
  _DWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned __int64 v79; // r14
  __int64 v80; // r12
  __int64 v81; // r15
  __int64 *v82; // rbx
  __int64 v83; // rsi
  _QWORD *v84; // rax
  char *v85; // rcx
  __int64 v86; // [rsp+0h] [rbp-240h] BYREF
  __int64 v87; // [rsp+8h] [rbp-238h]
  __int64 v88; // [rsp+10h] [rbp-230h]
  __int64 *v89; // [rsp+18h] [rbp-228h]
  __m128i v90; // [rsp+20h] [rbp-220h]
  _QWORD *v91; // [rsp+30h] [rbp-210h]
  unsigned __int64 *v92; // [rsp+38h] [rbp-208h]
  char *v93; // [rsp+40h] [rbp-200h]
  __int64 v94; // [rsp+48h] [rbp-1F8h]
  _QWORD *v95; // [rsp+50h] [rbp-1F0h]
  _DWORD *v96; // [rsp+58h] [rbp-1E8h]
  __int64 *v97; // [rsp+60h] [rbp-1E0h] BYREF
  __int64 v98; // [rsp+68h] [rbp-1D8h]
  __int64 *v99; // [rsp+70h] [rbp-1D0h]
  unsigned int **v100; // [rsp+78h] [rbp-1C8h]
  char v101[16]; // [rsp+80h] [rbp-1C0h] BYREF
  char v102; // [rsp+90h] [rbp-1B0h] BYREF
  __int64 v103; // [rsp+98h] [rbp-1A8h]
  __int64 v104[2]; // [rsp+A0h] [rbp-1A0h] BYREF
  char v105[16]; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v106; // [rsp+C0h] [rbp-180h]
  __int64 v107; // [rsp+D0h] [rbp-170h] BYREF
  void *ptr; // [rsp+D8h] [rbp-168h]
  __int64 v109; // [rsp+E0h] [rbp-160h]
  int v110; // [rsp+E8h] [rbp-158h]
  __int64 v111; // [rsp+F0h] [rbp-150h]
  __int64 *v112; // [rsp+F8h] [rbp-148h]
  __int64 v113; // [rsp+100h] [rbp-140h]
  __int64 v114; // [rsp+108h] [rbp-138h]
  __int64 v115; // [rsp+110h] [rbp-130h]
  _QWORD *v116; // [rsp+118h] [rbp-128h] BYREF
  __m128 v117; // [rsp+120h] [rbp-120h]
  __int64 v118; // [rsp+130h] [rbp-110h] BYREF
  _DWORD *v119; // [rsp+138h] [rbp-108h]
  _QWORD *v120; // [rsp+140h] [rbp-100h]
  __m128i v121; // [rsp+148h] [rbp-F8h]
  __m128 v122; // [rsp+158h] [rbp-E8h]
  int v123; // [rsp+168h] [rbp-D8h]
  char v124; // [rsp+16Ch] [rbp-D4h]
  __int64 v125[2]; // [rsp+170h] [rbp-D0h] BYREF
  _QWORD v126[14]; // [rsp+180h] [rbp-C0h] BYREF
  int v127; // [rsp+1F0h] [rbp-50h]
  __int64 v128; // [rsp+1F8h] [rbp-48h]
  __int64 v129; // [rsp+200h] [rbp-40h] BYREF

  v92 = a1;
  v94 = a2;
  v107 = a2;
  v98 = a6;
  v12 = (_OWORD *)sub_186B270(0x80u);
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  ptr = v12;
  v109 = 8;
  v110 = 0;
  v111 = a2;
  v112 = nullptr;
  sub_16669D0(v101, a2);
  if ( !a6 )
  {
    if ( a4 != *(_DWORD *)(a3 + 32) )
    {
      v18 = 0;
      goto LABEL_11;
    }
    v99 = &v107;
    if ( a4 )
      goto LABEL_5;
LABEL_27:
    sub_1616AB0((unsigned int)v125, (_DWORD)v99, *(_QWORD *)(a3 + 40), v13, v14, v15);
    v98 = v125[0];
LABEL_28:
    sub_162A710(v105, v94);
    v27 = *(_DWORD *)(v106 + 40);
    v28 = *(_QWORD **)(v106 + 32);
    v88 = v106;
    v29 = sub_DF6260(v28, v27, a3);
    if ( v29 )
    {
      v116 = nullptr;
      v30 = (char *)v29[1];
      v95 = nullptr;
      v31 = *(_QWORD *)v30;
      v32 = *((_QWORD *)v30 + 3);
      v93 = v30;
      v113 = v31;
      v114 = *((_QWORD *)v30 + 1);
      v115 = *((_QWORD *)v30 + 2);
      if ( v32 )
      {
        v33 = 0;
        v100 = (unsigned int **)&v116;
        do
        {
          if ( v33 >= *(_DWORD *)(v32 - 4) )
            break;
          v34 = *(_QWORD *)(v32 + 8LL * v33);
          if ( v34 )
            ++*(_DWORD *)(v34 + 8);
          if ( v95 )
          {
            v35 = *((_DWORD *)v95 - 1);
            if ( v35 != *((_DWORD *)v95 - 2) )
              continue;
          }
          sub_39BE00(v100);
          v95 = v116;
          v32 = *((_QWORD *)v93 + 3);
          v35 = *((_DWORD *)v116 - 1);
          v36 = v95;
          ++v33;
          v95[v35] = v34;
          *((_DWORD *)v36 - 1) = v35 + 1;
        }
        while ( v32 );
      }
      v37 = (__m128)_mm_loadu_si128((const __m128i *)v93 + 2);
      _mm_storeh_ps((double *)&v86, v37);
      v87 = v37.m128_u64[0];
      v117 = v37;
      if ( v37.m128_u64[0] )
        ++*(_DWORD *)(v37.m128_u64[0] + 8);
      v119 = nullptr;
      v96 = nullptr;
      v38 = *((_QWORD *)v93 + 7);
      v118 = *((_QWORD *)v93 + 6);
      if ( v38 )
      {
        v39 = 0;
        do
        {
          if ( v39 >= *(_DWORD *)(v38 - 4) )
            break;
          v40 = *(_QWORD *)(v38 + 8LL * v39);
          if ( v40 )
            ++*(_DWORD *)(v40 + 8);
          if ( v96 )
          {
            v41 = *(v96 - 1);
            if ( v41 == *(v96 - 2) )
            {
              v74 = (3 * v41 + 1) >> 1;
              v75 = 8 * v74 + 8;
              if ( 8 * v41 + 8 >= (unsigned int)v75 || v41 >= v74 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_DF63A0(v125, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v125);
                sub_233E40((__int64)v125);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v97) = (3 * v41 + 1) >> 1;
              LODWORD(v100) = v39;
              v76 = (_DWORD *)sub_186B300(v96 - 2, v75);
              v96 = v76 + 2;
              *v76 = (_DWORD)v97;
              v77 = (unsigned int)v76[1];
              v119 = v76 + 2;
              v44 = &v76[2 * v77 + 2];
              v39 = (unsigned int)v100;
              v43 = v77 + 1;
              v38 = *((_QWORD *)v93 + 7);
            }
            else
            {
              v42 = v41;
              v43 = v41 + 1;
              v44 = &v96[2 * v42];
            }
          }
          else
          {
            LODWORD(v100) = v39;
            v84 = (_QWORD *)sub_186B270(0x18u);
            v85 = v93;
            v44 = v84 + 1;
            *v84 = 2;
            v43 = 1;
            v119 = v44;
            v39 = (unsigned int)v100;
            v96 = v44;
            v38 = *((_QWORD *)v85 + 7);
          }
          v45 = v96;
          *v44 = v40;
          ++v39;
          *(v45 - 1) = v43;
        }
        while ( v38 );
      }
      v46 = v93;
      v120 = nullptr;
      v47 = *((__int64 **)v93 + 8);
      v89 = v47;
      if ( v47 )
      {
        v48 = *((_DWORD *)v47 - 1);
        LODWORD(v100) = *((_DWORD *)v47 - 2);
        v49 = (_QWORD *)sub_186B270(((unsigned __int64)(unsigned int)v100 << 6) + 8);
        v50 = *((const __m128i **)v46 + 8);
        v89 = v49 + 1;
        v120 = v49 + 1;
        *v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v100), _mm_cvtsi32_si128(v48)).m128i_u64[0];
        if ( v50 )
        {
          v51 = (unsigned __int64)v50[-1].m128i_u32[3] << 6;
          v90.m128i_i64[0] = (__int64)v50->m128i_i64 + v51;
          if ( v50 != (const __m128i *)&v50->m128i_i8[v51] )
          {
            v52 = v49 + 4;
            v97 = v125;
            do
            {
              v53 = _mm_loadu_si128(v50);
              v91 = v52 - 3;
              *(__m128i *)(v52 - 3) = v53;
              if ( v53.m128i_i64[0] )
                ++*(_DWORD *)(v53.m128i_i64[0] + 8);
              v54 = v50[1].m128i_i64[0];
              *v52 = 0;
              *(v52 - 1) = v54;
              v55 = (unsigned int *)v50[1].m128i_i64[1];
              if ( v55 )
              {
                v56 = 0;
                do
                {
                  if ( v56 >= *(v55 - 1) )
                    break;
                  v57 = *(_QWORD *)&v55[2 * v56];
                  v125[0] = v57;
                  if ( v57 )
                    ++*(_DWORD *)(v57 + 8);
                  v100 = (unsigned int **)v50;
                  sub_DFA620(v52, v97);
                  v50 = (const __m128i *)v100;
                  ++v56;
                  v55 = v100[3];
                }
                while ( v55 );
              }
              v58 = _mm_loadu_si128(v50 + 2);
              *(__m128i *)(v52 + 1) = v58;
              if ( v58.m128i_i64[0] )
                ++*(_DWORD *)(v58.m128i_i64[0] + 8);
              v59 = v50[3].m128i_i64[0];
              v52 += 8;
              v50 += 4;
              *(v52 - 5) = v59;
              *((_BYTE *)v52 - 32) = v50[-1].m128i_i8[8];
            }
            while ( (const __m128i *)v90.m128i_i64[0] != v50 );
          }
        }
      }
      v60 = _mm_loadu_si128((const __m128i *)(v93 + 72));
      v90 = v60;
      v121 = v60;
      if ( v60.m128i_i64[0] )
        ++*(_DWORD *)(v60.m128i_i64[0] + 8);
      v61 = (__m128)_mm_loadu_si128((const __m128i *)(v93 + 88));
      _mm_storeh_ps((double *)&v97, v61);
      v122 = v61;
      if ( v61.m128_u64[0] )
        ++*(_DWORD *)(v61.m128_u64[0] + 8);
      v62 = v93;
      v93 = &v102;
      v123 = *((_DWORD *)v62 + 26);
      LOBYTE(v100) = v62[108];
      v124 = (char)v100;
      sub_16302C0((unsigned int)&v102, v88, a3 + 16, a4, a5, v98, 0);
      v125[0] = (__int64)&off_1C4CAA0;
      v125[1] = v94;
      v126[0] = v94;
      v126[1] = v94;
      v126[3] = v94;
      v126[8] = v94;
      v126[2] = 0;
      memset(&v126[4], 0, 32);
      v126[9] = 0;
      v126[10] = &v129;
      v126[11] = 1;
      v126[12] = 0;
      v126[13] = 0;
      v127 = 1065353216;
      v128 = 0;
      v129 = 0;
      sub_1617230(v104, v99, v61.m128_u64[0]);
      if ( v96 )
      {
        v63 = *(v96 - 1);
        v64 = (int)v96;
      }
      else
      {
        v63 = 0;
        v64 = 0;
      }
      sub_1631DC0(v88, (unsigned int)v125, (_DWORD)v93, (unsigned __int8)v100, v63, v64, v104[0]);
      v65 = v94;
      v66 = *(_QWORD *)(v103 + 72);
      v67 = v92;
      *a7 = v66;
      sub_DF9A10(v67, v65, v66);
      sub_DF6300(v104[0], v104[1]);
      v125[0] = (__int64)&off_1C4CAA0;
      sub_268600((__int64)v126);
      sub_DF6300(v61.m128_i64[0], (__int64)v97);
      if ( v60.m128i_i64[0] )
      {
        v21 = (*(_DWORD *)(v60.m128i_i64[0] + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v90.m128i_i64[1], v60.m128i_i64[0]);
      }
      if ( v89 )
      {
        v68 = *((unsigned int *)v89 - 1);
        if ( (_DWORD)v68 )
        {
          v69 = v89;
          v70 = v98;
          v71 = &v89[8 * v68];
          do
          {
            sub_DF6300(v69[4], v69[5]);
            sub_2334C0(v69 + 2);
            v72 = *v69;
            if ( *v69 )
            {
              v73 = v69[1];
              v21 = (*(_DWORD *)(v72 + 8))-- == 1;
              if ( v21 )
                sub_15D7BC0(v73, v72);
            }
            v69 += 8;
          }
          while ( v69 != v71 );
          v98 = v70;
        }
        sub_186B220(v89 - 1);
      }
      sub_52D920(&v118);
      v78 = v87;
      if ( v87 )
      {
        LODWORD(v100) = *(_DWORD *)(v87 + 8);
        v21 = (_DWORD)v100 == 1;
        *(_DWORD *)(v87 + 8) = (_DWORD)v100 - 1;
        if ( v21 )
          sub_15D7BC0(v86, v78);
      }
      if ( v95 )
      {
        v79 = (unsigned __int64)&v95[*((unsigned int *)v95 - 1)];
        if ( (unsigned __int64)v95 < v79 )
        {
          v80 = v115;
          v81 = v98;
          v82 = v95;
          do
          {
            while ( 1 )
            {
              v83 = *v82;
              if ( *v82 )
              {
                v21 = (*(_DWORD *)(v83 + 8))-- == 1;
                if ( v21 )
                  break;
              }
              if ( (unsigned __int64)++v82 >= v79 )
                goto LABEL_97;
            }
            ++v82;
            sub_15D7BC0(v80, v83);
          }
          while ( (unsigned __int64)v82 < v79 );
LABEL_97:
          v98 = v81;
        }
        sub_186B220(v95 - 1);
      }
    }
    else
    {
      *a7 = sub_15E39A0(v94, a3, a4, a5, v98);
    }
    v18 = 1;
    goto LABEL_8;
  }
  v16 = v98;
  v17 = *(_QWORD *)(a3 + 40);
  v99 = &v107;
  ++*(_DWORD *)(v98 + 8);
  v18 = sub_1616440(&v107, v17, v16);
  if ( !(_BYTE)v18 )
    goto LABEL_9;
  if ( a4 != *(_DWORD *)(a3 + 32) )
  {
    v18 = 0;
LABEL_9:
    v20 = v98;
    LODWORD(v100) = *(_DWORD *)(v98 + 8);
    v21 = (_DWORD)v100 == 1;
    *(_DWORD *)(v98 + 8) = (_DWORD)v100 - 1;
    if ( v21 )
      sub_15D7BC0(v94, v20);
    goto LABEL_11;
  }
  if ( !a4 )
    goto LABEL_28;
LABEL_5:
  v19 = 0;
  while ( 1 )
  {
    v18 = sub_1616440(v99, *(_QWORD *)(a3 + 8 * v19 + 48), *(_QWORD *)(a5 + 8 * v19));
    if ( !(_BYTE)v18 )
      break;
    if ( (unsigned int)++v19 >= a4 )
    {
      if ( v98 )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
LABEL_8:
  if ( v98 )
    goto LABEL_9;
LABEL_11:
  v22 = v112;
  if ( v112 )
  {
    if ( v112 >= &v112[*((unsigned int *)v112 - 1)] )
      goto LABEL_19;
    v23 = (unsigned __int64)&v112[*((unsigned int *)v112 - 1)];
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = v111;
          v21 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( (unsigned __int64)++v22 >= v23 )
          goto LABEL_18;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v23 );
LABEL_18:
    v22 = v112;
    if ( v112 )
LABEL_19:
      sub_186B220(v22 - 1);
  }
  if ( ptr )
    sub_186B220(ptr);
  return v18;
}

