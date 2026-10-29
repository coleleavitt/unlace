__m128i *__fastcall sub_1CA7B40(__int64 *a1, __int64 a2, const __m128i *a3, const void *a4, size_t a5, __int64 a6)
{
  __int64 v10; // r14
  unsigned __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _WORD *v16; // rcx
  _WORD **v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __m128i *v23; // rbx
  __int64 v25; // r15
  char **v26; // rax
  char *v27; // rcx
  char **v28; // r15
  __int64 v29; // rdx
  char *v30; // rsi
  __int64 v31; // rax
  char *v32; // rdi
  char *v33; // rax
  char *v34; // r8
  char *v35; // r8
  __int64 v36; // rax
  char *v37; // rax
  char *v38; // rax
  size_t v39; // rdx
  unsigned __int8 *v40; // rax
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  unsigned __int8 *v43; // rax
  unsigned __int8 *v44; // rdx
  __int64 v45; // rax
  bool v46; // dl
  unsigned __int8 *v47; // rax
  _BOOL8 v48; // r15
  unsigned __int8 *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r15
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r15
  __int64 v60; // rcx
  unsigned __int8 *v61; // rax
  _BYTE *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rdx
  unsigned __int8 *v77; // rax
  _BYTE *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  unsigned __int8 *v87; // rax
  _BYTE *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rsi
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 v99; // rdx
  void *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rsi
  __int64 v104; // rdx
  void *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rcx
  void *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // r8
  __int64 v114; // rsi
  void *v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // rcx
  void *v120; // rdi
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rsi
  __int64 v124; // rcx
  void *v125; // rdi
  char *v126; // [rsp+8h] [rbp-100h]
  bool v127; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v128; // [rsp+10h] [rbp-F8h]
  __int64 v129; // [rsp+10h] [rbp-F8h]
  __int64 v130; // [rsp+10h] [rbp-F8h]
  __int64 v131; // [rsp+10h] [rbp-F8h]
  __int64 v132; // [rsp+10h] [rbp-F8h]
  __int64 v133; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v134; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v135; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v136; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v137; // [rsp+10h] [rbp-F8h]
  __int64 v138; // [rsp+10h] [rbp-F8h]
  __int64 v139; // [rsp+10h] [rbp-F8h]
  __int64 v140; // [rsp+18h] [rbp-F0h]
  __int64 v141; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v142; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v143; // [rsp+18h] [rbp-F0h]
  __int64 v144; // [rsp+20h] [rbp-E8h]
  __int64 v145; // [rsp+20h] [rbp-E8h]
  __int64 v146; // [rsp+20h] [rbp-E8h]
  __int64 v147; // [rsp+20h] [rbp-E8h]
  __int64 v148; // [rsp+28h] [rbp-E0h]
  __int64 v149; // [rsp+28h] [rbp-E0h]
  __int64 v150; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v151[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v152; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v153; // [rsp+60h] [rbp-A8h]
  __int64 v154; // [rsp+68h] [rbp-A0h]
  char v155; // [rsp+B8h] [rbp-50h]
  unsigned int v156; // [rsp+C0h] [rbp-48h]
  char v157; // [rsp+C4h] [rbp-44h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v10 = a2;
  v11 = sub_B8C3D0(a2, a2, (__int64)a3, (__int64)a4, a5, a6);
  v14 = *v11;
  v15 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( v14 >= v15 )
  {
    if ( v14 == v15 )
      goto LABEL_8;
    v16 = *(_WORD **)v15;
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 372 )
    {
      v17 = (_WORD **)(v15 + 8);
      while ( (_WORD **)v14 != v17 )
      {
        v16 = *v17++;
        if ( v16[18] == 372 )
          goto LABEL_16;
      }
      goto LABEL_8;
    }
LABEL_16:
    v25 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 372 )
    {
      v14 += 8LL;
      do
      {
        v25 = *(_QWORD *)v14;
        v14 += 8LL;
      }
      while ( *(_WORD *)(v25 + 36) != 372 );
    }
    if ( *(_DWORD *)(v25 + 40) == a5 && (!a5 || (a2 = (__int64)a4, !memcmp(*(const void **)(v25 + 48), a4, a5)))
      || (*(_BYTE *)(v25 + 38) & 4) != 0 )
    {
LABEL_22:
      if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
        goto LABEL_8;
      v26 = (char **)sub_B8C3D0(v10, a2, v14, (__int64)v16, v12, v13);
      v27 = *v26;
      v28 = v26;
      v29 = 8LL * *((unsigned int *)v26 + 2);
      v30 = &(*v26)[v29];
      v31 = v29 >> 3;
      if ( v29 >> 5 )
      {
        if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 372 )
        {
          v32 = v27;
        }
        else
        {
          v32 = v27 + 8;
          if ( *(_WORD *)(*((_QWORD *)v27 + 1) + 36LL) != 372 )
          {
            v32 = v27 + 16;
            if ( *(_WORD *)(*((_QWORD *)v27 + 2) + 36LL) != 372 )
            {
              v33 = v27;
              v34 = &v27[32 * (v29 >> 5)];
              if ( *(_WORD *)(*((_QWORD *)v27 + 3) + 36LL) == 372 )
              {
                v32 = v27 + 24;
              }
              else
              {
                while ( 1 )
                {
                  v32 = v33 + 32;
                  if ( v33 + 32 == v34 )
                  {
                    v31 = (v30 - v34) >> 3;
                    goto LABEL_36;
                  }
                  if ( *(_WORD *)(*((_QWORD *)v33 + 4) + 36LL) == 372 )
                    goto LABEL_47;
                  if ( *(_WORD *)(*((_QWORD *)v33 + 5) + 36LL) == 372 )
                  {
                    v32 = v33 + 40;
                    goto LABEL_47;
                  }
                  if ( *(_WORD *)(*((_QWORD *)v33 + 6) + 36LL) == 372 )
                  {
                    v32 = v33 + 48;
                    goto LABEL_47;
                  }
                  if ( *(_WORD *)(*((_QWORD *)v33 + 7) + 36LL) == 372 )
                    break;
                  v33 += 32;
                }
                v32 = v33 + 56;
              }
            }
          }
        }
LABEL_47:
        if ( v30 != v32 )
        {
          v37 = v32 + 8;
          if ( v30 == v32 + 8 )
          {
            v35 = v32;
          }
          else
          {
            do
            {
              if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 372 )
              {
                *(_QWORD *)v32 = *(_QWORD *)v37;
                v32 += 8;
              }
              v37 += 8;
            }
            while ( v30 != v37 );
            v27 = *v28;
            v38 = &(*v28)[v29];
            v39 = v38 - v30;
            v35 = &v32[v38 - v30];
            if ( v38 != v30 )
            {
              v126 = &v32[v39];
              memmove(v32, v30, v39);
              v27 = *v28;
              v35 = v126;
            }
          }
          goto LABEL_40;
        }
        goto LABEL_39;
      }
      v32 = v27;
LABEL_36:
      if ( v31 != 2 )
      {
        if ( v31 != 3 )
        {
          if ( v31 != 1 )
          {
LABEL_39:
            v35 = v30;
            goto LABEL_40;
          }
          goto LABEL_78;
        }
        if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 372 )
          goto LABEL_47;
        v32 += 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 372 )
        goto LABEL_47;
      v32 += 8;
LABEL_78:
      v35 = v30;
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 372 )
      {
LABEL_40:
        v36 = (v35 - v27) >> 3;
        *((_DWORD *)v28 + 2) = v36;
        if ( !(_DWORD)v36 )
          *(_BYTE *)(v10 + 29) &= ~1u;
        goto LABEL_8;
      }
      goto LABEL_47;
    }
    sub_168B9F0((__int64)v151, a1, *(_DWORD *)(v25 + 24), 0xCADu, 0);
    if ( v155 )
    {
      v40 = v153;
      if ( !v153 )
      {
        v66 = v154;
        v67 = *(_DWORD *)(v154 + 14976);
        if ( v67 )
        {
          v101 = (unsigned int)(v67 - 1);
          *(_DWORD *)(v154 + 14976) = v101;
          v40 = *(unsigned __int8 **)(v66 + 8 * v101 + 14848);
          v102 = *((unsigned int *)v40 + 134);
          *v40 = 0;
          v103 = *((_QWORD *)v40 + 66);
          *((_DWORD *)v40 + 106) = 0;
          v104 = v103 + (v102 << 6);
          while ( v103 != v104 )
          {
            while ( 1 )
            {
              v104 -= 64;
              v105 = *(void **)(v104 + 24);
              if ( v105 == (void *)(v104 + 40) )
                break;
              v145 = v104;
              v135 = v40;
              operator delete(v105);
              v104 = v145;
              v40 = v135;
              if ( v103 == v145 )
                goto LABEL_119;
            }
          }
LABEL_119:
          *((_DWORD *)v40 + 134) = 0;
        }
        else
        {
          v40 = (unsigned __int8 *)operator new(0x3A0u);
          *v40 = 0;
          *((_QWORD *)v40 + 12) = v40 + 112;
          *((_QWORD *)v40 + 16) = v40 + 144;
          *((_QWORD *)v40 + 20) = v40 + 176;
          *((_QWORD *)v40 + 24) = v40 + 208;
          *((_QWORD *)v40 + 28) = v40 + 240;
          *((_QWORD *)v40 + 32) = v40 + 272;
          *((_QWORD *)v40 + 36) = v40 + 304;
          *((_QWORD *)v40 + 40) = v40 + 336;
          *((_QWORD *)v40 + 44) = v40 + 368;
          *((_QWORD *)v40 + 48) = v40 + 400;
          *((_QWORD *)v40 + 52) = v40 + 432;
          *((_QWORD *)v40 + 13) = 0;
          v40[112] = 0;
          *((_QWORD *)v40 + 17) = 0;
          v40[144] = 0;
          *((_QWORD *)v40 + 21) = 0;
          v40[176] = 0;
          *((_QWORD *)v40 + 25) = 0;
          v40[208] = 0;
          *((_QWORD *)v40 + 29) = 0;
          v40[240] = 0;
          *((_QWORD *)v40 + 33) = 0;
          v40[272] = 0;
          *((_QWORD *)v40 + 37) = 0;
          v40[304] = 0;
          *((_QWORD *)v40 + 41) = 0;
          v40[336] = 0;
          *((_QWORD *)v40 + 45) = 0;
          v40[368] = 0;
          *((_QWORD *)v40 + 49) = 0;
          v40[400] = 0;
          *((_QWORD *)v40 + 53) = 0x800000000LL;
          *((_QWORD *)v40 + 66) = v40 + 544;
          *((_QWORD *)v40 + 67) = 0x600000000LL;
        }
        v153 = v40;
      }
      v40[*v40 + 1] = 14;
      v41 = v153;
      v42 = *v153;
      *v153 = v42 + 1;
      *(_QWORD *)&v41[8 * v42 + 16] = v25;
    }
    else
    {
      if ( !v157 )
      {
LABEL_45:
        if ( (*(_BYTE *)(v25 + 35) & 2) != 0 )
        {
LABEL_46:
          sub_15F7200(v151);
          a2 = (__int64)a1;
          sub_168B9F0((__int64)v151, a1, a3[1].m128i_u32[2], 0x16CFu, 0);
          sub_15F7200(v151);
          goto LABEL_22;
        }
        v46 = (a3[2].m128i_i8[3] & 2) != 0;
LABEL_69:
        v127 = v46;
        if ( v157 )
        {
          v51 = sub_168B9E0(v151);
          v55 = v127;
          v56 = v51;
          v57 = (__int64)v152;
          if ( v152 )
          {
            v57 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, bool))(*v152 + 32LL))(v152, *v152, v127);
            v55 = v127;
          }
          v128 = v55;
          v150 = v57;
          v58 = sub_1587BC0(v56, &v150, v55, v52, v53, v54);
          v59 = v128;
          v60 = *v58 + 32LL * v156;
          v61 = *(unsigned __int8 **)(v60 + 8);
          if ( !v61 )
          {
            v92 = *(_QWORD *)(v60 + 16);
            v93 = *(_DWORD *)(v92 + 14976);
            if ( v93 )
            {
              v111 = (unsigned int)(v93 - 1);
              *(_DWORD *)(v92 + 14976) = v111;
              v61 = *(unsigned __int8 **)(v92 + 8 * v111 + 14848);
              v112 = *((unsigned int *)v61 + 134);
              *v61 = 0;
              v113 = *((_QWORD *)v61 + 66);
              *((_DWORD *)v61 + 106) = 0;
              v114 = v113 + (v112 << 6);
              while ( v113 != v114 )
              {
                while ( 1 )
                {
                  v114 -= 64;
                  v115 = *(void **)(v114 + 24);
                  if ( v115 == (void *)(v114 + 40) )
                    break;
                  v147 = v113;
                  v141 = v60;
                  v137 = v61;
                  operator delete(v115);
                  v113 = v147;
                  v61 = v137;
                  v60 = v141;
                  if ( v147 == v114 )
                    goto LABEL_129;
                }
              }
LABEL_129:
              *((_DWORD *)v61 + 134) = 0;
            }
            else
            {
              v132 = v60;
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
              v60 = v132;
              *((_QWORD *)v61 + 66) = v61 + 544;
              *((_QWORD *)v61 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v60 + 8) = v61;
          }
          v61[*v61 + 1] = 2;
          v62 = *(_BYTE **)(v60 + 8);
          v63 = (unsigned __int8)*v62;
          *v62 = v63 + 1;
          *(_QWORD *)&v62[8 * v63 + 16] = v59;
        }
        goto LABEL_46;
      }
      v70 = sub_168B9E0(v151);
      v74 = (__int64)v152;
      if ( v152 )
      {
        v129 = v70;
        v74 = (*(__int64 (__fastcall **)(_QWORD *))(*v152 + 32LL))(v152);
        v70 = v129;
      }
      v150 = v74;
      v75 = sub_1587BC0(v70, &v150, v70, v71, v72, v73);
      v76 = *v75 + 32LL * v156;
      v77 = *(unsigned __int8 **)(v76 + 8);
      if ( !v77 )
      {
        v94 = *(_QWORD *)(v76 + 16);
        v95 = *(_DWORD *)(v94 + 14976);
        if ( v95 )
        {
          v116 = (unsigned int)(v95 - 1);
          *(_DWORD *)(v94 + 14976) = v116;
          v77 = *(unsigned __int8 **)(v94 + 8 * v116 + 14848);
          v117 = *((unsigned int *)v77 + 134);
          *v77 = 0;
          v118 = *((_QWORD *)v77 + 66);
          *((_DWORD *)v77 + 106) = 0;
          v119 = v118 + (v117 << 6);
          while ( v118 != v119 )
          {
            while ( 1 )
            {
              v119 -= 64;
              v120 = *(void **)(v119 + 24);
              if ( v120 == (void *)(v119 + 40) )
                break;
              v148 = v119;
              v142 = v77;
              v138 = v76;
              operator delete(v120);
              v119 = v148;
              v76 = v138;
              v77 = v142;
              if ( v118 == v148 )
                goto LABEL_134;
            }
          }
LABEL_134:
          *((_DWORD *)v77 + 134) = 0;
        }
        else
        {
          v133 = v76;
          v77 = (unsigned __int8 *)operator new(0x3A0u);
          *v77 = 0;
          *((_QWORD *)v77 + 12) = v77 + 112;
          *((_QWORD *)v77 + 16) = v77 + 144;
          *((_QWORD *)v77 + 20) = v77 + 176;
          *((_QWORD *)v77 + 24) = v77 + 208;
          *((_QWORD *)v77 + 28) = v77 + 240;
          *((_QWORD *)v77 + 32) = v77 + 272;
          *((_QWORD *)v77 + 36) = v77 + 304;
          *((_QWORD *)v77 + 40) = v77 + 336;
          *((_QWORD *)v77 + 44) = v77 + 368;
          *((_QWORD *)v77 + 48) = v77 + 400;
          *((_QWORD *)v77 + 52) = v77 + 432;
          *((_QWORD *)v77 + 13) = 0;
          v77[112] = 0;
          *((_QWORD *)v77 + 17) = 0;
          v77[144] = 0;
          *((_QWORD *)v77 + 21) = 0;
          v77[176] = 0;
          *((_QWORD *)v77 + 25) = 0;
          v77[208] = 0;
          *((_QWORD *)v77 + 29) = 0;
          v77[240] = 0;
          *((_QWORD *)v77 + 33) = 0;
          v77[272] = 0;
          *((_QWORD *)v77 + 37) = 0;
          v77[304] = 0;
          *((_QWORD *)v77 + 41) = 0;
          v77[336] = 0;
          *((_QWORD *)v77 + 45) = 0;
          v77[368] = 0;
          *((_QWORD *)v77 + 49) = 0;
          v77[400] = 0;
          *((_QWORD *)v77 + 53) = 0x800000000LL;
          v76 = v133;
          *((_QWORD *)v77 + 66) = v77 + 544;
          *((_QWORD *)v77 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v76 + 8) = v77;
      }
      v77[*v77 + 1] = 14;
      v78 = *(_BYTE **)(v76 + 8);
      v79 = (unsigned __int8)*v78;
      *v78 = v79 + 1;
      *(_QWORD *)&v78[8 * v79 + 16] = v25;
    }
    if ( v155 )
    {
      v43 = v153;
      if ( !v153 )
      {
        v68 = v154;
        v69 = *(_DWORD *)(v154 + 14976);
        if ( v69 )
        {
          v96 = (unsigned int)(v69 - 1);
          *(_DWORD *)(v154 + 14976) = v96;
          v43 = *(unsigned __int8 **)(v68 + 8 * v96 + 14848);
          v97 = *((unsigned int *)v43 + 134);
          *v43 = 0;
          v98 = *((_QWORD *)v43 + 66);
          *((_DWORD *)v43 + 106) = 0;
          v99 = v98 + (v97 << 6);
          while ( v98 != v99 )
          {
            while ( 1 )
            {
              v99 -= 64;
              v100 = *(void **)(v99 + 24);
              if ( v100 == (void *)(v99 + 40) )
                break;
              v144 = v99;
              v134 = v43;
              operator delete(v100);
              v99 = v144;
              v43 = v134;
              if ( v98 == v144 )
                goto LABEL_114;
            }
          }
LABEL_114:
          *((_DWORD *)v43 + 134) = 0;
        }
        else
        {
          v43 = (unsigned __int8 *)operator new(0x3A0u);
          *v43 = 0;
          *((_QWORD *)v43 + 12) = v43 + 112;
          *((_QWORD *)v43 + 16) = v43 + 144;
          *((_QWORD *)v43 + 20) = v43 + 176;
          *((_QWORD *)v43 + 24) = v43 + 208;
          *((_QWORD *)v43 + 28) = v43 + 240;
          *((_QWORD *)v43 + 32) = v43 + 272;
          *((_QWORD *)v43 + 36) = v43 + 304;
          *((_QWORD *)v43 + 40) = v43 + 336;
          *((_QWORD *)v43 + 44) = v43 + 368;
          *((_QWORD *)v43 + 48) = v43 + 400;
          *((_QWORD *)v43 + 52) = v43 + 432;
          *((_QWORD *)v43 + 13) = 0;
          v43[112] = 0;
          *((_QWORD *)v43 + 17) = 0;
          v43[144] = 0;
          *((_QWORD *)v43 + 21) = 0;
          v43[176] = 0;
          *((_QWORD *)v43 + 25) = 0;
          v43[208] = 0;
          *((_QWORD *)v43 + 29) = 0;
          v43[240] = 0;
          *((_QWORD *)v43 + 33) = 0;
          v43[272] = 0;
          *((_QWORD *)v43 + 37) = 0;
          v43[304] = 0;
          *((_QWORD *)v43 + 41) = 0;
          v43[336] = 0;
          *((_QWORD *)v43 + 45) = 0;
          v43[368] = 0;
          *((_QWORD *)v43 + 49) = 0;
          v43[400] = 0;
          *((_QWORD *)v43 + 53) = 0x800000000LL;
          *((_QWORD *)v43 + 66) = v43 + 544;
          *((_QWORD *)v43 + 67) = 0x600000000LL;
        }
        v153 = v43;
      }
      v43[*v43 + 1] = 14;
      v44 = v153;
      v45 = *v153;
      *v153 = v45 + 1;
      *(_QWORD *)&v44[8 * v45 + 16] = a3;
    }
    else
    {
      if ( !v157 )
        goto LABEL_45;
      v80 = sub_168B9E0(v151);
      v84 = (__int64)v152;
      if ( v152 )
      {
        v130 = v80;
        v84 = (*(__int64 (__fastcall **)(_QWORD *))(*v152 + 32LL))(v152);
        v80 = v130;
      }
      v150 = v84;
      v85 = sub_1587BC0(v80, &v150, v80, v81, v82, v83);
      v86 = *v85 + 32LL * v156;
      v87 = *(unsigned __int8 **)(v86 + 8);
      if ( !v87 )
      {
        v90 = *(_QWORD *)(v86 + 16);
        v91 = *(_DWORD *)(v90 + 14976);
        if ( v91 )
        {
          v121 = (unsigned int)(v91 - 1);
          *(_DWORD *)(v90 + 14976) = v121;
          v87 = *(unsigned __int8 **)(v90 + 8 * v121 + 14848);
          v122 = *((unsigned int *)v87 + 134);
          *v87 = 0;
          v123 = *((_QWORD *)v87 + 66);
          *((_DWORD *)v87 + 106) = 0;
          v124 = v123 + (v122 << 6);
          while ( v123 != v124 )
          {
            while ( 1 )
            {
              v124 -= 64;
              v125 = *(void **)(v124 + 24);
              if ( v125 == (void *)(v124 + 40) )
                break;
              v149 = v124;
              v143 = v87;
              v139 = v86;
              operator delete(v125);
              v124 = v149;
              v86 = v139;
              v87 = v143;
              if ( v123 == v149 )
                goto LABEL_139;
            }
          }
LABEL_139:
          *((_DWORD *)v87 + 134) = 0;
        }
        else
        {
          v131 = v86;
          v87 = (unsigned __int8 *)operator new(0x3A0u);
          *v87 = 0;
          *((_QWORD *)v87 + 12) = v87 + 112;
          *((_QWORD *)v87 + 16) = v87 + 144;
          *((_QWORD *)v87 + 20) = v87 + 176;
          *((_QWORD *)v87 + 24) = v87 + 208;
          *((_QWORD *)v87 + 28) = v87 + 240;
          *((_QWORD *)v87 + 32) = v87 + 272;
          *((_QWORD *)v87 + 36) = v87 + 304;
          *((_QWORD *)v87 + 40) = v87 + 336;
          *((_QWORD *)v87 + 44) = v87 + 368;
          *((_QWORD *)v87 + 48) = v87 + 400;
          *((_QWORD *)v87 + 52) = v87 + 432;
          *((_QWORD *)v87 + 13) = 0;
          v87[112] = 0;
          *((_QWORD *)v87 + 17) = 0;
          v87[144] = 0;
          *((_QWORD *)v87 + 21) = 0;
          v87[176] = 0;
          *((_QWORD *)v87 + 25) = 0;
          v87[208] = 0;
          *((_QWORD *)v87 + 29) = 0;
          v87[240] = 0;
          *((_QWORD *)v87 + 33) = 0;
          v87[272] = 0;
          *((_QWORD *)v87 + 37) = 0;
          v87[304] = 0;
          *((_QWORD *)v87 + 41) = 0;
          v87[336] = 0;
          *((_QWORD *)v87 + 45) = 0;
          v87[368] = 0;
          *((_QWORD *)v87 + 49) = 0;
          v87[400] = 0;
          *((_QWORD *)v87 + 53) = 0x800000000LL;
          v86 = v131;
          *((_QWORD *)v87 + 66) = v87 + 544;
          *((_QWORD *)v87 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v86 + 8) = v87;
      }
      v87[*v87 + 1] = 14;
      v88 = *(_BYTE **)(v86 + 8);
      v89 = (unsigned __int8)*v88;
      *v88 = v89 + 1;
      *(_QWORD *)&v88[8 * v89 + 16] = a3;
    }
    v46 = 1;
    if ( (*(_BYTE *)(v25 + 35) & 2) == 0 )
      v46 = (a3[2].m128i_i8[3] & 2) != 0;
    if ( v155 )
    {
      v47 = v153;
      v48 = v46;
      if ( !v153 )
      {
        v64 = v154;
        v65 = *(_DWORD *)(v154 + 14976);
        if ( v65 )
        {
          v106 = (unsigned int)(v65 - 1);
          *(_DWORD *)(v154 + 14976) = v106;
          v47 = *(unsigned __int8 **)(v64 + 8 * v106 + 14848);
          v107 = *((unsigned int *)v47 + 134);
          *v47 = 0;
          v108 = *((_QWORD *)v47 + 66);
          *((_DWORD *)v47 + 106) = 0;
          v109 = v108 + (v107 << 6);
          while ( v108 != v109 )
          {
            while ( 1 )
            {
              v109 -= 64;
              v110 = *(void **)(v109 + 24);
              if ( v110 == (void *)(v109 + 40) )
                break;
              v146 = v109;
              v140 = v108;
              v136 = v47;
              operator delete(v110);
              v108 = v140;
              v109 = v146;
              v47 = v136;
              if ( v140 == v146 )
                goto LABEL_124;
            }
          }
LABEL_124:
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
        v153 = v47;
      }
      v47[*v47 + 1] = 2;
      v49 = v153;
      v50 = *v153;
      *v153 = v50 + 1;
      *(_QWORD *)&v49[8 * v50 + 16] = v48;
      goto LABEL_46;
    }
    goto LABEL_69;
  }
  v16 = (_WORD *)v14;
  a2 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 372 )
  {
LABEL_15:
    if ( (_WORD *)v15 == v16 )
      goto LABEL_8;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v16 += 4;
    if ( (_WORD *)v15 == v16 )
      break;
    a2 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 372 )
      goto LABEL_15;
  }
LABEL_8:
  v18 = sub_168B6C0((__int64)a1);
  v19 = (_QWORD *)sub_168B6C0((__int64)a1);
  v22 = v19[294];
  v19[304] += 56LL;
  v23 = (__m128i *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v19[295] >= (unsigned __int64)&v23[3].m128i_u64[1] && v22 )
    v19[294] = (char *)v23 + 56;
  else
    v23 = (__m128i *)sub_986170((__int64)(v19 + 294), 56, 56, 3, v20, v21);
  sub_B30080(v23, v18, a3, a4, a5);
  return v23;
}
