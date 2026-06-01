void __fastcall sub_1A219C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        __m128 a7,
        __m128 a8,
        char a9,
        __int64 *a10)
{
  __int64 v11; // r13
  __m128i *v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  _WORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD **v21; // rbp
  __int32 v22; // eax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rbx
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int32 v29; // r14d
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  unsigned int v33; // eax
  _BYTE *v34; // rdi
  __int64 *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // r14
  __int64 v59; // rbx
  unsigned int v60; // ebp
  unsigned __int64 v61; // r13
  __int32 v62; // eax
  __int32 v63; // edx
  unsigned __int8 v64; // si
  _QWORD *v65; // rcx
  unsigned __int64 v66; // rax
  __int32 v67; // eax
  unsigned __int64 v68; // r14
  char v69; // al
  int v70; // eax
  __int64 v71; // rax
  __int32 v72; // ebx
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int32 v77; // ebp
  unsigned int v78; // eax
  unsigned int v79; // ebp
  __int32 v80; // eax
  unsigned __int64 v81; // rbx
  char v82; // al
  __int64 v83; // rdx
  _QWORD *v84; // r14
  __int32 v85; // eax
  __int32 v86; // edx
  unsigned __int8 v87; // cl
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // r14
  bool v92; // zf
  __int64 *v93; // r13
  unsigned int v94; // edx
  __int64 v95; // rax
  __int64 v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rbp
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rax
  _WORD *v106; // rdx
  _WORD *v107; // rax
  _WORD **v108; // rax
  unsigned int v109; // eax
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rbp
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  _QWORD *v117; // rax
  unsigned int v118; // [rsp+10h] [rbp-1D8h]
  __int64 v119; // [rsp+10h] [rbp-1D8h]
  __int32 v120; // [rsp+10h] [rbp-1D8h]
  _QWORD **v122; // [rsp+20h] [rbp-1C8h]
  __int32 v123; // [rsp+20h] [rbp-1C8h]
  __int64 v127; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v128; // [rsp+50h] [rbp-198h]
  bool v129; // [rsp+50h] [rbp-198h]
  __int64 v130; // [rsp+58h] [rbp-190h]
  __int64 v131; // [rsp+60h] [rbp-188h]
  char v132; // [rsp+6Ch] [rbp-17Ch] BYREF
  unsigned __int64 v133; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v134; // [rsp+80h] [rbp-168h] BYREF
  unsigned __int64 v135; // [rsp+88h] [rbp-160h] BYREF
  __int64 v136; // [rsp+90h] [rbp-158h] BYREF
  unsigned __int64 v137; // [rsp+98h] [rbp-150h] BYREF
  __int64 v138[4]; // [rsp+A0h] [rbp-148h] BYREF
  void *ptr; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v140; // [rsp+C8h] [rbp-120h]
  _BYTE v141[32]; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v142; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v143; // [rsp+100h] [rbp-E8h]
  int v144; // [rsp+108h] [rbp-E0h]
  unsigned __int64 v145; // [rsp+110h] [rbp-D8h]
  __int16 v146; // [rsp+118h] [rbp-D0h]
  __m128i v147; // [rsp+120h] [rbp-C8h] BYREF
  unsigned __int64 v148; // [rsp+130h] [rbp-B8h]
  int v149; // [rsp+138h] [rbp-B0h]
  unsigned __int8 *v150[11]; // [rsp+140h] [rbp-A8h] BYREF
  char v151; // [rsp+198h] [rbp-50h]
  unsigned int v152; // [rsp+1A0h] [rbp-48h]
  char v153; // [rsp+1A4h] [rbp-44h]

  v11 = a1;
  v12 = *(__m128i **)(a2 + 16);
  v138[0] = a1;
  v13 = *(_QWORD **)(a1 + 248);
  v132 = a9;
  ptr = v141;
  v140 = 0x400000000LL;
  v133 = 0;
  v134 = 0;
  v138[1] = (__int64)&v132;
  v138[2] = (__int64)a6;
  v138[3] = (__int64)&ptr;
  v127 = sub_A72040(v13, (__int64)v12);
  if ( v127 )
  {
    v18 = sub_A72040(*(_QWORD **)(v11 + 248), *(_QWORD *)(a2 + 16));
    if ( v18 && (unsigned int)*(unsigned __int8 *)(v18 + 16) - 2 <= 1 )
    {
      v19 = *(_QWORD *)(v18 + 40);
      v128 = v19;
      if ( (*(_BYTE *)(v18 + 19) & 2) != 0 )
      {
        v74 = *(_QWORD **)v19;
        if ( *(_DWORD *)(v19 + 8) > 0x40u )
          v74 = (_QWORD *)*v74;
        v128 = (unsigned __int64)v74;
      }
      v133 = *(_QWORD *)(a2 + 16);
      v118 = v128;
      v20 = a4 + 8 * a5;
      v122 = (_QWORD **)v20;
      if ( v20 != a4 )
      {
LABEL_6:
        v21 = (_QWORD **)a4;
        do
        {
          v24 = *v21;
          v25 = *(_QWORD **)(v11 + 248);
          sub_1A0B470((__int64)&v147, v25, v118, a2);
          v22 = sub_C00A40((unsigned __int64)v24, (__int64)v25, v26, v27, v28);
          v29 = v22;
          if ( v24 )
          {
            v22 = sub_EEB7E0((unsigned __int64)v24, (__int64)v25, *(double *)a7.m128_u64);
            v23 = 2;
          }
          else
          {
            v23 = 3;
          }
          v142.m128i_i16[0] = v23;
          *(__int64 *)((char *)v142.m128i_i64 + 4) = __PAIR64__(v22, v29);
          v142.m128i_i32[3] = v22;
          if ( !(unsigned __int8)sub_1A21840(v138, (__int64)&v147, &v142, v24, nullptr, a7, a8) )
            goto LABEL_15;
          ++v21;
        }
        while ( v122 != v21 );
      }
      v12 = (__m128i *)v128;
      if ( a5 < v128 )
      {
LABEL_66:
        sub_1A0B470((__int64)&v147, *(_QWORD **)(v11 + 248), a5, a2);
        v12 = &v147;
        v80 = *(_DWORD *)(a3 + 4);
        v142.m128i_i16[0] = 516;
        v142.m128i_i32[1] = v80;
        v142.m128i_i32[2] = v80;
        v142.m128i_i32[3] = v80;
        if ( !(unsigned __int8)sub_1A21840(v138, (__int64)&v147, &v142, nullptr, &v134, a7, a8) )
          goto LABEL_15;
LABEL_53:
        v68 = v118;
        if ( (v133 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v96 = *(_QWORD *)(v11 + 248);
          v147.m128i_i32[2] = 32;
          v147.m128i_i64[0] = v128;
          v12 = *(__m128i **)(v127 + 32);
          v133 = sub_A70F70(v96, (__int64)v12, (__int64)&v147, nullptr, 0, 0);
          if ( v147.m128i_i32[2] > 0x40u )
          {
            if ( v147.m128i_i64[0] )
              operator delete[]((void *)v147.m128i_i64[0]);
          }
        }
        v127 = 0;
        v69 = v132;
        if ( a5 > v118 )
          goto LABEL_55;
        goto LABEL_39;
      }
LABEL_52:
      if ( *(_DWORD *)a2 != 8 || !sub_1A0A650(a2, (__int64)v12, v20, (__int64)v15) )
        goto LABEL_53;
      goto LABEL_66;
    }
    v30 = *(_QWORD *)(a2 + 16);
    v31 = sub_A72040(*(_QWORD **)(v11 + 248), v30);
    if ( !v31 || *(_BYTE *)(v31 + 16) != 6 )
    {
      v20 = a4;
      v12 = (__m128i *)(a4 + 8 * a5);
      v118 = a5;
      v122 = (_QWORD **)v12;
      v128 = a5;
      if ( (__m128i *)a4 != v12 )
        goto LABEL_6;
      goto LABEL_52;
    }
    v32 = *(_QWORD *)(v31 + 40);
    v33 = sub_EEB7E0(v32, v30, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)&v147, (__int64 *)(v11 + 8), v33, 0x1538u, 0);
    v142.m128i_i64[0] = sub_EEC8C0(v32, v11 + 8, *(double *)a7.m128_u64);
    sub_1587DB0((__int64)&v147, v142.m128i_i64);
    sub_15F7200(&v147);
LABEL_15:
    v34 = ptr;
    goto LABEL_16;
  }
  v35 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v36 = *v35;
  if ( *(_BYTE *)(*v35 + 16) != 48 )
  {
    v68 = 0;
    goto LABEL_38;
  }
  v129 = sub_F61420(*v35, (__int64)v12, v14, (__int64)v15, v16, v17);
  v41 = (char *)sub_F60F10(v36, (__int64)v12, v37, v38, v39, v40);
  v130 = (__int64)v41;
  if ( v41[28] < 0 )
    goto LABEL_64;
  if ( v129
    || ((v46 = v41,
         sub_7052B0((__int64 *)(*((_QWORD *)v41 + 13) + 96LL), *((_QWORD *)v41 + 13), v42, v43, v44, v45),
         v51 = *((_QWORD *)v46 + 16),
         (*(_BYTE *)(v51 + 24) & 1) != 0)
      ? (v52 = sub_B96980(v51))
      : (v52 = *(_QWORD *)(v51 + 24)),
        (sub_7052B0((__int64 *)(*(_QWORD *)(v130 + 104) + 96LL), *(_QWORD *)(v130 + 104), v47, v48, v49, v50),
         v12 = *(__m128i **)(v130 + 104),
         v119 = v52 + 24LL * *(unsigned int *)(*(_QWORD *)(v130 + 128) + 16LL),
         sub_7052B0(v12[6].m128i_i64, (__int64)v12, v53, v54, v55, v56),
         v57 = *(_QWORD *)(v130 + 128),
         (*(_BYTE *)(v57 + 24) & 1) != 0)
      ? (v58 = sub_B96980(v57))
      : (v58 = *(_QWORD *)(v57 + 24)),
        v119 == v58) )
  {
    v68 = 0;
    v60 = 0;
  }
  else
  {
    v59 = v58;
    v60 = 0;
    v131 = v11;
    do
    {
      v147.m128i_i64[1] = a2;
      v149 = 0;
      v147.m128i_i32[0] = 10;
      v150[0] = (unsigned __int8 *)(v59 & 0xFFFFFFFFFFFFFFFBLL);
      v66 = *(_QWORD *)(**(_QWORD **)(v59 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v66 + 8) & 0xF) != 0 )
        v66 = sub_F64F00(**(_QWORD **)(v59 + 16), (__int64)v12, v42, v43, v44);
      v148 = v66 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v60 < a5 )
      {
        v61 = *(_QWORD *)(a4 + 8LL * v60);
        v62 = sub_C00A40(v61, (__int64)v12, a4, v43, v44);
        v63 = v62;
        if ( v61 )
        {
          v123 = v62;
          v62 = sub_EEB7E0(v61, (__int64)v12, *(double *)a7.m128_u64);
          v63 = v123;
          v64 = 2;
        }
        else
        {
          v64 = 3;
        }
        v142.m128i_i16[0] = v64;
        v65 = (_QWORD *)v61;
        *(__int64 *)((char *)v142.m128i_i64 + 4) = __PAIR64__(v62, v63);
        v142.m128i_i32[3] = v62;
      }
      else
      {
        v67 = *(_DWORD *)(a3 + 4);
        v65 = nullptr;
        v142.m128i_i16[0] = 516;
        v142.m128i_i32[1] = v67;
        v142.m128i_i32[2] = v67;
        v142.m128i_i32[3] = v67;
      }
      v12 = &v147;
      if ( !(unsigned __int8)sub_1A21840(v138, (__int64)&v147, &v142, v65, nullptr, a7, a8) )
        goto LABEL_15;
      ++v60;
      v59 += 24;
    }
    while ( v119 != v59 );
    v11 = v131;
    v68 = v60;
  }
  v81 = sub_B7E900(v130, (__int64)v12, v42, v43, v44, v45);
  if ( v81 )
  {
LABEL_71:
    v82 = *(_BYTE *)(v81 + 68);
    v135 = v81;
    if ( (v82 & 1) == 0 || *(_QWORD *)(v81 + 40) )
    {
      v142.m128i_i32[0] = 21;
      v16 = 0;
      v142.m128i_i64[1] = 0;
      v83 = *(_QWORD *)(v81 + 48);
      v144 = 0;
      v143 = v83;
      v145 = v81;
      v146 = 0;
      if ( v60 < a5 )
      {
        v84 = *(_QWORD **)(a4 + 8LL * v60);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v81 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 5 )
        {
          v85 = sub_C00A40(*(_QWORD *)(a4 + 8LL * v60), (__int64)v12, v60, (__int64)v15, 0);
          v86 = v85;
          if ( v84 )
          {
            v120 = v85;
            v85 = sub_EEB7E0((unsigned __int64)v84, (__int64)v12, *(double *)a7.m128_u64);
            v86 = v120;
            v87 = 2;
          }
          else
          {
            v87 = 3;
          }
          *(__int64 *)((char *)v147.m128i_i64 + 4) = __PAIR64__(v85, v86);
          v12 = &v142;
          v147.m128i_i16[0] = v87;
          v147.m128i_i32[3] = v85;
          if ( !(unsigned __int8)sub_1A21840(v138, (__int64)&v142, &v147, v84, nullptr, a7, a8) )
            goto LABEL_15;
          if ( !v129 )
            goto LABEL_79;
          v68 = 1;
          v127 = v135;
          goto LABEL_83;
        }
        if ( !v132 )
        {
          v78 = sub_EEB7E0((unsigned __int64)v84, (__int64)v12, *(double *)a7.m128_u64);
          sub_168B9F0((__int64)&v147, (__int64 *)(v11 + 8), v78, 0xEF1u, 0);
          v79 = sub_EEC140((unsigned __int64)v84);
          v137 = __PAIR64__(v79, sub_EEB7E0((unsigned __int64)v84, v11 + 8, *(double *)a7.m128_u64));
          sub_1587DB0((__int64)&v147, (__int64 *)&v137);
          sub_15F7200(&v147);
          sub_168B9F0((__int64)&v147, (__int64 *)(v11 + 8), *(_DWORD *)(v135 + 24), 0x1761u, 0);
          sub_185C9E0((__int64)&v147, (__int64 *)&v135);
          sub_15F7200(&v147);
        }
LABEL_64:
        *a6 = 0;
        a6[46] = 39;
        goto LABEL_15;
      }
      v89 = v81;
      if ( v132 || (*(_BYTE *)(v81 + 29) & 1) == 0 )
      {
LABEL_86:
        if ( (v82 & 0xC) == 0xC || (*(_BYTE *)(v89 + 68) & 0xC) == 0 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89 + 48)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 <= 1 )
          {
            v92 = v132 == 0;
            *a6 = 0;
            a6[46] = 39;
            if ( v92 )
            {
              v93 = (__int64 *)(v11 + 8);
              v94 = *(_DWORD *)(a3 + 12);
              v137 = *(_QWORD *)(a3 + 8);
              sub_168B9F0((__int64)&v147, v93, v94, 0xF9Bu, 0);
              v136 = *(_QWORD *)(v135 + 48);
              v95 = sub_162B6D0((__int64)&v147, &v136);
              sub_15884C0(v95, (__int64 *)&v137);
              sub_15F7200(&v147);
              sub_168B9F0((__int64)&v147, v93, *(_DWORD *)(v135 + 24), 0x1922u, 0);
              sub_15F7200(&v147);
            }
            goto LABEL_15;
          }
          v147.m128i_i16[0] = 516;
          v12 = &v142;
          v147.m128i_i32[1] = *(_DWORD *)(a3 + 4);
          v147.m128i_i32[2] = v147.m128i_i32[1];
          v147.m128i_i32[3] = v147.m128i_i32[1];
          if ( !(unsigned __int8)sub_1A21840(v138, (__int64)&v142, &v147, nullptr, nullptr, a7, a8) )
            goto LABEL_15;
        }
        else if ( !v132 )
        {
          v90 = sub_190FFF0(v11, *(_DWORD *)(a3 + 12), v89);
          if ( v90 == 1 )
            goto LABEL_15;
          v91 = v90 & 0xFFFFFFFFFFFFFFFELL;
          sub_15A1600(v11, (__int64)&v142, v90 & 0xFFFFFFFFFFFFFFFELL);
          v12 = (__m128i *)v91;
          sub_14B7B40((__int64)&ptr, v91);
        }
LABEL_79:
        ++v60;
        goto LABEL_81;
      }
      v105 = sub_B8C3D0(v81, (__int64)v12, v81, (__int64)v15, 0, v17);
      v106 = (_WORD *)*v105;
      v15 = (_WORD *)(*v105 + 8LL * *((unsigned int *)v105 + 2));
      if ( *v105 >= (unsigned __int64)v15 )
      {
        if ( v106 == v15 )
        {
LABEL_108:
          v89 = v135;
          v82 = *(_BYTE *)(v135 + 68);
          goto LABEL_86;
        }
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 212 )
        {
          v108 = (_WORD **)(v15 + 4);
          do
          {
            v15 = v108;
            if ( v106 == (_WORD *)v108 )
              goto LABEL_108;
            v15 = *v108++;
          }
          while ( v15[18] != 212 );
        }
      }
      else
      {
        v107 = (_WORD *)*v105;
        while ( *(_WORD *)(*(_QWORD *)v107 + 36LL) != 212 )
        {
          v107 += 4;
          if ( v15 == v107 )
            goto LABEL_108;
        }
        if ( v15 == v107 )
          goto LABEL_108;
      }
      v109 = *(_DWORD *)(*(_QWORD *)(v11 + 4616) + 640LL * *(unsigned int *)(v11 + 4624) - 640);
      if ( v109 != 3 && v109 > 1 )
      {
        sub_168B9F0((__int64)&v147, (__int64 *)(v11 + 8), *(_DWORD *)(a3 + 4), 0x1AEDu, 0);
        LODWORD(v137) = 0;
        v110 = sub_1587D10((__int64)&v147, (int *)&v137);
        sub_185C9E0(v110, (__int64 *)&v135);
        sub_15F7200(&v147);
        sub_168B9F0((__int64)&v147, (__int64 *)(v11 + 8), *(_DWORD *)(v135 + 24), 0x172Eu, 0);
        v12 = (__m128i *)&v135;
        sub_185C9E0((__int64)&v147, (__int64 *)&v135);
        sub_15F7200(&v147);
      }
      goto LABEL_108;
    }
LABEL_81:
    while ( 1 )
    {
      v88 = *(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v81 = v88;
      if ( !v88 )
        break;
      if ( (*(_BYTE *)(v88 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_71;
    }
    v68 = v60;
  }
  else
  {
    v127 = 0;
  }
LABEL_83:
  v133 = *(_QWORD *)(a2 + 16);
LABEL_38:
  v69 = v132;
  if ( a5 > v68 )
  {
LABEL_55:
    *a6 = 0;
    a6[46] = 39;
    if ( !v69 )
    {
      v75 = 0;
      v76 = *(_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        v75 = !sub_F61420(v76, (__int64)v12, (__int64)a6, (__int64)v15, v16, v17) + 3LL;
      v77 = sub_EEC140(*(_QWORD *)(a4 + 8 * a5 - 8));
      v142.m128i_i32[0] = sub_EEB7E0(*(_QWORD *)(a4 + 8 * v68), (__int64)v12, *(double *)a7.m128_u64);
      v142.m128i_i32[1] = v77;
      sub_168B9F0((__int64)&v147, (__int64 *)(v11 + 8), *(_DWORD *)(a3 + 4), 0xE9Du, 0);
      if ( v151 )
      {
        sub_AE9DF0(v150, v75, 2u);
      }
      else if ( v153 )
      {
        v113 = sub_168B9E0(&v147);
        v116 = v148;
        if ( v148 )
          v116 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v148 + 32LL))(v148);
        v137 = v116;
        v117 = sub_1587BC0(v113, (__int64 *)&v137, v111, v112, v114, v115);
        sub_AE9DF0((unsigned __int8 **)(*v117 + 32LL * v152 + 8), v75, 2u);
      }
      sub_15884C0((__int64)&v147, v142.m128i_i64);
      sub_15F7200(&v147);
    }
    goto LABEL_15;
  }
LABEL_39:
  if ( v69 )
  {
    v147.m128i_i32[0] = 37;
    *a6 = 2;
    v147.m128i_i64[1] = *(_QWORD *)(a2 + 16);
    sub_1A0C040((__int64)(a6 + 2), &v147);
    v34 = ptr;
  }
  else
  {
    v34 = ptr;
    if ( a10 )
    {
      v70 = *(_DWORD *)(a3 + 8);
      HIDWORD(v137) = *(_DWORD *)(a3 + 12);
      LODWORD(v137) = v70;
      v71 = sub_C97F60(
              *(_QWORD **)(v11 + 248),
              ptr,
              (unsigned int)v140,
              v133,
              (unsigned int)a5,
              *(unsigned int *)(a3 + 4),
              v70,
              SHIDWORD(v137));
      if ( v134 )
        *(_QWORD *)(v71 + 40) = v134 & 0xFFFFFFFFFFFFFFFDLL;
      if ( v127 )
        *(_QWORD *)(v71 + 40) = v127 | 2;
      *a10 = v71;
      sub_168B9F0((__int64)&v147, (__int64 *)(v11 + 8), *(_DWORD *)(a3 + 4), 0x1A4Du, 0);
      v72 = *(_DWORD *)(a3 + 4);
      if ( v151 )
      {
        v142.m128i_i32[0] = *(_DWORD *)(a3 + 4);
        v142.m128i_i32[1] = v72;
        v142.m128i_i8[8] = 1;
        sub_AEC610((__int64 *)v150, v142.m128i_i64);
      }
      else if ( v153 )
      {
        v99 = sub_168B9E0(&v147);
        v102 = v148;
        if ( v148 )
          v102 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v148 + 32LL))(v148);
        v136 = v102;
        v103 = sub_1587BC0(v99, &v136, v97, v98, v100, v101);
        v104 = *v103 + 32LL * v152;
        v142.m128i_i32[0] = v72;
        v142.m128i_i32[1] = v72;
        v142.m128i_i8[8] = 1;
        sub_AEC610((__int64 *)(v104 + 8), v142.m128i_i64);
      }
      v73 = sub_15884C0((__int64)&v147, (__int64 *)&v137);
      sub_1605D30(v73, (__int64 *)&v133);
      sub_15F7200(&v147);
      v34 = ptr;
    }
  }
LABEL_16:
  if ( v34 != v141 )
    free(v34);
}
