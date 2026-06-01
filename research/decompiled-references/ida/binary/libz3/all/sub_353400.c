__int64 __fastcall sub_353400(__int64 a1, __m128i *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __m128i *v5; // r12
  unsigned __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  int v13; // ebx
  std::ios_base *v14; // rax
  unsigned int v15; // r13d
  unsigned int v17; // r13d
  unsigned int v18; // edx
  unsigned int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  int *v22; // r13
  int *v23; // rbp
  __m128i *v24; // rbx
  int v25; // r10d
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned __int64 v30; // rdx
  char *v31; // rbp
  char k; // al
  char *m; // r13
  char *v34; // r12
  char v35; // al
  __int64 *v36; // r12
  int *v37; // rbp
  int **v38; // r13
  char v39; // al
  unsigned __int64 v40; // r12
  int **v41; // rbp
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 *v45; // r12
  __int64 *v46; // r13
  unsigned int v47; // eax
  unsigned int v48; // r8d
  unsigned int v49; // edx
  unsigned int *v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // rbx
  char *v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // esi
  unsigned int v59; // ecx
  __int64 v60; // r9
  char *v61; // rcx
  __int64 v62; // r9
  char *v63; // rdi
  char *v64; // rbp
  __int64 v65; // rax
  void *v66; // rbx
  _QWORD *v67; // rax
  __int64 v68; // rax
  void *v69; // r12
  void *v70; // r12
  int v71; // eax
  __int64 *v72; // rbp
  __int64 v73; // r9
  __int64 v74; // rax
  char *v75; // rcx
  int v76; // edi
  unsigned int v77; // edx
  char *v78; // rsi
  __int64 v79; // rdx
  char *v80; // r8
  char *j; // r12
  __int64 v82; // rax
  void *v83; // rbx
  void *v84; // rbp
  void *v85; // rbp
  unsigned int v86; // eax
  std::ios_base *v87; // rax
  _QWORD *v88; // r13
  __int64 v89; // rdi
  void (***v90)(void); // rdi
  __int64 v91; // rax
  void *v92; // rdi
  int v93; // eax
  void *v94; // r12
  bool v95; // al
  void *v96; // r12
  __int64 v97; // rdi
  _QWORD *v98; // rbx
  __int64 v99; // rdi
  void (***v100)(void); // rdi
  char v101; // al
  char *n; // r12
  int **v103; // r13
  char v104; // al
  char **exception; // r12
  char **v106; // r12
  _DWORD *v107; // [rsp+0h] [rbp-108h]
  unsigned int v108; // [rsp+0h] [rbp-108h]
  int *v109; // [rsp+0h] [rbp-108h]
  __m128i *v110; // [rsp+8h] [rbp-100h]
  int v111[2]; // [rsp+18h] [rbp-F0h]
  char *v112; // [rsp+20h] [rbp-E8h]
  unsigned int i; // [rsp+20h] [rbp-E8h]
  void *v114; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+40h] [rbp-C8h] BYREF
  int v116[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v117; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v118; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v119; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v120; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v121[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v122; // [rsp+80h] [rbp-88h] BYREF
  __int64 v123; // [rsp+88h] [rbp-80h] BYREF
  int v124; // [rsp+90h] [rbp-78h] BYREF
  char v125; // [rsp+94h] [rbp-74h]
  __int64 v126; // [rsp+98h] [rbp-70h]
  __int64 v127; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v128; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v129; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v131; // [rsp+C0h] [rbp-48h]

  v3 = a2->m128i_i64[0];
  v4 = a2->m128i_i64[1];
  *(_QWORD *)v111 = a2->m128i_i64[0];
  v121[0] = a2->m128i_i64[0];
  if ( v4 )
  {
    v5 = a2;
    v6 = 0;
    v7 = 0;
    while ( v7 < *(_DWORD *)(v4 - 4) )
    {
      v8 = *(_QWORD *)(v4 + 8LL * v7);
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      if ( v6 )
      {
        v9 = *(_DWORD *)(v6 - 4);
        if ( v9 == *(_DWORD *)(v6 - 8) )
        {
          v17 = (3 * v9 + 1) >> 1;
          v18 = 8 * v17 + 8;
          if ( 8 * v9 + 8 >= v18 || v9 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v127, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v127);
            sub_233E40((__int64)&v127);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          a2 = (__m128i *)v18;
          v19 = (unsigned int *)sub_186B300((void *)(v6 - 8), v18);
          v20 = v19[1];
          v6 = (unsigned __int64)(v19 + 2);
          *v19 = v17;
          LODWORD(v19) = v20;
          v12 = (_QWORD *)(v6 + 8 * v20);
          v4 = v5->m128i_i64[1];
          v11 = (_DWORD)v19 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = (_QWORD *)(v6 + 8 * v10);
        }
      }
      else
      {
        v67 = (_QWORD *)sub_186B270(0x18u);
        v6 = (unsigned __int64)(v67 + 1);
        *v67 = 2;
        v4 = v5->m128i_i64[1];
        v11 = 1;
        v12 = (_QWORD *)v6;
      }
      *v12 = v8;
      ++v7;
      *(_DWORD *)(v6 - 4) = v11;
      if ( !v4 )
      {
        if ( !*(_BYTE *)(a1 + 533) )
          goto LABEL_11;
LABEL_18:
        v21 = *(unsigned int *)(v6 - 4);
        if ( (_DWORD)v21 )
        {
          v22 = (int *)v6;
          v23 = (int *)(v6 + 8 * v21);
          v24 = nullptr;
          do
          {
            a2 = (__m128i *)v22;
            src = v24;
            sub_349180(&src, v22);
            v22 += 2;
            v24 = (__m128i *)src;
          }
          while ( v23 != v22 );
          v25 = *(_DWORD *)(v6 - 4);
          v123 = 0;
          v122 = *(_QWORD *)v111;
          if ( v25 )
          {
            v26 = 0;
            do
            {
              v27 = *(_QWORD *)(v6 + 8 * v26);
              *(_QWORD *)v116 = v27;
              if ( v27 )
                ++*(_DWORD *)(v27 + 8);
              a2 = (__m128i *)v116;
              sub_349180(&v123, v116);
              v28 = *(unsigned int *)(v6 - 4);
              ++v26;
            }
            while ( (unsigned int)v26 < (unsigned int)v28 );
            if ( v24 )
            {
              v29 = 8LL * v24[-1].m128i_u32[3];
              v112 = &v24->m128i_i8[v29];
              if ( v24 != (__m128i *)&v24->m128i_i8[v29] )
                goto LABEL_28;
LABEL_44:
              v40 = v6 + 8 * v28;
              if ( v6 >= v40 )
              {
                *(_DWORD *)(v6 - 4) = 0;
                goto LABEL_51;
              }
LABEL_45:
              v41 = (int **)v6;
              do
              {
                while ( 1 )
                {
                  a2 = (__m128i *)*v41;
                  if ( *v41 )
                  {
                    if ( a2->m128i_i32[2]-- == 1 )
                      break;
                  }
                  if ( (unsigned __int64)++v41 >= v40 )
                    goto LABEL_50;
                }
                sub_15D7BC0(*(_QWORD *)v111, a2);
                ++v41;
              }
              while ( (unsigned __int64)v41 < v40 );
LABEL_50:
              *(_DWORD *)(v6 - 4) = 0;
              if ( v24 )
              {
LABEL_51:
                v43 = v24[-1].m128i_u32[3];
                if ( (_DWORD)v43 )
                {
                  v44 = v24->m128i_i64[0];
                  v45 = (__int64 *)v24;
                  v46 = &v24->m128i_i64[v43];
                  if ( v24->m128i_i64[0] )
                    goto LABEL_56;
                  while ( 1 )
                  {
                    v47 = *(_DWORD *)(v6 - 4);
                    if ( v47 == *(_DWORD *)(v6 - 8) )
                    {
                      v48 = (3 * v47 + 1) >> 1;
                      v49 = 8 * v48 + 8;
                      if ( 8 * v47 + 8 >= v49 || v47 >= v48 )
                      {
                        v106 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(&v127, "Overflow encountered when expanding vector");
                        *v106 = (char *)off_1C63128;
                        sub_2333C0(v106 + 1, &v127);
                        sub_233E40((__int64)&v127);
                        __cxa_throw(
                          v106,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      a2 = (__m128i *)v49;
                      v108 = (3 * v47 + 1) >> 1;
                      v50 = (unsigned int *)sub_186B300((void *)(v6 - 8), v49);
                      v51 = v50[1];
                      v6 = (unsigned __int64)(v50 + 2);
                      ++v45;
                      *v50 = v108;
                      *(_QWORD *)&v50[2 * v51 + 2] = v44;
                      v50[1] = v51 + 1;
                      if ( v46 == v45 )
                        break;
                    }
                    else
                    {
                      ++v45;
                      *(_QWORD *)(v6 + 8LL * v47) = v44;
                      *(_DWORD *)(v6 - 4) = v47 + 1;
                      if ( v46 == v45 )
                        break;
                    }
                    v44 = *v45;
                    if ( *v45 )
LABEL_56:
                      ++*(_DWORD *)(v44 + 8);
                  }
                }
                sub_2334C0(&v122);
                v52 = &v24[-1].m128i_i64[1];
                sub_186B220(&v24[-1].m128i_u64[1]);
                v53 = sub_180B130(&v24[-1].m128i_u64[1]);
LABEL_62:
                if ( v53 <= 9 )
                {
LABEL_63:
                  for ( i = 0; ; i = v54 )
                  {
                    if ( i >= *(_DWORD *)(v6 - 4) )
                      goto LABEL_163;
                    LODWORD(v54) = i;
                    do
                    {
                      v55 = *(char **)(a1 + 216);
                      v128 = 0;
                      v130 = 1;
                      v56 = *(_QWORD *)(v6 + 8LL * (unsigned int)v54);
                      v57 = *(unsigned int *)(a1 + 224);
                      v129 = 0;
                      v58 = *(_DWORD *)(v56 + 12);
                      v127 = v56;
                      v131 = 0;
                      v59 = v57 - 1;
                      v57 *= 40;
                      v60 = 5LL * (v58 & v59);
                      v61 = &v55[v57];
                      v62 = 8 * v60;
                      v63 = &v55[v62];
                      if ( v62 == v57 )
                      {
LABEL_75:
                        while ( v63 != v55 )
                        {
                          v68 = *(_QWORD *)v55;
                          if ( *(_QWORD *)v55 > 1u )
                          {
                            if ( *(_DWORD *)(v68 + 12) == v58 && v56 == v68 )
                            {
                              v64 = v55;
                              goto LABEL_84;
                            }
                          }
                          else if ( !v68 )
                          {
                            break;
                          }
                          v55 += 40;
                        }
LABEL_73:
                        v66 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, &v128);
                        sub_182CBA0(v66, &v130);
                        BYTE4(v122) &= 0xFCu;
                        v125 &= 0xFCu;
                        LODWORD(v122) = 0;
                        v123 = 0;
                        v124 = 1;
                        v126 = 0;
                        BUG();
                      }
                      v64 = &v55[v62];
                      while ( 1 )
                      {
                        v65 = *(_QWORD *)v64;
                        if ( *(_QWORD *)v64 > 1u )
                          break;
                        if ( !v65 )
                          goto LABEL_73;
LABEL_70:
                        v64 += 40;
                        if ( v61 == v64 )
                          goto LABEL_75;
                      }
                      if ( *(_DWORD *)(v65 + 12) != v58 || v56 != v65 )
                        goto LABEL_70;
LABEL_84:
                      v69 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, &v128);
                      sub_182CBA0(v69, &v130);
                      v70 = qword_1C7F2C0;
                      BYTE4(v122) &= 0xFCu;
                      v125 &= 0xFCu;
                      LODWORD(v122) = 0;
                      v123 = 0;
                      v124 = 1;
                      v126 = 0;
                      if ( (v64[12] & 1) != 0 )
                        sub_182C690(qword_1C7F2C0, &v122, v64 + 8);
                      else
                        LODWORD(v122) = *((_DWORD *)v64 + 2);
                      if ( (v64[28] & 1) != 0 )
                      {
                        sub_182C690(v70, &v124, v64 + 24);
                      }
                      else
                      {
                        v71 = *((_DWORD *)v64 + 6);
                        v125 &= ~1u;
                        v124 = v71;
                      }
                      v54 = (unsigned int)(v54 + 1);
                      v72 = (__int64 *)(v6 + 8 * v54);
                      if ( (unsigned int)v54 >= *(_DWORD *)(v6 - 4) )
                        goto LABEL_99;
                      do
                      {
                        v73 = *v72;
                        v74 = *(unsigned int *)(a1 + 224);
                        v128 = 0;
                        v130 = 1;
                        v75 = *(char **)(a1 + 216);
                        v76 = *(_DWORD *)(v73 + 12);
                        v77 = v74 - 1;
                        v127 = v73;
                        v129 = 0;
                        v74 *= 40;
                        v78 = &v75[v74];
                        v131 = 0;
                        v79 = 40LL * (v76 & v77);
                        v80 = &v75[v79];
                        if ( v79 != v74 )
                        {
                          for ( j = &v75[v79]; v78 != j; j += 40 )
                          {
                            v82 = *(_QWORD *)j;
                            if ( *(_QWORD *)j > 1u )
                            {
                              if ( *(_DWORD *)(v82 + 12) == v76 && v73 == v82 )
                                goto LABEL_117;
                            }
                            else if ( !v82 )
                            {
                              goto LABEL_96;
                            }
                          }
                        }
                        if ( v75 == v80 )
                        {
LABEL_96:
                          v83 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, &v128);
                          sub_182CBA0(v83, &v130);
                          BYTE4(v127) &= 0xFCu;
                          BYTE4(v129) &= 0xFCu;
                          LODWORD(v127) = 0;
                          v128 = 0;
                          LODWORD(v129) = 1;
                          v130 = 0;
                          BUG();
                        }
                        while ( 1 )
                        {
                          v91 = *(_QWORD *)v75;
                          if ( *(_QWORD *)v75 > 1u )
                            break;
                          if ( !v91 )
                            goto LABEL_96;
LABEL_112:
                          v75 += 40;
                          if ( v80 == v75 )
                            goto LABEL_96;
                        }
                        if ( *(_DWORD *)(v91 + 12) != v76 || v73 != v91 )
                          goto LABEL_112;
                        j = v75;
LABEL_117:
                        v114 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, &v128);
                        sub_182CBA0(v114, &v130);
                        v92 = qword_1C7F2C0;
                        BYTE4(v127) &= 0xFCu;
                        BYTE4(v129) &= 0xFCu;
                        LODWORD(v127) = 0;
                        v128 = 0;
                        LODWORD(v129) = 1;
                        v130 = 0;
                        if ( (j[12] & 1) != 0 )
                          sub_182C690(qword_1C7F2C0, &v127, j + 8);
                        else
                          LODWORD(v127) = *((_DWORD *)j + 2);
                        if ( (j[28] & 1) != 0 )
                        {
                          sub_182C690(v92, &v129, j + 24);
                        }
                        else
                        {
                          v93 = *((_DWORD *)j + 6);
                          BYTE4(v129) &= ~1u;
                          LODWORD(v129) = v93;
                        }
                        v94 = qword_1C7F2C0;
                        if ( (v122 & 0x100000000LL) == 0 && (v127 & 0x100000000LL) == 0 )
                        {
                          if ( (_DWORD)v122 == (_DWORD)v127 )
                            goto LABEL_124;
LABEL_98:
                          v84 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, &v127);
                          sub_182CBA0(v84, &v129);
                          break;
                        }
                        if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, &v122, &v127) )
                          goto LABEL_98;
LABEL_124:
                        if ( (v125 & 1) != 0 || (v129 & 0x100000000LL) != 0 )
                          v95 = (unsigned int)sub_182C7B0(v94, &v124, &v129) == 0;
                        else
                          v95 = v124 == (_DWORD)v129;
                        v96 = qword_1C7F2C0;
                        if ( !v95 )
                        {
                          sub_182CBA0(qword_1C7F2C0, &v127);
                          sub_182CBA0(v96, &v129);
                          break;
                        }
                        LODWORD(v54) = v54 + 1;
                        ++v72;
                        sub_182CBA0(qword_1C7F2C0, &v127);
                        sub_182CBA0(v96, &v129);
                      }
                      while ( (unsigned int)v54 < *(_DWORD *)(v6 - 4) );
LABEL_99:
                      v85 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, &v122);
                      sub_182CBA0(v85, &v124);
                      v86 = 20 * (v54 - i);
                      if ( v86 < (unsigned int)v54 )
                        v86 = v54;
                    }
                    while ( v86 < *(_DWORD *)(v6 - 4) );
                    v87 = (std::ios_base *)sub_2FF8B0(a1);
                    v15 = sub_E60CB0(v87, v54, v6);
                    if ( v15 != 1 )
                      goto LABEL_13;
                    v127 = 0;
                    v88 = (_QWORD *)sub_2FF8B0(a1);
                    (*(void (__fastcall **)(_QWORD *, __int64 *))(*v88 + 32LL))(v88, &v127);
                    if ( v127
                      && ((v89 = v88[7]) == 0
                       || ((*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v89 + 32LL))(v89, &v127), v127)) )
                    {
                      sub_34D6E0(a1, &v127);
                      v90 = (void (***)(void))v127;
                    }
                    else
                    {
                      v90 = nullptr;
                    }
                    sub_349130(v90);
                  }
                }
LABEL_142:
                if ( (unsigned __int8)sub_186A530() )
                {
                  sub_186A4C0();
                  sub_180B150(v52, a2);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v97 = std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_186A500(v97, "\n");
                }
                else
                {
                  sub_180B150(v52, a2);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                if ( v6 )
                  goto LABEL_63;
                goto LABEL_162;
              }
            }
            else
            {
              v40 = v6 + 8 * v28;
              if ( v6 < v40 )
                goto LABEL_45;
              *(_DWORD *)(v6 - 4) = 0;
            }
          }
          else if ( src )
          {
            v29 = 8LL * *((unsigned int *)src - 1);
            v112 = (char *)src + v29;
            if ( (char *)src + v29 != src )
            {
LABEL_28:
              a2 = (__m128i *)v112;
              _BitScanReverse64(&v30, v29 >> 3);
              sub_3527B0(v24, v112, 2LL * (int)v30, a1);
              v31 = &v24->m128i_i8[8];
              if ( (unsigned __int64)v29 > 0x80 )
              {
                v117 = a1;
                v110 = v24 + 8;
                for ( k = sub_34A870(&v117, *(_DWORD **)v31, v24->m128i_i64[0]);
                      ;
                      k = sub_34A870(&v117, *(_DWORD **)v31, v24->m128i_i64[0]) )
                {
                  v107 = *(_DWORD **)v31;
                  if ( k )
                  {
                    if ( v31 - (char *)v24 <= 8 )
                    {
                      if ( v31 - (char *)v24 == 8 )
                        *(_QWORD *)v31 = v24->m128i_i64[0];
                    }
                    else
                    {
                      memmove(&v24->m128i_u64[1], v24, v31 - (char *)v24);
                    }
                    v31 += 8;
                    v24->m128i_i64[0] = (__int64)v107;
                    if ( v110 == (__m128i *)v31 )
                    {
                      do
                      {
LABEL_39:
                        v36 = (__int64 *)v110;
                        v119 = a1;
                        v37 = (int *)v110->m128i_i64[0];
                        while ( 1 )
                        {
                          a2 = (__m128i *)v37;
                          v38 = (int **)v36;
                          v39 = sub_34A870(&v119, v37, (_DWORD *)*--v36);
                          if ( !v39 )
                            break;
                          v36[1] = *v36;
                        }
                        v110 = (__m128i *)((char *)v110 + 8);
                        *v38 = v37;
                      }
                      while ( v110 != (__m128i *)v112 );
                      goto LABEL_43;
                    }
                  }
                  else
                  {
                    v118 = a1;
                    for ( m = v31; ; *((_QWORD *)m + 1) = *(_QWORD *)m )
                    {
                      v34 = m;
                      v35 = sub_34A870(&v118, v107, *((_DWORD **)m - 1));
                      m -= 8;
                      if ( !v35 )
                        break;
                    }
                    v31 += 8;
                    *(_QWORD *)v34 = v107;
                    if ( v110 == (__m128i *)v31 )
                      goto LABEL_39;
                  }
                }
              }
              v120 = a1;
              if ( v29 != 8 )
              {
                do
                {
                  a2 = *(__m128i **)v31;
                  v101 = sub_34A870(&v120, *(_DWORD **)v31, v24->m128i_i64[0]);
                  v109 = *(int **)v31;
                  if ( v101 )
                  {
                    if ( v31 - (char *)v24 <= 8 )
                    {
                      if ( v31 - (char *)v24 == 8 )
                        *(_QWORD *)v31 = v24->m128i_i64[0];
                    }
                    else
                    {
                      a2 = v24;
                      memmove(&v24->m128i_u64[1], v24, v31 - (char *)v24);
                    }
                    v24->m128i_i64[0] = (__int64)v109;
                  }
                  else
                  {
                    v127 = a1;
                    for ( n = v31; ; *((_QWORD *)n + 1) = *(_QWORD *)n )
                    {
                      a2 = (__m128i *)v109;
                      v103 = (int **)n;
                      v104 = sub_34A870(&v127, v109, *((_DWORD **)n - 1));
                      n -= 8;
                      if ( !v104 )
                        break;
                    }
                    *v103 = v109;
                  }
                  v31 += 8;
                }
                while ( v31 != v112 );
              }
LABEL_43:
              v28 = *(unsigned int *)(v6 - 4);
              goto LABEL_44;
            }
            goto LABEL_51;
          }
        }
        else
        {
          v123 = 0;
          v122 = *(_QWORD *)v111;
        }
        v52 = &v122;
        sub_2334C0(&v122);
        v53 = sub_180B130(&v122);
        goto LABEL_62;
      }
    }
    if ( !*(_BYTE *)(a1 + 533) )
    {
      if ( v6 )
      {
LABEL_11:
        v13 = *(_DWORD *)(v6 - 4);
        goto LABEL_12;
      }
LABEL_138:
      v6 = 0;
      v13 = 0;
LABEL_12:
      v14 = (std::ios_base *)sub_2FF8B0(a1);
      v15 = sub_E60CB0(v14, v13, v6);
      if ( v15 == 1 )
      {
        v127 = 0;
        v98 = (_QWORD *)sub_2FF8B0(a1);
        (*(void (__fastcall **)(_QWORD *, __int64 *))(*v98 + 32LL))(v98, &v127);
        if ( v127
          && ((v99 = v98[7]) == 0
           || ((*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v99 + 32LL))(v99, &v127), v127)) )
        {
          sub_34D6E0(a1, &v127);
          v100 = (void (***)(void))v127;
        }
        else
        {
          v100 = nullptr;
        }
        sub_349130(v100);
      }
      goto LABEL_13;
    }
    if ( v6 )
      goto LABEL_18;
    v3 = *(_QWORD *)v111;
  }
  else if ( !*(_BYTE *)(a1 + 533) )
  {
    goto LABEL_138;
  }
  v122 = v3;
  v52 = &v122;
  v123 = 0;
  sub_2334C0(&v122);
  if ( (unsigned int)sub_180B130(&v122) > 9 )
  {
    v6 = 0;
    goto LABEL_142;
  }
LABEL_162:
  v6 = 0;
LABEL_163:
  v15 = 1;
LABEL_13:
  v121[1] = v6;
  sub_2334C0(v121);
  return v15;
}

