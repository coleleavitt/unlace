__int64 __fastcall sub_5E3770(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char **exception; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rbx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  int v26; // esi
  unsigned __int64 v27; // rbp
  __m128 *v28; // r12
  unsigned int v29; // r11d
  __int64 v30; // rcx
  unsigned __int64 *v31; // r14
  int v32; // edi
  __int64 v33; // r11
  bool v34; // zf
  __m128 *v35; // r8
  unsigned __int64 *v36; // rcx
  unsigned __int64 *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v40; // rax
  unsigned int v41; // r12d
  unsigned int v42; // edx
  __int64 v43; // rdx
  char *v44; // r8
  int v45; // ecx
  __int64 v46; // rdi
  char *v47; // rsi
  char *v48; // rax
  unsigned int v49; // r12d
  __int64 v50; // r13
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  unsigned int v57; // r12d
  __int64 v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // r12d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  __m128 *v64; // rax
  int v65; // r9d
  __m128 *v66; // r8
  const __m128i *v67; // rbx
  __int64 v68; // rdi
  __m128i *v69; // r10
  __int64 v70; // rsi
  __int64 v71; // r15
  __m128 *v72; // r13
  const __m128i *v73; // r12
  __int64 v74; // rax
  __m128 *v75; // rdx
  __m128 *v76; // rax
  __int64 v77; // rdx
  double v78; // xmm4_8
  double v79; // xmm5_8
  _QWORD *v80; // r12
  _QWORD *i; // r13
  _QWORD *v82; // rax
  __int64 v83; // rdi
  __int64 *v84; // rax
  __int64 v85; // r15
  int v86; // ebp
  _QWORD *v87; // r12
  unsigned int v88; // ecx
  _QWORD *v89; // r13
  _QWORD *v90; // rdi
  int v91; // r8d
  __int64 v92; // rcx
  _QWORD *v93; // r9
  _QWORD *v94; // rax
  int v95; // edx
  int v96; // eax
  _QWORD *v97; // rax
  int v98; // r10d
  _QWORD *v99; // rcx
  _QWORD *v100; // rax
  char *v101; // r14
  char *v102; // r8
  __int64 v103; // r9
  char *v104; // rbx
  __int64 v105; // rax
  _QWORD *v106; // rdx
  _QWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // [rsp+0h] [rbp-A8h]
  size_t v110; // [rsp+0h] [rbp-A8h]
  __int64 v112; // [rsp+8h] [rbp-A0h]
  __int64 v113; // [rsp+10h] [rbp-98h]
  size_t v114; // [rsp+10h] [rbp-98h]
  unsigned int v115; // [rsp+10h] [rbp-98h]
  int v116; // [rsp+18h] [rbp-90h]
  size_t v117; // [rsp+18h] [rbp-90h]
  unsigned int v118; // [rsp+18h] [rbp-90h]
  int v119; // [rsp+20h] [rbp-88h]
  int v120; // [rsp+34h] [rbp-74h]
  __int64 v121[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = a2;
  v11 = a1;
  if ( !(unsigned __int8)sub_64B3C0(*(_QWORD *)(a1 + 24)) )
    return 0;
  v12 = *(_QWORD *)(a1 + 24);
  v13 = *(_QWORD *)(v12 + 2952);
  if ( v13 )
    return 0;
  *(_BYTE *)(a1 + 64) = 0;
  sub_654200(v12, 0);
  v14 = *(_QWORD *)(v12 + 2968);
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 328LL))(v14, v11 + 144);
  v15 = *(_QWORD *)(a2 + 24);
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 - 4);
    if ( v16 )
    {
      v120 = *(_DWORD *)(v15 - 4);
      v17 = 0;
      v109 = 8LL * v16;
      v18 = v11;
LABEL_8:
      v19 = *(_QWORD *)(v15 + v17);
      sub_62A000(*(_QWORD *)(v18 + 48), v19);
      v20 = *(_QWORD **)(v18 + 56);
      if ( v20 )
      {
        v21 = *((_DWORD *)v20 - 1);
        if ( v21 == *((_DWORD *)v20 - 2) )
        {
          v60 = (3 * v21 + 1) >> 1;
          v61 = 8 * v60 + 8;
          if ( 8 * v21 + 8 >= (unsigned int)v61 || v21 >= v60 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v121, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v121);
            sub_233E40((__int64)v121);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v62 = (unsigned int *)sub_186B300(v20 - 1, v61);
          v63 = v62[1];
          v20 = v62 + 2;
          *v62 = v60;
          *(_QWORD *)(v18 + 56) = v62 + 2;
          LODWORD(v62) = v63;
          v24 = &v20[v63];
          v23 = (_DWORD)v62 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = &v20[v22];
        }
      }
      else
      {
        v82 = (_QWORD *)sub_186B270(0x18u);
        v20 = v82 + 1;
        *v82 = 2;
        v23 = 1;
        *(_QWORD *)(v18 + 56) = v20;
        v24 = v20;
      }
      *v24 = v19;
      *((_DWORD *)v20 - 1) = v23;
      v25 = *(unsigned int *)(v18 + 176);
      v26 = *(_DWORD *)(v18 + 184);
      v27 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 16LL);
      if ( 3 * (int)v25 < (unsigned int)(4 * (v26 + *(_DWORD *)(v18 + 180))) )
      {
        v116 = 2 * v25;
        v114 = 16LL * (unsigned int)(2 * v25);
        v64 = (__m128 *)sub_186B270(v114);
        v30 = v114;
        v65 = v116;
        v28 = v64;
        v66 = &v64[v114 / 0x10];
        if ( v116 )
        {
          do
          {
            v64->m128_u64[0] = 0;
            ++v64;
            v64[-1].m128_i32[2] = 0;
          }
          while ( v64 != v66 );
        }
        v67 = *(const __m128i **)(v18 + 168);
        v29 = v116 - 1;
        v31 = (unsigned __int64 *)v66;
        v68 = *(unsigned int *)(v18 + 176);
        v69 = (__m128i *)&v67[v68];
        if ( v67 != &v67[v68] )
        {
          v70 = v18;
          v71 = v17;
          v72 = v28;
          v73 = &v67[v68];
          do
          {
            while ( v67->m128i_i64[0] <= 1uLL )
            {
              if ( v73 == ++v67 )
                goto LABEL_74;
            }
            v74 = 16LL * (*(_DWORD *)(v67->m128i_i64[0] + 12) & v29);
            v75 = &v72[(unsigned __int64)v74 / 0x10];
            if ( v114 == v74 )
            {
LABEL_78:
              if ( v72 == v75 )
              {
LABEL_88:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v76 = v72;
              while ( v76->m128_u64[0] )
              {
                if ( v75 == ++v76 )
                  goto LABEL_88;
              }
            }
            else
            {
              v76 = &v72[(unsigned __int64)v74 / 0x10];
              while ( v76->m128_u64[0] )
              {
                if ( v66 == ++v76 )
                  goto LABEL_78;
              }
            }
            a3 = (__m128)_mm_loadu_si128(v67++);
            *v76 = a3;
          }
          while ( v73 != v67 );
LABEL_74:
          v28 = v72;
          v17 = v71;
          v18 = v70;
          v69 = *(__m128i **)(v70 + 168);
          v31 = (unsigned __int64 *)v66;
        }
        if ( v69 )
        {
          v119 = v116;
          v117 = v114;
          v115 = v65 - 1;
          sub_186B220(v69);
          v65 = v119;
          v30 = v117;
          v29 = v115;
        }
        *(_QWORD *)(v18 + 168) = v28;
        v26 = 0;
        *(_DWORD *)(v18 + 176) = v65;
        *(_DWORD *)(v18 + 184) = 0;
      }
      else
      {
        v28 = *(__m128 **)(v18 + 168);
        v29 = v25 - 1;
        v30 = 16 * v25;
        v31 = (unsigned __int64 *)((char *)v28 + v30);
      }
      v32 = *(_DWORD *)(v27 + 12);
      v33 = 16LL * (v32 & v29);
      v34 = v33 == v30;
      v35 = &v28[(unsigned __int64)v33 / 0x10];
      v36 = nullptr;
      if ( v34 )
        goto LABEL_26;
      v37 = (unsigned __int64 *)&v28[(unsigned __int64)v33 / 0x10];
      do
      {
        v38 = *v37;
        if ( *v37 > 1 )
        {
          if ( *(_DWORD *)(v38 + 12) == v32 && v27 == v38 )
          {
            v36 = v37;
            goto LABEL_86;
          }
        }
        else
        {
          if ( !v38 )
          {
            if ( !v36 )
            {
              v36 = v37;
              goto LABEL_85;
            }
            goto LABEL_84;
          }
          v36 = v37;
        }
        v37 += 2;
      }
      while ( v37 != v31 );
      while ( 1 )
      {
LABEL_26:
        if ( v35 == v28 )
        {
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v40 = v28->m128_u64[0];
        if ( v28->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(v40 + 12) == v32 && v27 == v40 )
          {
            v36 = (unsigned __int64 *)v28;
LABEL_86:
            ++*((_DWORD *)v36 + 2);
            v17 += 8;
            if ( v109 == v17 )
            {
              v11 = v18;
              v13 = 0;
              v41 = 0;
              v10 = a2;
              do
              {
                v42 = v41++;
                sub_5E0CF0(v11, a2, v42);
              }
              while ( v120 != v41 );
              break;
            }
            v15 = *(_QWORD *)(a2 + 24);
            goto LABEL_8;
          }
        }
        else
        {
          if ( !v40 )
          {
            if ( !v36 )
            {
              v36 = (unsigned __int64 *)v28;
              goto LABEL_85;
            }
LABEL_84:
            *(_DWORD *)(v18 + 184) = v26 - 1;
LABEL_85:
            *v36 = v27;
            *((_DWORD *)v36 + 2) = 0;
            ++*(_DWORD *)(v18 + 180);
            goto LABEL_86;
          }
          v36 = (unsigned __int64 *)v28;
        }
        ++v28;
      }
    }
  }
  while ( 1 )
  {
    v43 = *(_QWORD *)(v11 + 72);
    if ( !v43 || !*(_DWORD *)(v43 - 4) )
      break;
    if ( *(_DWORD *)(v11 + 100) || *(_DWORD *)(v11 + 104) )
    {
      v44 = *(char **)(v11 + 88);
      v45 = 0;
      v46 = *(unsigned int *)(v11 + 96);
      v47 = &v44[24 * v46];
      v48 = v44;
      if ( v44 != v47 )
      {
        do
        {
          while ( *((_DWORD *)v48 + 1) )
          {
            *((_DWORD *)v48 + 1) = 0;
            v48 += 24;
            if ( v47 == v48 )
              goto LABEL_40;
          }
          v48 += 24;
          ++v45;
        }
        while ( v47 != v48 );
LABEL_40:
        if ( (unsigned int)v46 > 0x10 && 3 * (int)v46 < (unsigned int)(4 * v45) )
        {
          if ( v44 )
          {
            sub_186B220(v44);
            v49 = *(_DWORD *)(v11 + 96);
            *(_QWORD *)(v11 + 88) = 0;
            v49 >>= 1;
            *(_DWORD *)(v11 + 96) = v49;
            v50 = v49;
            v51 = sub_186B270(24LL * v49);
            if ( v49 )
              goto LABEL_44;
          }
          else
          {
            *(_QWORD *)(v11 + 88) = 0;
            v50 = (unsigned int)v46 >> 1;
            *(_DWORD *)(v11 + 96) = v50;
            v51 = sub_186B270(24 * v50);
LABEL_44:
            v52 = (_QWORD *)(v51 + 24 * v50);
            v53 = (_QWORD *)v51;
            do
            {
              *v53 = 0;
              v53 += 3;
              *(v53 - 2) = 0;
            }
            while ( v53 != v52 );
            v54 = v51;
            if ( ((24 * (_BYTE)v50) & 8) == 0
              || (v54 = v51 + 24, *(_DWORD *)(v51 + 16) = 0, (_QWORD *)(v51 + 24) != v52) )
            {
              do
              {
                *(_DWORD *)(v54 + 16) = 0;
                v54 += 48;
                *(_DWORD *)(v54 - 8) = 0;
              }
              while ( (_QWORD *)v54 != v52 );
            }
          }
          *(_QWORD *)(v11 + 88) = v51;
          v43 = *(_QWORD *)(v11 + 72);
        }
      }
      *(_QWORD *)(v11 + 100) = 0;
    }
    v55 = v43;
    if ( v43 )
    {
      v112 = v13;
      v56 = *(_DWORD *)(v43 - 4);
      v113 = v10;
      while ( 1 )
      {
        if ( !v56 )
        {
          v13 = v112;
          v10 = v113;
          goto LABEL_55;
        }
        v83 = *(unsigned int *)(v11 + 96);
        v84 = (__int64 *)(16LL * (unsigned int)(v56 - 1) + v55);
        v85 = *v84;
        v86 = *((_DWORD *)v84 + 2);
        if ( 3 * (int)v83 < (unsigned int)(4 * (*(_DWORD *)(v11 + 100) + *(_DWORD *)(v11 + 104))) )
        {
          v110 = 24LL * (unsigned int)(2 * v83);
          v97 = (_QWORD *)sub_186B270(v110);
          v98 = 2 * v83;
          v87 = v97;
          v99 = &v97[v110 / 8];
          if ( 2 * (_DWORD)v83 )
          {
            do
            {
              *v97 = 0;
              v97 += 3;
              *(v97 - 2) = 0;
            }
            while ( v99 != v97 );
            v100 = v87;
            if ( (((_BYTE)v99 - (_BYTE)v87) & 8) == 0 || (*((_DWORD *)v87 + 4) = 0, v100 = v87 + 3, v87 + 3 != v99) )
            {
              do
              {
                *((_DWORD *)v100 + 4) = 0;
                v100 += 6;
                *((_DWORD *)v100 - 2) = 0;
              }
              while ( v100 != v99 );
            }
          }
          v101 = *(char **)(v11 + 88);
          v88 = v98 - 1;
          v89 = &v87[v110 / 8];
          v102 = &v101[24 * *(unsigned int *)(v11 + 96)];
          if ( v101 != v102 )
          {
            v103 = v11;
            v104 = &v101[24 * *(unsigned int *)(v11 + 96)];
            do
            {
              if ( *((_DWORD *)v101 + 1) == 2 )
              {
                v105 = 24LL * (*(_DWORD *)v101 & (unsigned int)(v98 - 1));
                v106 = &v87[(unsigned __int64)v105 / 8];
                if ( v105 == v110 )
                {
LABEL_147:
                  if ( v106 == v87 )
                  {
LABEL_154:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v107 = v87;
                  while ( *((_DWORD *)v107 + 1) )
                  {
                    v107 += 3;
                    if ( v106 == v107 )
                      goto LABEL_154;
                  }
                }
                else
                {
                  v107 = &v87[(unsigned __int64)v105 / 8];
                  while ( *((_DWORD *)v107 + 1) )
                  {
                    v107 += 3;
                    if ( v89 == v107 )
                      goto LABEL_147;
                  }
                }
                v108 = *((_QWORD *)v101 + 1);
                *(_DWORD *)v107 = *(_DWORD *)v101;
                *((_DWORD *)v107 + 1) = 2;
                v107[1] = v108;
                *((_DWORD *)v107 + 4) = *((_DWORD *)v101 + 4);
              }
              v101 += 24;
            }
            while ( v104 != v101 );
            v102 = *(char **)(v103 + 88);
            v11 = v103;
            v88 = v98 - 1;
          }
          if ( v102 )
          {
            v118 = v88;
            sub_186B220(v102);
            v98 = 2 * v83;
            v88 = v118;
          }
          *(_QWORD *)(v11 + 88) = v87;
          *(_DWORD *)(v11 + 96) = v98;
          *(_DWORD *)(v11 + 104) = 0;
        }
        else
        {
          v87 = *(_QWORD **)(v11 + 88);
          v88 = v83 - 1;
          v110 = 24 * v83;
          v89 = &v87[3 * v83];
        }
        v90 = nullptr;
        v91 = (((v86 - v85) ^ ((_DWORD)v85 << 8) ^ (((_DWORD)v85 - ((v86 - (_DWORD)v85) ^ ((_DWORD)v85 << 8))) << 16))
             + ((v86 - v85) ^ ((_DWORD)v85 << 8))
             - v85)
            ^ (((_DWORD)v85 - ((v86 - (_DWORD)v85) ^ ((_DWORD)v85 << 8))) << 10);
        v92 = v91 & v88;
        v93 = &v87[3 * v92];
        if ( 24 * v92 == v110 )
          goto LABEL_118;
        v94 = &v87[3 * v92];
        while ( 1 )
        {
          v95 = *((_DWORD *)v94 + 1);
          if ( v95 != 2 )
            break;
          if ( v91 == *(_DWORD *)v94 && v94[1] == v85 && *((_DWORD *)v94 + 4) == v86 )
          {
            v94[1] = v85;
            *((_DWORD *)v94 + 4) = v86;
            *((_DWORD *)v94 + 1) = 2;
            goto LABEL_124;
          }
LABEL_109:
          v94 += 3;
          if ( v94 == v89 )
          {
            while ( 1 )
            {
LABEL_118:
              if ( v93 == v87 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v96 = *((_DWORD *)v87 + 1);
              if ( v96 == 2 )
              {
                if ( v91 == *(_DWORD *)v87 && v87[1] == v85 && *((_DWORD *)v87 + 4) == v86 )
                {
                  v87[1] = v85;
                  *((_DWORD *)v87 + 4) = v86;
                  *((_DWORD *)v87 + 1) = 2;
                  goto LABEL_124;
                }
              }
              else
              {
                if ( !v96 )
                {
                  if ( !v90 )
                  {
                    v90 = v87;
                    goto LABEL_127;
                  }
LABEL_126:
                  --*(_DWORD *)(v11 + 104);
                  goto LABEL_127;
                }
                v90 = v87;
              }
              v87 += 3;
            }
          }
        }
        if ( v95 )
          break;
        if ( v90 )
          goto LABEL_126;
        v90 = v94;
LABEL_127:
        v90[1] = v85;
        *((_DWORD *)v90 + 4) = v86;
        *((_DWORD *)v90 + 1) = 2;
        *(_DWORD *)v90 = v91;
        ++*(_DWORD *)(v11 + 100);
LABEL_124:
        v55 = *(_QWORD *)(v11 + 72);
        v56 = *(_DWORD *)(v55 - 4) - 1;
        *(_DWORD *)(v55 - 4) = v56;
      }
      v90 = v94;
      goto LABEL_109;
    }
LABEL_55:
    v57 = 0;
    while ( 1 )
    {
      v58 = *(_QWORD *)(v11 + 56);
      if ( !v58 || v57 >= *(_DWORD *)(v58 - 4) )
        break;
      if ( (unsigned int)sub_5E0FD0(v11, v10, v57) <= 1 )
      {
        v59 = v57++;
        sub_5E35A0(v11, v10, v59);
      }
    }
  }
  if ( *(_BYTE *)(v11 + 64) )
  {
    v13 = sub_186B270(0xF8u);
    sub_63D370(v13, *(_QWORD *)(v11 + 24));
    v80 = *(_QWORD **)(v11 + 56);
    if ( v80 )
    {
      for ( i = &v80[*((unsigned int *)v80 - 1)]; i != v80; ++v80 )
        sub_63DAD0(v13, *v80, *(double *)a3.m128_u64);
    }
    sub_63DFA0(v13, v10, v77, *(double *)a3.m128_u64, a4, a5, a6, v78, v79, a9);
  }
  sub_5DF8F0(v11);
  return v13;
}

