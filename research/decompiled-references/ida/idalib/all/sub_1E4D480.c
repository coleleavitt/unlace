unsigned __int64 __fastcall sub_1E4D480(
        __m128 *a1,
        unsigned __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        char a6,
        __m128 a7,
        __m128 a8,
        _QWORD *src,
        __int64 a10)
{
  __int64 v10; // r11
  __int64 *v13; // rbx
  _QWORD *v14; // r10
  unsigned __int8 v15; // al
  unsigned __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  char v23; // r9
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r11
  unsigned __int8 *v30; // rbx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // rbx
  unsigned __int8 *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // rbx
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r11
  __int64 v45; // rbx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // r11
  __int64 v49; // rbp
  unsigned __int8 *v50; // rbx
  _BYTE *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rbp
  unsigned __int8 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rbp
  unsigned __int8 *v70; // rbx
  _BYTE *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rbp
  __int64 v87; // r13
  __int64 v88; // rbp
  void *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rbp
  __int64 v92; // r12
  __int64 v93; // rbp
  void *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rbp
  __int64 v97; // r13
  __int64 v98; // rbp
  void *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // r13
  __int64 v102; // r14
  __int64 v103; // r13
  void *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // r12
  __int64 v107; // r13
  __int64 v108; // r12
  void *v109; // rdi
  __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // r14
  __int64 v113; // r13
  void *v114; // rdi
  int v116[2]; // [rsp+8h] [rbp-100h]
  int v117[2]; // [rsp+8h] [rbp-100h]
  __int64 v118; // [rsp+18h] [rbp-F0h]
  char v119; // [rsp+20h] [rbp-E8h]
  char v120; // [rsp+20h] [rbp-E8h]
  __int64 v121; // [rsp+20h] [rbp-E8h]
  char v122; // [rsp+2Ch] [rbp-DCh]
  __int64 v123; // [rsp+38h] [rbp-D0h] BYREF
  void *v124; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v125; // [rsp+48h] [rbp-C0h]
  char v126; // [rsp+4Ch] [rbp-BCh]
  __int64 v127; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v128; // [rsp+60h] [rbp-A8h]
  __int64 v129; // [rsp+68h] [rbp-A0h]
  char v130; // [rsp+B8h] [rbp-50h]
  unsigned int v131; // [rsp+C0h] [rbp-48h]
  char v132; // [rsp+C4h] [rbp-44h]

  v10 = 0;
  v13 = a4;
  v14 = (_QWORD *)a1[15].m128_u64[1];
  v15 = 0;
  if ( (*(_DWORD *)a4 & 0x8000) != 0 )
    return sub_C9A4E0(v14, a3, a5, a2, (__int64)v13, a6, v10, v15, src, a10);
  v119 = a6;
  v118 = a1[15].m128_i64[1];
  v18 = sub_A63CE0(v14);
  v22 = sub_AAC1F0(v118, v18, v19, v20, v21);
  v23 = v119;
  v125 = v22;
  if ( v22 > 0x40 )
  {
    sub_2205470(&v124, 0, 0);
    v23 = v119;
  }
  else
  {
    v124 = nullptr;
  }
  v24 = (_QWORD *)a1[15].m128_u64[1];
  v120 = v23;
  v126 = 1;
  v25 = sub_A63CE0(v24);
  v26 = (__int64)v13;
  v27 = sub_1C0AEA0(a1, v13, v25, (__int64)&v124, 4u, a7, a8);
  a6 = v120;
  if ( v27 > 1 )
  {
    v13 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFFELL);
    if ( v126 )
    {
      v10 = (__int64)v124;
      if ( v125 > 0x40 )
        goto LABEL_12;
    }
    else
    {
      if ( v125 > 0x40 )
      {
LABEL_12:
        v122 = v120;
        v121 = *(_QWORD *)v124;
        operator delete[](v124);
        a6 = v122;
        v10 = v121;
        goto LABEL_13;
      }
      if ( !v125 )
      {
        v10 = 0;
        if ( !v120 )
          goto LABEL_14;
        goto LABEL_25;
      }
      v10 = (__int64)((_QWORD)v124 << (64 - (unsigned __int8)v125)) >> (64 - (unsigned __int8)v125);
    }
LABEL_13:
    if ( !a6 )
    {
LABEL_14:
      v14 = (_QWORD *)a1[15].m128_u64[1];
      v15 = 1;
      return sub_C9A4E0(v14, a3, a5, a2, (__int64)v13, a6, v10, v15, src, a10);
    }
    if ( v10 < 0 )
    {
LABEL_21:
      *(_QWORD *)v116 = v10;
      v28 = sub_EEB7E0(a2, v26, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v124, &a1->m128_i64[1], v28, 0x12ADu, 0);
      v29 = *(_QWORD *)v116;
      if ( v130 )
      {
        v30 = v128;
        if ( !v128 )
        {
          v77 = v129;
          v78 = *(_DWORD *)(v129 + 14976);
          if ( v78 )
          {
            v85 = (unsigned int)(v78 - 1);
            *(_DWORD *)(v129 + 14976) = v85;
            v30 = *(unsigned __int8 **)(v77 + 8 * v85 + 14848);
            v86 = *((unsigned int *)v30 + 134);
            *v30 = 0;
            v87 = *((_QWORD *)v30 + 66);
            *((_DWORD *)v30 + 106) = 0;
            v88 = v87 + (v86 << 6);
            if ( v87 != v88 )
            {
              do
              {
                while ( 1 )
                {
                  v88 -= 64;
                  v89 = *(void **)(v88 + 24);
                  if ( v89 == (void *)(v88 + 40) )
                    break;
                  operator delete(v89);
                  if ( v87 == v88 )
                    goto LABEL_71;
                }
              }
              while ( v87 != v88 );
LABEL_71:
              v29 = *(_QWORD *)v116;
            }
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
            v29 = *(_QWORD *)v116;
            *((_QWORD *)v30 + 66) = v30 + 544;
            *((_QWORD *)v30 + 67) = 0x600000000LL;
          }
          v128 = v30;
        }
        v30[*v30 + 1] = 2;
        v31 = v128;
        v32 = *v128;
        *v128 = v32 + 1;
        *(_QWORD *)&v31[8 * v32 + 16] = v29;
      }
      else
      {
        if ( !v132 )
          goto LABEL_23;
        v39 = sub_168B9E0(&v124);
        v44 = *(_QWORD *)v116;
        v45 = v39;
        v46 = v127;
        if ( v127 )
        {
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 32LL))(v127);
          v44 = *(_QWORD *)v116;
        }
        *(_QWORD *)v117 = v44;
        v123 = v46;
        v47 = sub_1587BC0(v45, &v123, v40, v41, v42, v43);
        v48 = *(_QWORD *)v117;
        v49 = *v47 + 32LL * v131;
        v50 = *(unsigned __int8 **)(v49 + 8);
        if ( !v50 )
        {
          v81 = *(_QWORD *)(v49 + 16);
          v82 = *(_DWORD *)(v81 + 14976);
          if ( v82 )
          {
            v100 = (unsigned int)(v82 - 1);
            *(_DWORD *)(v81 + 14976) = v100;
            v50 = *(unsigned __int8 **)(v81 + 8 * v100 + 14848);
            v101 = *((unsigned int *)v50 + 134);
            *v50 = 0;
            v102 = *((_QWORD *)v50 + 66);
            *((_DWORD *)v50 + 106) = 0;
            v103 = v102 + (v101 << 6);
            if ( v102 != v103 )
            {
              do
              {
                while ( 1 )
                {
                  v103 -= 64;
                  v104 = *(void **)(v103 + 24);
                  if ( v104 == (void *)(v103 + 40) )
                    break;
                  operator delete(v104);
                  if ( v102 == v103 )
                    goto LABEL_88;
                }
              }
              while ( v102 != v103 );
LABEL_88:
              v48 = *(_QWORD *)v117;
            }
            *((_DWORD *)v50 + 134) = 0;
          }
          else
          {
            v50 = (unsigned __int8 *)operator new(0x3A0u);
            *v50 = 0;
            *((_QWORD *)v50 + 12) = v50 + 112;
            *((_QWORD *)v50 + 16) = v50 + 144;
            *((_QWORD *)v50 + 20) = v50 + 176;
            *((_QWORD *)v50 + 24) = v50 + 208;
            *((_QWORD *)v50 + 28) = v50 + 240;
            *((_QWORD *)v50 + 32) = v50 + 272;
            *((_QWORD *)v50 + 36) = v50 + 304;
            *((_QWORD *)v50 + 40) = v50 + 336;
            *((_QWORD *)v50 + 44) = v50 + 368;
            *((_QWORD *)v50 + 48) = v50 + 400;
            *((_QWORD *)v50 + 52) = v50 + 432;
            *((_QWORD *)v50 + 13) = 0;
            v50[112] = 0;
            *((_QWORD *)v50 + 17) = 0;
            v50[144] = 0;
            *((_QWORD *)v50 + 21) = 0;
            v50[176] = 0;
            *((_QWORD *)v50 + 25) = 0;
            v50[208] = 0;
            *((_QWORD *)v50 + 29) = 0;
            v50[240] = 0;
            *((_QWORD *)v50 + 33) = 0;
            v50[272] = 0;
            *((_QWORD *)v50 + 37) = 0;
            v50[304] = 0;
            *((_QWORD *)v50 + 41) = 0;
            v50[336] = 0;
            *((_QWORD *)v50 + 45) = 0;
            v50[368] = 0;
            *((_QWORD *)v50 + 49) = 0;
            v50[400] = 0;
            *((_QWORD *)v50 + 53) = 0x800000000LL;
            v48 = *(_QWORD *)v117;
            *((_QWORD *)v50 + 66) = v50 + 544;
            *((_QWORD *)v50 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v49 + 8) = v50;
        }
        v50[*v50 + 1] = 2;
        v51 = *(_BYTE **)(v49 + 8);
        v52 = (unsigned __int8)*v51;
        *v51 = v52 + 1;
        *(_QWORD *)&v51[8 * v52 + 16] = v48;
      }
      if ( v130 )
      {
        v33 = v128;
        if ( !v128 )
        {
          v75 = v129;
          v76 = *(_DWORD *)(v129 + 14976);
          if ( v76 )
          {
            v95 = (unsigned int)(v76 - 1);
            *(_DWORD *)(v129 + 14976) = v95;
            v33 = *(unsigned __int8 **)(v75 + 8 * v95 + 14848);
            v96 = *((unsigned int *)v33 + 134);
            *v33 = 0;
            v97 = *((_QWORD *)v33 + 66);
            *((_DWORD *)v33 + 106) = 0;
            v98 = v97 + (v96 << 6);
            while ( v97 != v98 )
            {
              while ( 1 )
              {
                v98 -= 64;
                v99 = *(void **)(v98 + 24);
                if ( v99 == (void *)(v98 + 40) )
                  break;
                operator delete(v99);
                if ( v97 == v98 )
                  goto LABEL_84;
              }
            }
LABEL_84:
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
          v128 = v33;
        }
        v33[*v33 + 1] = 15;
        v34 = v128;
        v35 = *v128;
        *v128 = v35 + 1;
        *(_QWORD *)&v34[8 * v35 + 16] = a2;
      }
      else
      {
        if ( !v132 )
          goto LABEL_23;
        v64 = sub_168B9E0(&v124);
        v67 = v127;
        if ( v127 )
          v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 32LL))(v127);
        v123 = v67;
        v68 = sub_1587BC0(v64, &v123, v62, v63, v65, v66);
        v69 = *v68 + 32LL * v131;
        v70 = *(unsigned __int8 **)(v69 + 8);
        if ( !v70 )
        {
          v79 = *(_QWORD *)(v69 + 16);
          v80 = *(_DWORD *)(v79 + 14976);
          if ( v80 )
          {
            v110 = (unsigned int)(v80 - 1);
            *(_DWORD *)(v79 + 14976) = v110;
            v70 = *(unsigned __int8 **)(v79 + 8 * v110 + 14848);
            v111 = *((unsigned int *)v70 + 134);
            *v70 = 0;
            v112 = *((_QWORD *)v70 + 66);
            *((_DWORD *)v70 + 106) = 0;
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
                  goto LABEL_101;
              }
            }
LABEL_101:
            *((_DWORD *)v70 + 134) = 0;
          }
          else
          {
            v70 = (unsigned __int8 *)operator new(0x3A0u);
            *v70 = 0;
            *((_QWORD *)v70 + 12) = v70 + 112;
            *((_QWORD *)v70 + 16) = v70 + 144;
            *((_QWORD *)v70 + 20) = v70 + 176;
            *((_QWORD *)v70 + 24) = v70 + 208;
            *((_QWORD *)v70 + 28) = v70 + 240;
            *((_QWORD *)v70 + 32) = v70 + 272;
            *((_QWORD *)v70 + 36) = v70 + 304;
            *((_QWORD *)v70 + 40) = v70 + 336;
            *((_QWORD *)v70 + 44) = v70 + 368;
            *((_QWORD *)v70 + 48) = v70 + 400;
            *((_QWORD *)v70 + 52) = v70 + 432;
            *((_QWORD *)v70 + 13) = 0;
            v70[112] = 0;
            *((_QWORD *)v70 + 17) = 0;
            v70[144] = 0;
            *((_QWORD *)v70 + 21) = 0;
            v70[176] = 0;
            *((_QWORD *)v70 + 25) = 0;
            v70[208] = 0;
            *((_QWORD *)v70 + 29) = 0;
            v70[240] = 0;
            *((_QWORD *)v70 + 33) = 0;
            v70[272] = 0;
            *((_QWORD *)v70 + 37) = 0;
            v70[304] = 0;
            *((_QWORD *)v70 + 41) = 0;
            v70[336] = 0;
            *((_QWORD *)v70 + 45) = 0;
            v70[368] = 0;
            *((_QWORD *)v70 + 49) = 0;
            v70[400] = 0;
            *((_QWORD *)v70 + 53) = 0x800000000LL;
            *((_QWORD *)v70 + 66) = v70 + 544;
            *((_QWORD *)v70 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v69 + 8) = v70;
        }
        v70[*v70 + 1] = 15;
        v71 = *(_BYTE **)(v69 + 8);
        v72 = (unsigned __int8)*v71;
        *v71 = v72 + 1;
        *(_QWORD *)&v71[8 * v72 + 16] = a2;
      }
      if ( v130 )
      {
        v36 = v128;
        if ( !v128 )
        {
          v73 = v129;
          v74 = *(_DWORD *)(v129 + 14976);
          if ( v74 )
          {
            v90 = (unsigned int)(v74 - 1);
            *(_DWORD *)(v129 + 14976) = v90;
            v36 = *(unsigned __int8 **)(v73 + 8 * v90 + 14848);
            v91 = *((unsigned int *)v36 + 134);
            *v36 = 0;
            v92 = *((_QWORD *)v36 + 66);
            *((_DWORD *)v36 + 106) = 0;
            v93 = v92 + (v91 << 6);
            while ( v92 != v93 )
            {
              while ( 1 )
              {
                v93 -= 64;
                v94 = *(void **)(v93 + 24);
                if ( v94 == (void *)(v93 + 40) )
                  break;
                operator delete(v94);
                if ( v92 == v93 )
                  goto LABEL_79;
              }
            }
LABEL_79:
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
          v128 = v36;
        }
        v36[*v36 + 1] = 3;
        v37 = v128;
      }
      else
      {
        if ( !v132 )
          goto LABEL_23;
        v55 = sub_168B9E0(&v124);
        v58 = v127;
        if ( v127 )
          v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 32LL))(v127);
        v123 = v58;
        v59 = sub_1587BC0(v55, &v123, v53, v54, v56, v57);
        v60 = *v59 + 32LL * v131;
        v61 = *(unsigned __int8 **)(v60 + 8);
        if ( !v61 )
        {
          v83 = *(_QWORD *)(v60 + 16);
          v84 = *(_DWORD *)(v83 + 14976);
          if ( v84 )
          {
            v105 = (unsigned int)(v84 - 1);
            *(_DWORD *)(v83 + 14976) = v105;
            v61 = *(unsigned __int8 **)(v83 + 8 * v105 + 14848);
            v106 = *((unsigned int *)v61 + 134);
            *v61 = 0;
            v107 = *((_QWORD *)v61 + 66);
            *((_DWORD *)v61 + 106) = 0;
            v108 = v107 + (v106 << 6);
            while ( v107 != v108 )
            {
              while ( 1 )
              {
                v108 -= 64;
                v109 = *(void **)(v108 + 24);
                if ( v109 == (void *)(v108 + 40) )
                  break;
                operator delete(v109);
                if ( v107 == v108 )
                  goto LABEL_96;
              }
            }
LABEL_96:
            *((_DWORD *)v61 + 134) = 0;
          }
          else
          {
            v61 = (unsigned __int8 *)operator new(0x3A0u);
            *v61 = 0;
            *((_QWORD *)v61 + 12) = v61 + 112;
            *((_QWORD *)v61 + 16) = v61 + 144;
            *((_QWORD *)v61 + 20) = v61 + 176;
            *((_QWORD *)v61 + 24) = v61 + 208;
            *((_QWORD *)v61 + 28) = v61 + 240;
            *((_QWORD *)v61 + 32) = v61 + 272;
            *((_QWORD *)v61 + 36) = v61 + 304;
            *((_QWORD *)v61 + 40) = v61 + 336;
            *((_QWORD *)v61 + 44) = v61 + 368;
            *((_QWORD *)v61 + 48) = v61 + 400;
            *((_QWORD *)v61 + 52) = v61 + 432;
            *((_QWORD *)v61 + 13) = 0;
            v61[112] = 0;
            *((_QWORD *)v61 + 17) = 0;
            v61[144] = 0;
            *((_QWORD *)v61 + 21) = 0;
            v61[176] = 0;
            *((_QWORD *)v61 + 25) = 0;
            v61[208] = 0;
            *((_QWORD *)v61 + 29) = 0;
            v61[240] = 0;
            *((_QWORD *)v61 + 33) = 0;
            v61[272] = 0;
            *((_QWORD *)v61 + 37) = 0;
            v61[304] = 0;
            *((_QWORD *)v61 + 41) = 0;
            v61[336] = 0;
            *((_QWORD *)v61 + 45) = 0;
            v61[368] = 0;
            *((_QWORD *)v61 + 49) = 0;
            v61[400] = 0;
            *((_QWORD *)v61 + 53) = 0x800000000LL;
            *((_QWORD *)v61 + 66) = v61 + 544;
            *((_QWORD *)v61 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v60 + 8) = v61;
        }
        v61[*v61 + 1] = 3;
        v37 = *(unsigned __int8 **)(v60 + 8);
      }
      v38 = *v37;
      *v37 = v38 + 1;
      *(_QWORD *)&v37[8 * v38 + 16] = a10;
LABEL_23:
      sub_15F7200(&v124);
      return 1;
    }
LABEL_25:
    if ( a10 > v10 )
      goto LABEL_14;
    goto LABEL_21;
  }
  result = 1;
  if ( v125 > 0x40 )
  {
    if ( v124 )
    {
      operator delete[](v124);
      return 1;
    }
  }
  return result;
}
