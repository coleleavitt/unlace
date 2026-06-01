unsigned __int64 __fastcall sub_1907C70(
        __int64 a1,
        _QWORD *a2,
        __m128i a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  unsigned __int64 v11; // rbx
  unsigned __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int16 v19; // dx
  unsigned __int64 v20; // rdi
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r13
  unsigned __int16 v26; // ax
  unsigned int v27; // eax
  unsigned __int64 v28; // r15
  __int64 v29; // r14
  unsigned int v30; // eax
  const char *v31; // rax
  int v32; // r13d
  unsigned int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rdi
  bool v39; // al
  void **p_ptr; // rcx
  unsigned int v41; // esi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r8
  __int128 *v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r15
  _QWORD *v48; // rax
  _QWORD *v49; // r13
  __int64 v50; // rdx
  unsigned __int64 v51; // r14
  unsigned __int8 v52; // al
  unsigned __int8 v53; // al
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // r13
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v62; // rdx
  __int64 v63; // rdi
  unsigned int *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // r14
  __int64 v70; // r15
  int v71; // r13d
  _BOOL4 v72; // eax
  const __m128i *v73; // rsi
  int v74; // r15d
  int v75; // r14d
  char v76; // dl
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // r14
  _QWORD *v80; // rax
  unsigned __int64 v81; // r15
  __int64 v82; // r13
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdx
  bool v86; // al
  const __m128i *v87; // rdx
  __int64 v88; // rax
  unsigned __int64 v89; // r13
  int v90; // eax
  __int64 v91; // rbx
  __int64 v92; // rax
  unsigned int v93; // edx
  __int64 v94; // rbp
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rsi
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int8 v104; // cl
  unsigned int v105; // eax
  _BOOL4 *v106; // rsi
  __int64 v107; // rbp
  __int64 v108; // rax
  __int64 v109; // r14
  unsigned int v110; // eax
  __int64 v111; // rax
  char v112; // r14
  unsigned __int64 v113; // r12
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // r15
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // [rsp-10h] [rbp-200h]
  __int64 v123; // [rsp+0h] [rbp-1F0h]
  unsigned __int64 v124; // [rsp+0h] [rbp-1F0h]
  unsigned __int64 v125; // [rsp+0h] [rbp-1F0h]
  __int64 v126; // [rsp+0h] [rbp-1F0h]
  unsigned __int64 v127; // [rsp+0h] [rbp-1F0h]
  __int64 v128; // [rsp+8h] [rbp-1E8h]
  __int64 v129; // [rsp+10h] [rbp-1E0h]
  char v130; // [rsp+18h] [rbp-1D8h]
  _QWORD *v131; // [rsp+18h] [rbp-1D8h]
  __int64 v132; // [rsp+18h] [rbp-1D8h]
  char v133; // [rsp+20h] [rbp-1D0h]
  const __m128i *v134; // [rsp+20h] [rbp-1D0h]
  __int16 v135; // [rsp+2Ch] [rbp-1C4h]
  _BOOL4 v136; // [rsp+44h] [rbp-1ACh] BYREF
  _QWORD *v137; // [rsp+48h] [rbp-1A8h] BYREF
  int v138; // [rsp+50h] [rbp-1A0h]
  __int64 v139; // [rsp+58h] [rbp-198h]
  __int128 v140; // [rsp+68h] [rbp-188h] BYREF
  void *v141[2]; // [rsp+78h] [rbp-178h]
  __int128 v142; // [rsp+88h] [rbp-168h]
  void *ptr; // [rsp+98h] [rbp-158h] BYREF
  unsigned __int64 v144; // [rsp+A0h] [rbp-150h]
  _QWORD v145[2]; // [rsp+A8h] [rbp-148h] BYREF
  unsigned __int8 *v146; // [rsp+B8h] [rbp-138h] BYREF
  char v147; // [rsp+110h] [rbp-E0h]
  unsigned int v148; // [rsp+118h] [rbp-D8h]
  char v149; // [rsp+11Ch] [rbp-D4h]
  unsigned __int64 v150; // [rsp+1A8h] [rbp-48h]

  v8 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13 )
    return (unsigned __int64)a2;
  v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x1FF;
  if ( v9 <= 0x1F1u )
    return (unsigned __int64)a2;
  v11 = (unsigned __int64)a2;
  switch ( (v9 + 14) & 0x1FF )
  {
    case 0:
      *(_QWORD *)&v140 = a2;
      if ( !(unsigned __int8)sub_1BE7810(a1, (unsigned int)&v140, 0, 0, 0, 0, 0) )
      {
        *(_QWORD *)&v140 = a2;
        if ( !(unsigned __int8)sub_1BE0460(a1, &v140, 0, v17, v122) )
        {
          sub_168B9B0((__int64)&ptr, a1 + 8, 4771);
          sub_16085E0(a1, (__int64 *)&v140, (__int64)&ptr, 1, nullptr, a3, *(double *)a4.m128_u64);
          if ( ptr )
          {
            if ( v144 )
              sub_1580C40(v144, (unsigned __int64)ptr);
          }
        }
      }
      return v140;
    case 1:
      v137 = a2;
      v18 = sub_BFB9F0((__int64)a2);
      sub_168B9B0((__int64)&v140, a1 + 8, 3336);
      v19 = *(_WORD *)v18 & 0x1FF;
      if ( v19 == 102 )
      {
        sub_168B9B0((__int64)&ptr, a1 + 8, 3706);
        v101 = 1;
      }
      else
      {
        if ( v19 != 46 || (*(_DWORD *)(*(_QWORD *)(v18 + 24) + 40LL) & 7) != 4 )
          goto LABEL_16;
        sub_168B9B0((__int64)&ptr, a1 + 8, 3706);
        v101 = 0;
      }
      sub_AE9DF0((unsigned __int8 **)&ptr, v101, 2u);
      sub_18C8370((__int64)&v140, (__int64)&ptr);
      if ( ptr && v144 )
        sub_1580C40(v144, (unsigned __int64)ptr);
LABEL_16:
      sub_16085E0(a1, (__int64 *)&v137, (__int64)&v140, 1, nullptr, a3, *(double *)a4.m128_u64);
      result = (unsigned __int64)v137;
      if ( (_QWORD)v140 && *((_QWORD *)&v140 + 1) )
      {
        v123 = (__int64)v137;
        sub_1580C40(*((unsigned __int64 *)&v140 + 1), v140);
        return v123;
      }
      return result;
    case 2:
      v50 = *(unsigned __int16 *)a2;
      v47 = a2[5];
      v128 = (__int64)(a2 + 2);
      v48 = a2 + 10;
      v49 = *(_QWORD **)(a1 + 248);
      LOWORD(v50) = v50 & 0x1FF;
      v129 = v47;
      if ( (_WORD)v50 == 24 )
        v48 = a2 + 8;
      v51 = *v48 & 0xFFFFFFFFFFFFFFF8LL;
      v52 = *(_BYTE *)(v51 + 28) & 0x7F;
      LOBYTE(v137) = v52 == 70;
      if ( (unsigned int)v52 - 68 > 6 )
      {
        v126 = sub_A81B40(v49, a2[2], v50, (__int64)(a2 + 8), a7, a8);
      }
      else
      {
        sub_F22AA0((unsigned __int64 *)&ptr, v51);
        v53 = sub_18C0AA0((__int64)a2);
        v126 = sub_A80CA0((__int64)v49, v47, v53, (__int64)ptr);
      }
      v54 = a1 + 8;
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(v11 + 24), 0x1407u, 0);
      if ( v147 )
      {
        v54 = v126;
        sub_F23A70(&v146, v126);
      }
      else if ( v149 )
      {
        v95 = sub_168B9E0(&ptr);
        v99 = v145[0];
        if ( v145[0] )
        {
          v132 = v95;
          v99 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v145[0] + 32LL))(v145[0]);
          v95 = v132;
        }
        *(_QWORD *)&v140 = v99;
        v100 = sub_1587BC0(v95, (__int64 *)&v140, v95, v96, v97, v98);
        v54 = v126;
        sub_F23A70((unsigned __int8 **)(*v100 + 32LL * v148 + 8), v126);
      }
      *(_QWORD *)&v140 = sub_EEC8C0(v11, v54, *(double *)a3.m128i_i64);
      v55 = sub_1587DB0((__int64)&ptr, (__int64 *)&v140);
      sub_15890D0(v55, (unsigned __int8 *)&v137);
      sub_15F7200(&ptr);
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(v51 + 24), 0x18C8u, 0);
      sub_15890D0((__int64)&ptr, (unsigned __int8 *)&v137);
      sub_15F7200(&ptr);
      v56 = *(_QWORD *)v11;
      v57 = 0;
      if ( (*(_QWORD *)v11 & 0x80000) != 0 )
      {
        v58 = 8LL * *(unsigned int *)(v11 + 4);
        v59 = v11 + v58 + 64;
        v60 = v11 + v58 + 80;
        if ( (*(_WORD *)v11 & 0x1FF) == 0x18 )
          v60 = v59;
        v57 = *(_DWORD *)(v60 + 4);
      }
      v61 = 0;
      if ( (v56 & 0x80000) != 0 )
      {
        v62 = 8LL * *(unsigned int *)(v11 + 4);
        v63 = v11 + v62 + 64;
        v64 = (unsigned int *)(v11 + v62 + 80);
        if ( (*(_WORD *)v11 & 0x1FF) == 0x18 )
          v64 = (unsigned int *)v63;
        v61 = *v64;
      }
      v150 = __PAIR64__(v57, v61);
      ptr = v145;
      v144 = 0x800000000LL;
      if ( !sub_18C0AE0(v11) )
        goto LABEL_98;
      v65 = sub_18C0B20(v11);
      if ( (v56 & 0x80000) == 0 )
        BUG();
      v66 = 8LL * *(unsigned int *)(v11 + 4);
      v67 = v11 + v66 + 64;
      v68 = v11 + v66 + 80;
      if ( (*(_WORD *)v11 & 0x1FF) == 0x18 )
        v68 = v67;
      v69 = v65 + 32LL * *(unsigned int *)(v68 + 12);
      if ( v69 == v65 )
      {
LABEL_98:
        LOBYTE(v71) = 0;
      }
      else
      {
        v70 = v65;
        v71 = 0;
        do
        {
          v72 = sub_F1D530(v70);
          v73 = (const __m128i *)v70;
          v70 += 32;
          v71 |= v72;
          sub_17429A0((__int64)&ptr, v73);
        }
        while ( v69 != v70 );
      }
      v74 = *(_DWORD *)(a1 + 11200);
      v130 = *(_BYTE *)(a1 + 12592);
      v133 = *(_BYTE *)(a1 + 11248);
      v75 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
      sub_1DBADC0(a1);
      if ( !v76 )
        *(_BYTE *)(a1 + 12592) = 1;
      *(_BYTE *)(a1 + 11248) = 0;
      v77 = sub_1CDD580(a1, v126, *(unsigned int *)(v11 + 24), &ptr);
      v78 = *(_QWORD *)(a1 + 264);
      *(_DWORD *)(a1 + 11200) = v74;
      *(_BYTE *)(a1 + 12592) = v130;
      *(_BYTE *)(a1 + 11248) = v133;
      if ( *(_DWORD *)(v78 + 204) == 5 )
        *(_BYTE *)(v78 + 194) = 1;
      if ( v75 )
        v75 = 3;
      *(_DWORD *)(v78 + 204) = v75;
      v79 = v77 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v77 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v80 = *(_QWORD **)(a1 + 248);
        v131 = v80;
        if ( (_BYTE)v71 )
          v81 = v80[2384];
        else
          v81 = v80[2340];
        if ( sub_18C0AE0(v11) )
        {
          v82 = *(_QWORD *)v11;
          v83 = 8LL * *(unsigned int *)(v11 + 4);
          v84 = (*(_QWORD *)v11 >> 15) & 0x10LL;
          if ( (*(_WORD *)v11 & 0x1FF) == 0x18 )
            v85 = v83 + v84 + 64;
          else
            v85 = v83 + v84 + 80;
          v134 = (const __m128i *)(v11 + v85);
          v135 = *(_WORD *)v11 & 0x1FF;
          v86 = sub_18C0AE0(v11);
          v87 = v134;
          if ( v86 )
          {
            if ( (v82 & 0x80000) == 0 )
              JUMPOUT(0x2E9BB0);
            v88 = v11 + v83 + 80;
            if ( v135 == 24 )
              v88 = v11 + v83 + 64;
            v79 = *(unsigned int *)(v88 + 12);
          }
        }
        else
        {
          v87 = nullptr;
        }
        v77 = sub_AB81A0(v131, v126, v87, v79, nullptr, 0, v81);
      }
      v89 = sub_A76250(*(_QWORD *)(a1 + 248), 6, v129, v77, 0);
      v90 = sub_B85A10(v128);
      if ( !v90 )
        v90 = *(_DWORD *)(v11 + 24);
      result = sub_18C4330(a1, *(_DWORD *)(v11 + 24), v90, nullptr, 0, v89);
      if ( ptr != v145 )
      {
        v127 = result;
        free(ptr);
        return v127;
      }
      return result;
    case 3:
      return sub_1C20D80(*(_QWORD *)(a1 + 776));
    case 4:
      v20 = (unsigned __int64)a2;
      v21 = 5341;
      break;
    case 5:
      v28 = sub_BFBAE0((unsigned __int64)a2);
      if ( (*(_WORD *)v28 & 0x1FF) != 0x47 )
        goto LABEL_95;
      v29 = *(_QWORD *)(v28 + 16);
      v30 = sub_B75A50(v29, 0);
      if ( v30 == 1007 )
      {
        v102 = sub_A70010(*(_QWORD *)(a1 + 248), *(_QWORD *)(v29 + 48));
        v103 = sub_160A600(
                 a1,
                 (unsigned __int64)a2,
                 v102,
                 0x3Du,
                 0,
                 0,
                 *(double *)a3.m128i_i64,
                 *(double *)a4.m128_u64,
                 0);
        return sub_C0BFD0(
                 *(_QWORD **)(a1 + 248),
                 v103 & 0xFFFFFFFFFFFFFFFELL,
                 nullptr,
                 0,
                 *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL),
                 0,
                 0,
                 0,
                 0,
                 0);
      }
      else
      {
        v31 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), v30);
        a2 = (_QWORD *)(&dword_78 + 2);
        if ( !strchr(v31, 122) )
        {
LABEL_95:
          v14 = sub_EEB7E0(v11, (__int64)a2, *(double *)a3.m128i_i64);
          v15 = (__int64 *)(a1 + 8);
          v16 = 3349;
          goto LABEL_9;
        }
        v32 = *(char *)(*(_QWORD *)(a1 + 232) + 1LL);
        v33 = sub_EEB7E0(v11, 122, *(double *)a3.m128i_i64);
        sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v33, ((v32 >> 31) & 0xFFFFFAAA) + 6754, 0);
        sub_15F7200(&ptr);
        if ( (unsigned __int8)sub_B7F7D0(v29) )
        {
          v110 = sub_EEB7E0(v11, a1 + 8, *(double *)a3.m128i_i64);
          sub_1E3D740(a1, v110, v29, 0, 1, 0);
        }
        v140 = 0;
        *(_OWORD *)v141 = 0;
        v142 = 0;
        if ( (*(_QWORD *)v28 & 0x80000LL) != 0 )
        {
          v34 = *(_QWORD *)(v28 + 32);
          v35 = *(_QWORD *)(v28 + 40);
        }
        else
        {
          v35 = 0;
          v34 = 0;
        }
        sub_15AB8B0((__int64)&v140, v34, v35);
        v150 = 0;
        ptr = v145;
        v144 = 0x800000000LL;
        v36 = *(_QWORD *)v28;
        if ( (*(_QWORD *)v28 & 0x100000LL) != 0 )
        {
          v37 = 8LL * ((*(_QWORD *)v28 & 0x200000LL) != 0);
          v38 = v37 + 16LL * ((*(_QWORD *)v28 & 0x80000LL) != 0);
          if ( *(_DWORD *)(v28 + v38 + 32) )
          {
            sub_F1EA70(
              (_DWORD *)(v28 + v38 + 32),
              v28
            + v37
            + 16 * (((*(_QWORD *)v28 & 0x80000LL) != 0) + (unsigned __int64)((*(_QWORD *)v28 & 0x100000LL) != 0))
            + 32,
              (__int64)&ptr);
            v36 = *(_QWORD *)v28;
          }
        }
        v39 = sub_18C0310((_QWORD *)v28);
        p_ptr = nullptr;
        if ( v39 )
          p_ptr = &ptr;
        v41 = 0;
        if ( (v36 & 0x100000) != 0 )
          v41 = *(_DWORD *)(v28 + 16LL * ((v36 & 0x80000) != 0) + 8LL * ((v36 & 0x200000) != 0) + 40);
        v42 = *(_QWORD *)(v28 + 16);
        v43 = v42;
        if ( (v36 & 0x200000) != 0 )
          v43 = sub_18BBAF0((_QWORD *)v28);
        v44 = *(_QWORD *)(v42 + 40);
        v45 = nullptr;
        v46 = *(_QWORD *)(v28 + 24);
        if ( (v36 & 0x80000) != 0 )
          v45 = &v140;
        v138 = *(_DWORD *)(v28 + 4);
        v137 = (_QWORD *)v44;
        v139 = v46;
        result = sub_1907C00(
                   a1,
                   v29,
                   *(_QWORD *)(v29 + 48),
                   1,
                   (__int64)&v137,
                   (__int64)v45,
                   0.0,
                   a4,
                   v43,
                   v41,
                   (__int64)p_ptr);
        if ( ptr != v145 )
        {
          v124 = result;
          free(ptr);
          result = v124;
        }
        if ( HIDWORD(v141[1]) )
        {
          v125 = result;
          free(v141[0]);
          return v125;
        }
      }
      return result;
    case 6:
      v91 = sub_19D0DD0(*(_QWORD *)(a1 + 736));
      sub_19E4310(*(_QWORD *)(a1 + 736), v91);
      return v91;
    case 7:
      v92 = sub_BFB9F0((__int64)a2);
      v14 = sub_EEB7E0(*(_QWORD *)(v92 + 24), (__int64)a2, *(double *)a3.m128i_i64);
      v15 = (__int64 *)(a1 + 8);
      v16 = 4135;
      goto LABEL_9;
    case 8:
      v13 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, *(double *)a3.m128i_i64);
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v13, 0xC0Bu, 0);
      LOBYTE(v140) = *((_DWORD *)a2 + 4) == 0;
      sub_1588420((__int64)&ptr, (unsigned __int8 *)&v140);
      sub_15F7200(&ptr);
      return 1;
    case 9:
      v14 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, *(double *)a3.m128i_i64);
      v15 = (__int64 *)(a1 + 8);
      v16 = 4428;
      goto LABEL_9;
    case 0xA:
      v14 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, *(double *)a3.m128i_i64);
      v15 = (__int64 *)(a1 + 8);
      v16 = 4528;
LABEL_9:
      sub_168B9F0((__int64)&ptr, v15, v14, v16, 0);
      sub_15F7200(&ptr);
      return 1;
  }
  while ( 1 )
  {
    v25 = sub_BFBAE0(v20);
    v26 = *(_WORD *)v25 & 0x1FF;
    if ( v26 <= 0x58u )
      break;
    if ( v26 > 0x5Du )
      goto LABEL_22;
    v20 = *(_QWORD *)(v25 + 32);
    v21 = 5339;
  }
  switch ( v26 )
  {
    case 'G':
      v93 = *(_DWORD *)(v25 + 4);
      v137 = *(_QWORD **)(v25 + 16);
      break;
    case '.':
      v93 = *(_DWORD *)(v25 + 40);
      v137 = *(_QWORD **)(v25 + 24);
      break;
    case '!':
      v104 = *(_BYTE *)(v25 + 27);
      if ( (v104 & 4) != 0 )
      {
        v105 = *(_DWORD *)(v25 + 32);
      }
      else
      {
        v111 = *(unsigned __int16 *)(v25 + 24);
        v112 = (v104 >> 3) & 3;
        if ( v112 )
        {
          v113 = (unsigned __int16)v111;
          v114 = sub_C9AC10(v25);
          v105 = sub_EE7890(0, v114, v112 == 2, v25 + 48, v113, *(_DWORD *)(v25 + 36));
          v104 = *(_BYTE *)(v25 + 27);
        }
        else
        {
          v105 = *(_DWORD *)(v25 + 8 * v111 + 48);
        }
      }
      v93 = v105;
      if ( (v104 & 1) != 0 )
      {
        v21 = 5339;
        v137 = *(_QWORD **)(v25 + 16);
        if ( v137 )
          break;
      }
      else
      {
        v137 = nullptr;
      }
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v105, 0x14DCu, 0);
      v106 = &v136;
      v136 = (*(_BYTE *)(v25 + 26) & 0xFD) == 0;
      v107 = sub_16CF160((__int64)&ptr, (unsigned int *)&v136);
      v108 = sub_C9AC10(v25);
      v109 = v108;
      if ( *(_BYTE *)(v107 + 120) )
      {
        v106 = (_BOOL4 *)v108;
        sub_AE9DF0((unsigned __int8 **)(v107 + 32), v108, 9u);
      }
      else if ( *(_BYTE *)(v107 + 132) )
      {
        v119 = sub_168B9E0((_QWORD *)v107);
        v120 = *(_QWORD *)(v107 + 16);
        if ( v120 )
          v120 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v120 + 32LL))(*(_QWORD *)(v107 + 16));
        *(_QWORD *)&v140 = v120;
        v121 = sub_1587BC0(v119, (__int64 *)&v140, v115, v116, v117, v118);
        v106 = (_BOOL4 *)v109;
        sub_AE9DF0((unsigned __int8 **)(*v121 + 32LL * *(unsigned int *)(v107 + 128) + 8), v109, 9u);
      }
      *(_QWORD *)&v140 = sub_EEC8C0(v11, (__int64)v106, *(double *)a3.m128i_i64);
      sub_1587DB0(v107, (__int64 *)&v140);
      sub_15F7200(&ptr);
      return 1;
    default:
LABEL_22:
      v27 = sub_C00A40(v25, (__int64)a2, v22, v23, v24);
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v27, 0x1506u, 0);
      *(_QWORD *)&v140 = sub_EEC8C0(v25, a1 + 8, *(double *)a3.m128i_i64);
      sub_1587DB0((__int64)&ptr, (__int64 *)&v140);
      sub_15F7200(&ptr);
      return 1;
  }
  sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v93, v21, 0);
  v94 = sub_17BA610((__int64)&ptr, (__int64 *)&v137);
  *(_QWORD *)&v140 = sub_EEC8C0((unsigned __int64)a2, (__int64)&v137, *(double *)a3.m128i_i64);
  sub_1587DB0(v94, (__int64 *)&v140);
  sub_15F7200(&ptr);
  return 1;
}
