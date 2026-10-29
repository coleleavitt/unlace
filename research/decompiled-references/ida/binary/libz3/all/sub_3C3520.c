__int64 __fastcall sub_3C3520(void ***a1, __int64 a2)
{
  __int64 v2; // r12
  void **v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi
  char *v7; // r14
  int v8; // ecx
  unsigned int v9; // esi
  char *v10; // rdx
  char *v11; // rbp
  char *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // r13d
  size_t v15; // rbp
  _OWORD *v16; // rdx
  _OWORD *v17; // rcx
  __int64 *v18; // rdi
  int v19; // ebp
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  __m128i si128; // xmm2
  __int64 v25; // rax
  __m128 v26; // xmm0
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  unsigned __int64 v35; // r14
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rbp
  unsigned int *v39; // r15
  int v40; // r10d
  unsigned int v41; // esi
  unsigned int v42; // eax
  size_t v43; // rbp
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned int v46; // esi
  __int64 v47; // r13
  __int64 v48; // rdi
  unsigned int **v49; // rdx
  unsigned int **v50; // rbp
  unsigned int *v51; // rcx
  unsigned int *v52; // rdx
  unsigned int v53; // r13d
  size_t v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rbp
  _DWORD *v57; // r15
  __int64 v58; // rdi
  __int64 *v59; // r8
  unsigned __int64 v60; // rcx
  __int64 *v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __m128i v64; // xmm0
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  void **v67; // rbx
  void **v68; // r12
  _DWORD *v69; // r13
  bool v70; // zf
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 *v73; // rbp
  __int64 *v74; // r14
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  unsigned int v79; // eax
  _OWORD *v80; // rdx
  __int64 v81; // r11
  char *v82; // rsi
  __int64 v83; // rdx
  char *v84; // rcx
  char *v85; // r13
  char *v86; // rdx
  unsigned __int64 v87; // rdx
  __int64 v88; // rdi
  _QWORD *v89; // rsi
  _QWORD *v90; // r14
  __int64 v91; // rdx
  char *v92; // rcx
  char *v93; // r14
  size_t v94; // r12
  __int64 v95; // rbp
  __int64 v96; // rdi
  int v97; // edi
  unsigned int *v98; // rax
  unsigned int *v99; // rcx
  __int64 v100; // rax
  _QWORD *v101; // rax
  unsigned __int64 v102; // rdx
  __int64 v103; // rcx
  size_t v104; // rsi
  char **exception; // r12
  int v106; // [rsp+0h] [rbp-C8h]
  __int64 *v107; // [rsp+8h] [rbp-C0h]
  __int64 v108; // [rsp+8h] [rbp-C0h]
  __int64 v109; // [rsp+10h] [rbp-B8h]
  int v110; // [rsp+10h] [rbp-B8h]
  __int64 *v111; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v112; // [rsp+20h] [rbp-A8h]
  char *v113; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v114; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v115; // [rsp+38h] [rbp-90h]
  unsigned int v116; // [rsp+40h] [rbp-88h]
  int v117; // [rsp+44h] [rbp-84h]
  __int64 v118; // [rsp+48h] [rbp-80h]
  __int64 v119; // [rsp+50h] [rbp-78h]
  __int64 v120; // [rsp+58h] [rbp-70h]
  __int128 v121; // [rsp+60h] [rbp-68h] BYREF
  __int64 v122[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = (__int64)a1;
  v4 = *a1;
  if ( v4 )
  {
    sub_3BCC50(v4);
    *(_DWORD *)(*(_QWORD *)v2 - 4LL) = 0;
  }
  if ( *(_DWORD *)(v2 + 20) || (result = *(unsigned int *)(v2 + 24), (_DWORD)result) )
  {
    v6 = *(unsigned int *)(v2 + 16);
    v7 = *(char **)(v2 + 8);
    v8 = 0;
    v9 = *(_DWORD *)(v2 + 16);
    result = (__int64)v7;
    v10 = &v7[16 * v6];
    if ( v7 == v10 )
      goto LABEL_21;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v10 == (char *)result )
          goto LABEL_10;
      }
      result += 16;
      ++v8;
    }
    while ( v10 != (char *)result );
LABEL_10:
    if ( v9 <= 0x10 )
      goto LABEL_21;
    result = 3 * v9;
    if ( (unsigned int)result >= 4 * v8 )
      goto LABEL_21;
    if ( v7 )
    {
      v11 = v7;
      v12 = &v7[16 * v6];
      do
      {
        while ( 1 )
        {
          v13 = *((_QWORD *)v11 + 1);
          if ( !v13 )
            break;
          v11 += 16;
          sub_186B220((void *)(v13 - 8));
          if ( v12 == v11 )
            goto LABEL_16;
        }
        v11 += 16;
      }
      while ( v12 != v11 );
LABEL_16:
      sub_186B220(v7);
      v14 = *(_DWORD *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      v14 >>= 1;
      *(_DWORD *)(v2 + 16) = v14;
      v15 = v14;
      result = sub_186B270(v15 * 16);
      v16 = (_OWORD *)result;
      if ( !v14 )
        goto LABEL_20;
    }
    else
    {
      *(_QWORD *)(v2 + 8) = 0;
      v104 = v9 >> 1;
      *(_DWORD *)(v2 + 16) = v104;
      v15 = v104;
      v16 = (_OWORD *)sub_186B270(16 * v104);
    }
    v17 = &v16[v15];
    result = (__int64)v16;
    if ( ((v15 * 16) & 0x10) == 0 || (result = (__int64)(v16 + 1), *v16 = 0, v17 != v16 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v17 != (_OWORD *)result );
    }
LABEL_20:
    *(_QWORD *)(v2 + 8) = v16;
LABEL_21:
    *(_QWORD *)(v2 + 20) = 0;
  }
  v18 = *(__int64 **)(a2 + 24);
  LODWORD(v107) = (_DWORD)v18;
  if ( !v18 )
    return result;
  result = (__int64)&v18[*((unsigned int *)v18 - 1)];
  v118 = result;
  if ( v18 == (__int64 *)result )
    return result;
  v109 = 0;
  v19 = 0;
  v111 = *(__int64 **)(a2 + 8);
  v20 = v18;
  while ( 2 )
  {
    v21 = *v20;
    v22 = v109;
    v110 = v21;
    if ( v21 )
      sub_62A000(v111, v21);
    if ( v22 )
      sub_62A410(v111, v22);
    v23 = sub_186B270(0x50u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B6580);
    v25 = *v111;
    *(_OWORD *)(v23 + 48) = 0;
    *(_QWORD *)v23 = 0;
    *(_QWORD *)(v23 + 8) = v25;
    v26 = _mm_loadh_ps((const double *)&v111);
    *(_QWORD *)(v23 + 16) = v25;
    *(_QWORD *)(v23 + 24) = 0;
    *(_QWORD *)(v23 + 32) = 0;
    *(_QWORD *)(v23 + 40) = v25;
    *(__m128i *)(v23 + 64) = si128;
    sub_3C08C0(
      v23,
      (unsigned int)&v121,
      v27,
      v28,
      v29,
      v30,
      v106,
      (_DWORD)v107,
      v110,
      (char)v111,
      v112,
      (_DWORD)v113,
      v114,
      (_DWORD)v115,
      v116,
      v118,
      v119,
      v120,
      v26.m128_i64[0],
      v26.m128_i64[1],
      v122[0]);
    sub_3C2300(v23, (__int64)&v121, v31, v32, v33, v34);
    v35 = *(_QWORD *)v2;
    *(_DWORD *)(v23 + 52) = v19;
    v117 = v19 + 1;
    if ( v35 )
    {
      v36 = *(_DWORD *)(v35 - 4);
      HIDWORD(v112) = v36;
      if ( v36 == *(_DWORD *)(v35 - 8) )
      {
        v53 = (3 * v36 + 1) >> 1;
        v54 = 8 * v53 + 8;
        v116 = v53;
        if ( 8 * v36 + 8 >= (unsigned int)v54 || v36 >= v53 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3BCB70(v122, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v122);
          sub_233E40((__int64)v122);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v55 = sub_186B270(v54);
        v56 = *(_QWORD *)v2;
        v57 = (_DWORD *)v55;
        v35 = v55 + 8;
        if ( *(_QWORD *)v2 )
        {
          v58 = *(unsigned int *)(v56 - 4);
          *(_DWORD *)(v55 + 4) = v58;
          v59 = (__int64 *)(v56 + 8 * v58);
          if ( (__int64 *)v56 != v59 )
          {
            v60 = 8 * v58 - 8;
            v61 = (__int64 *)v56;
            if ( v60 <= 8 || v35 < v56 + 16 && v56 < (unsigned __int64)(v57 + 6) )
            {
              v102 = v35;
              do
              {
                v103 = *v61;
                *v61++ = 0;
                v102 += 8LL;
                *(_QWORD *)(v102 - 8) = v103;
              }
              while ( v59 != v61 );
            }
            else
            {
              v62 = 0;
              v63 = (v60 >> 3) + 1;
              do
              {
                v64 = _mm_loadu_si128((const __m128i *)(v56 + v62 * 4));
                *(_OWORD *)(v56 + v62 * 4) = 0;
                *(__m128i *)&v57[v62 + 2] = v64;
                v62 += 4;
              }
              while ( 4 * (v63 >> 1) != v62 );
              if ( (v63 & 1) != 0 )
              {
                v65 = 8 * (v63 & 0xFFFFFFFFFFFFFFFELL);
                v66 = *(_QWORD *)(v56 + v65);
                *(_QWORD *)(v56 + v65) = 0;
                *(_QWORD *)&v57[v65 / 4 + 2] = v66;
              }
            }
          }
          if ( (_DWORD)v58 )
          {
            v113 = (char *)v23;
            v67 = (void **)v56;
            v115 = (unsigned __int64 *)v2;
            v68 = (void **)(v56 + 8 * v58);
            v114 = v35;
            do
            {
              while ( 1 )
              {
                v69 = *v67;
                if ( *v67 )
                {
                  v70 = v69[19]-- == 1;
                  if ( v70 )
                    break;
                }
                if ( ++v67 == v68 )
                  goto LABEL_81;
              }
              v71 = *((_QWORD *)v69 + 4);
              if ( v71 )
              {
                v72 = *((_QWORD *)v69 + 5);
                v70 = (*(_DWORD *)(v71 + 8))-- == 1;
                if ( v70 )
                  sub_15D7BC0(v72, v71);
              }
              v73 = *((__int64 **)v69 + 3);
              if ( v73 )
              {
                v74 = &v73[*((unsigned int *)v73 - 1)];
                if ( v73 >= v74 )
                  goto LABEL_76;
                do
                {
                  while ( 1 )
                  {
                    v75 = *v73;
                    if ( *v73 )
                    {
                      v76 = *((_QWORD *)v69 + 2);
                      v70 = (*(_DWORD *)(v75 + 8))-- == 1;
                      if ( v70 )
                        break;
                    }
                    if ( ++v73 >= v74 )
                      goto LABEL_75;
                  }
                  sub_15D7BC0(v76, v75);
                  ++v73;
                }
                while ( v73 < v74 );
LABEL_75:
                v73 = *((__int64 **)v69 + 3);
                if ( v73 )
LABEL_76:
                  sub_186B220(v73 - 1);
              }
              v77 = *(_QWORD *)v69;
              if ( *(_QWORD *)v69 )
              {
                v78 = *((_QWORD *)v69 + 1);
                v70 = (*(_DWORD *)(v77 + 8))-- == 1;
                if ( v70 )
                  sub_15D7BC0(v78, v77);
              }
              ++v67;
              sub_186B220(v69);
            }
            while ( v67 != v68 );
LABEL_81:
            v2 = (__int64)v115;
            v23 = (__int64)v113;
            v35 = v114;
            v56 = *v115;
          }
          sub_186B220((void *)(v56 - 8));
        }
        else
        {
          *(_DWORD *)(v55 + 4) = 0;
        }
        v79 = v116;
        *(_QWORD *)v2 = v35;
        *v57 = v79;
        *(_QWORD *)(v35 + 8LL * (unsigned int)v57[1]) = v23;
      }
      else
      {
        *(_QWORD *)(v35 + 8LL * HIDWORD(v112)) = v23;
      }
    }
    else
    {
      v101 = (_QWORD *)sub_186B270(0x18u);
      v35 = (unsigned __int64)(v101 + 1);
      v101[1] = v23;
      *(_QWORD *)v2 = v101 + 1;
      *v101 = 2;
      HIDWORD(v112) = 0;
    }
    v37 = *(_QWORD *)v23;
    ++*(_DWORD *)(v23 + 76);
    ++*(_DWORD *)(v35 - 4);
    v38 = *(unsigned int *)(v2 + 16);
    v39 = *(unsigned int **)(v37 + 16);
    v40 = *(_DWORD *)(v2 + 24);
    LODWORD(v37) = *(_DWORD *)(v2 + 20);
    v41 = 2 * v38;
    LODWORD(v115) = 2 * v38;
    if ( 3 * (int)v38 < (unsigned int)(4 * (v40 + v37)) )
    {
      v43 = 16LL * v41;
      v44 = sub_186B270(v43);
      v80 = (_OWORD *)v44;
      v81 = v44 + v43;
      if ( v41 )
      {
        if ( (v43 & 0x10) == 0 || (v80 = (_OWORD *)(v44 + 16), *(_OWORD *)v44 = 0, v81 != v44 + 16) )
        {
          do
          {
            *v80 = 0;
            v80 += 2;
            *(v80 - 1) = 0;
          }
          while ( (_OWORD *)v81 != v80 );
        }
      }
      v82 = *(char **)(v2 + 8);
      v45 = v44 + v43;
      v83 = *(unsigned int *)(v2 + 16);
      v84 = v82 + 8;
      v85 = &v82[16 * v83];
      v116 = (_DWORD)v115 - 1;
      if ( v82 == v85 )
      {
LABEL_103:
        if ( v85 )
        {
          if ( (_DWORD)v83 )
          {
            v119 = v2;
            v93 = v85;
            v94 = v43;
            v95 = v44;
            v113 = &v85[16 * v83];
            do
            {
              while ( 1 )
              {
                v96 = *((_QWORD *)v93 + 1);
                if ( !v96 )
                  break;
                v114 = v45;
                v93 += 16;
                sub_186B220((void *)(v96 - 8));
                v45 = v114;
                if ( v113 == v93 )
                  goto LABEL_108;
              }
              v93 += 16;
            }
            while ( v113 != v93 );
LABEL_108:
            v44 = v95;
            v43 = v94;
            v2 = v119;
          }
          v114 = v45;
          v113 = (char *)v44;
          sub_186B220(v85);
          v44 = (__int64)v113;
          v45 = v114;
        }
        v97 = (int)v115;
        *(_QWORD *)(v2 + 8) = v44;
        v40 = 0;
        *(_DWORD *)(v2 + 24) = 0;
        *(_DWORD *)(v2 + 16) = v97;
        goto LABEL_34;
      }
      while ( 1 )
      {
        v87 = *((_QWORD *)v84 - 1);
        if ( v87 <= 1 )
        {
LABEL_91:
          v86 = v84 + 16;
          if ( v85 == v84 + 8 )
            goto LABEL_102;
          goto LABEL_92;
        }
        v88 = 16LL * (*(_DWORD *)(v87 + 12) & v116);
        v89 = (_QWORD *)(v44 + v88);
        if ( v43 == v88 )
        {
LABEL_111:
          if ( (_QWORD *)v44 == v89 )
          {
LABEL_128:
            v120 = v81;
            v119 = v45;
            v114 = v44;
            v113 = v84;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v90 = (_QWORD *)v44;
          while ( *v90 )
          {
            v90 += 2;
            if ( v89 == v90 )
              goto LABEL_128;
          }
          *v90 = v87;
          if ( v84 == (char *)(v90 + 1) )
            goto LABEL_91;
          v91 = v90[1];
          if ( v91 )
            goto LABEL_100;
        }
        else
        {
          v90 = (_QWORD *)(v44 + v88);
          while ( *v90 )
          {
            v90 += 2;
            if ( (_QWORD *)v81 == v90 )
              goto LABEL_111;
          }
          *v90 = v87;
          if ( v84 == (char *)(v90 + 1) )
            goto LABEL_91;
          v91 = v90[1];
          if ( v91 )
          {
LABEL_100:
            v120 = v81;
            v119 = v45;
            v114 = v44;
            v113 = v84;
            sub_186B220((void *)(v91 - 8));
            v81 = v120;
            v45 = v119;
            v44 = v114;
            v84 = v113;
          }
        }
        v90[1] = 0;
        v90[1] = *(_QWORD *)v84;
        v86 = v84 + 16;
        v92 = v84 + 8;
        *((_QWORD *)v92 - 1) = 0;
        if ( v85 == v92 )
        {
LABEL_102:
          v83 = *(unsigned int *)(v2 + 16);
          v85 = *(char **)(v2 + 8);
          goto LABEL_103;
        }
LABEL_92:
        v84 = v86;
      }
    }
    v42 = v38 - 1;
    v43 = 16 * v38;
    v116 = v42;
    v44 = *(_QWORD *)(v2 + 8);
    v45 = v44 + v43;
LABEL_34:
    v46 = v39[3];
    v47 = 16LL * (v46 & v116);
    v48 = v44 + v47;
    if ( v47 == v43 )
    {
      v50 = nullptr;
      while ( 1 )
      {
LABEL_45:
        if ( v48 == v44 )
        {
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v52 = *(unsigned int **)v44;
        if ( *(_QWORD *)v44 > 1u )
        {
          if ( v52[3] == v46 && v39 == v52 )
          {
            v99 = *(unsigned int **)(v44 + 8);
            v50 = (unsigned int **)v44;
LABEL_138:
            if ( !v99 )
              goto LABEL_125;
            v100 = *(v99 - 1);
            if ( (_DWORD)v100 == *(v99 - 2) )
              goto LABEL_125;
            goto LABEL_126;
          }
        }
        else
        {
          if ( !v52 )
          {
            if ( v50 )
              *(_DWORD *)(v2 + 24) = v40 - 1;
            else
              v50 = (unsigned int **)v44;
            v98 = v50[1];
            *v50 = v39;
            if ( v98 )
              goto LABEL_123;
            goto LABEL_124;
          }
          v50 = (unsigned int **)v44;
        }
        v44 += 16;
      }
    }
    v49 = (unsigned int **)(v44 + v47);
    v50 = nullptr;
    while ( 1 )
    {
      v51 = *v49;
      if ( (unsigned __int64)*v49 <= 1 )
        break;
      if ( v51[3] == v46 && v39 == v51 )
      {
        v99 = v49[1];
        v50 = v49;
        goto LABEL_138;
      }
LABEL_38:
      v49 += 2;
      if ( v49 == (unsigned int **)v45 )
        goto LABEL_45;
    }
    if ( v51 )
    {
      v50 = v49;
      goto LABEL_38;
    }
    if ( v50 )
      *(_DWORD *)(v2 + 24) = v40 - 1;
    else
      v50 = v49;
    v98 = v50[1];
    *v50 = v39;
    if ( v98 )
LABEL_123:
      sub_186B220(v98 - 2);
LABEL_124:
    v50[1] = nullptr;
    ++*(_DWORD *)(v2 + 20);
LABEL_125:
    sub_2FD3F0(v50 + 1);
    v99 = v50[1];
    v100 = *(v99 - 1);
LABEL_126:
    v99[v100] = HIDWORD(v112);
    ++*(v99 - 1);
    sub_3BE360((__int64 *)v23);
    v107 = (__int64 *)(v108 + 8);
    v20 = v107;
    if ( v107 != (__int64 *)v118 )
    {
      v19 = v117;
      continue;
    }
    break;
  }
  result = v109;
  if ( v109 )
    return sub_62A410(v111, v109);
  return result;
}

