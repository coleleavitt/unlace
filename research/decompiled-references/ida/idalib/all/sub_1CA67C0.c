void __fastcall sub_1CA67C0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  __int32 v9; // r15d
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __m128i *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int ***v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int **v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int **v29; // rdx
  unsigned __int8 *v30; // r12
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // rbx
  unsigned __int8 *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // rbx
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // r14
  unsigned __int8 *v47; // r12
  _BYTE *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // r12
  unsigned __int8 *v58; // rbx
  _BYTE *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // r12
  unsigned __int8 *v69; // rbx
  _BYTE *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int8 v73; // dl
  __int64 v74; // rcx
  __int64 v75; // r13
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r12
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r12
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rdx
  int v101; // eax
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // rdx
  int v105; // eax
  __int64 v106; // rdx
  int v107; // eax
  __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // r14
  __int64 v113; // r13
  void *v114; // rdi
  __int64 v115; // rax
  __int64 v116; // r12
  __int64 v117; // r13
  __int64 v118; // r12
  void *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // r12
  __int64 v122; // r13
  __int64 v123; // r12
  void *v124; // rdi
  __int64 v125; // rax
  __int64 v126; // r13
  __int64 v127; // r15
  __int64 v128; // r13
  void *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // r13
  __int64 v132; // r14
  __int64 v133; // r13
  void *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // r13
  __int64 v137; // r14
  __int64 v138; // r13
  void *v139; // rdi
  int v140; // [rsp+0h] [rbp-D8h] BYREF
  __int32 v141; // [rsp+4h] [rbp-D4h] BYREF
  __int64 v142; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v143[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v144; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v145; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v146; // [rsp+38h] [rbp-A0h]
  char v147; // [rsp+88h] [rbp-50h]
  unsigned int v148; // [rsp+90h] [rbp-48h]
  char v149; // [rsp+94h] [rbp-44h]

  if ( !a3[3].m128i_i16[4] || (v4 = a3[5].m128i_i64[0], (v4 & 2) == 0) )
  {
    sub_168B9F0((__int64)v143, a1, a3[1].m128i_u32[2], 0xC53u, 0);
    if ( v147 )
    {
      v30 = v145;
      if ( !v145 )
      {
        v98 = v146;
        v99 = *(_DWORD *)(v146 + 14976);
        if ( v99 )
        {
          v110 = (unsigned int)(v99 - 1);
          *(_DWORD *)(v146 + 14976) = v110;
          v30 = *(unsigned __int8 **)(v98 + 8 * v110 + 14848);
          v111 = *((unsigned int *)v30 + 134);
          v112 = *((_QWORD *)v30 + 66);
          *v30 = 0;
          *((_DWORD *)v30 + 106) = 0;
          v113 = v112 + (v111 << 6);
          while ( v112 != v113 )
          {
            while ( 1 )
            {
              v113 -= 64;
              v114 = *(void **)(v113 + 24);
              if ( v114 == (void *)(v113 + 40) )
                break;
              operator delete(v114);
              if ( v112 == v113 )
                goto LABEL_86;
            }
          }
LABEL_86:
          *((_DWORD *)v30 + 134) = 0;
        }
        else
        {
          v30 = (unsigned __int8 *)operator new(0x3A0u);
          *v30 = 0;
          *((_QWORD *)v30 + 12) = v30 + 112;
          *((_QWORD *)v30 + 16) = v30 + 144;
          *((_QWORD *)v30 + 20) = v30 + 176;
          *((_QWORD *)v30 + 24) = v30 + 208;
          *((_QWORD *)v30 + 28) = v30 + 240;
          *((_QWORD *)v30 + 32) = v30 + 272;
          *((_QWORD *)v30 + 36) = v30 + 304;
          *((_QWORD *)v30 + 40) = v30 + 336;
          *((_QWORD *)v30 + 44) = v30 + 368;
          *((_QWORD *)v30 + 48) = v30 + 400;
          *((_QWORD *)v30 + 52) = v30 + 432;
          *((_QWORD *)v30 + 13) = 0;
          v30[112] = 0;
          *((_QWORD *)v30 + 17) = 0;
          v30[144] = 0;
          *((_QWORD *)v30 + 21) = 0;
          v30[176] = 0;
          *((_QWORD *)v30 + 25) = 0;
          v30[208] = 0;
          *((_QWORD *)v30 + 29) = 0;
          v30[240] = 0;
          *((_QWORD *)v30 + 33) = 0;
          v30[272] = 0;
          *((_QWORD *)v30 + 37) = 0;
          v30[304] = 0;
          *((_QWORD *)v30 + 41) = 0;
          v30[336] = 0;
          *((_QWORD *)v30 + 45) = 0;
          v30[368] = 0;
          *((_QWORD *)v30 + 49) = 0;
          v30[400] = 0;
          *((_QWORD *)v30 + 53) = 0x800000000LL;
          *((_QWORD *)v30 + 66) = v30 + 544;
          *((_QWORD *)v30 + 67) = 0x600000000LL;
        }
        v145 = v30;
      }
      v30[*v30 + 1] = 16;
      v31 = v145;
      v32 = *v145;
      *v145 = v32 + 1;
      *(_QWORD *)&v31[8 * v32 + 16] = a3;
      if ( !v147 )
        goto LABEL_33;
    }
    else
    {
      if ( !v149 )
      {
LABEL_5:
        sub_15F7200(v143);
        return;
      }
      v43 = sub_168B9E0(v143);
      v44 = v144;
      if ( v144 )
        v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
      v142 = v44;
      v45 = sub_1587BC0(v43, &v142, v39, v40, v41, v42);
      v46 = *v45 + 32LL * v148;
      v47 = *(unsigned __int8 **)(v46 + 8);
      if ( !v47 )
      {
        v104 = *(_QWORD *)(v46 + 16);
        v105 = *(_DWORD *)(v104 + 14976);
        if ( v105 )
        {
          v125 = (unsigned int)(v105 - 1);
          *(_DWORD *)(v104 + 14976) = v125;
          v47 = *(unsigned __int8 **)(v104 + 8 * v125 + 14848);
          v126 = *((unsigned int *)v47 + 134);
          v127 = *((_QWORD *)v47 + 66);
          *v47 = 0;
          *((_DWORD *)v47 + 106) = 0;
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
                goto LABEL_107;
            }
          }
LABEL_107:
          *((_DWORD *)v47 + 134) = 0;
        }
        else
        {
          v47 = (unsigned __int8 *)operator new(0x3A0u);
          *v47 = 0;
          *((_QWORD *)v47 + 12) = v47 + 112;
          *((_QWORD *)v47 + 16) = v47 + 144;
          *((_QWORD *)v47 + 20) = v47 + 176;
          *((_QWORD *)v47 + 24) = v47 + 208;
          *((_QWORD *)v47 + 28) = v47 + 240;
          *((_QWORD *)v47 + 32) = v47 + 272;
          *((_QWORD *)v47 + 36) = v47 + 304;
          *((_QWORD *)v47 + 40) = v47 + 336;
          *((_QWORD *)v47 + 44) = v47 + 368;
          *((_QWORD *)v47 + 48) = v47 + 400;
          *((_QWORD *)v47 + 52) = v47 + 432;
          *((_QWORD *)v47 + 13) = 0;
          v47[112] = 0;
          *((_QWORD *)v47 + 17) = 0;
          v47[144] = 0;
          *((_QWORD *)v47 + 21) = 0;
          v47[176] = 0;
          *((_QWORD *)v47 + 25) = 0;
          v47[208] = 0;
          *((_QWORD *)v47 + 29) = 0;
          v47[240] = 0;
          *((_QWORD *)v47 + 33) = 0;
          v47[272] = 0;
          *((_QWORD *)v47 + 37) = 0;
          v47[304] = 0;
          *((_QWORD *)v47 + 41) = 0;
          v47[336] = 0;
          *((_QWORD *)v47 + 45) = 0;
          v47[368] = 0;
          *((_QWORD *)v47 + 49) = 0;
          v47[400] = 0;
          *((_QWORD *)v47 + 53) = 0x800000000LL;
          *((_QWORD *)v47 + 66) = v47 + 544;
          *((_QWORD *)v47 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v46 + 8) = v47;
      }
      v47[*v47 + 1] = 16;
      v48 = *(_BYTE **)(v46 + 8);
      v49 = (unsigned __int8)*v48;
      *v48 = v49 + 1;
      *(_QWORD *)&v48[8 * v49 + 16] = a3;
      if ( !v147 )
      {
LABEL_33:
        if ( !v149 )
          goto LABEL_5;
        v52 = sub_168B9E0(v143);
        v55 = v144;
        if ( v144 )
          v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
        v142 = v55;
        v56 = sub_1587BC0(v52, &v142, v50, v51, v53, v54);
        v57 = *v56 + 32LL * v148;
        v58 = *(unsigned __int8 **)(v57 + 8);
        if ( !v58 )
        {
          v106 = *(_QWORD *)(v57 + 16);
          v107 = *(_DWORD *)(v106 + 14976);
          if ( v107 )
          {
            v130 = (unsigned int)(v107 - 1);
            *(_DWORD *)(v106 + 14976) = v130;
            v58 = *(unsigned __int8 **)(v106 + 8 * v130 + 14848);
            v131 = *((unsigned int *)v58 + 134);
            *v58 = 0;
            v132 = *((_QWORD *)v58 + 66);
            *((_DWORD *)v58 + 106) = 0;
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
                  goto LABEL_112;
              }
            }
LABEL_112:
            *((_DWORD *)v58 + 134) = 0;
          }
          else
          {
            v58 = (unsigned __int8 *)operator new(0x3A0u);
            *v58 = 0;
            *((_QWORD *)v58 + 12) = v58 + 112;
            *((_QWORD *)v58 + 16) = v58 + 144;
            *((_QWORD *)v58 + 20) = v58 + 176;
            *((_QWORD *)v58 + 24) = v58 + 208;
            *((_QWORD *)v58 + 28) = v58 + 240;
            *((_QWORD *)v58 + 32) = v58 + 272;
            *((_QWORD *)v58 + 36) = v58 + 304;
            *((_QWORD *)v58 + 40) = v58 + 336;
            *((_QWORD *)v58 + 44) = v58 + 368;
            *((_QWORD *)v58 + 48) = v58 + 400;
            *((_QWORD *)v58 + 52) = v58 + 432;
            *((_QWORD *)v58 + 13) = 0;
            v58[112] = 0;
            *((_QWORD *)v58 + 17) = 0;
            v58[144] = 0;
            *((_QWORD *)v58 + 21) = 0;
            v58[176] = 0;
            *((_QWORD *)v58 + 25) = 0;
            v58[208] = 0;
            *((_QWORD *)v58 + 29) = 0;
            v58[240] = 0;
            *((_QWORD *)v58 + 33) = 0;
            v58[272] = 0;
            *((_QWORD *)v58 + 37) = 0;
            v58[304] = 0;
            *((_QWORD *)v58 + 41) = 0;
            v58[336] = 0;
            *((_QWORD *)v58 + 45) = 0;
            v58[368] = 0;
            *((_QWORD *)v58 + 49) = 0;
            v58[400] = 0;
            *((_QWORD *)v58 + 53) = 0x800000000LL;
            *((_QWORD *)v58 + 66) = v58 + 544;
            *((_QWORD *)v58 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v57 + 8) = v58;
        }
        v58[*v58 + 1] = 2;
        v59 = *(_BYTE **)(v57 + 8);
        v60 = (unsigned __int8)*v59;
        *v59 = v60 + 1;
        *(_QWORD *)&v59[8 * v60 + 16] = 1;
        if ( !v147 )
        {
LABEL_38:
          if ( v149 )
          {
            v63 = sub_168B9E0(v143);
            v66 = v144;
            if ( v144 )
              v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
            v142 = v66;
            v67 = sub_1587BC0(v63, &v142, v61, v62, v64, v65);
            v68 = *v67 + 32LL * v148;
            v69 = *(unsigned __int8 **)(v68 + 8);
            if ( !v69 )
            {
              v108 = *(_QWORD *)(v68 + 16);
              v109 = *(_DWORD *)(v108 + 14976);
              if ( v109 )
              {
                v135 = (unsigned int)(v109 - 1);
                *(_DWORD *)(v108 + 14976) = v135;
                v69 = *(unsigned __int8 **)(v108 + 8 * v135 + 14848);
                v136 = *((unsigned int *)v69 + 134);
                *v69 = 0;
                v137 = *((_QWORD *)v69 + 66);
                *((_DWORD *)v69 + 106) = 0;
                v138 = v137 + (v136 << 6);
                while ( v137 != v138 )
                {
                  while ( 1 )
                  {
                    v138 -= 64;
                    v139 = *(void **)(v138 + 24);
                    if ( v139 == (void *)(v138 + 40) )
                      break;
                    operator delete(v139);
                    if ( v137 == v138 )
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
                *((_QWORD *)v69 + 13) = 0;
                v69[112] = 0;
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
              *(_QWORD *)(v68 + 8) = v69;
            }
            v69[*v69 + 1] = 2;
            v70 = *(_BYTE **)(v68 + 8);
            v71 = (unsigned __int8)*v70;
            *v70 = v71 + 1;
            *(_QWORD *)&v70[8 * v71 + 16] = 3;
          }
          goto LABEL_5;
        }
LABEL_27:
        v36 = v145;
        if ( !v145 )
        {
          v102 = v146;
          v103 = *(_DWORD *)(v146 + 14976);
          if ( v103 )
          {
            v115 = (unsigned int)(v103 - 1);
            *(_DWORD *)(v146 + 14976) = v115;
            v36 = *(unsigned __int8 **)(v102 + 8 * v115 + 14848);
            v116 = *((unsigned int *)v36 + 134);
            *v36 = 0;
            v117 = *((_QWORD *)v36 + 66);
            *((_DWORD *)v36 + 106) = 0;
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
                  goto LABEL_91;
              }
            }
LABEL_91:
            *((_DWORD *)v36 + 134) = 0;
          }
          else
          {
            v36 = (unsigned __int8 *)operator new(0x3A0u);
            *v36 = 0;
            *((_QWORD *)v36 + 12) = v36 + 112;
            *((_QWORD *)v36 + 16) = v36 + 144;
            *((_QWORD *)v36 + 20) = v36 + 176;
            *((_QWORD *)v36 + 24) = v36 + 208;
            *((_QWORD *)v36 + 28) = v36 + 240;
            *((_QWORD *)v36 + 32) = v36 + 272;
            *((_QWORD *)v36 + 36) = v36 + 304;
            *((_QWORD *)v36 + 40) = v36 + 336;
            *((_QWORD *)v36 + 44) = v36 + 368;
            *((_QWORD *)v36 + 48) = v36 + 400;
            *((_QWORD *)v36 + 52) = v36 + 432;
            *((_QWORD *)v36 + 13) = 0;
            v36[112] = 0;
            *((_QWORD *)v36 + 17) = 0;
            v36[144] = 0;
            *((_QWORD *)v36 + 21) = 0;
            v36[176] = 0;
            *((_QWORD *)v36 + 25) = 0;
            v36[208] = 0;
            *((_QWORD *)v36 + 29) = 0;
            v36[240] = 0;
            *((_QWORD *)v36 + 33) = 0;
            v36[272] = 0;
            *((_QWORD *)v36 + 37) = 0;
            v36[304] = 0;
            *((_QWORD *)v36 + 41) = 0;
            v36[336] = 0;
            *((_QWORD *)v36 + 45) = 0;
            v36[368] = 0;
            *((_QWORD *)v36 + 49) = 0;
            v36[400] = 0;
            *((_QWORD *)v36 + 53) = 0x800000000LL;
            *((_QWORD *)v36 + 66) = v36 + 544;
            *((_QWORD *)v36 + 67) = 0x600000000LL;
          }
          v145 = v36;
        }
        v36[*v36 + 1] = 2;
        v37 = v145;
        v38 = *v145;
        *v145 = v38 + 1;
        *(_QWORD *)&v37[8 * v38 + 16] = 3;
        goto LABEL_5;
      }
    }
    v33 = v145;
    if ( !v145 )
    {
      v100 = v146;
      v101 = *(_DWORD *)(v146 + 14976);
      if ( v101 )
      {
        v120 = (unsigned int)(v101 - 1);
        *(_DWORD *)(v146 + 14976) = v120;
        v33 = *(unsigned __int8 **)(v100 + 8 * v120 + 14848);
        v121 = *((unsigned int *)v33 + 134);
        *v33 = 0;
        v122 = *((_QWORD *)v33 + 66);
        *((_DWORD *)v33 + 106) = 0;
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
              goto LABEL_96;
          }
        }
LABEL_96:
        *((_DWORD *)v33 + 134) = 0;
      }
      else
      {
        v33 = (unsigned __int8 *)operator new(0x3A0u);
        *v33 = 0;
        *((_QWORD *)v33 + 12) = v33 + 112;
        *((_QWORD *)v33 + 16) = v33 + 144;
        *((_QWORD *)v33 + 20) = v33 + 176;
        *((_QWORD *)v33 + 24) = v33 + 208;
        *((_QWORD *)v33 + 28) = v33 + 240;
        *((_QWORD *)v33 + 32) = v33 + 272;
        *((_QWORD *)v33 + 36) = v33 + 304;
        *((_QWORD *)v33 + 40) = v33 + 336;
        *((_QWORD *)v33 + 44) = v33 + 368;
        *((_QWORD *)v33 + 48) = v33 + 400;
        *((_QWORD *)v33 + 52) = v33 + 432;
        *((_QWORD *)v33 + 13) = 0;
        v33[112] = 0;
        *((_QWORD *)v33 + 17) = 0;
        v33[144] = 0;
        *((_QWORD *)v33 + 21) = 0;
        v33[176] = 0;
        *((_QWORD *)v33 + 25) = 0;
        v33[208] = 0;
        *((_QWORD *)v33 + 29) = 0;
        v33[240] = 0;
        *((_QWORD *)v33 + 33) = 0;
        v33[272] = 0;
        *((_QWORD *)v33 + 37) = 0;
        v33[304] = 0;
        *((_QWORD *)v33 + 41) = 0;
        v33[336] = 0;
        *((_QWORD *)v33 + 45) = 0;
        v33[368] = 0;
        *((_QWORD *)v33 + 49) = 0;
        v33[400] = 0;
        *((_QWORD *)v33 + 53) = 0x800000000LL;
        *((_QWORD *)v33 + 66) = v33 + 544;
        *((_QWORD *)v33 + 67) = 0x600000000LL;
      }
      v145 = v33;
    }
    v33[*v33 + 1] = 2;
    v34 = v145;
    v35 = *v145;
    *v145 = v35 + 1;
    *(_QWORD *)&v34[8 * v35 + 16] = 1;
    if ( !v147 )
      goto LABEL_38;
    goto LABEL_27;
  }
  v6 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
  if ( !(unsigned __int8)sub_B196E0(*(_QWORD *)(v6 + 16) + 16LL, **(unsigned int **)(v6 + 16), &v140) )
  {
    sub_168B9F0((__int64)v143, a1, a3[1].m128i_u32[2], 0x13BCu, 0);
    v89 = sub_15DD120((__int64)v143, (__int64)a3);
    v90 = v89;
    if ( *(_BYTE *)(v89 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v89 + 32), v6, 5u);
    }
    else if ( *(_BYTE *)(v89 + 132) )
    {
      v95 = sub_168B9E0((_QWORD *)v89);
      v96 = *(_QWORD *)(v90 + 16);
      if ( v96 )
        v96 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v96 + 32LL))(*(_QWORD *)(v90 + 16));
      v142 = v96;
      v97 = sub_1587BC0(v95, &v142, v91, v92, v93, v94);
      sub_AE9DF0((unsigned __int8 **)(*v97 + 32LL * *(unsigned int *)(v90 + 128) + 8), v6, 5u);
    }
    goto LABEL_5;
  }
  v7 = *a1;
  v141 = 0;
  if ( v140 )
  {
    if ( !(unsigned __int8)sub_15EB880((__int64)a3, v7, 2u)
      || !(unsigned __int8)sub_1830010(
                             *a1,
                             a2,
                             (__int64)a3,
                             2u,
                             (_DWORD *)(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL),
                             (__int64)&v141,
                             0,
                             0) )
    {
      return;
    }
    v72 = (v141 & 0x3FFFFFFF) - 1 - (unsigned int)((v141 & 0x40000000) != 0);
    v73 = *(_BYTE *)(a2 + 28) & 0x7F;
    v74 = (unsigned int)v73 - 34;
    if ( (unsigned int)v74 > 5 )
    {
      if ( v73 == 18 )
      {
        v75 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v72);
      }
      else
      {
        if ( v73 != 8 )
          BUG();
        v75 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8 * v72);
      }
    }
    else
    {
      v75 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v72);
    }
    v76 = *(_QWORD *)(*(_QWORD *)(v75 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v77 = *(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v77 + 16) != 11 )
      goto LABEL_54;
    if ( *(_BYTE *)(v76 + 16) != 11 )
      v76 = sub_F63050(v76, a2, v77, v74);
    v78 = *(_QWORD *)(*(_QWORD *)(v76 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v79 = (unsigned int)*(unsigned __int8 *)(v78 + 16) - 25;
    if ( (unsigned int)v79 > 1 )
      v78 = sub_F63050(v78, a2, v79, v74);
    v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v80 + 16) != 13 || ((*(_WORD *)(v80 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
LABEL_54:
      sub_168B9F0((__int64)v143, a1, *(_DWORD *)(v75 + 24), 0x13B8u, 0);
      v81 = *(_QWORD *)(v75 + 48);
      if ( v147 )
      {
        sub_AE9DF0(&v145, *(_QWORD *)(v75 + 48), 8u);
      }
      else if ( v149 )
      {
        v86 = sub_168B9E0(v143);
        v87 = v144;
        if ( v144 )
          v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
        v142 = v87;
        v88 = sub_1587BC0(v86, &v142, v82, v83, v84, v85);
        sub_AE9DF0((unsigned __int8 **)(*v88 + 32LL * v148 + 8), v81, 8u);
      }
      goto LABEL_5;
    }
  }
  else if ( !(unsigned __int8)sub_15EB880((__int64)a3, v7, 1u) )
  {
    return;
  }
  v8 = sub_168B6C0((__int64)a1);
  v9 = v141;
  v10 = v8;
  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  v14 = v11[294];
  v11[304] += 48LL;
  v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v11[295] >= (unsigned __int64)&v15[3] && v14 )
    v11[294] = v15 + 3;
  else
    v15 = (__m128i *)sub_986170((__int64)(v11 + 294), 48, 48, 3, v12, v13);
  sub_B196B0(v15, v10, a3, v140, v9);
  sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v24 = (unsigned int ***)sub_B8C3D0(a2, (__int64)v15, v20, v21, v22, v23);
    v27 = *v24;
    v28 = (unsigned __int64)&(*v24)[*((unsigned int *)v24 + 2)];
    if ( (unsigned __int64)v27 >= v28 )
    {
      if ( v27 == (unsigned int **)v28 )
        return;
      while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 365 )
      {
        v28 += 8LL;
        if ( v27 == (unsigned int **)v28 )
          return;
      }
    }
    else
    {
      v29 = v27;
      while ( *((_WORD *)*v29 + 18) != 365 )
      {
        if ( (unsigned int **)v28 == ++v29 )
          return;
      }
      if ( (unsigned int **)v28 == v29 )
        return;
    }
    while ( *((_WORD *)*v27 + 18) != 365 )
      ++v27;
    sub_1CA24E0((__int64 *)*a1, (_QWORD *)a2, *v27, (unsigned int *)v15, v25, v26);
  }
}
