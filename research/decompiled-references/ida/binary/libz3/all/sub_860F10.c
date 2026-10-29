__int64 __fastcall sub_860F10(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  char **v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 *v9; // r15
  unsigned int *v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  int v13; // esi
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  size_t v19; // rdx
  bool v20; // zf
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned int v24; // r13d
  size_t v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  _DWORD *v28; // r14
  __int64 v29; // rax
  __int64 *v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm0
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  _QWORD *v37; // r13
  _QWORD *v38; // r15
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // r14
  _QWORD *v43; // r13
  __int64 v44; // rsi
  int v45; // eax
  _QWORD *v46; // rsi
  _QWORD *v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // r8d
  size_t v50; // rsi
  unsigned int v51; // r12d
  unsigned int *v52; // rax
  __int64 v53; // rsi
  int v54; // r9d
  _QWORD *v55; // rdx
  _QWORD *v56; // r13
  _QWORD *v57; // r14
  _QWORD *v58; // r15
  __int64 v59; // rcx
  int v60; // edx
  int v61; // r12d
  char *v62; // rax
  char *v63; // rdi
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  _QWORD *v66; // rax
  __int64 v67; // r13
  _QWORD *v68; // rax
  _QWORD *v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r13
  __int64 v73; // rdi
  __int64 v74; // rax
  unsigned int *v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rdi
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // r8
  int v81; // r9d
  unsigned int v82; // eax
  unsigned int *v83; // rsi
  unsigned int v84; // r12d
  __int64 v85; // rdi
  __int64 v86; // rax
  _QWORD *v87; // r13
  _QWORD *v88; // rax
  _QWORD *v89; // r14
  unsigned __int64 v91; // rdx
  __int64 *v92; // rax
  __int64 v93; // rcx
  unsigned __int64 v94; // rax
  __int64 v95; // rsi
  unsigned __int64 v96; // rax
  __int64 v97; // r8
  int v98; // edx
  __int64 *v100; // [rsp+18h] [rbp-1B8h]
  unsigned __int64 v101; // [rsp+20h] [rbp-1B0h]
  int v103; // [rsp+30h] [rbp-1A0h]
  unsigned int v104; // [rsp+30h] [rbp-1A0h]
  unsigned int v105; // [rsp+34h] [rbp-19Ch]
  void *src; // [rsp+40h] [rbp-190h]
  _QWORD *srca; // [rsp+40h] [rbp-190h]
  unsigned int srcb; // [rsp+40h] [rbp-190h]
  __int64 *v110; // [rsp+48h] [rbp-188h]
  __int64 v111; // [rsp+48h] [rbp-188h]
  __int64 v112; // [rsp+48h] [rbp-188h]
  unsigned int *v113; // [rsp+48h] [rbp-188h]
  unsigned int *v114; // [rsp+50h] [rbp-180h] BYREF
  __int64 v115; // [rsp+58h] [rbp-178h]
  __int64 v116[4]; // [rsp+60h] [rbp-170h] BYREF
  void *v117; // [rsp+80h] [rbp-150h]
  __int64 v118; // [rsp+88h] [rbp-148h]
  _QWORD v119[16]; // [rsp+90h] [rbp-140h] BYREF
  void *ptr; // [rsp+110h] [rbp-C0h]
  __int64 v121; // [rsp+118h] [rbp-B8h]
  _BYTE v122[176]; // [rsp+120h] [rbp-B0h] BYREF

  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(unsigned int *)(a3 + 24);
  ++*(_DWORD *)(a1 + 152);
  v105 = v5;
  v7 = v6;
  v117 = v119;
  ptr = v122;
  v121 = 0x1000000000LL;
  v119[0] = a3;
  v118 = 0x1000000001LL;
  if ( v7 * 8 )
  {
    v8 = *(_QWORD *)(a3 + 32);
    v9 = (__int64 *)(a3 + 32);
    v10 = (unsigned int *)sub_186B270(0x18u);
    src = v10 + 2;
    *((_QWORD *)v10 + 1) = v8;
    *(_QWORD *)v10 = 0x100000002LL;
    v11 = (_QWORD *)sub_186B270(0x18u);
    v12 = v11 + 1;
    *v11 = 2;
    v13 = v10[1];
    v11[1] = 0;
    v100 = &v9[v7];
    v14 = (unsigned __int64)(v11 + 1);
    v110 = v9;
    v15 = *v10;
    v16 = 8 * v15 + 8;
    while ( 1 )
    {
      v103 = v15;
      v17 = sub_186B270(v16);
      *v12 = v17 + 8;
      *(_DWORD *)v17 = v103;
      v18 = v10[1];
      *(_DWORD *)(v17 + 4) = v13;
      v19 = 8 * v18;
      v20 = v19 == 8;
      if ( v19 <= 8 )
      {
        v98 = *(_DWORD *)(v14 - 4);
        if ( v20 )
          *(_QWORD *)(v17 + 8) = *((_QWORD *)v10 + 1);
        v21 = v98 + 1;
      }
      else
      {
        memcpy((void *)(v17 + 8), src, v19);
        v21 = *(_DWORD *)(v14 - 4) + 1;
      }
      *(_DWORD *)(v14 - 4) = v21;
      sub_186B220(v10);
      if ( v100 == ++v110 )
        break;
      v22 = *v110;
      v10 = (unsigned int *)sub_186B270(0x18u);
      src = v10 + 2;
      *((_QWORD *)v10 + 1) = v22;
      *(_QWORD *)v10 = 0x100000002LL;
      v23 = *(unsigned int *)(v14 - 4);
      if ( (_DWORD)v23 == *(_DWORD *)(v14 - 8) )
      {
        v24 = (unsigned int)(3 * v23 + 1) >> 1;
        v25 = 8 * v24 + 8;
        v104 = v24;
        if ( 8 * (int)v23 + 8 >= (unsigned int)v25 || (unsigned int)v23 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v116, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v116);
          sub_233E40((__int64)v116);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = sub_186B270(v25);
        v27 = *(unsigned int *)(v14 - 4);
        v28 = (_DWORD *)v26;
        v26 += 8;
        *(_DWORD *)(v26 - 4) = v27;
        v101 = v26;
        v29 = 8 * v27;
        v30 = (__int64 *)(v14 + 8 * v27);
        if ( (__int64 *)v14 != v30 )
        {
          v31 = v29 - 8;
          if ( (unsigned __int64)(v29 - 8) <= 8 || v101 < v14 + 16 && v14 < (unsigned __int64)(v28 + 6) )
          {
            v91 = v101;
            v92 = (__int64 *)v14;
            do
            {
              v93 = *v92;
              *v92++ = 0;
              v91 += 8LL;
              *(_QWORD *)(v91 - 8) = v93;
            }
            while ( v92 != v30 );
          }
          else
          {
            v32 = 0;
            v33 = (v31 >> 3) + 1;
            do
            {
              v34 = _mm_loadu_si128((const __m128i *)(v14 + v32 * 4));
              *(_OWORD *)(v14 + v32 * 4) = 0;
              *(__m128i *)&v28[v32 + 2] = v34;
              v32 += 4;
            }
            while ( 4 * (v33 >> 1) != v32 );
            if ( (v33 & 1) != 0 )
            {
              v35 = 8 * (v33 & 0xFFFFFFFFFFFFFFFELL);
              v36 = *(_QWORD *)(v14 + v35);
              *(_QWORD *)(v14 + v35) = 0;
              *(_QWORD *)&v28[v35 / 4 + 2] = v36;
            }
          }
        }
        v37 = (_QWORD *)(v14 + 8 * v27);
        v38 = (_QWORD *)v14;
        if ( (_DWORD)v27 )
        {
          do
          {
            while ( *v38 )
            {
              v39 = (void *)(*v38++ - 8LL);
              sub_186B220(v39);
              if ( v38 == v37 )
                goto LABEL_21;
            }
            ++v38;
          }
          while ( v38 != v37 );
        }
LABEL_21:
        sub_186B220((void *)(v14 - 8));
        v14 = v101;
        v13 = v10[1];
        *v28 = v104;
        v12 = (_QWORD *)(v101 + 8LL * (unsigned int)v28[1]);
        v40 = *v10;
        *v12 = 0;
        LODWORD(v15) = v40;
        v16 = 8 * v40 + 8;
      }
      else
      {
        v12 = (_QWORD *)(v14 + 8 * v23);
        v16 = 24;
        LODWORD(v15) = 2;
        v13 = 1;
        *v12 = 0;
      }
    }
    if ( v105 <= 1 )
    {
LABEL_39:
      v56 = (_QWORD *)(v14 + 8LL * *(unsigned int *)(v14 - 4));
      if ( v56 != (_QWORD *)v14 )
      {
        v57 = (_QWORD *)v14;
        do
        {
          v59 = sub_15DCAD0(*(_QWORD *)(a1 + 120), *v57, 0);
          v60 = v121;
          if ( (unsigned int)v121 < HIDWORD(v121) )
          {
            v58 = ptr;
          }
          else
          {
            v112 = v59;
            v61 = 2 * HIDWORD(v121);
            v62 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v121)));
            v60 = v121;
            v63 = (char *)ptr;
            v58 = v62;
            v59 = v112;
            if ( (_DWORD)v121 )
            {
              if ( (unsigned int)(v121 - 1) <= 2 || v62 == (char *)ptr + 8 )
              {
                v96 = 0;
                v97 = 8LL * (unsigned int)v121;
                do
                {
                  v58[v96 / 8] = *(_QWORD *)&v63[v96];
                  v96 += 8LL;
                }
                while ( v97 != v96 );
              }
              else
              {
                v64 = 0;
                v65 = 16LL * ((unsigned int)v121 >> 1);
                do
                {
                  *(__m128i *)&v58[v64 / 8] = _mm_loadu_si128((const __m128i *)&v63[v64]);
                  v64 += 16LL;
                }
                while ( v65 != v64 );
                if ( (v60 & 1) != 0 )
                  v58[v60 & 0xFFFFFFFE] = *(_QWORD *)&v63[8 * (v60 & 0xFFFFFFFE)];
              }
            }
            if ( v63 != v122 && v63 )
            {
              sub_186B220(v63);
              v60 = v121;
              v59 = v112;
            }
            ptr = v58;
            HIDWORD(v121) = v61;
          }
          ++v57;
          v58[v60] = v59;
          LODWORD(v121) = v60 + 1;
        }
        while ( v56 != v57 );
      }
      LODWORD(v55) = (_DWORD)v117;
      goto LABEL_68;
    }
  }
  else
  {
    v14 = 0;
    if ( v5 <= 1 )
    {
      v55 = v119;
      goto LABEL_108;
    }
  }
  v111 = 1;
  do
  {
    v41 = *(_QWORD *)(a2 + 8 * v111 + 32);
    if ( v14 )
    {
      v42 = (_QWORD *)(v14 + 8LL * *(unsigned int *)(v14 - 4));
      if ( v42 != (_QWORD *)v14 )
      {
        v43 = (_QWORD *)v14;
        while ( 1 )
        {
          v47 = (_QWORD *)*v43;
          if ( !*v43 )
            break;
          v48 = *((_DWORD *)v47 - 1);
          if ( v48 == *((_DWORD *)v47 - 2) )
          {
            v49 = (3 * v48 + 1) >> 1;
            v50 = 8 * v49 + 8;
            v51 = v49;
            if ( 8 * v48 + 8 >= (unsigned int)v50 || v48 >= v49 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v116, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v116);
              sub_233E40((__int64)v116);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v52 = (unsigned int *)sub_186B300(v47 - 1, v50);
            v53 = v52[1];
            *v52 = v51;
            *v43++ = v52 + 2;
            *(_QWORD *)&v52[2 * v53 + 2] = v41;
            v52[1] = v53 + 1;
            if ( v42 == v43 )
              goto LABEL_36;
          }
          else
          {
            v44 = v48;
            v45 = v48 + 1;
            v46 = &v47[v44];
LABEL_30:
            ++v43;
            *v46 = v41;
            *((_DWORD *)v47 - 1) = v45;
            if ( v42 == v43 )
              goto LABEL_36;
          }
        }
        v66 = (_QWORD *)sub_186B270(0x18u);
        v47 = v66 + 1;
        *v43 = v66 + 1;
        v46 = v66 + 1;
        *v66 = 2;
        v45 = 1;
        goto LABEL_30;
      }
    }
LABEL_36:
    v54 = v118;
    v55 = v117;
    if ( (unsigned int)v118 >= HIDWORD(v118) )
    {
      v67 = (unsigned int)(2 * HIDWORD(v118));
      v68 = (_QWORD *)sub_186B270(8 * v67);
      v54 = v118;
      v69 = v117;
      v55 = v68;
      if ( (_DWORD)v118 )
      {
        if ( (unsigned int)(v118 - 1) <= 2 || v68 == (_QWORD *)((char *)v117 + 8) )
        {
          v94 = 0;
          v95 = 8LL * (unsigned int)v118;
          do
          {
            v55[v94 / 8] = v69[v94 / 8];
            v94 += 8LL;
          }
          while ( v95 != v94 );
        }
        else
        {
          v70 = 0;
          v71 = 16LL * ((unsigned int)v118 >> 1);
          do
          {
            *(__m128i *)&v55[v70 / 8] = _mm_loadu_si128((const __m128i *)&v69[v70 / 8]);
            v70 += 16LL;
          }
          while ( v70 != v71 );
          if ( (v54 & 1) != 0 )
            v55[v54 & 0xFFFFFFFE] = v69[v54 & 0xFFFFFFFE];
        }
      }
      if ( v69 != v119 && v69 )
      {
        srca = v55;
        sub_186B220(v69);
        v54 = v118;
        v55 = srca;
      }
      v117 = v55;
      HIDWORD(v118) = v67;
    }
    ++v111;
    v55[v54] = v41;
    LODWORD(v118) = v54 + 1;
  }
  while ( (unsigned int)v111 < v105 );
  if ( v14 )
    goto LABEL_39;
LABEL_108:
  v14 = 0;
LABEL_68:
  v114 = nullptr;
  v72 = *(_QWORD *)(a1 + 72);
  v73 = *(_QWORD *)(a1 + 120);
  v115 = v72;
  v74 = sub_15DCAD0(v73, (int)v55, 0);
  v113 = (unsigned int *)v74;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  sub_8600B0(v116, a1, a3, (unsigned int)v121, ptr);
  v75 = v114;
  v76 = (unsigned int *)v116[0];
  v116[0] = (__int64)v114;
  v114 = v76;
  if ( v116[0] )
  {
    v77 = v116[1];
    v20 = v75[2]-- == 1;
    if ( v20 )
      sub_15D7BC0(v77, v75);
  }
  sub_7E5890(a1, (__int64)&v114);
  v78 = sub_7E5940(a1, v113);
  v79 = sub_7E5940(a1, v114);
  v82 = sub_7CA650(*(_QWORD *)(a1 + 80), v78, v79, *(_QWORD *)(a1 + 464), v80, v81);
  v83 = v114;
  v84 = v82;
  if ( v114 )
  {
    v85 = v115;
    v20 = v114[2]-- == 1;
    if ( v20 )
      sub_15D7BC0(v85, v83);
  }
  if ( v113 )
  {
    srcb = v113[2];
    v113[2] = srcb - 1;
    if ( srcb == 1 )
      sub_15D7BC0(v72, v113);
  }
  if ( v14 )
  {
    v86 = *(unsigned int *)(v14 - 4);
    if ( (_DWORD)v86 )
    {
      v87 = (_QWORD *)(v14 + 8 * v86);
      v88 = (_QWORD *)v14;
      do
      {
        while ( *v88 )
        {
          v89 = v88 + 1;
          sub_186B220((void *)(*v88 - 8LL));
          v88 = v89;
          if ( v87 == v89 )
            goto LABEL_84;
        }
        ++v88;
      }
      while ( v87 != v88 );
    }
LABEL_84:
    sub_186B220((void *)(v14 - 8));
  }
  if ( ptr && ptr != v122 )
    sub_186B220(ptr);
  if ( v117 != v119 && v117 )
    sub_186B220(v117);
  return v84;
}

