__int64 __fastcall sub_17842F0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  char *v13; // rbp
  char *v14; // r13
  char v15; // dl
  _QWORD *v16; // r14
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r12d
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v24; // r14
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  unsigned __int8 *v27; // r14
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int8 *v45; // r14
  _BYTE *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r14
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r14
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r15
  char *v70; // r13
  unsigned __int8 *v71; // rbp
  __int64 v72; // rbx
  void *v73; // rdi
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // r15
  char *v81; // r13
  unsigned __int64 v82; // rbp
  __int64 v83; // rbx
  void *v84; // rdi
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // r15
  char *v92; // r13
  unsigned __int64 v93; // rbp
  __int64 v94; // rbx
  void *v95; // rdi
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // r15
  __int64 v103; // r13
  void *v104; // rdi
  char *v105; // [rsp+0h] [rbp-1D0h]
  char *v110; // [rsp+38h] [rbp-198h]
  char *v111; // [rsp+38h] [rbp-198h]
  char *v112; // [rsp+38h] [rbp-198h]
  __int64 v113; // [rsp+38h] [rbp-198h]
  char *v114; // [rsp+40h] [rbp-190h]
  __int64 v115; // [rsp+50h] [rbp-180h] BYREF
  char v116; // [rsp+58h] [rbp-178h] BYREF
  __int64 v117; // [rsp+68h] [rbp-168h]
  unsigned __int8 *v118; // [rsp+78h] [rbp-158h] BYREF
  __int64 v119; // [rsp+80h] [rbp-150h]
  char v120; // [rsp+D0h] [rbp-100h]
  unsigned int v121; // [rsp+D8h] [rbp-F8h]
  char v122; // [rsp+DCh] [rbp-F4h]
  __int64 v123; // [rsp+E8h] [rbp-E8h] BYREF
  void *ptr; // [rsp+F0h] [rbp-E0h]
  __int64 v125; // [rsp+F8h] [rbp-D8h]
  _BYTE v126[64]; // [rsp+100h] [rbp-D0h] BYREF
  void *v127[2]; // [rsp+140h] [rbp-90h]
  __int64 v128; // [rsp+150h] [rbp-80h]
  __int64 v129; // [rsp+158h] [rbp-78h]
  __int64 v130; // [rsp+160h] [rbp-70h]
  unsigned int v131; // [rsp+168h] [rbp-68h]
  __int64 v132; // [rsp+170h] [rbp-60h] BYREF
  __int128 v133; // [rsp+178h] [rbp-58h]
  __int64 v134; // [rsp+188h] [rbp-48h]

  v5 = (__int64 *)(a5 & 0xFFFFFFFFFFFFFFF0LL);
  v129 = a1;
  v131 = a2;
  v130 = a4;
  ptr = v126;
  *(_OWORD *)v127 = 0;
  v123 = 0;
  v125 = 0x800000000LL;
  v128 = 0;
  sub_B85890(&v132, a4);
  v133 = 0;
  v134 = 0x101010000LL;
  sub_1A395A0(&v123);
  v11 = sub_F63270(*v5, a4, v7, v8, v9, v10);
  if ( v11 )
    v11 += 8;
  v12 = 0;
  sub_1A48440(a1, &v123, v11, 0);
  v13 = (char *)ptr;
  v105 = (char *)ptr + 8 * (unsigned int)v125;
  if ( v105 != ptr )
  {
    v14 = &v116;
    do
    {
      v17 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFF8LL;
      v18 = sub_B8BF30(v17);
      LOBYTE(v19) = sub_B74C70(v18);
      v20 = v19;
      if ( !(_BYTE)v19 )
        goto LABEL_12;
      if ( !(_BYTE)v12 )
      {
        sub_168B9F0((__int64)v14, (__int64 *)(a1 + 8), a2, a3, 0);
        if ( v120 )
        {
          sub_AE9DF0(&v118, a4, 9u);
        }
        else if ( v122 )
        {
          v60 = sub_168B9E0(v14);
          v61 = v117;
          if ( v117 )
            v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v117 + 32LL))(v117);
          v115 = v61;
          v62 = sub_1587BC0(v60, &v115, v56, v57, v58, v59);
          sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v121 + 8), a4, 9u);
        }
        sub_15F7200(v14);
      }
      sub_168B9F0((__int64)v14, (__int64 *)(a1 + 8), *(_DWORD *)(v17 + 24), 0x1915u, 0);
      if ( v120 )
      {
        v24 = v118;
        if ( !v118 )
        {
          v85 = v119;
          v86 = *(_DWORD *)(v119 + 14976);
          if ( v86 )
          {
            v87 = (unsigned int)(v86 - 1);
            *(_DWORD *)(v119 + 14976) = v87;
            v24 = *(unsigned __int8 **)(v85 + 8 * v87 + 14848);
            v88 = *((unsigned int *)v24 + 134);
            *v24 = 0;
            v89 = *((_QWORD *)v24 + 66);
            *((_DWORD *)v24 + 106) = 0;
            v90 = v89 + (v88 << 6);
            if ( v89 != v90 )
            {
              v112 = v14;
              v91 = v90;
              v92 = v13;
              v93 = v17;
              v94 = v89;
              do
              {
                while ( 1 )
                {
                  v91 -= 64;
                  v95 = *(void **)(v91 + 24);
                  if ( v95 == (void *)(v91 + 40) )
                    break;
                  operator delete(v95);
                  if ( v94 == v91 )
                    goto LABEL_65;
                }
              }
              while ( v94 != v91 );
LABEL_65:
              v17 = v93;
              v13 = v92;
              v14 = v112;
            }
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
            *((_QWORD *)v24 + 52) = v24 + 432;
            *((_QWORD *)v24 + 53) = 0x800000000LL;
            *((_QWORD *)v24 + 66) = v24 + 544;
            *((_QWORD *)v24 + 67) = 0x600000000LL;
          }
          v118 = v24;
        }
        v24[*v24 + 1] = 2;
        v25 = v118;
        v26 = *v118;
        *v118 = v26 + 1;
        *(_QWORD *)&v25[8 * v26 + 16] = 1;
        if ( v120 )
          goto LABEL_22;
      }
      else
      {
        if ( !v122 )
          goto LABEL_7;
        v41 = sub_168B9E0(v14);
        v42 = v117;
        if ( v117 )
          v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v117 + 32LL))(v117);
        v115 = v42;
        v43 = sub_1587BC0(v41, &v115, v37, v38, v39, v40);
        v44 = *v43 + 32LL * v121;
        v45 = *(unsigned __int8 **)(v44 + 8);
        if ( !v45 )
        {
          v96 = *(_QWORD *)(v44 + 16);
          v97 = *(_DWORD *)(v96 + 14976);
          if ( v97 )
          {
            v98 = (unsigned int)(v97 - 1);
            *(_DWORD *)(v96 + 14976) = v98;
            v45 = *(unsigned __int8 **)(v96 + 8 * v98 + 14848);
            v99 = *((unsigned int *)v45 + 134);
            *v45 = 0;
            v100 = *((_QWORD *)v45 + 66);
            *((_DWORD *)v45 + 106) = 0;
            v101 = v100 + (v99 << 6);
            if ( v100 != v101 )
            {
              v102 = v101;
              v114 = v14;
              v103 = v44;
              do
              {
                while ( 1 )
                {
                  v102 -= 64;
                  v104 = *(void **)(v102 + 24);
                  if ( v104 == (void *)(v102 + 40) )
                    break;
                  operator delete(v104);
                  if ( v100 == v102 )
                    goto LABEL_72;
                }
              }
              while ( v100 != v102 );
LABEL_72:
              v44 = v103;
              v14 = v114;
            }
            *((_DWORD *)v45 + 134) = 0;
          }
          else
          {
            v113 = v44;
            v45 = (unsigned __int8 *)operator new(0x3A0u);
            *v45 = 0;
            *((_QWORD *)v45 + 12) = v45 + 112;
            *((_QWORD *)v45 + 16) = v45 + 144;
            *((_QWORD *)v45 + 20) = v45 + 176;
            *((_QWORD *)v45 + 24) = v45 + 208;
            *((_QWORD *)v45 + 28) = v45 + 240;
            *((_QWORD *)v45 + 32) = v45 + 272;
            *((_QWORD *)v45 + 36) = v45 + 304;
            *((_QWORD *)v45 + 40) = v45 + 336;
            *((_QWORD *)v45 + 44) = v45 + 368;
            *((_QWORD *)v45 + 48) = v45 + 400;
            *((_QWORD *)v45 + 13) = 0;
            v45[112] = 0;
            *((_QWORD *)v45 + 17) = 0;
            v45[144] = 0;
            *((_QWORD *)v45 + 21) = 0;
            v45[176] = 0;
            *((_QWORD *)v45 + 25) = 0;
            v45[208] = 0;
            *((_QWORD *)v45 + 29) = 0;
            v45[240] = 0;
            *((_QWORD *)v45 + 33) = 0;
            v45[272] = 0;
            *((_QWORD *)v45 + 37) = 0;
            v45[304] = 0;
            *((_QWORD *)v45 + 41) = 0;
            v45[336] = 0;
            *((_QWORD *)v45 + 45) = 0;
            v45[368] = 0;
            *((_QWORD *)v45 + 49) = 0;
            v45[400] = 0;
            *((_QWORD *)v45 + 52) = v45 + 432;
            v44 = v113;
            *((_QWORD *)v45 + 53) = 0x800000000LL;
            *((_QWORD *)v45 + 66) = v45 + 544;
            *((_QWORD *)v45 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v44 + 8) = v45;
        }
        v45[*v45 + 1] = 2;
        v46 = *(_BYTE **)(v44 + 8);
        v47 = (unsigned __int8)*v46;
        *v46 = v47 + 1;
        *(_QWORD *)&v46[8 * v47 + 16] = 1;
        if ( v120 )
        {
LABEL_22:
          v27 = v118;
          if ( !v118 )
          {
            v74 = v119;
            v75 = *(_DWORD *)(v119 + 14976);
            if ( v75 )
            {
              v76 = (unsigned int)(v75 - 1);
              *(_DWORD *)(v119 + 14976) = v76;
              v27 = *(unsigned __int8 **)(v74 + 8 * v76 + 14848);
              v77 = *((unsigned int *)v27 + 134);
              *v27 = 0;
              v78 = *((_QWORD *)v27 + 66);
              *((_DWORD *)v27 + 106) = 0;
              v79 = v78 + (v77 << 6);
              if ( v78 != v79 )
              {
                v111 = v14;
                v80 = v79;
                v81 = v13;
                v82 = v17;
                v83 = v78;
                do
                {
                  while ( 1 )
                  {
                    v80 -= 64;
                    v84 = *(void **)(v80 + 24);
                    if ( v84 == (void *)(v80 + 40) )
                      break;
                    operator delete(v84);
                    if ( v83 == v80 )
                      goto LABEL_58;
                  }
                }
                while ( v83 != v80 );
LABEL_58:
                v17 = v82;
                v13 = v81;
                v14 = v111;
              }
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
              *((_QWORD *)v27 + 52) = v27 + 432;
              *((_QWORD *)v27 + 53) = 0x800000000LL;
              *((_QWORD *)v27 + 66) = v27 + 544;
              *((_QWORD *)v27 + 67) = 0x600000000LL;
            }
            v118 = v27;
          }
          v27[*v27 + 1] = 10;
          v28 = v118;
          v29 = *v118;
          *v118 = v29 + 1;
          *(_QWORD *)&v28[8 * v29 + 16] = v17;
          v15 = v120;
          goto LABEL_24;
        }
      }
      if ( !v122 )
      {
LABEL_7:
        v15 = 0;
        v16 = (_QWORD *)(*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v17 + 16) & 4) == 0 )
          goto LABEL_10;
LABEL_8:
        v16 = (_QWORD *)*v16;
        goto LABEL_9;
      }
      v52 = sub_168B9E0(v14);
      v53 = v117;
      if ( v117 )
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v117 + 32LL))(v117);
      v115 = v53;
      v54 = sub_1587BC0(v52, &v115, v48, v49, v50, v51);
      sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * v121 + 8), v17, 0xAu);
      v15 = v120;
LABEL_24:
      v16 = (_QWORD *)(*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v17 + 16) & 4) != 0 )
        goto LABEL_8;
LABEL_9:
      if ( v15 )
      {
        v21 = v118;
        if ( !v118 )
        {
          v63 = v119;
          v64 = *(_DWORD *)(v119 + 14976);
          if ( v64 )
          {
            v65 = (unsigned int)(v64 - 1);
            *(_DWORD *)(v119 + 14976) = v65;
            v21 = *(unsigned __int8 **)(v63 + 8 * v65 + 14848);
            v66 = *((unsigned int *)v21 + 134);
            *v21 = 0;
            v67 = *((_QWORD *)v21 + 66);
            *((_DWORD *)v21 + 106) = 0;
            v68 = v67 + (v66 << 6);
            if ( v67 != v68 )
            {
              v110 = v14;
              v69 = v68;
              v70 = v13;
              v71 = v21;
              v72 = v67;
              do
              {
                while ( 1 )
                {
                  v69 -= 64;
                  v73 = *(void **)(v69 + 24);
                  if ( v73 == (void *)(v69 + 40) )
                    break;
                  operator delete(v73);
                  if ( v72 == v69 )
                    goto LABEL_51;
                }
              }
              while ( v72 != v69 );
LABEL_51:
              v21 = v71;
              v13 = v70;
              v14 = v110;
            }
            *((_DWORD *)v21 + 134) = 0;
          }
          else
          {
            v21 = (unsigned __int8 *)operator new(0x3A0u);
            *v21 = 0;
            *((_QWORD *)v21 + 12) = v21 + 112;
            *((_QWORD *)v21 + 16) = v21 + 144;
            *((_QWORD *)v21 + 20) = v21 + 176;
            *((_QWORD *)v21 + 24) = v21 + 208;
            *((_QWORD *)v21 + 28) = v21 + 240;
            *((_QWORD *)v21 + 32) = v21 + 272;
            *((_QWORD *)v21 + 36) = v21 + 304;
            *((_QWORD *)v21 + 40) = v21 + 336;
            *((_QWORD *)v21 + 44) = v21 + 368;
            *((_QWORD *)v21 + 48) = v21 + 400;
            *((_QWORD *)v21 + 13) = 0;
            v21[112] = 0;
            *((_QWORD *)v21 + 17) = 0;
            v21[144] = 0;
            *((_QWORD *)v21 + 21) = 0;
            v21[176] = 0;
            *((_QWORD *)v21 + 25) = 0;
            v21[208] = 0;
            *((_QWORD *)v21 + 29) = 0;
            v21[240] = 0;
            *((_QWORD *)v21 + 33) = 0;
            v21[272] = 0;
            *((_QWORD *)v21 + 37) = 0;
            v21[304] = 0;
            *((_QWORD *)v21 + 41) = 0;
            v21[336] = 0;
            *((_QWORD *)v21 + 45) = 0;
            v21[368] = 0;
            *((_QWORD *)v21 + 49) = 0;
            v21[400] = 0;
            *((_QWORD *)v21 + 52) = v21 + 432;
            *((_QWORD *)v21 + 53) = 0x800000000LL;
            *((_QWORD *)v21 + 66) = v21 + 544;
            *((_QWORD *)v21 + 67) = 0x600000000LL;
          }
          v118 = v21;
        }
        v21[*v21 + 1] = 12;
        v22 = v118;
        v23 = *v118;
        *v118 = v23 + 1;
        *(_QWORD *)&v22[8 * v23 + 16] = v16;
        goto LABEL_11;
      }
LABEL_10:
      if ( v122 )
      {
        v32 = sub_168B9E0(v14);
        v35 = v117;
        if ( v117 )
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v117 + 32LL))(v117);
        v115 = v35;
        v36 = sub_1587BC0(v32, &v115, v30, v31, v33, v34);
        sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v121 + 8), (__int64)v16, 0xCu);
      }
LABEL_11:
      v12 = v20;
      sub_15F7200(v14);
LABEL_12:
      v13 += 8;
    }
    while ( v105 != v13 );
  }
  *(_WORD *)((char *)&v134 + 3) = 0;
  if ( v127[0] )
    sub_1A39780(v127[0]);
  if ( ptr != v126 )
    free(ptr);
  return v12;
}
