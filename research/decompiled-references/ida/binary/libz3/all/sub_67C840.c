__int64 __fastcall sub_67C840(__int64 a1, __int64 a2)
{
  double v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r13
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // r15
  const double *v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r15
  unsigned int v27; // esi
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rsi
  int v35; // r9d
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rbx
  __int64 *v39; // rdi
  __m128 v40; // xmm2
  __int64 v41; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __m128 v45; // xmm0
  __int64 v46; // rax
  __int64 *v47; // r13
  __int64 *v48; // r14
  __int64 v49; // r12
  const double *v50; // rbx
  __int64 v51; // r9
  __int64 v52; // rax
  void (**v53)(void); // rcx
  __int64 v54; // r15
  int v55; // esi
  unsigned int v56; // edx
  void (**v57)(void); // r10
  __int64 v58; // rdx
  void (**v59)(void); // rdi
  void (**v60)(void); // rax
  void (*v61)(void); // rdx
  __int64 v62; // rbx
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rax
  int v66; // ecx
  __int64 v67; // r9
  int v68; // esi
  __int64 *v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // edx
  __int64 *v72; // rdi
  __int64 v73; // rdx
  __int64 *v74; // r8
  __int64 *i; // rax
  __int64 v76; // rdx
  __int64 v77; // r12
  __int64 v78; // rsi
  int v79; // r9d
  int v80; // ecx
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rdi
  void (*v88)(void); // rax
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rax
  char **exception; // r15
  __int64 v94; // rdx
  int v95; // [rsp-8h] [rbp-3F8h]
  int v96; // [rsp+0h] [rbp-3F0h]
  int v97; // [rsp+0h] [rbp-3F0h]
  int v98; // [rsp+0h] [rbp-3F0h]
  __m128i *v99; // [rsp+8h] [rbp-3E8h]
  int v100; // [rsp+8h] [rbp-3E8h]
  __int64 *v101; // [rsp+8h] [rbp-3E8h]
  __m128i *v102; // [rsp+10h] [rbp-3E0h]
  int v103; // [rsp+10h] [rbp-3E0h]
  __int64 *v104; // [rsp+10h] [rbp-3E0h]
  int v105[2]; // [rsp+18h] [rbp-3D8h] BYREF
  __int64 v106; // [rsp+20h] [rbp-3D0h]
  __int64 v107; // [rsp+28h] [rbp-3C8h]
  _DWORD *v108; // [rsp+30h] [rbp-3C0h]
  int v109[2]; // [rsp+38h] [rbp-3B8h]
  __int64 *v110; // [rsp+40h] [rbp-3B0h]
  _DWORD *v111; // [rsp+48h] [rbp-3A8h]
  int v112[4]; // [rsp+50h] [rbp-3A0h] BYREF
  int v113[4]; // [rsp+60h] [rbp-390h] BYREF
  unsigned int v114; // [rsp+70h] [rbp-380h]
  unsigned int v115; // [rsp+74h] [rbp-37Ch]
  const double *v116; // [rsp+78h] [rbp-378h]
  int v117; // [rsp+80h] [rbp-370h]
  void (***v118)(void); // [rsp+88h] [rbp-368h] BYREF
  int v119[2]; // [rsp+90h] [rbp-360h] BYREF
  __int64 v120; // [rsp+98h] [rbp-358h]
  __m128i v121; // [rsp+A0h] [rbp-350h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-340h] BYREF
  int v123[2]; // [rsp+C0h] [rbp-330h] BYREF
  __int64 v124; // [rsp+C8h] [rbp-328h]
  __m128 v125; // [rsp+D0h] [rbp-320h] BYREF
  _BYTE v126[48]; // [rsp+E0h] [rbp-310h] BYREF
  _BYTE v127[64]; // [rsp+110h] [rbp-2E0h] BYREF
  __int64 v128; // [rsp+150h] [rbp-2A0h] BYREF
  __int64 v129; // [rsp+158h] [rbp-298h]
  __int64 v130[67]; // [rsp+190h] [rbp-260h] BYREF
  _BYTE v131[72]; // [rsp+3A8h] [rbp-48h] BYREF

  v3 = *(double *)a1;
  v116 = (const double *)a1;
  v111 = (_DWORD *)a2;
  v4 = *(_QWORD *)(a1 + 40);
  v120 = *(_QWORD *)&v3;
  LODWORD(v3) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)v119 = 0;
  v5 = *(_QWORD *)(a2 + 24);
  v114 = LODWORD(v3);
  if ( !(unsigned __int8)sub_1373520(v4, v5, v119, 1) )
  {
    v115 = 0;
    goto LABEL_33;
  }
  if ( *(_WORD *)(a2 + 4) == 2 )
  {
    v64 = v111[4];
    if ( v64 )
    {
      if ( v64 != 1 || *(_QWORD *)v119 != *(_QWORD *)(*(_QWORD *)v116 + 864LL) )
        goto LABEL_3;
    }
    else if ( *(_QWORD *)v119 != *(_QWORD *)(*(_QWORD *)v116 + 856LL) )
    {
      goto LABEL_3;
    }
    v115 = -1;
    goto LABEL_33;
  }
LABEL_3:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v116 + 6) + 192LL))(*((_QWORD *)v116 + 6));
  v107 = *(_QWORD *)v116;
  v121 = (__m128i)(unsigned __int64)v107;
  v99 = &v121;
  sub_676040(v121.m128i_i64, v114);
  *(_QWORD *)v112 = v121.m128i_i64[1];
  v106 = v121.m128i_i64[0];
  si128 = (__m128i)(unsigned __int64)v107;
  v102 = &si128;
  sub_676040(si128.m128i_i64, v114);
  *(_QWORD *)v105 = si128.m128i_i64[1];
  v107 = si128.m128i_i64[0];
  if ( v114 )
  {
    v6 = 0;
    *(_QWORD *)v109 = v114;
    v108 = v111 + 20;
    do
    {
      v7 = *(_QWORD *)&v111[2 * v6 + 20];
      v8 = *(_QWORD *)v116;
      v9 = sub_15E3D10(
             *(_QWORD *)v116,
             (int)v108 + 8 * ((int)v6 + v111[5]),
             (int)&qword_18D6CD0,
             0,
             0,
             v7,
             0,
             v95,
             v96,
             (int)v99,
             (int)v102,
             v105[0],
             v106,
             v107,
             (char)v108,
             v109[0],
             (int)v110,
             (int)v111,
             v112[0],
             v112[2],
             v113[0],
             v113[2],
             v114,
             (int)v116,
             v117,
             (int)v118,
             v119[0],
             v120,
             v121.m128i_i32[0],
             (void *)v121.m128i_i64[1],
             si128.m128i_i32[0],
             si128.m128i_i64[1]);
      v11 = sub_15DC610(
              v8,
              v9,
              0,
              0,
              v95,
              v10,
              v97,
              v100,
              v103,
              v105[0],
              v106,
              v107,
              (int)v108,
              v109[0],
              (int)v110,
              v111);
      v12 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      v13 = *(_QWORD *)(*(_QWORD *)v112 + 8 * v6);
      if ( v13 )
      {
        v14 = (*(_DWORD *)(v13 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v106, v13);
      }
      v15 = *(_QWORD *)v112;
      v16 = v116;
      *(_QWORD *)(*(_QWORD *)v112 + 8 * v6) = v12;
      if ( (unsigned __int8)sub_13735C0(*((_QWORD *)v16 + 5), v7) )
      {
        v17 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v16 + 5) + 16LL))(
                           *((_QWORD *)v16 + 5),
                           v7);
        v18 = *(_QWORD *)v16;
        *(_QWORD *)v113 = *(_QWORD *)(v15 + 8 * v6);
        v19 = *v17;
        v110 = (__int64 *)v18;
        v128 = v18;
        if ( v19 )
        {
          v20 = v19 + 8LL * *(unsigned int *)(v19 - 4);
          if ( v20 != v19 )
          {
            v21 = v19;
            v19 = 0;
            while ( 1 )
            {
              v25 = sub_15E1B70(v18);
              v26 = v25;
              if ( v25 )
                ++*(_DWORD *)(v25 + 8);
              if ( !v19 )
                break;
              v27 = *(_DWORD *)(v19 - 4);
              if ( v27 != *(_DWORD *)(v19 - 8) )
              {
                v22 = v27;
                v23 = v27 + 1;
                v24 = (__int64 *)(v19 + 8 * v22);
                goto LABEL_15;
              }
              v28 = (3 * v27 + 1) >> 1;
              v29 = 8 * v28 + 8;
              if ( 8 * v27 + 8 >= v29 || v27 >= v28 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_107EF6(v130, "Overflow encountered when expanding vector", v94);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v130);
                sub_233E40((__int64)v130);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v115 = (3 * v27 + 1) >> 1;
              v30 = (unsigned int *)sub_186B300((void *)(v19 - 8), v29);
              v19 = (__int64)(v30 + 2);
              v21 += 8;
              *v30 = v115;
              v31 = v30[1];
              v23 = (unsigned int)(v31 + 1);
              *(_QWORD *)(v19 + 8 * v31) = v26;
              *(_DWORD *)(v19 - 4) = v23;
              if ( v20 == v21 )
                goto LABEL_24;
LABEL_16:
              v18 = *(_QWORD *)v116;
            }
            v43 = (_QWORD *)sub_186B270(0x18u);
            v23 = 1;
            *v43 = 2;
            v19 = (__int64)(v43 + 1);
            v24 = v43 + 1;
LABEL_15:
            v21 += 8;
            *v24 = v26;
            *(_DWORD *)(v19 - 4) = v23;
            if ( v20 == v21 )
              goto LABEL_24;
            goto LABEL_16;
          }
          v19 = 0;
        }
        v23 = 0;
LABEL_24:
        v32 = sub_15EC240(v110, v23);
        v33 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        sub_E5EBF0(*((_QWORD *)v116 + 6), v32);
        sub_675460(v33, (__int64)v110);
        v129 = v19;
        sub_2334C0(&v128);
      }
      ++v6;
    }
    while ( *(_QWORD *)v109 != v6 );
  }
  v34 = *(_QWORD *)v116;
  *(_QWORD *)v109 = v130;
  sub_633760((__int64)v130, v34, 0, (__int64)v131);
  v131[8] = 1;
  v130[0] = (__int64)&off_1C4CA80;
  if ( *(_QWORD *)v112 )
  {
    v36 = *(_DWORD *)(*(_QWORD *)v112 - 4LL);
    v37 = v112[0];
  }
  else
  {
    v36 = 0;
    v37 = 0;
  }
  sub_157BE40(
    (int)v123,
    v109[0],
    v119[0],
    v36,
    v37,
    v35,
    v96,
    (__int64)v99,
    (int)v102,
    v105[0],
    v106,
    v107,
    (__int64)v123,
    *(void **)v109);
  v38 = *(_QWORD *)v123;
  if ( *((_WORD *)v111 + 2) == 2 && !v111[4] )
  {
    v63 = sub_15E1A70(*(_QWORD *)v116);
    v38 = v63;
    if ( v63 )
      ++*(_DWORD *)(v63 + 8);
    sub_675460(*(__int64 *)v123, v124);
    *(_QWORD *)v123 = v38;
  }
  sub_E5EBF0(*((_QWORD *)v116 + 6), v38);
  v115 = sub_E60CB0(*((std::ios_base **)v116 + 6), 0, 0);
  v118 = nullptr;
  if ( v115 == 1 )
  {
    v44 = *((_QWORD *)v111 + 3);
    v45 = _mm_loadh_ps(v116);
    v125 = v45;
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    sub_167EE60(v126, &v125, 0, 0, 0);
    sub_167F5F0(v127, v126);
    *(_QWORD *)v113 = &v128;
    sub_167F5B0(&v128, v126);
    while ( (unsigned __int8)sub_167E490(v127, *(_QWORD *)v113) )
    {
      v46 = sub_167E460(v127);
      sub_67C280((__int64)v116, v46);
      sub_167EA90(v127);
    }
    sub_6642B0(*(__int64 *)v113);
    sub_6642B0((__int64)v127);
    sub_677270((__int64)v126);
    sub_39A840(*((_QWORD **)v116 + 6), &v118);
    if ( !v114 )
      goto LABEL_76;
    v47 = *(__int64 **)v105;
    v48 = *(__int64 **)v112;
    v110 = (__int64 *)(*(_QWORD *)v105 + 8LL * v114);
    while ( 1 )
    {
      v49 = *v48;
      v50 = v116;
      v51 = *(_QWORD *)(*v48 + 16);
      v52 = *((unsigned int *)v118 + 8);
      v53 = v118[3];
      v54 = *(_QWORD *)v116;
      v55 = *(_DWORD *)(v51 + 12);
      v56 = v52 - 1;
      v52 *= 24;
      v57 = (void (**)(void))((char *)v53 + v52);
      v58 = 24LL * (v55 & v56);
      v59 = &v53[(unsigned __int64)v58 / 8];
      if ( v58 == v52 )
      {
LABEL_87:
        if ( v53 != v59 )
        {
          v50 = v116;
          while ( 1 )
          {
            v88 = *v53;
            if ( (unsigned __int64)*v53 > 1 )
            {
              if ( *((_DWORD *)v88 + 3) == v55 && (void (*)(void))v51 == v88 )
              {
                v60 = v53;
                goto LABEL_62;
              }
            }
            else if ( !v88 )
            {
              goto LABEL_51;
            }
            v53 += 3;
            if ( v59 == v53 )
              goto LABEL_51;
          }
        }
        goto LABEL_52;
      }
      v60 = &v53[(unsigned __int64)v58 / 8];
      while ( 1 )
      {
        v61 = *v60;
        if ( (unsigned __int64)*v60 <= 1 )
          break;
        if ( *((_DWORD *)v61 + 3) == v55 && (void (*)(void))v51 == v61 )
        {
LABEL_62:
          v62 = (__int64)v60[2];
          if ( v62 )
            goto LABEL_63;
          goto LABEL_52;
        }
LABEL_48:
        v60 += 3;
        if ( v57 == v60 )
          goto LABEL_87;
      }
      if ( v61 )
        goto LABEL_48;
LABEL_51:
      v116 = v50;
LABEL_52:
      v62 = ((__int64 (__fastcall *)(void (***)(void), _QWORD))(*v118)[5])(v118, *(_QWORD *)(v51 + 40));
      if ( !v62 )
      {
        sub_675460(0, v54);
        sub_675460(v125.m128_i64[0], v125.m128_i64[1]);
        v115 = 0;
        break;
      }
LABEL_63:
      ++*(_DWORD *)(v62 + 8);
      v65 = sub_15D1F10(v49);
      v66 = *(_DWORD *)(v62 + 12);
      v67 = v65;
      LODWORD(v65) = (*(_DWORD *)(v65 + 12) - v66) ^ (v66 << 8);
      v68 = ((v65 ^ ((v66 - (_DWORD)v65) << 16)) + v65 - v66) ^ ((v66 - (_DWORD)v65) << 10);
      v69 = *((__int64 **)v116 + 7);
      v70 = *((unsigned int *)v116 + 16);
      v71 = v70 - 1;
      v70 *= 32;
      v72 = (__int64 *)((char *)v69 + v70);
      v73 = 32LL * (v68 & v71);
      v74 = &v69[(unsigned __int64)v73 / 8];
      if ( v73 != v70 )
      {
        for ( i = &v69[(unsigned __int64)v73 / 8]; v72 != i; i += 4 )
        {
          v76 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *((_DWORD *)i + 6) == v68 && v62 == v76 && v67 == i[1] )
            {
              v77 = i[2];
              if ( !v77 )
                goto LABEL_105;
              goto LABEL_86;
            }
          }
          else if ( !v76 )
          {
            goto LABEL_70;
          }
        }
      }
      if ( v69 == v74 )
      {
LABEL_70:
        sub_67B690(*(__m128 **)v113, v116, v62, (int)v69, (int)v74, v67);
        v77 = v128;
        sub_675460(v62, v129);
        if ( v77 )
          goto LABEL_71;
        goto LABEL_72;
      }
      while ( 2 )
      {
        v89 = *v69;
        if ( (unsigned __int64)*v69 <= 1 )
        {
          if ( !v89 )
            goto LABEL_70;
          goto LABEL_99;
        }
        if ( *((_DWORD *)v69 + 6) != v68 || v62 != v89 || v67 != v69[1] )
        {
LABEL_99:
          v69 += 4;
          if ( v74 == v69 )
            goto LABEL_70;
          continue;
        }
        break;
      }
      v77 = v69[2];
      if ( !v77 )
      {
LABEL_105:
        sub_675460(v62, v54);
        goto LABEL_72;
      }
LABEL_86:
      ++*(_DWORD *)(v77 + 8);
      sub_675460(v62, v54);
LABEL_71:
      ++*(_DWORD *)(v77 + 8);
LABEL_72:
      v78 = *v47;
      if ( *v47 )
      {
        v14 = (*(_DWORD *)(v78 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v107, v78);
      }
      *v47++ = v77;
      ++v48;
      sub_675460(v77, v54);
      if ( v47 == v110 )
      {
LABEL_76:
        sub_675460(v125.m128_i64[0], v125.m128_i64[1]);
        if ( *(_QWORD *)v105 )
          v80 = *(_DWORD *)(*(_QWORD *)v105 - 4LL);
        else
          v80 = 0;
        sub_157BE40(
          v113[0],
          v109[0],
          *((_QWORD *)v111 + 3),
          v80,
          v105[0],
          v79,
          v98,
          (__int64)v101,
          (int)v104,
          v105[0],
          v106,
          v107,
          (__int64)v108,
          *(void **)v109);
        v81 = *(_QWORD *)v123;
        *(_QWORD *)v123 = v128;
        v128 = v81;
        sub_675460(v81, v129);
        v82 = *((_QWORD *)v116 + 1) + 40LL;
        v110 = *((__int64 **)v116 + 1);
        sub_14B9B80(v82, v108);
        v83 = sub_15E1B70(*(_QWORD *)v116);
        v84 = v83;
        if ( v83 )
          ++*(_DWORD *)(v83 + 8);
        v85 = v124;
        v86 = *(_QWORD *)v123;
        sub_675460(*(__int64 *)v123, v124);
        *(_QWORD *)v123 = v84;
        if ( (unsigned int)sub_180B130(v86) > 9 )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)v45.m128_u64) )
          {
            sub_186A4C0(*(double *)v45.m128_u64);
            v90 = sub_180B150(v86, v85);
            v91 = sub_160EBE0(v90, v108);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v91, "\n");
          }
          else
          {
            v92 = sub_180B150(v86, v85);
            sub_160EBE0(v92, v108);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        v87 = *((_QWORD *)v116 + 1);
        v128 = *(_QWORD *)v123;
        if ( *(_QWORD *)v123 )
          ++*(_DWORD *)(*(_QWORD *)v123 + 8LL);
        sub_6761A0((unsigned int **)(v87 + 24), *(_QWORD **)v113);
        break;
      }
    }
  }
  v39 = *((__int64 **)v116 + 6);
  v40 = _mm_loadh_ps((const double *)v105);
  *(__m128 *)v113 = _mm_loadh_ps((const double *)v112);
  v41 = *v39;
  *(__m128 *)v112 = v40;
  (*(void (__fastcall **)(__int64 *, __int64))(v41 + 200))(v39, 1);
  sub_675410(v118);
  sub_675460(*(__int64 *)v123, v124);
  v130[0] = (__int64)&off_1C4CA80;
  sub_267D20(*(_QWORD **)v109);
  si128 = _mm_load_si128((const __m128i *)v112);
  sub_2334C0(v104);
  v121 = _mm_load_si128((const __m128i *)v113);
  sub_2334C0(v101);
LABEL_33:
  sub_675460(*(__int64 *)v119, v120);
  return v115;
}

