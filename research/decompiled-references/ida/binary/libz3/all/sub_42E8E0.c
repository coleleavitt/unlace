__int64 __fastcall sub_42E8E0(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  char **v6; // rbp
  char **exception; // r12
  std::chrono::_V2::steady_clock *v9; // rdi
  std::chrono::_V2::steady_clock **v10; // r13
  __int64 *v11; // rbx
  std::chrono::_V2::steady_clock *v12; // rdx
  unsigned int v13; // r12d
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  std::chrono::_V2::steady_clock *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  bool v22; // zf
  __int64 v23; // r8
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // r12
  void *v27; // r13
  int v28; // eax
  void *v29; // r15
  void *v30; // r13
  char v31; // al
  void *v32; // r15
  char v33; // r13
  void *v34; // r15
  void *v35; // r15
  char v36; // al
  void *v37; // r15
  char v38; // r13
  __int64 v39; // r15
  __int64 v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rsi
  unsigned __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // r15
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // rsi
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rsi
  void *v54; // r13
  __int64 result; // rax
  unsigned int v56; // r8d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rsi
  _QWORD *v60; // rdx
  _QWORD *v61; // rsi
  _QWORD *v62; // r9
  __int64 v63; // r8
  char v64; // al
  int v65; // ecx
  __int64 v66; // r15
  char *v67; // rax
  __int64 *v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v70; // r10
  __int64 v71; // rdx
  __int64 *v72; // r15
  __int64 *v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 *v76; // rdi
  __int64 v77; // rdx
  char *v78; // rcx
  char *v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rax
  __int64 v82; // r11
  unsigned int v83; // r15d
  unsigned int v84; // edx
  unsigned int *v85; // rax
  __int64 v86; // rdx
  std::chrono::_V2::steady_clock *v87; // rbp
  __int64 v88; // rsi
  __int64 *v89; // rbp
  unsigned __int64 v90; // r12
  __int64 v91; // rsi
  __int64 *v92; // rbp
  __int64 *v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rax
  char *v96; // rax
  __int64 v97; // rdx
  void *v98; // rbp
  _QWORD *v99; // rcx
  int v100; // [rsp+0h] [rbp-1D8h]
  __int64 v101; // [rsp+8h] [rbp-1D0h]
  __int64 *v102; // [rsp+10h] [rbp-1C8h]
  _QWORD *v103; // [rsp+28h] [rbp-1B0h]
  __int64 v104; // [rsp+28h] [rbp-1B0h]
  __int64 v105; // [rsp+28h] [rbp-1B0h]
  __int64 v106; // [rsp+28h] [rbp-1B0h]
  unsigned int v107; // [rsp+38h] [rbp-1A0h]
  __int64 *v108; // [rsp+38h] [rbp-1A0h]
  __int64 v110; // [rsp+48h] [rbp-190h]
  _QWORD *v111; // [rsp+50h] [rbp-188h]
  std::chrono::_V2::steady_clock *v112; // [rsp+60h] [rbp-178h]
  _QWORD *v113; // [rsp+68h] [rbp-170h]
  __int64 *v114; // [rsp+70h] [rbp-168h]
  std::chrono::_V2::steady_clock *v115; // [rsp+78h] [rbp-160h]
  std::chrono::_V2::steady_clock *v116; // [rsp+90h] [rbp-148h] BYREF
  _QWORD *v117; // [rsp+98h] [rbp-140h]
  __int64 v118; // [rsp+A0h] [rbp-138h] BYREF
  std::chrono::_V2::steady_clock *v119; // [rsp+A8h] [rbp-130h]
  _QWORD v120[2]; // [rsp+B0h] [rbp-128h] BYREF
  _QWORD v121[2]; // [rsp+C0h] [rbp-118h] BYREF
  _QWORD v122[2]; // [rsp+D0h] [rbp-108h] BYREF
  _QWORD v123[2]; // [rsp+E0h] [rbp-F8h] BYREF
  _QWORD v124[2]; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v125[2]; // [rsp+100h] [rbp-D8h] BYREF
  void *ptr; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+118h] [rbp-C0h]
  __int64 v128; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v129; // [rsp+128h] [rbp-B0h]

  if ( !*(_BYTE *)(a1 + 40) )
  {
    v95 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = v95;
  }
  v9 = (std::chrono::_V2::steady_clock *)*a2;
  if ( *(char *)(*(_QWORD *)(*a2 + 80) + 78LL) >= 0 )
    goto LABEL_81;
  v10 = (std::chrono::_V2::steady_clock **)sub_4095A0((__int64)v9, (__int64)a2, a3, a4, a5, a6);
  v11 = nullptr;
  v12 = v10[1];
  v112 = *v10;
  if ( v12 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= *((_DWORD *)v12 - 1) )
        break;
      v14 = *((_QWORD *)v12 + v13);
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      if ( v11 )
      {
        v15 = *((_DWORD *)v11 - 1);
        if ( v15 == *((_DWORD *)v11 - 2) )
        {
          v83 = (3 * v15 + 1) >> 1;
          v84 = 8 * v83 + 8;
          if ( 8 * v15 + 8 >= v84 || v15 >= v83 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &ptr);
            sub_233E40((__int64)&ptr);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v85 = (unsigned int *)sub_186B300(v11 - 1, v84);
          v86 = v85[1];
          v11 = (__int64 *)(v85 + 2);
          *v85 = v83;
          LODWORD(v85) = v86;
          v18 = &v11[v86];
          v12 = v10[1];
          v17 = (_DWORD)v85 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = &v11[v16];
        }
      }
      else
      {
        v99 = (_QWORD *)sub_186B270(0x18u);
        *v99 = 2;
        v12 = v10[1];
        v17 = 1;
        v18 = v99 + 1;
        v11 = v18;
      }
      *v18 = v14;
      ++v13;
      *((_DWORD *)v11 - 1) = v17;
    }
    while ( v12 );
  }
  v117 = nullptr;
  v19 = *(std::chrono::_V2::steady_clock **)(a1 + 48);
  v118 = 0;
  v115 = v19;
  v116 = v19;
  v119 = v19;
  v120[0] = 0;
  v120[1] = 0;
  v121[0] = 1;
  v121[1] = 0;
  if ( v11 )
  {
    v20 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v20 )
    {
      v102 = v11;
      v114 = &v11[v20];
      v101 = 0;
      while ( 1 )
      {
        v21 = v101;
        v101 = *v102;
        if ( *v102 )
          ++*(_DWORD *)(*v102 + 8);
        if ( v21 )
        {
          v22 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v115, v21);
        }
        v23 = *(_QWORD *)(a1 + 48);
        if ( *(_QWORD *)(v23 + 856) == v101 )
          goto LABEL_16;
        if ( !(unsigned __int8)sub_42C790(v101, &ptr, (__int64)v120, (__int64)v124, v23) )
          goto LABEL_16;
        v26 = *(_QWORD *)(a1 + 72);
        if ( !v26 )
          goto LABEL_16;
        v110 = v26 + 32LL * *(unsigned int *)(v26 - 4);
        if ( v110 == v26 )
          goto LABEL_16;
        while ( 1 )
        {
          v122[0] = 0;
          v27 = qword_1C7F2C0;
          v122[1] = 0;
          v123[0] = 1;
          v123[1] = 0;
          if ( (*(_BYTE *)(v26 + 4) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v122, v26);
          else
            LODWORD(v122[0]) = *(_DWORD *)v26;
          if ( (*(_BYTE *)(v26 + 20) & 1) != 0 )
          {
            sub_182C690(v27, v123, v26 + 16);
          }
          else
          {
            v28 = *(_DWORD *)(v26 + 16);
            BYTE4(v123[0]) &= ~1u;
            LODWORD(v123[0]) = v28;
          }
          ptr = nullptr;
          v29 = qword_1C7F2C0;
          v127 = 0;
          v128 = 1;
          v129 = 0;
          if ( (v122[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &ptr, v122);
          else
            LODWORD(ptr) = v122[0];
          if ( (v123[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v29, &v128, v123);
          }
          else
          {
            BYTE4(v128) &= ~1u;
            LODWORD(v128) = v123[0];
          }
          v124[0] = 0;
          v30 = qword_1C7F2C0;
          v124[1] = 0;
          v125[0] = 1;
          v125[1] = 0;
          if ( (v120[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, v124, v120);
          else
            LODWORD(v124[0]) = v120[0];
          if ( (v121[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v30, v125, v121);
          }
          else
          {
            BYTE4(v125[0]) &= ~1u;
            LODWORD(v125[0]) = v121[0];
          }
          v31 = sub_42E520(a1, v101, (__int64)v124, (__int64)&ptr, v24, v25);
          v32 = qword_1C7F2C0;
          v33 = v31;
          sub_182CBA0(qword_1C7F2C0, v124);
          sub_182CBA0(v32, v125);
          v34 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &ptr);
          sub_182CBA0(v34, &v128);
          v35 = qword_1C7F2C0;
          if ( !v33 )
          {
            sub_182CBA0(qword_1C7F2C0, v122);
            sub_182CBA0(v35, v123);
            goto LABEL_77;
          }
          ++*(_DWORD *)(a1 + 16);
          ptr = nullptr;
          v127 = 0;
          v128 = 1;
          v129 = 0;
          if ( (v122[0] & 0x100000000LL) != 0 )
            sub_182C690(v35, &ptr, v122);
          else
            LODWORD(ptr) = v122[0];
          if ( (v123[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v35, &v128, v123);
          }
          else
          {
            BYTE4(v128) &= ~1u;
            LODWORD(v128) = v123[0];
          }
          v36 = sub_42C860(v101, (__int64)&ptr, &v118, 0);
          v37 = qword_1C7F2C0;
          v38 = v36;
          sub_182CBA0(qword_1C7F2C0, &ptr);
          sub_182CBA0(v37, &v128);
          if ( !v38 )
          {
            sub_1872CE0("");
            sub_1873130(114, 137);
          }
          v39 = v118;
          if ( v118 )
            ++*(_DWORD *)(v118 + 8);
          v40 = *v102;
          if ( *v102 )
          {
            v22 = (*(_DWORD *)(v40 + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v112, v40);
          }
          *v102 = v39;
          v41 = v117;
          v42 = v117;
          if ( v117 )
          {
            v43 = (unsigned __int64)&v117[*((unsigned int *)v117 - 1)];
            if ( (unsigned __int64)v117 >= v43 )
              goto LABEL_58;
            do
            {
              while ( 1 )
              {
                v44 = *v41;
                if ( *v41 )
                {
                  v22 = (*(_DWORD *)(v44 + 8))-- == 1;
                  if ( v22 )
                    break;
                }
                if ( (unsigned __int64)++v41 >= v43 )
                  goto LABEL_57;
              }
              v103 = v41;
              sub_15D7BC0(v116, v44);
              v41 = v103 + 1;
            }
            while ( (unsigned __int64)(v103 + 1) < v43 );
LABEL_57:
            v42 = v117;
            if ( v117 )
LABEL_58:
              *((_DWORD *)v42 - 1) = 0;
          }
          if ( *((_DWORD *)v11 - 1) )
          {
            v45 = *v11;
            v46 = v42;
            if ( *v11 )
              ++*(_DWORD *)(v45 + 8);
            if ( !v42 )
            {
              v47 = (_QWORD *)sub_186B270(0x18u);
              v46 = v47 + 1;
              v117 = v47 + 1;
              v48 = v47 + 1;
              *v47 = 2;
              v49 = 0;
              v50 = 1;
              goto LABEL_64;
            }
            v51 = 0;
            while ( 1 )
            {
              v52 = *((_DWORD *)v46 - 1);
              if ( v52 == *((_DWORD *)v46 - 2) )
              {
                v56 = (3 * v52 + 1) >> 1;
                v57 = 8 * v56 + 8;
                if ( 8 * v52 + 8 >= (unsigned int)v57 || v52 >= v56 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, &ptr);
                  sub_233E40((__int64)&ptr);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v107 = (3 * v52 + 1) >> 1;
                v104 = v51;
                v58 = (unsigned int *)sub_186B300(v46 - 1, v57);
                v59 = v58[1];
                v46 = v58 + 2;
                v117 = v58 + 2;
                v49 = v104;
                *v58 = v107;
                LODWORD(v58) = v59;
                v48 = &v46[v59];
                v50 = (_DWORD)v58 + 1;
LABEL_64:
                *v48 = v45;
                v51 = v49 + 1;
                *((_DWORD *)v46 - 1) = v50;
                if ( (unsigned int)v51 >= *((_DWORD *)v11 - 1) )
                  break;
              }
              else
              {
                ++v51;
                v46[v52] = v45;
                *((_DWORD *)v46 - 1) = v52 + 1;
                if ( (unsigned int)v51 >= *((_DWORD *)v11 - 1) )
                  break;
              }
              v45 = v11[v51];
              if ( v45 )
                ++*(_DWORD *)(v45 + 8);
            }
          }
          LODWORD(ptr) = 0;
          if ( (unsigned __int8)sub_40A830(
                                  *(_QWORD **)(*(_QWORD *)(*a2 + 80) + 16LL),
                                  *(_DWORD *)(*a2 + 96),
                                  (__int64)&v116,
                                  &ptr,
                                  *(unsigned __int16 *)(*a2 + 106)) )
            break;
          if ( v101 )
            ++*(_DWORD *)(v101 + 8);
          v53 = *v102;
          if ( *v102 )
          {
            v22 = (*(_DWORD *)(v53 + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v112, v53);
          }
          *v102 = v101;
LABEL_76:
          v54 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v122);
          sub_182CBA0(v54, v123);
LABEL_77:
          v26 += 32;
          if ( v110 == v26 )
            goto LABEL_16;
        }
        ++*(_DWORD *)(a1 + 20);
        sub_40ABA0(*a2, *a2 + 80, (__int64)&v116);
        sub_3FE9B0(*a2, (unsigned int)ptr);
        v60 = v117;
        ptr = &v128;
        v127 = 0x1000000000LL;
        if ( v117 )
        {
          v61 = &v117[*((unsigned int *)v117 - 1)];
          if ( v61 != v117 )
          {
            do
            {
              v63 = *v60;
              v64 = *(_BYTE *)(*v60 + 6LL);
              if ( (v64 & 1) == 0 )
              {
                *(_BYTE *)(v63 + 6) = v64 | 1;
                v65 = v127;
                if ( (unsigned int)v127 < HIDWORD(v127) )
                {
                  v62 = ptr;
                }
                else
                {
                  v111 = v60;
                  v66 = (unsigned int)(2 * HIDWORD(v127));
                  v105 = v63;
                  v67 = (char *)sub_186B270(8 * v66);
                  v65 = v127;
                  v68 = (__int64 *)ptr;
                  v62 = v67;
                  v63 = v105;
                  v60 = v111;
                  if ( (_DWORD)v127 )
                  {
                    if ( (unsigned int)(v127 - 1) <= 2 || v67 == (char *)ptr + 8 )
                    {
                      v81 = 0;
                      v82 = 8LL * (unsigned int)v127;
                      do
                      {
                        v62[v81 / 8] = v68[v81 / 8];
                        v81 += 8LL;
                      }
                      while ( v81 != v82 );
                    }
                    else
                    {
                      v69 = 0;
                      v70 = 16LL * ((unsigned int)v127 >> 1);
                      do
                      {
                        *(__m128i *)&v62[v69 / 8] = _mm_loadu_si128((const __m128i *)&v68[v69 / 8]);
                        v69 += 16LL;
                      }
                      while ( v70 != v69 );
                      if ( (v65 & 1) != 0 )
                        v62[v65 & 0xFFFFFFFE] = v68[v65 & 0xFFFFFFFE];
                    }
                  }
                  if ( v68 != &v128 && v68 )
                  {
                    v113 = v62;
                    sub_186B220(v68);
                    v65 = v127;
                    v62 = v113;
                    v60 = v111;
                    v63 = v105;
                  }
                  ptr = v62;
                  HIDWORD(v127) = v66;
                }
                v62[v65] = v63;
                LODWORD(v127) = v65 + 1;
              }
              ++v60;
            }
            while ( v61 != v60 );
          }
        }
        v71 = *((unsigned int *)v11 - 1);
        v72 = v11;
        v73 = &v11[v71];
        if ( (_DWORD)v71 )
        {
          do
          {
            while ( 1 )
            {
              v74 = *v72;
              if ( (*(_BYTE *)(*v72 + 6) & 1) == 0 )
                break;
              if ( ++v72 == v73 )
                goto LABEL_123;
            }
            v75 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 856LL);
            if ( v75 )
              ++*(_DWORD *)(v75 + 8);
            v22 = (*(_DWORD *)(v74 + 8))-- == 1;
            if ( v22 )
            {
              v108 = v73;
              v106 = v75;
              sub_15D7BC0(v112, v74);
              v73 = v108;
              v75 = v106;
            }
            *v72++ = v75;
          }
          while ( v72 != v73 );
        }
LABEL_123:
        v76 = (__int64 *)ptr;
        v77 = 8LL * (unsigned int)v127;
        v78 = (char *)ptr + v77;
        if ( (*(_BYTE *)(v118 + 6) & 1) != 0 )
          break;
        v96 = (char *)ptr;
        if ( ptr != v78 )
        {
          do
          {
            v97 = *(_QWORD *)v96;
            v96 += 8;
            *(_BYTE *)(v97 + 6) &= ~1u;
          }
          while ( v78 != v96 );
        }
        LODWORD(v127) = 0;
        if ( v76 && v76 != &v128 )
          sub_186B220(v76);
        v98 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v122);
        sub_182CBA0(v98, v123);
LABEL_16:
        if ( v114 == ++v102 )
          goto LABEL_137;
      }
      v79 = (char *)ptr;
      if ( v77 )
      {
        do
        {
          v80 = *(_QWORD *)v79;
          v79 += 8;
          *(_BYTE *)(v80 + 6) &= ~1u;
        }
        while ( v78 != v79 );
      }
      LODWORD(v127) = 0;
      if ( v76 && v76 != &v128 )
        sub_186B220(v76);
      goto LABEL_76;
    }
  }
  v101 = 0;
LABEL_137:
  *(_BYTE *)(*(_QWORD *)(*a2 + 80) + 78LL) &= ~0x80u;
  v87 = (std::chrono::_V2::steady_clock *)qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v120);
  v9 = v87;
  result = sub_182CBA0(v87, v121);
  v88 = v118;
  if ( v118 )
  {
    v9 = v119;
    v22 = (*(_DWORD *)(v118 + 8))-- == 1;
    if ( v22 )
      result = sub_15D7BC0(v9, v88);
  }
  if ( v101 )
  {
    v100 = *(_DWORD *)(v101 + 8);
    result = (unsigned int)(v100 - 1);
    *(_DWORD *)(v101 + 8) = result;
    if ( v100 == 1 )
    {
      v9 = v115;
      result = sub_15D7BC0(v115, v101);
    }
  }
  v89 = v117;
  if ( v117 )
  {
    result = *((unsigned int *)v117 - 1);
    v90 = (unsigned __int64)&v117[result];
    if ( (unsigned __int64)v117 >= v90 )
      goto LABEL_151;
    do
    {
      while ( 1 )
      {
        v91 = *v89;
        if ( *v89 )
        {
          v22 = (*(_DWORD *)(v91 + 8))-- == 1;
          v9 = v116;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v89 >= v90 )
          goto LABEL_150;
      }
      result = sub_15D7BC0(v116, v91);
      ++v89;
    }
    while ( (unsigned __int64)v89 < v90 );
LABEL_150:
    v89 = v117;
    if ( v117 )
    {
LABEL_151:
      v9 = (std::chrono::_V2::steady_clock *)(v89 - 1);
      result = sub_186B220(v89 - 1);
    }
  }
  if ( v11 )
  {
    v92 = v11;
    v93 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 < v93 )
    {
      do
      {
        v94 = *v92;
        if ( *v92 )
        {
          v22 = (*(_DWORD *)(v94 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v112, v94);
        }
        ++v92;
      }
      while ( v92 < v93 );
    }
    v9 = (std::chrono::_V2::steady_clock *)(v11 - 1);
    result = sub_186B220(v11 - 1);
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
LABEL_81:
    result = std::chrono::_V2::steady_clock::now(v9) - *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 32) += result;
    *(_BYTE *)(a1 + 40) = 0;
  }
  return result;
}

