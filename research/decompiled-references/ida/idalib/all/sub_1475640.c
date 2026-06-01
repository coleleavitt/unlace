unsigned __int64 __fastcall sub_1475640(__int64 a1, double a2)
{
  char v3; // al
  __int16 v4; // ax
  unsigned __int8 *v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int8 *v8; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // rax
  void **v11; // r13
  unsigned __int64 v12; // rax
  void **v13; // r14
  void **v14; // rbp
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // rbp
  void **v18; // r14
  unsigned __int64 v19; // rbp
  __int16 v20; // dx
  __int16 v21; // ax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  void **v35; // r12
  unsigned __int64 v36; // rax
  void **v37; // r13
  void **v38; // rbx
  void **v39; // rdi
  void **v40; // rdi
  void **v41; // rbx
  void **v42; // r13
  void (__fastcall *v43)(_QWORD); // rax
  _QWORD *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // r14
  __int64 v52; // r13
  void *v53; // rdi
  unsigned __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // r13
  void *v60; // rdi
  __int64 v61; // rbx
  __int64 *v62; // rdi
  int *v63; // rsi
  unsigned int v64; // r13d
  unsigned __int8 *v65; // rbx
  __int64 v66; // r15
  _QWORD *v67; // rdx
  __int64 v68; // rax
  unsigned int *v69; // r13
  __int64 v70; // rbx
  __int64 *v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rbx
  char *v75; // r15
  _BYTE *v76; // rax
  _BYTE *v77; // rsi
  signed __int64 v78; // rcx
  void **v79; // r12
  unsigned __int64 v80; // rax
  void **v81; // r13
  void **v82; // rbx
  void **v83; // rdi
  void **v84; // rdi
  void **v85; // rbx
  void **v86; // r13
  unsigned __int64 v87; // rdx
  int v88; // eax
  _BYTE *v89; // rax
  __int64 v90; // rax
  __int64 v91; // r13
  __int64 v92; // r15
  __int64 v93; // r13
  void *v94; // rdi
  __int64 v95; // rdx
  unsigned __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // r14
  char *v100; // rdx
  char *v101; // r14
  char *v102; // rdi
  unsigned __int64 v103; // rdx
  int v104; // eax
  _BYTE *v105; // rax
  __int64 v106; // rbx
  unsigned int v107; // eax
  unsigned int *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rbx
  unsigned __int64 v111; // r15
  unsigned __int64 v112; // rbx
  void *v113; // rdi
  __int64 v114; // rbx
  unsigned int *v115; // rdi
  unsigned int v116; // r15d
  __int64 v117; // rax
  char *v118; // [rsp+0h] [rbp-128h]
  _BYTE *v119; // [rsp+8h] [rbp-120h]
  _BYTE *v120; // [rsp+18h] [rbp-110h] BYREF
  _BYTE *v121; // [rsp+20h] [rbp-108h] BYREF
  char v122; // [rsp+28h] [rbp-100h]
  __int64 v123; // [rsp+30h] [rbp-F8h]
  int v124; // [rsp+38h] [rbp-F0h]
  __int16 v125; // [rsp+3Ch] [rbp-ECh]
  __int64 (__fastcall *v126)(__int64); // [rsp+40h] [rbp-E8h]
  __int64 v127; // [rsp+48h] [rbp-E0h]
  __int64 v128; // [rsp+50h] [rbp-D8h]
  __int64 v129; // [rsp+60h] [rbp-C8h] BYREF
  int v130; // [rsp+68h] [rbp-C0h]
  __int64 v131; // [rsp+6Ch] [rbp-BCh]
  char v132; // [rsp+74h] [rbp-B4h]
  void *v133; // [rsp+78h] [rbp-B0h]
  __int64 v134; // [rsp+80h] [rbp-A8h]
  _BYTE v135[24]; // [rsp+88h] [rbp-A0h] BYREF
  void *v136; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int64 v137; // [rsp+A8h] [rbp-80h]
  __int64 v138; // [rsp+B0h] [rbp-78h]
  void *v139; // [rsp+C0h] [rbp-68h]
  _BYTE v140[16]; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v141; // [rsp+E0h] [rbp-48h]

  v121 = (_BYTE *)(a1 + 1952);
  v3 = *(_BYTE *)(a1 + 1952);
  v123 = a1;
  v122 = v3;
  v126 = sub_146A990;
  v4 = *(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 1952) = 1;
  v124 = 1507350;
  v125 = 63;
  v127 = 0;
  v128 = 0;
  if ( v4 == 22 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
      sub_1568800(&v121);
    else
      LODWORD(v128) = sub_146A990(a1);
    v4 = *(_WORD *)(a1 + 32);
  }
  if ( (unsigned __int16)(v4 - 14) <= 1u || (unsigned __int16)(v4 - 17) <= 2u )
  {
    v19 = 0;
    v26 = sub_14B6F70(a1);
    if ( v26 > 1 )
    {
      v19 = v26 & 0xFFFFFFFFFFFFFFFELL;
      v27 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 2) == 0);
      LOBYTE(v27) = v27 & 0x76;
      sub_1564820(&v136, a1, *(unsigned int *)((v26 & 0xFFFFFFFFFFFFFFFELL) + 20), (unsigned int)(v27 + 2107));
      v28 = sub_EEC8C0(v19, a1, a2);
      v29 = v136;
      v30 = v28;
      if ( v136 )
      {
        v31 = *((unsigned int *)v136 + 106);
        v32 = *((unsigned int *)v136 + 107);
        v33 = v31 + 1;
      }
      else
      {
        v87 = v137;
        v88 = *(_DWORD *)(v137 + 14976);
        if ( v88 )
        {
          v90 = (unsigned int)(v88 - 1);
          *(_DWORD *)(v137 + 14976) = v90;
          v29 = *(_QWORD **)(v87 + 8 * v90 + 14848);
          v91 = *((unsigned int *)v29 + 134);
          *(_BYTE *)v29 = 0;
          v92 = v29[66];
          *((_DWORD *)v29 + 106) = 0;
          v93 = v92 + (v91 << 6);
          if ( v92 == v93 )
          {
            v33 = 1;
            v31 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v93 -= 64;
                v94 = *(void **)(v93 + 24);
                if ( v94 == (void *)(v93 + 40) )
                  break;
                operator delete(v94);
                if ( v92 == v93 )
                  goto LABEL_136;
              }
            }
            while ( v92 != v93 );
LABEL_136:
            v31 = *((unsigned int *)v29 + 106);
            v33 = v31 + 1;
          }
          *((_DWORD *)v29 + 134) = 0;
          v32 = *((unsigned int *)v29 + 107);
        }
        else
        {
          v89 = (_BYTE *)operator new(0x3A0u);
          v32 = 8;
          v33 = 1;
          v29 = v89;
          *v89 = 0;
          *((_QWORD *)v89 + 12) = v89 + 112;
          *((_QWORD *)v89 + 16) = v89 + 144;
          *((_QWORD *)v89 + 20) = v89 + 176;
          *((_QWORD *)v89 + 24) = v89 + 208;
          *((_QWORD *)v89 + 28) = v89 + 240;
          *((_QWORD *)v89 + 32) = v89 + 272;
          *((_QWORD *)v89 + 36) = v89 + 304;
          *((_QWORD *)v89 + 40) = v89 + 336;
          *((_QWORD *)v89 + 44) = v89 + 368;
          *((_QWORD *)v89 + 48) = v89 + 400;
          *((_QWORD *)v89 + 52) = v89 + 432;
          *((_QWORD *)v89 + 13) = 0;
          v89[112] = 0;
          *((_QWORD *)v89 + 17) = 0;
          v89[144] = 0;
          *((_QWORD *)v89 + 21) = 0;
          v89[176] = 0;
          *((_QWORD *)v89 + 25) = 0;
          v89[208] = 0;
          *((_QWORD *)v89 + 29) = 0;
          v89[240] = 0;
          *((_QWORD *)v89 + 33) = 0;
          v89[272] = 0;
          *((_QWORD *)v89 + 37) = 0;
          v89[304] = 0;
          *((_QWORD *)v89 + 41) = 0;
          v89[336] = 0;
          *((_QWORD *)v89 + 45) = 0;
          v89[368] = 0;
          *((_QWORD *)v89 + 49) = 0;
          v89[400] = 0;
          *((_QWORD *)v89 + 53) = 0x800000000LL;
          *((_QWORD *)v89 + 66) = v89 + 544;
          *((_QWORD *)v89 + 67) = 0x600000000LL;
          v31 = 0;
        }
        v136 = v29;
      }
      v129 = v30;
      LOBYTE(v130) = 1;
      if ( v33 > v32 )
      {
        sub_2237220(v29 + 52, v29 + 54, v33, 12);
        v31 = *((unsigned int *)v29 + 106);
      }
      v34 = v29[52] + 12 * v31;
      *(_QWORD *)v34 = v129;
      *(_DWORD *)(v34 + 8) = v130;
      ++*((_DWORD *)v29 + 106);
      if ( (_BYTE)v141 )
      {
        sub_FC7790(v138, (__int64 *)&v136, SHIBYTE(v141));
        v138 = 0;
        v141 = 0;
      }
      if ( v139 != v140 )
        operator delete(v139);
      v35 = (void **)v136;
      if ( v136 )
      {
        v36 = v137;
        if ( v137 )
        {
          if ( (unsigned __int64)v136 < v137 || (unsigned __int64)v136 > v137 + 14848 )
          {
            v37 = *((void ***)v136 + 66);
            v38 = &v37[8 * (unsigned __int64)*((unsigned int *)v136 + 134)];
            if ( v37 != v38 )
            {
              do
              {
                while ( 1 )
                {
                  v38 -= 8;
                  v39 = (void **)v38[3];
                  if ( v39 == v38 + 5 )
                    break;
                  operator delete(v39);
                  if ( v37 == v38 )
                    goto LABEL_51;
                }
              }
              while ( v37 != v38 );
LABEL_51:
              v38 = (void **)v35[66];
            }
            if ( v38 != v35 + 68 )
              free(v38);
            v40 = (void **)v35[52];
            if ( v40 != v35 + 54 )
              free(v40);
            v41 = v35 + 48;
            v42 = v35 + 8;
            do
            {
              while ( *v41 != v41 + 2 )
              {
                operator delete(*v41);
                v41 -= 4;
                if ( v42 == v41 )
                  goto LABEL_59;
              }
              v41 -= 4;
            }
            while ( v41 != v42 );
LABEL_59:
            operator delete(v35, 0x3A0u);
          }
          else
          {
            v46 = *(unsigned int *)(v137 + 14976);
            *(_DWORD *)(v137 + 14976) = v46 + 1;
            *(_QWORD *)(v36 + 8 * v46 + 14848) = v35;
          }
        }
      }
    }
  }
  else
  {
    sub_1564820(&v136, a1, *(unsigned int *)(a1 + 16), 19);
    v5 = (unsigned __int8 *)v136;
    if ( !v136 )
    {
      v54 = v137;
      v55 = *(_DWORD *)(v137 + 14976);
      if ( v55 )
      {
        v56 = (unsigned int)(v55 - 1);
        *(_DWORD *)(v137 + 14976) = v56;
        v5 = *(unsigned __int8 **)(v54 + 8 * v56 + 14848);
        v57 = *((unsigned int *)v5 + 134);
        *v5 = 0;
        v58 = *((_QWORD *)v5 + 66);
        *((_DWORD *)v5 + 106) = 0;
        v59 = v58 + (v57 << 6);
        while ( v58 != v59 )
        {
          while ( 1 )
          {
            v59 -= 64;
            v60 = *(void **)(v59 + 24);
            if ( v60 == (void *)(v59 + 40) )
              break;
            operator delete(v60);
            if ( v58 == v59 )
              goto LABEL_88;
          }
        }
LABEL_88:
        *((_DWORD *)v5 + 134) = 0;
      }
      else
      {
        v5 = (unsigned __int8 *)operator new(0x3A0u);
        *v5 = 0;
        *((_QWORD *)v5 + 12) = v5 + 112;
        *((_QWORD *)v5 + 16) = v5 + 144;
        *((_QWORD *)v5 + 20) = v5 + 176;
        *((_QWORD *)v5 + 24) = v5 + 208;
        *((_QWORD *)v5 + 28) = v5 + 240;
        *((_QWORD *)v5 + 32) = v5 + 272;
        *((_QWORD *)v5 + 36) = v5 + 304;
        *((_QWORD *)v5 + 40) = v5 + 336;
        *((_QWORD *)v5 + 44) = v5 + 368;
        *((_QWORD *)v5 + 48) = v5 + 400;
        *((_QWORD *)v5 + 52) = v5 + 432;
        *((_QWORD *)v5 + 13) = 0;
        v5[112] = 0;
        *((_QWORD *)v5 + 17) = 0;
        v5[144] = 0;
        *((_QWORD *)v5 + 21) = 0;
        v5[176] = 0;
        *((_QWORD *)v5 + 25) = 0;
        v5[208] = 0;
        *((_QWORD *)v5 + 29) = 0;
        v5[240] = 0;
        *((_QWORD *)v5 + 33) = 0;
        v5[272] = 0;
        *((_QWORD *)v5 + 37) = 0;
        v5[304] = 0;
        *((_QWORD *)v5 + 41) = 0;
        v5[336] = 0;
        *((_QWORD *)v5 + 45) = 0;
        v5[368] = 0;
        *((_QWORD *)v5 + 49) = 0;
        v5[400] = 0;
        *((_QWORD *)v5 + 53) = 0x800000000LL;
        *((_QWORD *)v5 + 66) = v5 + 544;
        *((_QWORD *)v5 + 67) = 0x600000000LL;
      }
      v136 = v5;
    }
    v5[*v5 + 1] = 2;
    v6 = v136;
    v7 = *(unsigned __int8 *)v136;
    *(_BYTE *)v136 = v7 + 1;
    v6[v7 + 2] = 0;
    v8 = (unsigned __int8 *)v136;
    if ( !v136 )
    {
      v47 = v137;
      v48 = *(_DWORD *)(v137 + 14976);
      if ( v48 )
      {
        v49 = (unsigned int)(v48 - 1);
        *(_DWORD *)(v137 + 14976) = v49;
        v8 = *(unsigned __int8 **)(v47 + 8 * v49 + 14848);
        v50 = *((unsigned int *)v8 + 134);
        *v8 = 0;
        v51 = *((_QWORD *)v8 + 66);
        *((_DWORD *)v8 + 106) = 0;
        v52 = v51 + (v50 << 6);
        while ( v51 != v52 )
        {
          while ( 1 )
          {
            v52 -= 64;
            v53 = *(void **)(v52 + 24);
            if ( v53 == (void *)(v52 + 40) )
              break;
            operator delete(v53);
            if ( v51 == v52 )
              goto LABEL_82;
          }
        }
LABEL_82:
        *((_DWORD *)v8 + 134) = 0;
      }
      else
      {
        v8 = (unsigned __int8 *)operator new(0x3A0u);
        *v8 = 0;
        *((_QWORD *)v8 + 12) = v8 + 112;
        *((_QWORD *)v8 + 16) = v8 + 144;
        *((_QWORD *)v8 + 20) = v8 + 176;
        *((_QWORD *)v8 + 24) = v8 + 208;
        *((_QWORD *)v8 + 28) = v8 + 240;
        *((_QWORD *)v8 + 32) = v8 + 272;
        *((_QWORD *)v8 + 36) = v8 + 304;
        *((_QWORD *)v8 + 40) = v8 + 336;
        *((_QWORD *)v8 + 44) = v8 + 368;
        *((_QWORD *)v8 + 48) = v8 + 400;
        *((_QWORD *)v8 + 52) = v8 + 432;
        *((_QWORD *)v8 + 13) = 0;
        v8[112] = 0;
        *((_QWORD *)v8 + 17) = 0;
        v8[144] = 0;
        *((_QWORD *)v8 + 21) = 0;
        v8[176] = 0;
        *((_QWORD *)v8 + 25) = 0;
        v8[208] = 0;
        *((_QWORD *)v8 + 29) = 0;
        v8[240] = 0;
        *((_QWORD *)v8 + 33) = 0;
        v8[272] = 0;
        *((_QWORD *)v8 + 37) = 0;
        v8[304] = 0;
        *((_QWORD *)v8 + 41) = 0;
        v8[336] = 0;
        *((_QWORD *)v8 + 45) = 0;
        v8[368] = 0;
        *((_QWORD *)v8 + 49) = 0;
        v8[400] = 0;
        *((_QWORD *)v8 + 53) = 0x800000000LL;
        *((_QWORD *)v8 + 66) = v8 + 544;
        *((_QWORD *)v8 + 67) = 0x600000000LL;
      }
      v136 = v8;
    }
    v8[*v8 + 1] = 1;
    v9 = v136;
    v10 = *(unsigned __int8 *)v136;
    *(_BYTE *)v136 = v10 + 1;
    v9[v10 + 2] = "'delete'";
    if ( (_BYTE)v141 )
    {
      sub_FC7790(v138, (__int64 *)&v136, SHIBYTE(v141));
      v138 = 0;
      v141 = 0;
    }
    if ( v139 != v140 )
      operator delete(v139);
    v11 = (void **)v136;
    if ( v136 )
    {
      v12 = v137;
      if ( v137 )
      {
        if ( (unsigned __int64)v136 < v137 || (unsigned __int64)v136 > v137 + 14848 )
        {
          v13 = *((void ***)v136 + 66);
          v14 = &v13[8 * (unsigned __int64)*((unsigned int *)v136 + 134)];
          if ( v13 != v14 )
          {
            do
            {
              while ( 1 )
              {
                v14 -= 8;
                v15 = (void **)v14[3];
                if ( v15 == v14 + 5 )
                  break;
                operator delete(v15);
                if ( v13 == v14 )
                  goto LABEL_19;
              }
            }
            while ( v13 != v14 );
LABEL_19:
            v14 = (void **)v11[66];
          }
          if ( v14 != v11 + 68 )
            free(v14);
          v16 = (void **)v11[52];
          if ( v16 != v11 + 54 )
            free(v16);
          v17 = v11 + 48;
          v18 = v11 + 8;
          do
          {
            while ( *v17 != v17 + 2 )
            {
              operator delete(*v17);
              v17 -= 4;
              if ( v17 == v18 )
                goto LABEL_27;
            }
            v17 -= 4;
          }
          while ( v17 != v18 );
LABEL_27:
          operator delete(v11, 0x3A0u);
        }
        else
        {
          v45 = *(unsigned int *)(v137 + 14976);
          *(_DWORD *)(v137 + 14976) = v45 + 1;
          *(_QWORD *)(v12 + 8 * v45 + 14848) = v11;
        }
      }
    }
    LOWORD(v136) = 23;
    v19 = 0;
    sub_15680D0(a1, &v136, 1, 3);
  }
  v20 = HIWORD(v124);
  v21 = *(_WORD *)(v123 + 32);
  if ( HIWORD(v124) == v21 )
  {
    v43 = (void (__fastcall *)(_QWORD))v126;
    v44 = (_QWORD *)(v127 + v123);
    if ( ((unsigned __int8)v126 & 1) == 0 )
    {
LABEL_63:
      v43(v44);
      goto LABEL_35;
    }
LABEL_62:
    v43 = *(void (__fastcall **)(_QWORD))((char *)v43 + *v44 - 1);
    goto LABEL_63;
  }
  if ( v21 == 63 )
  {
    v22 = *(_QWORD *)(v123 + 8);
    v23 = *(_QWORD *)(v22 + 2944);
    if ( v23 >= *(unsigned int *)(v22 + 2912) )
    {
      v24 = sub_14180A0(v22, 1u);
      v20 = HIWORD(v124);
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 2904) + 24 * v23;
    }
    if ( *(_WORD *)(v24 + 16) == v20 )
    {
      v61 = v123;
      v62 = *(__int64 **)(v123 + 8);
      v63 = (int *)(v123 + 16);
      *(_DWORD *)(v123 + 40) = *(_DWORD *)(v123 + 16);
      sub_14634E0(v62, v63);
      v64 = *(_DWORD *)(v61 + 40);
      sub_1564820(&v136, v123, v64, 1917);
      v65 = (unsigned __int8 *)v136;
      v66 = HIWORD(v124);
      if ( !v136 )
      {
        v96 = v137;
        v97 = *(_DWORD *)(v137 + 14976);
        if ( v97 )
        {
          v98 = (unsigned int)(v97 - 1);
          *(_DWORD *)(v137 + 14976) = v98;
          v65 = *(unsigned __int8 **)(v96 + 8 * v98 + 14848);
          v99 = *((unsigned int *)v65 + 134);
          *v65 = 0;
          v100 = *((char **)v65 + 66);
          *((_DWORD *)v65 + 106) = 0;
          v101 = &v100[64 * v99];
          while ( v100 != v101 )
          {
            while ( 1 )
            {
              v101 -= 64;
              v102 = *((char **)v101 + 3);
              if ( v102 == v101 + 40 )
                break;
              v118 = v100;
              operator delete(v102);
              v100 = v118;
              if ( v118 == v101 )
                goto LABEL_153;
            }
          }
LABEL_153:
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
          *((_QWORD *)v65 + 13) = 0;
          v65[112] = 0;
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
        v136 = v65;
      }
      v65[*v65 + 1] = 4;
      v67 = v136;
      v68 = *(unsigned __int8 *)v136;
      *(_BYTE *)v136 = v68 + 1;
      v67[v68 + 2] = v66;
      v131 = 0;
      v132 = 0;
      v133 = v135;
      v134 = 0;
      v135[0] = 0;
      v135[16] = 0;
      LODWORD(v129) = v64;
      HIDWORD(v129) = v64;
      LOBYTE(v130) = 1;
      if ( !v64 )
      {
LABEL_101:
        if ( (_BYTE)v141 )
        {
          sub_FC7790(v138, (__int64 *)&v136, SHIBYTE(v141));
          v138 = 0;
          v141 = 0;
        }
        if ( v139 != v140 )
          operator delete(v139);
        v79 = (void **)v136;
        if ( v136 )
        {
          v80 = v137;
          if ( v137 )
          {
            if ( (unsigned __int64)v136 < v137 || (unsigned __int64)v136 > v137 + 14848 )
            {
              v81 = *((void ***)v136 + 66);
              v82 = &v81[8 * (unsigned __int64)*((unsigned int *)v136 + 134)];
              if ( v81 != v82 )
              {
                do
                {
                  while ( 1 )
                  {
                    v82 -= 8;
                    v83 = (void **)v82[3];
                    if ( v83 == v82 + 5 )
                      break;
                    operator delete(v83);
                    if ( v81 == v82 )
                      goto LABEL_111;
                  }
                }
                while ( v81 != v82 );
LABEL_111:
                v82 = (void **)v79[66];
              }
              if ( v82 != v79 + 68 )
                free(v82);
              v84 = (void **)v79[52];
              v85 = v79 + 52;
              if ( v84 != v79 + 54 )
                free(v84);
              v86 = v79 + 12;
              do
              {
                while ( 1 )
                {
                  v85 -= 4;
                  if ( *v85 == v85 + 2 )
                    break;
                  operator delete(*v85);
                  if ( v85 == v86 )
                    goto LABEL_119;
                }
              }
              while ( v85 != v86 );
LABEL_119:
              operator delete(v79, 0x3A0u);
            }
            else
            {
              v95 = *(unsigned int *)(v137 + 14976);
              *(_DWORD *)(v137 + 14976) = v95 + 1;
              *(_QWORD *)(v80 + 8 * v95 + 14848) = v79;
            }
          }
        }
        v43 = (void (__fastcall *)(_QWORD))v126;
        v44 = (_QWORD *)(v123 + v127);
        if ( ((unsigned __int8)v126 & 1) == 0 )
          goto LABEL_63;
        goto LABEL_62;
      }
      v69 = (unsigned int *)v136;
      if ( v136 )
      {
        v70 = *((unsigned int *)v136 + 134);
        v71 = *((__int64 **)v136 + 66);
        v72 = *((unsigned int *)v136 + 135);
        v73 = v70 + 1;
        v74 = (unsigned __int64)&v71[8 * v70];
      }
      else
      {
        v103 = v137;
        v104 = *(_DWORD *)(v137 + 14976);
        if ( v104 )
        {
          v109 = (unsigned int)(v104 - 1);
          *(_DWORD *)(v137 + 14976) = v109;
          v69 = *(unsigned int **)(v103 + 8 * v109 + 14848);
          v110 = v69[134];
          *(_BYTE *)v69 = 0;
          v111 = *((_QWORD *)v69 + 66);
          v69[106] = 0;
          v112 = v111 + (v110 << 6);
          if ( v111 != v112 )
          {
            do
            {
              while ( 1 )
              {
                v112 -= 64LL;
                v113 = *(void **)(v112 + 24);
                if ( v113 == (void *)(v112 + 40) )
                  break;
                operator delete(v113);
                if ( v111 == v112 )
                  goto LABEL_166;
              }
            }
            while ( v111 != v112 );
LABEL_166:
            v111 = *((_QWORD *)v69 + 66);
          }
          v69[134] = 0;
          v72 = v69[135];
          v71 = (__int64 *)v111;
        }
        else
        {
          v105 = (_BYTE *)operator new(0x3A0u);
          v72 = 6;
          v69 = (unsigned int *)v105;
          *v105 = 0;
          *((_QWORD *)v105 + 12) = v105 + 112;
          *((_QWORD *)v105 + 16) = v105 + 144;
          *((_QWORD *)v105 + 20) = v105 + 176;
          *((_QWORD *)v105 + 24) = v105 + 208;
          *((_QWORD *)v105 + 28) = v105 + 240;
          *((_QWORD *)v105 + 32) = v105 + 272;
          *((_QWORD *)v105 + 36) = v105 + 304;
          *((_QWORD *)v105 + 40) = v105 + 336;
          *((_QWORD *)v105 + 44) = v105 + 368;
          *((_QWORD *)v105 + 48) = v105 + 400;
          *((_QWORD *)v105 + 52) = v105 + 432;
          *((_QWORD *)v105 + 13) = 0;
          v105[112] = 0;
          *((_QWORD *)v105 + 17) = 0;
          v105[144] = 0;
          *((_QWORD *)v105 + 21) = 0;
          v105[176] = 0;
          *((_QWORD *)v105 + 25) = 0;
          v105[208] = 0;
          *((_QWORD *)v105 + 29) = 0;
          v105[240] = 0;
          *((_QWORD *)v105 + 33) = 0;
          v105[272] = 0;
          *((_QWORD *)v105 + 37) = 0;
          v105[304] = 0;
          *((_QWORD *)v105 + 41) = 0;
          v105[336] = 0;
          *((_QWORD *)v105 + 45) = 0;
          v105[368] = 0;
          *((_QWORD *)v105 + 49) = 0;
          v105[400] = 0;
          *((_QWORD *)v105 + 53) = 0x800000000LL;
          v71 = (__int64 *)(v105 + 544);
          *((_QWORD *)v69 + 66) = v71;
          *((_QWORD *)v69 + 67) = 0x600000000LL;
        }
        v136 = v69;
        v74 = (unsigned __int64)v71;
        v73 = 1;
      }
      v75 = (char *)&v129;
      if ( v73 > v72 )
      {
        if ( v71 > &v129 || v74 <= (unsigned __int64)&v129 )
        {
          v118 = (char *)(v69 + 136);
          v114 = sub_2237400(v69 + 132, v69 + 136, v73, 64, &v120);
          sub_9EF810((__int64 *)v69 + 66, v114);
          v115 = *((unsigned int **)v69 + 66);
          v116 = (unsigned int)v120;
          if ( v115 != v69 + 136 )
            free(v115);
          v117 = v69[134];
          *((_QWORD *)v69 + 66) = v114;
          v69[135] = v116;
          v75 = (char *)&v129;
          v74 = (v117 << 6) + v114;
        }
        else
        {
          v119 = v69 + 136;
          v118 = (char *)((char *)&v129 - (char *)v71);
          v106 = sub_2237400(v69 + 132, v69 + 136, v73, 64, &v120);
          sub_9EF810((__int64 *)v69 + 66, v106);
          v107 = (unsigned int)v120;
          v108 = *((unsigned int **)v69 + 66);
          if ( v108 == v69 + 136 )
          {
            *((_QWORD *)v69 + 66) = v106;
            v69[135] = v107;
          }
          else
          {
            v119 = v120;
            free(v108);
            *((_QWORD *)v69 + 66) = v106;
            v69[135] = (unsigned int)v119;
          }
          v75 = &v118[v106];
          v74 = ((unsigned __int64)v69[134] << 6) + v106;
        }
      }
      *(_QWORD *)v74 = *(_QWORD *)v75;
      *(_DWORD *)(v74 + 8) = *((_DWORD *)v75 + 2);
      *(_QWORD *)(v74 + 12) = *(_QWORD *)(v75 + 12);
      *(_DWORD *)(v74 + 20) = *((_DWORD *)v75 + 5);
      v76 = (_BYTE *)(v74 + 40);
      *(_QWORD *)(v74 + 24) = v74 + 40;
      v77 = *((_BYTE **)v75 + 3);
      v78 = *((_QWORD *)v75 + 4);
      if ( &v77[v78] && !v77 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v78 > 0xF )
      {
        if ( v78 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v119 = *((_BYTE **)v75 + 3);
        v118 = (char *)v78;
        v76 = (_BYTE *)operator new(v78 + 1);
        v78 = (signed __int64)v118;
        v77 = v119;
        *(_QWORD *)(v74 + 24) = v76;
        *(_QWORD *)(v74 + 40) = v118;
      }
      else
      {
        if ( v78 == 1 )
        {
          *(_BYTE *)(v74 + 40) = *v77;
          goto LABEL_99;
        }
        if ( !v78 )
        {
LABEL_99:
          *(_QWORD *)(v74 + 32) = v78;
          v76[v78] = 0;
          *(_BYTE *)(v74 + 56) = v75[56];
          ++v69[134];
          if ( v133 != v135 )
            operator delete(v133);
          goto LABEL_101;
        }
      }
      v118 = (char *)v78;
      memcpy(v76, v77, v78);
      v76 = *(_BYTE **)(v74 + 24);
      v78 = (signed __int64)v118;
      goto LABEL_99;
    }
  }
  sub_15688B0(&v121);
LABEL_35:
  *v121 = v122;
  return v19;
}
