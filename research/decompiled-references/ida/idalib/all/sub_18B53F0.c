__int64 __fastcall sub_18B53F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  bool v32; // bp
  unsigned __int64 v33; // rax
  unsigned __int8 *v34; // rbp
  __int64 v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r13
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // r13
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbp
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // rax
  unsigned __int8 *v65; // rbp
  __int64 v66; // r13
  unsigned __int8 *v67; // rdx
  __int64 v68; // rax
  unsigned __int8 *v69; // rbp
  __int64 v70; // r13
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rbp
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // r14
  __int64 v81; // r13
  unsigned __int8 *v82; // rbp
  _BYTE *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbp
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // r14
  __int64 v93; // r12
  __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // r14
  __int64 v100; // r13
  void *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rdx
  __int64 v105; // r14
  void *v106; // rdi
  __int64 v107; // rdx
  int v108; // eax
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rdx
  int v112; // eax
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rax
  __int64 v116; // r12
  __int64 v117; // r14
  __int64 v118; // r12
  void *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // r12
  __int64 v122; // r14
  __int64 v123; // r12
  void *v124; // rdi
  __int64 v125; // rax
  __int64 v126; // r13
  __int64 v127; // r15
  __int64 v128; // r13
  void *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 v132; // r15
  __int64 v133; // r12
  void *v134; // rdi
  __int64 v135; // [rsp+0h] [rbp-108h]
  __int64 v136; // [rsp+8h] [rbp-100h] BYREF
  int v137; // [rsp+1Ch] [rbp-ECh] BYREF
  __int64 v138; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v139; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v140; // [rsp+30h] [rbp-D8h] BYREF
  int v141; // [rsp+38h] [rbp-D0h]
  __int64 (__fastcall **v142)(); // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v143; // [rsp+48h] [rbp-C0h]
  __int64 *v144; // [rsp+50h] [rbp-B8h]
  int *v145; // [rsp+58h] [rbp-B0h]
  unsigned __int8 *v146; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v147; // [rsp+68h] [rbp-A0h]
  char v148; // [rsp+B8h] [rbp-50h]
  unsigned int v149; // [rsp+C0h] [rbp-48h]
  char v150; // [rsp+C4h] [rbp-44h]

  v6 = a2;
  v8 = *a2;
  v136 = a3;
  v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  v11 = (unsigned int)(v10 - 2);
  if ( (unsigned __int8)(v10 - 2) > 4u )
  {
    if ( (unsigned int)(v10 - 25) <= 1 )
    {
      v33 = sub_A70010(*(_QWORD *)(a1 + 248), v8);
      *v6 = v33;
      v9 = v33 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  else
  {
    v12 = sub_A72210(*(_QWORD **)(a1 + 248), v8);
    *v6 = v12;
    v9 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v13 = *v6;
  v137 = 0;
  v138 = v13;
  v14 = *(_QWORD *)v9;
  v15 = *(unsigned __int8 *)(*(_QWORD *)v9 + 16LL);
  if ( (_BYTE)v15 != 42 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 42 )
    {
      v14 = sub_F63050(v14, v8, v24, v11);
      if ( v14 )
        goto LABEL_4;
      v14 = *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = *(unsigned __int8 *)(v14 + 16);
    }
    if ( (unsigned int)(v15 - 43) > 1
      && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1
       || (v14 = sub_F63050(v14, v8, v24, v11)) == 0) )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v138 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD *)v25;
      v19 = *(unsigned __int8 *)(*(_QWORD *)v25 + 16LL);
      goto LABEL_20;
    }
    v26 = v14;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v26 + 32);
      if ( (*(_BYTE *)(v26 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v26 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
        v28 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 43;
        if ( (unsigned int)v28 <= 1 )
          break;
        v29 = sub_F63050(v26, v8, v28, v11);
        v27 = *(_QWORD *)(v29 + 32);
        if ( (*(_BYTE *)(v29 + 18) & 0x10) == 0 )
          goto LABEL_28;
      }
    }
LABEL_28:
    v30 = *(_QWORD *)(v14 + 8);
    v138 = v27;
    v137 = 2;
    if ( *(_BYTE *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 44 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD *)v31;
      v19 = *(unsigned __int8 *)(*(_QWORD *)v31 + 16LL);
      goto LABEL_20;
    }
    sub_168B9F0((__int64)&v142, (__int64 *)(a1 + 8), v136, 0x1362u, 0);
    if ( v148 )
    {
      v65 = v146;
      v66 = *v6;
      if ( !v146 )
      {
        v109 = v147;
        v110 = *(_DWORD *)(v147 + 14976);
        if ( v110 )
        {
          v120 = (unsigned int)(v110 - 1);
          *(_DWORD *)(v147 + 14976) = v120;
          v65 = *(unsigned __int8 **)(v109 + 8 * v120 + 14848);
          v121 = *((unsigned int *)v65 + 134);
          *v65 = 0;
          v122 = *((_QWORD *)v65 + 66);
          *((_DWORD *)v65 + 106) = 0;
          v123 = v122 + (v121 << 6);
          while ( v122 != v123 )
          {
            while ( 1 )
            {
              v123 -= 64;
              v124 = *(void **)(v123 + 24);
              if ( v124 == (void *)(v123 + 40) )
                break;
              operator delete(v124);
              if ( v122 == v123 )
                goto LABEL_112;
            }
          }
LABEL_112:
          *((_DWORD *)v65 + 134) = 0;
        }
        else
        {
          v65 = (unsigned __int8 *)operator new(0x3A0u);
          *v65 = 0;
          *((_QWORD *)v65 + 12) = v65 + 112;
          *((_QWORD *)v65 + 16) = v65 + 144;
          *((_QWORD *)v65 + 20) = v65 + 176;
          *((_QWORD *)v65 + 24) = v65 + 208;
          *((_QWORD *)v65 + 28) = v65 + 240;
          *((_QWORD *)v65 + 32) = v65 + 272;
          *((_QWORD *)v65 + 36) = v65 + 304;
          *((_QWORD *)v65 + 40) = v65 + 336;
          *((_QWORD *)v65 + 44) = v65 + 368;
          *((_QWORD *)v65 + 48) = v65 + 400;
          *((_QWORD *)v65 + 52) = v65 + 432;
          v65[112] = 0;
          *((_QWORD *)v65 + 13) = 0;
          *((_QWORD *)v65 + 17) = 0;
          v65[144] = 0;
          *((_QWORD *)v65 + 21) = 0;
          v65[176] = 0;
          *((_QWORD *)v65 + 25) = 0;
          v65[208] = 0;
          *((_QWORD *)v65 + 29) = 0;
          v65[240] = 0;
          *((_QWORD *)v65 + 33) = 0;
          v65[272] = 0;
          *((_QWORD *)v65 + 37) = 0;
          v65[304] = 0;
          *((_QWORD *)v65 + 41) = 0;
          v65[336] = 0;
          *((_QWORD *)v65 + 45) = 0;
          v65[368] = 0;
          *((_QWORD *)v65 + 49) = 0;
          v65[400] = 0;
          *((_QWORD *)v65 + 53) = 0x800000000LL;
          *((_QWORD *)v65 + 66) = v65 + 544;
          *((_QWORD *)v65 + 67) = 0x600000000LL;
        }
        v146 = v65;
      }
      v65[*v65 + 1] = 8;
      v67 = v146;
      v68 = *v146;
      *v146 = v68 + 1;
      *(_QWORD *)&v67[8 * v68 + 16] = v66;
    }
    else
    {
      if ( !v150 )
      {
LABEL_46:
        LODWORD(v6) = 1;
        sub_15F7200(&v142);
        return (unsigned int)v6;
      }
      v75 = sub_168B9E0(&v142);
      v78 = (__int64)v144;
      if ( v144 )
        v78 = (*(__int64 (__fastcall **)(__int64 *))(*v144 + 32))(v144);
      v140 = v78;
      v79 = sub_1587BC0(v75, &v140, v73, v74, v76, v77);
      v80 = *v6;
      v81 = *v79 + 32LL * v149;
      v82 = *(unsigned __int8 **)(v81 + 8);
      if ( !v82 )
      {
        v111 = *(_QWORD *)(v81 + 16);
        v112 = *(_DWORD *)(v111 + 14976);
        if ( v112 )
        {
          v130 = (unsigned int)(v112 - 1);
          *(_DWORD *)(v111 + 14976) = v130;
          v82 = *(unsigned __int8 **)(v111 + 8 * v130 + 14848);
          v131 = *((unsigned int *)v82 + 134);
          *v82 = 0;
          v132 = *((_QWORD *)v82 + 66);
          *((_DWORD *)v82 + 106) = 0;
          v133 = v132 + (v131 << 6);
          while ( v132 != v133 )
          {
            while ( 1 )
            {
              v133 -= 64;
              v134 = *(void **)(v133 + 24);
              if ( v134 == (void *)(v133 + 40) )
                break;
              operator delete(v134);
              if ( v132 == v133 )
                goto LABEL_122;
            }
          }
LABEL_122:
          *((_DWORD *)v82 + 134) = 0;
        }
        else
        {
          v82 = (unsigned __int8 *)operator new(0x3A0u);
          *v82 = 0;
          *((_QWORD *)v82 + 12) = v82 + 112;
          *((_QWORD *)v82 + 16) = v82 + 144;
          *((_QWORD *)v82 + 20) = v82 + 176;
          *((_QWORD *)v82 + 24) = v82 + 208;
          *((_QWORD *)v82 + 28) = v82 + 240;
          *((_QWORD *)v82 + 32) = v82 + 272;
          *((_QWORD *)v82 + 36) = v82 + 304;
          *((_QWORD *)v82 + 40) = v82 + 336;
          *((_QWORD *)v82 + 44) = v82 + 368;
          *((_QWORD *)v82 + 48) = v82 + 400;
          *((_QWORD *)v82 + 52) = v82 + 432;
          v82[112] = 0;
          *((_QWORD *)v82 + 13) = 0;
          *((_QWORD *)v82 + 17) = 0;
          v82[144] = 0;
          *((_QWORD *)v82 + 21) = 0;
          v82[176] = 0;
          *((_QWORD *)v82 + 25) = 0;
          v82[208] = 0;
          *((_QWORD *)v82 + 29) = 0;
          v82[240] = 0;
          *((_QWORD *)v82 + 33) = 0;
          v82[272] = 0;
          *((_QWORD *)v82 + 37) = 0;
          v82[304] = 0;
          *((_QWORD *)v82 + 41) = 0;
          v82[336] = 0;
          *((_QWORD *)v82 + 45) = 0;
          v82[368] = 0;
          *((_QWORD *)v82 + 49) = 0;
          v82[400] = 0;
          *((_QWORD *)v82 + 53) = 0x800000000LL;
          *((_QWORD *)v82 + 66) = v82 + 544;
          *((_QWORD *)v82 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v81 + 8) = v82;
      }
      v82[*v82 + 1] = 8;
      v83 = *(_BYTE **)(v81 + 8);
      v84 = (unsigned __int8)*v83;
      *v83 = v84 + 1;
      *(_QWORD *)&v83[8 * v84 + 16] = v80;
    }
    if ( v148 )
    {
      v69 = v146;
      v70 = v136;
      if ( !v146 )
      {
        v107 = v147;
        v108 = *(_DWORD *)(v147 + 14976);
        if ( v108 )
        {
          v115 = (unsigned int)(v108 - 1);
          *(_DWORD *)(v147 + 14976) = v115;
          v69 = *(unsigned __int8 **)(v107 + 8 * v115 + 14848);
          v116 = *((unsigned int *)v69 + 134);
          *v69 = 0;
          v117 = *((_QWORD *)v69 + 66);
          *((_DWORD *)v69 + 106) = 0;
          v118 = v117 + (v116 << 6);
          while ( v117 != v118 )
          {
            while ( 1 )
            {
              v118 -= 64;
              v119 = *(void **)(v118 + 24);
              if ( v119 == (void *)(v118 + 40) )
                break;
              operator delete(v119);
              if ( v117 == v118 )
                goto LABEL_107;
            }
          }
LABEL_107:
          *((_DWORD *)v69 + 134) = 0;
        }
        else
        {
          v69 = (unsigned __int8 *)operator new(0x3A0u);
          *v69 = 0;
          *((_QWORD *)v69 + 12) = v69 + 112;
          *((_QWORD *)v69 + 16) = v69 + 144;
          *((_QWORD *)v69 + 20) = v69 + 176;
          *((_QWORD *)v69 + 24) = v69 + 208;
          *((_QWORD *)v69 + 28) = v69 + 240;
          *((_QWORD *)v69 + 32) = v69 + 272;
          *((_QWORD *)v69 + 36) = v69 + 304;
          *((_QWORD *)v69 + 40) = v69 + 336;
          *((_QWORD *)v69 + 44) = v69 + 368;
          *((_QWORD *)v69 + 48) = v69 + 400;
          *((_QWORD *)v69 + 52) = v69 + 432;
          v69[112] = 0;
          *((_QWORD *)v69 + 13) = 0;
          *((_QWORD *)v69 + 17) = 0;
          v69[144] = 0;
          *((_QWORD *)v69 + 21) = 0;
          v69[176] = 0;
          *((_QWORD *)v69 + 25) = 0;
          v69[208] = 0;
          *((_QWORD *)v69 + 29) = 0;
          v69[240] = 0;
          *((_QWORD *)v69 + 33) = 0;
          v69[272] = 0;
          *((_QWORD *)v69 + 37) = 0;
          v69[304] = 0;
          *((_QWORD *)v69 + 41) = 0;
          v69[336] = 0;
          *((_QWORD *)v69 + 45) = 0;
          v69[368] = 0;
          *((_QWORD *)v69 + 49) = 0;
          v69[400] = 0;
          *((_QWORD *)v69 + 53) = 0x800000000LL;
          *((_QWORD *)v69 + 66) = v69 + 544;
          *((_QWORD *)v69 + 67) = 0x600000000LL;
        }
        v146 = v69;
      }
      v140 = v70;
    }
    else
    {
      if ( !v150 )
        goto LABEL_46;
      v87 = sub_168B9E0(&v142);
      v90 = (__int64)v144;
      if ( v144 )
        v90 = (*(__int64 (__fastcall **)(__int64 *))(*v144 + 32))(v144);
      v139 = v90;
      v91 = sub_1587BC0(v87, &v139, v85, v86, v88, v89);
      v92 = v136;
      v93 = *v91 + 32LL * v149;
      v69 = *(unsigned __int8 **)(v93 + 8);
      if ( !v69 )
      {
        v113 = *(_QWORD *)(v93 + 16);
        v114 = *(_DWORD *)(v113 + 14976);
        if ( v114 )
        {
          v125 = (unsigned int)(v114 - 1);
          *(_DWORD *)(v113 + 14976) = v125;
          v69 = *(unsigned __int8 **)(v113 + 8 * v125 + 14848);
          v126 = *((unsigned int *)v69 + 134);
          *v69 = 0;
          v127 = *((_QWORD *)v69 + 66);
          *((_DWORD *)v69 + 106) = 0;
          v128 = v127 + (v126 << 6);
          while ( v127 != v128 )
          {
            while ( 1 )
            {
              v128 -= 64;
              v129 = *(void **)(v128 + 24);
              if ( v129 == (void *)(v128 + 40) )
                break;
              operator delete(v129);
              if ( v127 == v128 )
                goto LABEL_117;
            }
          }
LABEL_117:
          *((_DWORD *)v69 + 134) = 0;
        }
        else
        {
          v69 = (unsigned __int8 *)operator new(0x3A0u);
          *v69 = 0;
          *((_QWORD *)v69 + 12) = v69 + 112;
          *((_QWORD *)v69 + 16) = v69 + 144;
          *((_QWORD *)v69 + 20) = v69 + 176;
          *((_QWORD *)v69 + 24) = v69 + 208;
          *((_QWORD *)v69 + 28) = v69 + 240;
          *((_QWORD *)v69 + 32) = v69 + 272;
          *((_QWORD *)v69 + 36) = v69 + 304;
          *((_QWORD *)v69 + 40) = v69 + 336;
          *((_QWORD *)v69 + 44) = v69 + 368;
          *((_QWORD *)v69 + 48) = v69 + 400;
          *((_QWORD *)v69 + 52) = v69 + 432;
          v69[112] = 0;
          *((_QWORD *)v69 + 13) = 0;
          *((_QWORD *)v69 + 17) = 0;
          v69[144] = 0;
          *((_QWORD *)v69 + 21) = 0;
          v69[176] = 0;
          *((_QWORD *)v69 + 25) = 0;
          v69[208] = 0;
          *((_QWORD *)v69 + 29) = 0;
          v69[240] = 0;
          *((_QWORD *)v69 + 33) = 0;
          v69[272] = 0;
          *((_QWORD *)v69 + 37) = 0;
          v69[304] = 0;
          *((_QWORD *)v69 + 41) = 0;
          v69[336] = 0;
          *((_QWORD *)v69 + 45) = 0;
          v69[368] = 0;
          *((_QWORD *)v69 + 49) = 0;
          v69[400] = 0;
          *((_QWORD *)v69 + 53) = 0x800000000LL;
          *((_QWORD *)v69 + 66) = v69 + 544;
          *((_QWORD *)v69 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v93 + 8) = v69;
      }
      v140 = v92;
    }
    LOBYTE(v141) = 1;
    v71 = *((unsigned int *)v69 + 106);
    if ( v71 + 1 > (unsigned __int64)*((unsigned int *)v69 + 107) )
    {
      sub_2237220(v69 + 416, v69 + 432, v71 + 1, 12);
      v71 = *((unsigned int *)v69 + 106);
    }
    v72 = *((_QWORD *)v69 + 52) + 12 * v71;
    *(_QWORD *)v72 = v140;
    *(_DWORD *)(v72 + 8) = v141;
    ++*((_DWORD *)v69 + 106);
    goto LABEL_46;
  }
LABEL_4:
  v16 = *(_QWORD *)(v14 + 32);
  v137 = 1;
  v138 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)v17;
  v19 = *(unsigned __int8 *)(*(_QWORD *)v17 + 16LL);
  if ( (_BYTE)v19 == 13 )
  {
    if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
LABEL_11:
      LODWORD(v6) = 0;
      return (unsigned int)v6;
    }
    LOBYTE(v6) = (**(_BYTE **)(a1 + 232) & 0x20) == 0;
    v20 = (-(unsigned __int8)v6 & 0xFFFFF9AC) + 5582;
    goto LABEL_7;
  }
LABEL_20:
  LOBYTE(v6) = (**(_BYTE **)(a1 + 232) & 0x20) == 0;
  v20 = (-(unsigned __int8)v6 & 0xFFFFF9AC) + 5582;
  if ( (_BYTE)v19 == 48 && (unsigned __int8)sub_F60F20(v18, v8, v19, v11, a5, a6) )
  {
LABEL_8:
    LOBYTE(v21) = sub_F65EB0(&v138);
    LODWORD(v6) = v21;
    if ( (_BYTE)v21 )
    {
      sub_168B9F0((__int64)&v142, (__int64 *)(a1 + 8), v136, 0x155Du, 0);
      sub_15F7200(&v142);
      return (unsigned int)v6;
    }
    LOBYTE(v22) = sub_F582C0(*(_QWORD *)(v138 & 0xFFFFFFFFFFFFFFF0LL));
    LODWORD(v6) = v22;
    if ( !(_BYTE)v22 || v137 == 1 )
      goto LABEL_11;
    sub_168B9F0((__int64)&v142, (__int64 *)(a1 + 8), v136, 0x1377u, 0);
    v32 = v137 == 2;
    if ( v148 )
    {
      sub_AE9DF0(&v146, v32, 2u);
    }
    else
    {
      if ( !v150 )
      {
LABEL_32:
        sub_15F7200(&v142);
        return (unsigned int)v6;
      }
      v44 = sub_168B9E0(&v142);
      v45 = (__int64)v144;
      if ( v144 )
        v45 = (*(__int64 (__fastcall **)(__int64 *))(*v144 + 32))(v144);
      v140 = v45;
      v46 = sub_1587BC0(v44, &v140, v40, v41, v42, v43);
      sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v149 + 8), v32, 2u);
    }
    if ( v148 )
    {
      sub_AE9DF0(&v146, v138, 8u);
    }
    else
    {
      if ( !v150 )
        goto LABEL_32;
      v60 = sub_168B9E0(&v142);
      v63 = (__int64)v144;
      if ( v144 )
        v63 = (*(__int64 (__fastcall **)(__int64 *))(*v144 + 32))(v144);
      v140 = v63;
      v64 = sub_1587BC0(v60, &v140, v58, v59, v61, v62);
      sub_AE9DF0((unsigned __int8 **)(*v64 + 32LL * v149 + 8), v138, 8u);
    }
    if ( v148 )
    {
      v34 = v146;
      v35 = v136;
      if ( !v146 )
      {
        v94 = v147;
        v95 = *(_DWORD *)(v147 + 14976);
        if ( v95 )
        {
          v97 = (unsigned int)(v95 - 1);
          *(_DWORD *)(v147 + 14976) = v97;
          v34 = *(unsigned __int8 **)(v94 + 8 * v97 + 14848);
          v98 = *((unsigned int *)v34 + 134);
          *v34 = 0;
          v99 = *((_QWORD *)v34 + 66);
          *((_DWORD *)v34 + 106) = 0;
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
                goto LABEL_85;
            }
          }
LABEL_85:
          v36 = *((unsigned int *)v34 + 106);
          v37 = *((unsigned int *)v34 + 107);
          *((_DWORD *)v34 + 134) = 0;
          v38 = v36 + 1;
        }
        else
        {
          v96 = operator new(0x3A0u);
          v37 = 8;
          v38 = 1;
          v34 = (unsigned __int8 *)v96;
          *(_BYTE *)v96 = 0;
          *(_QWORD *)(v96 + 96) = v96 + 112;
          *(_QWORD *)(v96 + 128) = v96 + 144;
          *(_QWORD *)(v96 + 160) = v96 + 176;
          *(_QWORD *)(v96 + 192) = v96 + 208;
          *(_QWORD *)(v96 + 224) = v96 + 240;
          *(_QWORD *)(v96 + 256) = v96 + 272;
          *(_QWORD *)(v96 + 288) = v96 + 304;
          *(_QWORD *)(v96 + 320) = v96 + 336;
          *(_QWORD *)(v96 + 352) = v96 + 368;
          *(_QWORD *)(v96 + 384) = v96 + 400;
          *(_QWORD *)(v96 + 416) = v96 + 432;
          *(_QWORD *)(v96 + 104) = 0;
          *(_BYTE *)(v96 + 112) = 0;
          *(_QWORD *)(v96 + 136) = 0;
          *(_BYTE *)(v96 + 144) = 0;
          *(_QWORD *)(v96 + 168) = 0;
          *(_BYTE *)(v96 + 176) = 0;
          *(_QWORD *)(v96 + 200) = 0;
          *(_BYTE *)(v96 + 208) = 0;
          *(_QWORD *)(v96 + 232) = 0;
          *(_BYTE *)(v96 + 240) = 0;
          *(_QWORD *)(v96 + 264) = 0;
          *(_BYTE *)(v96 + 272) = 0;
          *(_QWORD *)(v96 + 296) = 0;
          *(_BYTE *)(v96 + 304) = 0;
          *(_QWORD *)(v96 + 328) = 0;
          *(_BYTE *)(v96 + 336) = 0;
          *(_QWORD *)(v96 + 360) = 0;
          *(_BYTE *)(v96 + 368) = 0;
          *(_QWORD *)(v96 + 392) = 0;
          *(_BYTE *)(v96 + 400) = 0;
          *(_QWORD *)(v96 + 424) = 0x800000000LL;
          *(_QWORD *)(v96 + 528) = v96 + 544;
          *(_QWORD *)(v96 + 536) = 0x600000000LL;
          v36 = 0;
        }
        v146 = v34;
        goto LABEL_41;
      }
    }
    else
    {
      if ( !v150 )
        goto LABEL_32;
      v49 = sub_168B9E0(&v142);
      v52 = (__int64)v144;
      if ( v144 )
        v52 = (*(__int64 (__fastcall **)(__int64 *))(*v144 + 32))(v144);
      v139 = v52;
      v53 = sub_1587BC0(v49, &v139, v47, v48, v50, v51);
      v35 = v136;
      v54 = *v53 + 32LL * v149;
      v34 = *(unsigned __int8 **)(v54 + 8);
      if ( !v34 )
      {
        v55 = *(_QWORD *)(v54 + 16);
        v56 = *(_DWORD *)(v55 + 14976);
        if ( v56 )
        {
          v102 = (unsigned int)(v56 - 1);
          *(_DWORD *)(v55 + 14976) = v102;
          v34 = *(unsigned __int8 **)(v55 + 8 * v102 + 14848);
          v103 = *((unsigned int *)v34 + 134);
          *v34 = 0;
          v104 = *((_QWORD *)v34 + 66);
          *((_DWORD *)v34 + 106) = 0;
          v105 = v104 + (v103 << 6);
          while ( v104 != v105 )
          {
            while ( 1 )
            {
              v105 -= 64;
              v106 = *(void **)(v105 + 24);
              if ( v106 == (void *)(v105 + 40) )
                break;
              v135 = v104;
              operator delete(v106);
              v104 = v135;
              if ( v135 == v105 )
                goto LABEL_90;
            }
          }
LABEL_90:
          v36 = *((unsigned int *)v34 + 106);
          v37 = *((unsigned int *)v34 + 107);
          *((_DWORD *)v34 + 134) = 0;
          v38 = v36 + 1;
        }
        else
        {
          v57 = operator new(0x3A0u);
          v37 = 8;
          v38 = 1;
          v34 = (unsigned __int8 *)v57;
          *(_BYTE *)v57 = 0;
          *(_QWORD *)(v57 + 96) = v57 + 112;
          *(_QWORD *)(v57 + 128) = v57 + 144;
          *(_QWORD *)(v57 + 160) = v57 + 176;
          *(_QWORD *)(v57 + 192) = v57 + 208;
          *(_QWORD *)(v57 + 224) = v57 + 240;
          *(_QWORD *)(v57 + 256) = v57 + 272;
          *(_QWORD *)(v57 + 288) = v57 + 304;
          *(_QWORD *)(v57 + 320) = v57 + 336;
          *(_QWORD *)(v57 + 352) = v57 + 368;
          *(_QWORD *)(v57 + 384) = v57 + 400;
          *(_QWORD *)(v57 + 416) = v57 + 432;
          *(_QWORD *)(v57 + 104) = 0;
          *(_BYTE *)(v57 + 112) = 0;
          *(_QWORD *)(v57 + 136) = 0;
          *(_BYTE *)(v57 + 144) = 0;
          *(_QWORD *)(v57 + 168) = 0;
          *(_BYTE *)(v57 + 176) = 0;
          *(_QWORD *)(v57 + 200) = 0;
          *(_BYTE *)(v57 + 208) = 0;
          *(_QWORD *)(v57 + 232) = 0;
          *(_BYTE *)(v57 + 240) = 0;
          *(_QWORD *)(v57 + 264) = 0;
          *(_BYTE *)(v57 + 272) = 0;
          *(_QWORD *)(v57 + 296) = 0;
          *(_BYTE *)(v57 + 304) = 0;
          *(_QWORD *)(v57 + 328) = 0;
          *(_BYTE *)(v57 + 336) = 0;
          *(_QWORD *)(v57 + 360) = 0;
          *(_BYTE *)(v57 + 368) = 0;
          *(_QWORD *)(v57 + 392) = 0;
          *(_BYTE *)(v57 + 400) = 0;
          *(_QWORD *)(v57 + 424) = 0x800000000LL;
          *(_QWORD *)(v57 + 528) = v57 + 544;
          *(_QWORD *)(v57 + 536) = 0x600000000LL;
          v36 = 0;
        }
        *(_QWORD *)(v54 + 8) = v34;
        goto LABEL_41;
      }
    }
    v36 = *((unsigned int *)v34 + 106);
    v37 = *((unsigned int *)v34 + 107);
    v38 = v36 + 1;
LABEL_41:
    v140 = v35;
    LOBYTE(v141) = 1;
    if ( v38 > v37 )
    {
      sub_2237220(v34 + 416, v34 + 432, v38, 12);
      v36 = *((unsigned int *)v34 + 106);
    }
    v39 = *((_QWORD *)v34 + 52) + 12 * v36;
    *(_QWORD *)v39 = v140;
    *(_DWORD *)(v39 + 8) = v141;
    ++*((_DWORD *)v34 + 106);
    goto LABEL_32;
  }
LABEL_7:
  v143 = v20;
  v142 = off_2BC6E20;
  v144 = &v136;
  v145 = &v137;
  if ( !(unsigned __int8)sub_1E63C20(a1, (unsigned int)v136, v138, 1, &v142) )
    goto LABEL_8;
  return (unsigned int)v6;
}
