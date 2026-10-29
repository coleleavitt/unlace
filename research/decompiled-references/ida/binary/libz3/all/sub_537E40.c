__int64 __fastcall sub_537E40(__int64 a1, unsigned __int64 *a2, std::chrono::_V2::steady_clock *a3)
{
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  _QWORD *v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rbp
  void *v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  void *v18; // r14
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned int v21; // r13d
  _QWORD *v22; // rax
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  void *v27; // rbx
  __int64 v28; // rdx
  bool v29; // zf
  void *v30; // rdi
  int v31; // eax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  void *v35; // rbx
  int v36; // eax
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  int i; // r15d
  unsigned __int64 v41; // rbp
  __int64 v42; // rax
  __int64 *v43; // rbx
  __int64 v44; // rdx
  unsigned int v45; // ebp
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r14
  __int64 v49; // rbp
  int v50; // eax
  void *v51; // r13
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 v54; // rbp
  void *v55; // r13
  __int64 v56; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  void *v60; // rbx
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  _QWORD *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  _BYTE *v68; // rcx
  void *v69; // rdi
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  void *v72; // rbx
  unsigned __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  _QWORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  _BYTE *v80; // rcx
  unsigned int v81; // ebx
  size_t v82; // rsi
  unsigned int *v83; // rax
  unsigned int v84; // r13d
  size_t v85; // rdi
  unsigned int *v86; // r14
  unsigned __int64 v87; // r12
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 *v90; // r9
  __int64 *v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // rsi
  __m128i v94; // xmm0
  unsigned __int64 v95; // rsi
  __int64 *v96; // rax
  __int64 v97; // rcx
  __int64 *v98; // r13
  __int64 *v99; // r12
  __int64 v100; // r14
  __int64 v101; // rcx
  __int64 v102; // rbx
  void *v103; // rbp
  __int64 v104; // rsi
  unsigned int v105; // ebx
  unsigned int *v106; // rax
  unsigned int v107; // ebx
  __int64 v108; // rax
  __int64 v109; // rsi
  _DWORD *v110; // rcx
  __int64 v111; // rdx
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  std::chrono::_V2::steady_clock *v114; // [rsp+0h] [rbp-B8h]
  std::chrono::_V2::steady_clock *v115; // [rsp+0h] [rbp-B8h]
  unsigned __int64 *v116; // [rsp+8h] [rbp-B0h]
  void *v117; // [rsp+10h] [rbp-A8h]
  int v118; // [rsp+18h] [rbp-A0h]
  __int64 v119; // [rsp+18h] [rbp-A0h]
  __int64 v120; // [rsp+18h] [rbp-A0h]
  unsigned int v122; // [rsp+30h] [rbp-88h]
  char v123; // [rsp+3Bh] [rbp-7Dh]
  unsigned int v124; // [rsp+3Ch] [rbp-7Ch]
  unsigned int *v125; // [rsp+40h] [rbp-78h]
  _DWORD *v126; // [rsp+48h] [rbp-70h]
  char v127; // [rsp+56h] [rbp-62h] BYREF
  __int64 v128; // [rsp+58h] [rbp-60h] BYREF
  int v129[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v130; // [rsp+68h] [rbp-50h]
  __int64 v131; // [rsp+70h] [rbp-48h] BYREF
  __int64 v132; // [rsp+78h] [rbp-40h]

  v7 = (_QWORD *)*a2;
  v116 = a2;
  if ( *a2 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v114 = a3;
      v9 = &v7[v8];
      do
      {
        v10 = *v7;
        if ( *v7 )
        {
          v11 = *(unsigned int *)(v10 - 4);
          if ( (_DWORD)v11 )
          {
            v12 = v10 + 32 * v11;
            do
            {
              v13 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v10);
              v14 = v10 + 16;
              v10 += 32;
              sub_182CBA0(v13, v14);
            }
            while ( v10 != v12 );
            v10 = *v7;
          }
          sub_186B220((void *)(v10 - 8));
        }
        ++v7;
      }
      while ( v7 != v9 );
      a3 = v114;
      v7 = (_QWORD *)*v116;
    }
    *((_DWORD *)v7 - 1) = 0;
  }
  v15 = v116[1];
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 )
    {
      v17 = v15 + 32 * v16;
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v19 = v15 + 16;
        v15 += 32LL;
        sub_182CBA0(v18, v19);
      }
      while ( v15 != v17 );
      v15 = v116[1];
    }
    *(_DWORD *)(v15 - 4) = 0;
  }
  v20 = v116[2];
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  v21 = 0;
  v115 = (std::chrono::_V2::steady_clock *)(a1 + 40);
  sub_1729EA0(a1 + 40);
  v22 = *(_QWORD **)a3;
  if ( *(_QWORD *)a3 )
  {
    while ( v21 < *((_DWORD *)v22 - 1) )
    {
      v28 = *((_QWORD *)a3 + 1) + 32LL * v21;
      v29 = *(_BYTE *)(*((_QWORD *)a3 + 2) + v21) == 0;
      v30 = qword_1C7F2C0;
      v129[0] = 0;
      if ( v29 )
      {
        LOBYTE(v129[1]) &= 0xFCu;
        BYTE4(v131) &= 0xFCu;
        v130 = 0;
        LODWORD(v131) = 1;
        v132 = 0;
        if ( (*(_BYTE *)(v28 + 4) & 1) != 0 )
        {
          v120 = v28;
          v117 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v129, v28);
          v28 = v120;
          v30 = v117;
        }
        else
        {
          v129[0] = *(_DWORD *)v28;
        }
        if ( (*(_BYTE *)(v28 + 20) & 1) != 0 )
        {
          sub_182C690(v30, &v131, v28 + 16);
        }
        else
        {
          v31 = *(_DWORD *)(v28 + 16);
          BYTE4(v131) &= ~1u;
          LODWORD(v131) = v31;
        }
        sub_1831620(qword_1C7F2C0, v129);
        sub_1728620((int)v115, *(_DWORD *)a3 + 8 * v21, (int)v129, v32, v33, v34, (int)v115, (int)v116, v117);
        v35 = qword_1C7F2C0;
        ++v21;
        sub_182CBA0(qword_1C7F2C0, v129);
        sub_182CBA0(v35, &v131);
        v22 = *(_QWORD **)a3;
        if ( !*(_QWORD *)a3 )
          goto LABEL_35;
      }
      else
      {
        LOBYTE(v129[1]) &= 0xFCu;
        BYTE4(v131) &= 0xFCu;
        v130 = 0;
        LODWORD(v131) = 1;
        v132 = 0;
        if ( (*(_BYTE *)(v28 + 4) & 1) != 0 )
        {
          v119 = v28;
          v117 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v129, v28);
          v28 = v119;
          v30 = v117;
        }
        else
        {
          v129[0] = *(_DWORD *)v28;
        }
        if ( (*(_BYTE *)(v28 + 20) & 1) != 0 )
        {
          sub_182C690(v30, &v131, v28 + 16);
        }
        else
        {
          v23 = *(_DWORD *)(v28 + 16);
          BYTE4(v131) &= ~1u;
          LODWORD(v131) = v23;
        }
        sub_1831620(qword_1C7F2C0, v129);
        sub_1728F40((int)v115, *(_DWORD *)a3 + 8 * v21, (int)v129, v24, v25, v26, (int)v115, (int)v116, v117);
        v27 = qword_1C7F2C0;
        ++v21;
        sub_182CBA0(qword_1C7F2C0, v129);
        sub_182CBA0(v27, &v131);
        v22 = *(_QWORD **)a3;
        if ( !*(_QWORD *)a3 )
          goto LABEL_35;
      }
    }
    v107 = 0;
    do
    {
      if ( !*((_DWORD *)v22 - 1) )
        break;
      v108 = *v22;
      if ( !v108 )
        break;
      if ( v107 >= *(_DWORD *)(v108 - 4) )
        break;
      v109 = v107++;
      sub_1728560(v115, v109);
      v22 = *(_QWORD **)a3;
    }
    while ( *(_QWORD *)a3 );
  }
LABEL_35:
  v36 = sub_172C520(v115);
  if ( v36 == -1 )
    return 0;
  if ( v36 )
  {
    v39 = *(_QWORD *)(a1 + 72);
    if ( v39 )
    {
      v118 = *(_DWORD *)(v39 - 4);
      if ( v118 )
      {
        v123 = 1;
        for ( i = 0; i != v118; ++i )
        {
          v128 = 0;
          sub_17275D0((int)v115, i, (int)&v128, (int)&v127, v37, v38, (int)v115, v116);
          if ( v127 )
          {
            if ( v123 )
            {
              sub_536E30(v116, &v128);
              *(_QWORD *)v129 = 1;
              v130 = 0;
              v131 = 1;
              v132 = 0;
              sub_182CBA0(qword_1C7F2C0, &v131);
              v58 = v116[1];
              BYTE4(v131) &= ~1u;
              LODWORD(v131) = 1;
              if ( !v58 || (v59 = *(unsigned int *)(v58 - 4), (_DWORD)v59 == *(_DWORD *)(v58 - 8)) )
              {
                sub_53D790(v116 + 1);
                v58 = v116[1];
                v59 = *(unsigned int *)(v58 - 4);
              }
              v60 = qword_1C7F2C0;
              v61 = v58 + 32 * v59;
              *(_DWORD *)v61 = v129[0];
              *(_BYTE *)(v61 + 4) = v129[1] & 3 | *(_BYTE *)(v61 + 4) & 0xFC;
              v62 = v130;
              v130 = 0;
              *(_QWORD *)(v61 + 8) = v62;
              *(_DWORD *)(v61 + 16) = v131;
              *(_BYTE *)(v61 + 20) = BYTE4(v131) & 3 | *(_BYTE *)(v61 + 20) & 0xFC;
              v63 = v132;
              v132 = 0;
              *(_QWORD *)(v61 + 24) = v63;
              ++*(_DWORD *)(v58 - 4);
              sub_182CBA0(v60, v129);
              sub_182CBA0(v60, &v131);
              v64 = (_QWORD *)v116[2];
              if ( v64 )
              {
                v65 = *((_DWORD *)v64 - 1);
                if ( v65 == *((_DWORD *)v64 - 2) )
                {
                  v105 = (3 * v65 + 1) >> 1;
                  if ( v65 + 8 >= v105 + 8 || v65 >= v105 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v129, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v129);
                    sub_233E40((__int64)v129);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v106 = (unsigned int *)sub_186B300(v64 - 1, v105 + 8);
                  v64 = v106 + 2;
                  *v106 = v105;
                  v116[2] = (unsigned __int64)(v106 + 2);
                  LODWORD(v106) = v106[1];
                  v68 = (char *)v64 + (unsigned int)v106;
                  v67 = (_DWORD)v106 + 1;
                }
                else
                {
                  v66 = v65;
                  v67 = v65 + 1;
                  v68 = (char *)v64 + v66;
                }
              }
              else
              {
                v113 = (_QWORD *)sub_186B270(0xAu);
                *v113 = 2;
                v64 = v113 + 1;
                v116[2] = (unsigned __int64)(v113 + 1);
                v68 = v113 + 1;
                v67 = 1;
              }
              *v68 = 1;
              *((_DWORD *)v64 - 1) = v67;
            }
            v123 = 0;
          }
          else
          {
            v41 = *v116;
            if ( *v116 )
            {
              LODWORD(v42) = *(_DWORD *)(v41 - 4);
              v43 = (__int64 *)(v41 + 8LL * (unsigned int)v42);
              if ( (_DWORD)v42 == *(_DWORD *)(v41 - 8) )
              {
                v84 = (unsigned int)(3 * v42 + 1) >> 1;
                v85 = 8 * v84 + 8;
                if ( 8 * (int)v42 + 8 >= (unsigned int)v85 || (unsigned int)v42 >= v84 )
                {
                  v5 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v129, "Overflow encountered when expanding vector");
                  *v5 = (char *)off_1C63128;
                  sub_2333C0(v5 + 1, v129);
                  sub_233E40((__int64)v129);
                  __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v86 = (unsigned int *)sub_186B270(v85);
                v41 = (unsigned __int64)(v86 + 2);
                v87 = *v116;
                if ( *v116 )
                {
                  v88 = *(unsigned int *)(v87 - 4);
                  v89 = 8 * v88;
                  v86[1] = v88;
                  v90 = (__int64 *)(v87 + 8 * v88);
                  if ( (__int64 *)v87 != v90 )
                  {
                    v91 = (__int64 *)v87;
                    if ( (unsigned __int64)(v89 - 8) <= 8 || v41 < v87 + 16 && v87 < (unsigned __int64)(v86 + 6) )
                    {
                      v110 = v86 + 2;
                      do
                      {
                        v111 = *v91;
                        *v91++ = 0;
                        v110 += 2;
                        *((_QWORD *)v110 - 1) = v111;
                      }
                      while ( v90 != v91 );
                    }
                    else
                    {
                      v92 = 0;
                      v93 = ((unsigned __int64)(v89 - 8) >> 3) + 1;
                      do
                      {
                        v94 = _mm_loadu_si128((const __m128i *)(v87 + v92 * 4));
                        *(_OWORD *)(v87 + v92 * 4) = 0;
                        *(__m128i *)&v86[v92 + 2] = v94;
                        v92 += 4;
                      }
                      while ( v92 != 4 * (v93 >> 1) );
                      if ( (v93 & 1) != 0 )
                      {
                        v95 = v93 & 0xFFFFFFFFFFFFFFFELL;
                        v96 = (__int64 *)(v87 + 8 * v95);
                        v97 = *v96;
                        *v96 = 0;
                        *(_QWORD *)(v41 + 8 * v95) = v97;
                      }
                    }
                  }
                  if ( (_DWORD)v88 )
                  {
                    v125 = v86;
                    v126 = v86 + 2;
                    v124 = v84;
                    v98 = (__int64 *)v87;
                    v99 = (__int64 *)(v87 + 8 * v88);
                    do
                    {
                      v100 = *v98;
                      if ( *v98 )
                      {
                        v101 = *(unsigned int *)(v100 - 4);
                        if ( (_DWORD)v101 )
                        {
                          v102 = v100 + 32 * v101;
                          do
                          {
                            v103 = qword_1C7F2C0;
                            sub_182CBA0(qword_1C7F2C0, v100);
                            v104 = v100 + 16;
                            v100 += 32;
                            sub_182CBA0(v103, v104);
                          }
                          while ( v102 != v100 );
                          v100 = *v98;
                        }
                        sub_186B220((void *)(v100 - 8));
                      }
                      ++v98;
                    }
                    while ( v99 != v98 );
                    v84 = v124;
                    v86 = v125;
                    v41 = (unsigned __int64)v126;
                    v87 = *v116;
                  }
                  sub_186B220((void *)(v87 - 8));
                  v42 = v86[1];
                  v43 = (__int64 *)(v41 + 8 * v42);
                }
                else
                {
                  v86[1] = 0;
                  v43 = (__int64 *)(v86 + 2);
                  LODWORD(v42) = 0;
                }
                *v86 = v84;
                *v116 = v41;
              }
            }
            else
            {
              v42 = sub_186B270(0x18u);
              v41 = v42 + 8;
              *(_QWORD *)v42 = 2;
              v43 = (__int64 *)(v42 + 8);
              *v116 = v42 + 8;
              LODWORD(v42) = 0;
            }
            v44 = v128;
            *v43 = 0;
            if ( v44 )
            {
              v45 = *(_DWORD *)(v44 - 4);
              v122 = *(_DWORD *)(v44 - 8);
              v46 = sub_186B270(32LL * v122 + 8) + 8;
              *(_QWORD *)(v46 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v122), _mm_cvtsi32_si128(v45)).m128i_u64[0];
              *v43 = v46;
              v47 = v128;
              if ( !v128 || (v48 = v128 + 32LL * *(unsigned int *)(v128 - 4), v128 == v48) )
              {
                v41 = *v116;
                LODWORD(v42) = *(_DWORD *)(*v116 - 4);
                goto LABEL_74;
              }
              v49 = v46;
              while ( 1 )
              {
                *(_BYTE *)(v49 + 4) &= 0xFCu;
                v51 = qword_1C7F2C0;
                *(_BYTE *)(v49 + 20) &= 0xFCu;
                *(_DWORD *)v49 = 0;
                *(_QWORD *)(v49 + 8) = 0;
                *(_DWORD *)(v49 + 16) = 1;
                *(_QWORD *)(v49 + 24) = 0;
                if ( (*(_BYTE *)(v47 + 4) & 1) != 0 )
                {
                  sub_182C690(v51, v49, v47);
                  if ( (*(_BYTE *)(v47 + 20) & 1) == 0 )
                  {
LABEL_48:
                    v50 = *(_DWORD *)(v47 + 16);
                    v47 += 32;
                    *(_BYTE *)(v49 + 20) &= ~1u;
                    v49 += 32;
                    *(_DWORD *)(v49 - 16) = v50;
                    if ( v48 == v47 )
                      goto LABEL_52;
                    continue;
                  }
                }
                else
                {
                  *(_DWORD *)v49 = *(_DWORD *)v47;
                  if ( (*(_BYTE *)(v47 + 20) & 1) == 0 )
                    goto LABEL_48;
                }
                sub_182C690(v51, v49 + 16, v47 + 16);
                v47 += 32;
                v49 += 32;
                if ( v48 == v47 )
                {
LABEL_52:
                  v41 = *v116;
                  LODWORD(v42) = *(_DWORD *)(*v116 - 4);
                  break;
                }
              }
            }
LABEL_74:
            v69 = qword_1C7F2C0;
            *(_DWORD *)(v41 - 4) = v42 + 1;
            *(_QWORD *)v129 = 0;
            v130 = 0;
            v131 = 1;
            v132 = 0;
            sub_182CBA0(v69, &v131);
            BYTE4(v131) &= ~1u;
            LODWORD(v131) = 1;
            v70 = v116[1];
            if ( !v70 || (v71 = *(unsigned int *)(v70 - 4), (_DWORD)v71 == *(_DWORD *)(v70 - 8)) )
            {
              sub_53D790(v116 + 1);
              v70 = v116[1];
              v71 = *(unsigned int *)(v70 - 4);
            }
            v72 = qword_1C7F2C0;
            v73 = v70 + 32 * v71;
            *(_DWORD *)v73 = v129[0];
            *(_BYTE *)(v73 + 4) = v129[1] & 3 | *(_BYTE *)(v73 + 4) & 0xFC;
            v74 = v130;
            v130 = 0;
            *(_QWORD *)(v73 + 8) = v74;
            *(_DWORD *)(v73 + 16) = v131;
            *(_BYTE *)(v73 + 20) = BYTE4(v131) & 3 | *(_BYTE *)(v73 + 20) & 0xFC;
            v75 = v132;
            v132 = 0;
            *(_QWORD *)(v73 + 24) = v75;
            ++*(_DWORD *)(v70 - 4);
            sub_182CBA0(v72, v129);
            sub_182CBA0(v72, &v131);
            v76 = (_QWORD *)v116[2];
            if ( v76 )
            {
              v77 = *((_DWORD *)v76 - 1);
              if ( v77 == *((_DWORD *)v76 - 2) )
              {
                v81 = (3 * v77 + 1) >> 1;
                v82 = v81 + 8;
                if ( v77 + 8 >= (unsigned int)v82 || v77 >= v81 )
                {
                  v4 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v129, "Overflow encountered when expanding vector");
                  *v4 = (char *)off_1C63128;
                  sub_2333C0(v4 + 1, v129);
                  sub_233E40((__int64)v129);
                  __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v83 = (unsigned int *)sub_186B300(v76 - 1, v82);
                v76 = v83 + 2;
                *v83 = v81;
                v116[2] = (unsigned __int64)(v83 + 2);
                LODWORD(v83) = v83[1];
                v80 = (char *)v76 + (unsigned int)v83;
                v79 = (_DWORD)v83 + 1;
              }
              else
              {
                v78 = v77;
                v79 = v77 + 1;
                v80 = (char *)v76 + v78;
              }
            }
            else
            {
              v112 = (_QWORD *)sub_186B270(0xAu);
              v76 = v112 + 1;
              *v112 = 2;
              v80 = v112 + 1;
              v116[2] = (unsigned __int64)(v112 + 1);
              v79 = 1;
            }
            *v80 = 1;
            *((_DWORD *)v76 - 1) = v79;
          }
          v52 = v128;
          if ( v128 )
          {
            v53 = *(unsigned int *)(v128 - 4);
            if ( (_DWORD)v53 )
            {
              v54 = v128 + 32 * v53;
              do
              {
                v55 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v52);
                v56 = v52 + 16;
                v52 += 32;
                sub_182CBA0(v55, v56);
              }
              while ( v54 != v52 );
              v52 = v128;
            }
            sub_186B220((void *)(v52 - 8));
          }
        }
      }
    }
  }
  return 1;
}

