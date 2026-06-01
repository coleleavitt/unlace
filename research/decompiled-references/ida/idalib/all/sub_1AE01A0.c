__int64 __fastcall sub_1AE01A0(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned int v12; // edx
  unsigned __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdi
  unsigned __int8 *v24; // r14
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  unsigned __int8 *v27; // r12
  __int64 v28; // r14
  unsigned __int8 *v29; // rdx
  __int64 v30; // rax
  char v31; // dl
  unsigned __int8 *v32; // r12
  unsigned __int8 *v33; // rdx
  __int64 v34; // rax
  char v35; // r14
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int8 *v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r12
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r13
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r14
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  unsigned __int8 *v79; // r14
  __int64 v80; // r15
  _BYTE *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  int v84; // eax
  unsigned __int8 *v85; // rax
  __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rdx
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // r14
  __int64 v99; // r15
  __int64 v100; // r14
  void *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // r15
  __int64 v105; // r14
  void *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // r13
  __int64 v109; // r15
  __int64 v110; // r13
  void *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r15
  __int64 v114; // rdx
  __int64 v115; // r15
  void *v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // r15
  __int64 v120; // rax
  void *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  void *v126; // rdi
  __int64 v127; // [rsp+0h] [rbp-F8h]
  __int64 v128; // [rsp+0h] [rbp-F8h]
  __int64 v129; // [rsp+0h] [rbp-F8h]
  __int64 v130; // [rsp+8h] [rbp-F0h]
  __int64 v131; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v132; // [rsp+20h] [rbp-D8h] BYREF
  int v133; // [rsp+28h] [rbp-D0h]
  _QWORD v134[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v136; // [rsp+50h] [rbp-A8h]
  __int64 v137; // [rsp+58h] [rbp-A0h]
  char v138; // [rsp+A8h] [rbp-50h]
  unsigned int v139; // [rsp+B0h] [rbp-48h]
  char v140; // [rsp+B4h] [rbp-44h]

  if ( (unsigned __int8)sub_16EC930(*a1, a2, 2u, a3) )
    return 1;
  result = sub_1ADC130(*a1, a2, v5, v6, v7, v8, a3);
  if ( (_BYTE)result )
    return 1;
  v10 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + v10 + 40) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) != 13 || ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) != 0x1F0 )
  {
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v12 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0 || (v12 = sub_EEB7E0(*(_QWORD *)(a2 + v10 + 32), a2, a3)) == 0 )
    {
      v12 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a3);
      if ( !v12 )
      {
        if ( *(_DWORD *)(a2 + 16) )
        {
          v23 = *(_QWORD *)(a2 + v10 + 32);
          if ( v23 )
            v12 = sub_EEB7E0(v23, a2, a3);
        }
      }
    }
    v13 = (unsigned __int64 *)a1;
    sub_168B9F0((__int64)v134, a1, v12, 0x123Fu, 0);
    v14 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v15 = v14;
    if ( v14 && (*(_BYTE *)(v14 + 28) & 0x7Fu) - 34 >= 6 )
      v15 = 0;
    if ( v138 )
    {
      v24 = v136;
      if ( !v136 )
      {
        v90 = v137;
        v91 = *(_DWORD *)(v137 + 14976);
        if ( v91 )
        {
          v112 = (unsigned int)(v91 - 1);
          *(_DWORD *)(v137 + 14976) = v112;
          v24 = *(unsigned __int8 **)(v90 + 8 * v112 + 14848);
          v113 = *((unsigned int *)v24 + 134);
          *v24 = 0;
          v114 = *((_QWORD *)v24 + 66);
          *((_DWORD *)v24 + 106) = 0;
          v115 = v114 + (v113 << 6);
          while ( v114 != v115 )
          {
            while ( 1 )
            {
              v115 -= 64;
              v116 = *(void **)(v115 + 24);
              if ( v116 == (void *)(v115 + 40) )
                break;
              v127 = v114;
              operator delete(v116);
              v114 = v127;
              if ( v127 == v115 )
                goto LABEL_95;
            }
          }
LABEL_95:
          *((_DWORD *)v24 + 134) = 0;
        }
        else
        {
          v24 = (unsigned __int8 *)operator new(0x3A0u);
          *v24 = 0;
          *((_QWORD *)v24 + 12) = v24 + 112;
          *((_QWORD *)v24 + 16) = v24 + 144;
          *((_QWORD *)v24 + 20) = v24 + 176;
          *((_QWORD *)v24 + 24) = v24 + 208;
          *((_QWORD *)v24 + 28) = v24 + 240;
          *((_QWORD *)v24 + 32) = v24 + 272;
          *((_QWORD *)v24 + 36) = v24 + 304;
          *((_QWORD *)v24 + 40) = v24 + 336;
          *((_QWORD *)v24 + 44) = v24 + 368;
          *((_QWORD *)v24 + 48) = v24 + 400;
          *((_QWORD *)v24 + 52) = v24 + 432;
          *((_QWORD *)v24 + 13) = 0;
          v24[112] = 0;
          *((_QWORD *)v24 + 17) = 0;
          v24[144] = 0;
          *((_QWORD *)v24 + 21) = 0;
          v24[176] = 0;
          *((_QWORD *)v24 + 25) = 0;
          v24[208] = 0;
          *((_QWORD *)v24 + 29) = 0;
          v24[240] = 0;
          *((_QWORD *)v24 + 33) = 0;
          v24[272] = 0;
          *((_QWORD *)v24 + 37) = 0;
          v24[304] = 0;
          *((_QWORD *)v24 + 41) = 0;
          v24[336] = 0;
          *((_QWORD *)v24 + 45) = 0;
          v24[368] = 0;
          *((_QWORD *)v24 + 49) = 0;
          v24[400] = 0;
          *((_QWORD *)v24 + 53) = 0x800000000LL;
          *((_QWORD *)v24 + 66) = v24 + 544;
          *((_QWORD *)v24 + 67) = 0x600000000LL;
        }
        v136 = v24;
      }
      v24[*v24 + 1] = 10;
      v25 = v136;
      v26 = *v136;
      *v136 = v26 + 1;
      *(_QWORD *)&v25[8 * v26 + 16] = v15;
    }
    else if ( v140 )
    {
      v75 = sub_168B9E0(v134);
      v76 = v135;
      if ( v135 )
        v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v135 + 32LL))(v135);
      v13 = &v132;
      v132 = v76;
      v77 = sub_1587BC0(v75, (__int64 *)&v132, v71, v72, v73, v74);
      v78 = *v77 + 32LL * v139;
      v79 = *(unsigned __int8 **)(v78 + 8);
      v80 = v78;
      if ( !v79 )
      {
        v95 = *(_QWORD *)(v78 + 16);
        v96 = *(_DWORD *)(v95 + 14976);
        if ( v96 )
        {
          v122 = (unsigned int)(v96 - 1);
          *(_DWORD *)(v95 + 14976) = v122;
          v79 = *(unsigned __int8 **)(v95 + 8 * v122 + 14848);
          v123 = *((unsigned int *)v79 + 134);
          *v79 = 0;
          v124 = *((_QWORD *)v79 + 66);
          *((_DWORD *)v79 + 106) = 0;
          v125 = v124 + (v123 << 6);
          v129 = v124;
          while ( v129 != v125 )
          {
            while ( 1 )
            {
              v125 -= 64;
              v126 = *(void **)(v125 + 24);
              if ( v126 == (void *)(v125 + 40) )
                break;
              v130 = v125;
              operator delete(v126);
              v125 = v130;
              if ( v129 == v130 )
                goto LABEL_104;
            }
          }
LABEL_104:
          *((_DWORD *)v79 + 134) = 0;
        }
        else
        {
          v79 = (unsigned __int8 *)operator new(0x3A0u);
          *v79 = 0;
          *((_QWORD *)v79 + 12) = v79 + 112;
          *((_QWORD *)v79 + 16) = v79 + 144;
          *((_QWORD *)v79 + 20) = v79 + 176;
          *((_QWORD *)v79 + 24) = v79 + 208;
          *((_QWORD *)v79 + 28) = v79 + 240;
          *((_QWORD *)v79 + 32) = v79 + 272;
          *((_QWORD *)v79 + 36) = v79 + 304;
          *((_QWORD *)v79 + 40) = v79 + 336;
          *((_QWORD *)v79 + 44) = v79 + 368;
          *((_QWORD *)v79 + 48) = v79 + 400;
          *((_QWORD *)v79 + 52) = v79 + 432;
          *((_QWORD *)v79 + 13) = 0;
          v79[112] = 0;
          *((_QWORD *)v79 + 17) = 0;
          v79[144] = 0;
          *((_QWORD *)v79 + 21) = 0;
          v79[176] = 0;
          *((_QWORD *)v79 + 25) = 0;
          v79[208] = 0;
          *((_QWORD *)v79 + 29) = 0;
          v79[240] = 0;
          *((_QWORD *)v79 + 33) = 0;
          v79[272] = 0;
          *((_QWORD *)v79 + 37) = 0;
          v79[304] = 0;
          *((_QWORD *)v79 + 41) = 0;
          v79[336] = 0;
          *((_QWORD *)v79 + 45) = 0;
          v79[368] = 0;
          *((_QWORD *)v79 + 49) = 0;
          v79[400] = 0;
          *((_QWORD *)v79 + 53) = 0x800000000LL;
          *((_QWORD *)v79 + 66) = v79 + 544;
          *((_QWORD *)v79 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v80 + 8) = v79;
      }
      v79[*v79 + 1] = 10;
      v81 = *(_BYTE **)(v80 + 8);
      v82 = (unsigned __int8)*v81;
      *v81 = v82 + 1;
      *(_QWORD *)&v81[8 * v82 + 16] = v15;
    }
    v16 = sub_168B6C0((__int64)a1);
    v17 = v16;
    if ( v138 )
    {
      v27 = v136;
      v28 = *(_QWORD *)(v16 + 19488);
      if ( !v136 )
      {
        v88 = v137;
        v89 = *(_DWORD *)(v137 + 14976);
        if ( v89 )
        {
          v107 = (unsigned int)(v89 - 1);
          *(_DWORD *)(v137 + 14976) = v107;
          v27 = *(unsigned __int8 **)(v88 + 8 * v107 + 14848);
          v108 = *((unsigned int *)v27 + 134);
          v109 = *((_QWORD *)v27 + 66);
          *v27 = 0;
          *((_DWORD *)v27 + 106) = 0;
          v110 = v109 + (v108 << 6);
          while ( v109 != v110 )
          {
            while ( 1 )
            {
              v110 -= 64;
              v111 = *(void **)(v110 + 24);
              if ( v111 == (void *)(v110 + 40) )
                break;
              operator delete(v111);
              if ( v109 == v110 )
                goto LABEL_90;
            }
          }
LABEL_90:
          *((_DWORD *)v27 + 134) = 0;
        }
        else
        {
          v27 = (unsigned __int8 *)operator new(0x3A0u);
          *v27 = 0;
          *((_QWORD *)v27 + 12) = v27 + 112;
          *((_QWORD *)v27 + 16) = v27 + 144;
          *((_QWORD *)v27 + 20) = v27 + 176;
          *((_QWORD *)v27 + 24) = v27 + 208;
          *((_QWORD *)v27 + 28) = v27 + 240;
          *((_QWORD *)v27 + 32) = v27 + 272;
          *((_QWORD *)v27 + 36) = v27 + 304;
          *((_QWORD *)v27 + 40) = v27 + 336;
          *((_QWORD *)v27 + 44) = v27 + 368;
          *((_QWORD *)v27 + 48) = v27 + 400;
          *((_QWORD *)v27 + 52) = v27 + 432;
          *((_QWORD *)v27 + 13) = 0;
          v27[112] = 0;
          *((_QWORD *)v27 + 17) = 0;
          v27[144] = 0;
          *((_QWORD *)v27 + 21) = 0;
          v27[176] = 0;
          *((_QWORD *)v27 + 25) = 0;
          v27[208] = 0;
          *((_QWORD *)v27 + 29) = 0;
          v27[240] = 0;
          *((_QWORD *)v27 + 33) = 0;
          v27[272] = 0;
          *((_QWORD *)v27 + 37) = 0;
          v27[304] = 0;
          *((_QWORD *)v27 + 41) = 0;
          v27[336] = 0;
          *((_QWORD *)v27 + 45) = 0;
          v27[368] = 0;
          *((_QWORD *)v27 + 49) = 0;
          v27[400] = 0;
          *((_QWORD *)v27 + 53) = 0x800000000LL;
          *((_QWORD *)v27 + 66) = v27 + 544;
          *((_QWORD *)v27 + 67) = 0x600000000LL;
        }
        v136 = v27;
      }
      v27[*v27 + 1] = 8;
      v29 = v136;
      v30 = *v136;
      *v136 = v30 + 1;
      *(_QWORD *)&v29[8 * v30 + 16] = v28;
      v31 = v138;
    }
    else
    {
      if ( !v140 )
      {
        v18 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
        v19 = *(_QWORD *)(v18 + 8);
        goto LABEL_17;
      }
      v68 = sub_168B9E0(v134);
      v69 = v135;
      if ( v135 )
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v135 + 32LL))(v135);
      v132 = v69;
      v70 = sub_1587BC0(v68, (__int64 *)&v132, v64, v65, v66, v67);
      v13 = *(unsigned __int64 **)(v17 + 19488);
      sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v139 + 8), (__int64)v13, 8u);
      v31 = v138;
    }
    v18 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
    v19 = *(_QWORD *)(v18 + 8);
    if ( v31 )
    {
      v32 = v136;
      if ( !v136 )
      {
        v86 = v137;
        v87 = *(_DWORD *)(v137 + 14976);
        if ( v87 )
        {
          v102 = (unsigned int)(v87 - 1);
          *(_DWORD *)(v137 + 14976) = v102;
          v32 = *(unsigned __int8 **)(v86 + 8 * v102 + 14848);
          v103 = *((unsigned int *)v32 + 134);
          v104 = *((_QWORD *)v32 + 66);
          *v32 = 0;
          *((_DWORD *)v32 + 106) = 0;
          v105 = v104 + (v103 << 6);
          while ( v104 != v105 )
          {
            while ( 1 )
            {
              v105 -= 64;
              v106 = *(void **)(v105 + 24);
              if ( v106 == (void *)(v105 + 40) )
                break;
              operator delete(v106);
              if ( v104 == v105 )
                goto LABEL_85;
            }
          }
LABEL_85:
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
          v32 = (unsigned __int8 *)operator new(0x3A0u);
          *v32 = 0;
          *((_QWORD *)v32 + 12) = v32 + 112;
          *((_QWORD *)v32 + 16) = v32 + 144;
          *((_QWORD *)v32 + 20) = v32 + 176;
          *((_QWORD *)v32 + 24) = v32 + 208;
          *((_QWORD *)v32 + 28) = v32 + 240;
          *((_QWORD *)v32 + 32) = v32 + 272;
          *((_QWORD *)v32 + 36) = v32 + 304;
          *((_QWORD *)v32 + 40) = v32 + 336;
          *((_QWORD *)v32 + 44) = v32 + 368;
          *((_QWORD *)v32 + 48) = v32 + 400;
          *((_QWORD *)v32 + 52) = v32 + 432;
          *((_QWORD *)v32 + 13) = 0;
          v32[112] = 0;
          *((_QWORD *)v32 + 17) = 0;
          v32[144] = 0;
          *((_QWORD *)v32 + 21) = 0;
          v32[176] = 0;
          *((_QWORD *)v32 + 25) = 0;
          v32[208] = 0;
          *((_QWORD *)v32 + 29) = 0;
          v32[240] = 0;
          *((_QWORD *)v32 + 33) = 0;
          v32[272] = 0;
          *((_QWORD *)v32 + 37) = 0;
          v32[304] = 0;
          *((_QWORD *)v32 + 41) = 0;
          v32[336] = 0;
          *((_QWORD *)v32 + 45) = 0;
          v32[368] = 0;
          *((_QWORD *)v32 + 49) = 0;
          v32[400] = 0;
          *((_QWORD *)v32 + 53) = 0x800000000LL;
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        v136 = v32;
      }
      v32[*v32 + 1] = 8;
      v33 = v136;
      v34 = *v136;
      *v136 = v34 + 1;
      *(_QWORD *)&v33[8 * v34 + 16] = v19;
      goto LABEL_33;
    }
LABEL_17:
    if ( !v140 )
    {
      v20 = sub_EEC8C0(v18, (__int64)v13, a3);
      v21 = v20;
      v22 = HIDWORD(v20);
      goto LABEL_19;
    }
    v61 = sub_168B9E0(v134);
    v62 = v135;
    if ( v135 )
      v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v135 + 32LL))(v135);
    v132 = v62;
    v63 = sub_1587BC0(v61, (__int64 *)&v132, v57, v58, v59, v60);
    v13 = (unsigned __int64 *)v19;
    sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v139 + 8), v19, 8u);
LABEL_33:
    v35 = v138;
    v36 = sub_EEC8C0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40), (__int64)v13, a3);
    v21 = v36;
    v37 = HIDWORD(v36);
    LODWORD(v22) = HIDWORD(v36);
    if ( v35 )
    {
      v38 = v136;
      if ( v136 )
      {
        v39 = *((unsigned int *)v136 + 106);
        v40 = *((unsigned int *)v136 + 107);
        v41 = v39 + 1;
      }
      else
      {
        v83 = v137;
        v84 = *(_DWORD *)(v137 + 14976);
        if ( v84 )
        {
          v97 = (unsigned int)(v84 - 1);
          *(_DWORD *)(v137 + 14976) = v97;
          v38 = *(unsigned __int8 **)(v83 + 8 * v97 + 14848);
          v98 = *((unsigned int *)v38 + 134);
          v99 = *((_QWORD *)v38 + 66);
          *v38 = 0;
          *((_DWORD *)v38 + 106) = 0;
          v100 = v99 + (v98 << 6);
          while ( v99 != v100 )
          {
            while ( 1 )
            {
              v100 -= 64;
              v101 = *(void **)(v100 + 24);
              if ( v101 == (void *)(v100 + 40) )
                break;
              operator delete(v101);
              if ( v99 == v100 )
                goto LABEL_80;
            }
          }
LABEL_80:
          v39 = *((unsigned int *)v38 + 106);
          v40 = *((unsigned int *)v38 + 107);
          *((_DWORD *)v38 + 134) = 0;
          v41 = v39 + 1;
        }
        else
        {
          v85 = (unsigned __int8 *)operator new(0x3A0u);
          v40 = 8;
          v41 = 1;
          v38 = v85;
          *v85 = 0;
          *((_QWORD *)v85 + 12) = v85 + 112;
          *((_QWORD *)v85 + 16) = v85 + 144;
          *((_QWORD *)v85 + 20) = v85 + 176;
          *((_QWORD *)v85 + 24) = v85 + 208;
          *((_QWORD *)v85 + 28) = v85 + 240;
          *((_QWORD *)v85 + 32) = v85 + 272;
          *((_QWORD *)v85 + 36) = v85 + 304;
          *((_QWORD *)v85 + 40) = v85 + 336;
          *((_QWORD *)v85 + 44) = v85 + 368;
          *((_QWORD *)v85 + 48) = v85 + 400;
          *((_QWORD *)v85 + 52) = v85 + 432;
          *((_QWORD *)v85 + 13) = 0;
          v85[112] = 0;
          *((_QWORD *)v85 + 17) = 0;
          v85[144] = 0;
          *((_QWORD *)v85 + 21) = 0;
          v85[176] = 0;
          *((_QWORD *)v85 + 25) = 0;
          v85[208] = 0;
          *((_QWORD *)v85 + 29) = 0;
          v85[240] = 0;
          *((_QWORD *)v85 + 33) = 0;
          v85[272] = 0;
          *((_QWORD *)v85 + 37) = 0;
          v85[304] = 0;
          *((_QWORD *)v85 + 41) = 0;
          v85[336] = 0;
          *((_QWORD *)v85 + 45) = 0;
          v85[368] = 0;
          *((_QWORD *)v85 + 49) = 0;
          v85[400] = 0;
          *((_QWORD *)v85 + 53) = 0x800000000LL;
          *((_QWORD *)v85 + 66) = v85 + 544;
          *((_QWORD *)v85 + 67) = 0x600000000LL;
          v39 = 0;
        }
        v136 = v38;
      }
      v132 = __PAIR64__(v37, v21);
      LOBYTE(v133) = 1;
      if ( v41 > v40 )
      {
        sub_2237220(v38 + 416, v38 + 432, v41, 12);
        v39 = *((unsigned int *)v38 + 106);
      }
      v42 = *((_QWORD *)v38 + 52) + 12 * v39;
      *(_QWORD *)v42 = v132;
      *(_DWORD *)(v42 + 8) = v133;
      ++*((_DWORD *)v38 + 106);
      goto LABEL_20;
    }
LABEL_19:
    if ( v140 )
    {
      v45 = sub_168B9E0(v134);
      v48 = v135;
      if ( v135 )
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v135 + 32LL))(v135);
      v131 = v48;
      v49 = sub_1587BC0(v45, &v131, v43, v44, v46, v47);
      v50 = *v49 + 32LL * v139;
      v51 = *(_QWORD *)(v50 + 8);
      v52 = v50;
      if ( v51 )
      {
        v53 = *(unsigned int *)(v51 + 424);
        v54 = *(unsigned int *)(v51 + 428);
        v55 = v53 + 1;
      }
      else
      {
        v92 = *(_QWORD *)(v50 + 16);
        v93 = *(_DWORD *)(v92 + 14976);
        if ( v93 )
        {
          v117 = (unsigned int)(v93 - 1);
          *(_DWORD *)(v92 + 14976) = v117;
          v51 = *(_QWORD *)(v92 + 8 * v117 + 14848);
          v118 = *(unsigned int *)(v51 + 536);
          *(_BYTE *)v51 = 0;
          v119 = *(_QWORD *)(v51 + 528);
          *(_DWORD *)(v51 + 424) = 0;
          v120 = v119 + (v118 << 6);
          while ( v119 != v120 )
          {
            while ( 1 )
            {
              v120 -= 64;
              v121 = *(void **)(v120 + 24);
              if ( v121 == (void *)(v120 + 40) )
                break;
              v128 = v120;
              operator delete(v121);
              v120 = v128;
              if ( v119 == v128 )
                goto LABEL_100;
            }
          }
LABEL_100:
          v53 = *(unsigned int *)(v51 + 424);
          v54 = *(unsigned int *)(v51 + 428);
          *(_DWORD *)(v51 + 536) = 0;
          v55 = v53 + 1;
        }
        else
        {
          v94 = operator new(0x3A0u);
          v54 = 8;
          v55 = 1;
          v51 = v94;
          *(_BYTE *)v94 = 0;
          *(_QWORD *)(v94 + 96) = v94 + 112;
          *(_QWORD *)(v94 + 128) = v94 + 144;
          *(_QWORD *)(v94 + 160) = v94 + 176;
          *(_QWORD *)(v94 + 192) = v94 + 208;
          *(_QWORD *)(v94 + 224) = v94 + 240;
          *(_QWORD *)(v94 + 256) = v94 + 272;
          *(_QWORD *)(v94 + 288) = v94 + 304;
          *(_QWORD *)(v94 + 320) = v94 + 336;
          *(_QWORD *)(v94 + 352) = v94 + 368;
          *(_QWORD *)(v94 + 384) = v94 + 400;
          *(_QWORD *)(v94 + 416) = v94 + 432;
          *(_QWORD *)(v94 + 104) = 0;
          *(_BYTE *)(v94 + 112) = 0;
          *(_QWORD *)(v94 + 136) = 0;
          *(_BYTE *)(v94 + 144) = 0;
          *(_QWORD *)(v94 + 168) = 0;
          *(_BYTE *)(v94 + 176) = 0;
          *(_QWORD *)(v94 + 200) = 0;
          *(_BYTE *)(v94 + 208) = 0;
          *(_QWORD *)(v94 + 232) = 0;
          *(_BYTE *)(v94 + 240) = 0;
          *(_QWORD *)(v94 + 264) = 0;
          *(_BYTE *)(v94 + 272) = 0;
          *(_QWORD *)(v94 + 296) = 0;
          *(_BYTE *)(v94 + 304) = 0;
          *(_QWORD *)(v94 + 328) = 0;
          *(_BYTE *)(v94 + 336) = 0;
          *(_QWORD *)(v94 + 360) = 0;
          *(_BYTE *)(v94 + 368) = 0;
          *(_QWORD *)(v94 + 392) = 0;
          *(_BYTE *)(v94 + 400) = 0;
          *(_QWORD *)(v94 + 424) = 0x800000000LL;
          *(_QWORD *)(v94 + 528) = v94 + 544;
          *(_QWORD *)(v94 + 536) = 0x600000000LL;
          v53 = 0;
        }
        *(_QWORD *)(v52 + 8) = v51;
      }
      v132 = __PAIR64__(v22, v21);
      LOBYTE(v133) = 1;
      if ( v55 > v54 )
      {
        sub_2237220(v51 + 416, v51 + 432, v55, 12);
        v53 = *(unsigned int *)(v51 + 424);
      }
      v56 = *(_QWORD *)(v51 + 416) + 12 * v53;
      *(_QWORD *)v56 = v132;
      *(_DWORD *)(v56 + 8) = v133;
      ++*(_DWORD *)(v51 + 424);
    }
LABEL_20:
    sub_15F7200(v134);
    return 1;
  }
  return result;
}
