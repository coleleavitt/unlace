__int64 __fastcall sub_15785B0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, __m128i a5, double a6)
{
  int *v7; // rbp
  __int64 v8; // rbx
  unsigned __int16 v9; // r15
  __int64 v10; // r12
  unsigned __int8 *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  void **v14; // rbp
  unsigned __int64 v15; // rax
  void **v16; // r12
  void **v17; // rbx
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // rbx
  void **v21; // r12
  __int16 v23; // ax
  __int64 v24; // r13
  __int16 v25; // ax
  unsigned __int8 *v26; // rbx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  void **v29; // r12
  void **v30; // rbx
  void **v31; // rdi
  void **v32; // rdi
  void **v33; // rbx
  void **v34; // r12
  __int64 v35; // rax
  unsigned int *v36; // rdx
  __int64 v37; // rax
  bool v38; // si
  bool v39; // di
  unsigned int v40; // r15d
  char v41; // cl
  bool v42; // r13
  unsigned __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // r13
  __int64 v48; // rbp
  void *v49; // rdi
  __int64 *v50; // rdi
  char v51; // r8
  bool v52; // r11
  char v53; // r8
  char v54; // r10
  char v55; // r8
  char v56; // r10
  char v57; // r8
  char v58; // di
  char v59; // si
  char v60; // di
  bool v61; // r8
  bool v62; // r10
  char v63; // r12
  char v64; // cl
  char v65; // di
  bool v66; // si
  char v67; // cl
  char v68; // cl
  char v69; // di
  bool v70; // al
  __int64 v71; // r15
  __int16 v72; // ax
  unsigned __int8 *v73; // r13
  _QWORD *v74; // rdx
  __int64 v75; // rax
  void **v76; // r14
  unsigned __int64 v77; // rax
  void **v78; // r15
  void **v79; // r13
  void **v80; // rdi
  void **v81; // rdi
  void **v82; // r13
  void **v83; // r15
  __int64 *v84; // rdi
  char v85; // cl
  _BYTE *v86; // rdx
  bool v87; // zf
  __int64 v88; // rdx
  char v89; // di
  bool v90; // cl
  __int64 v91; // rdx
  unsigned __int64 v92; // rdx
  int v93; // eax
  unsigned __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // r14
  __int64 v98; // rdx
  __int64 v99; // r14
  __int64 v100; // r12
  __int64 v101; // rbx
  void *v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rbp
  __int64 v105; // r14
  __int64 v106; // rbp
  void *v107; // rdi
  bool v110; // [rsp+1Ch] [rbp-8Ch]
  bool v111; // [rsp+1Dh] [rbp-8Bh]
  bool v112; // [rsp+1Eh] [rbp-8Ah]
  bool v113; // [rsp+1Fh] [rbp-89h]
  void *v114; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v115; // [rsp+28h] [rbp-80h]
  __int64 v116; // [rsp+30h] [rbp-78h]
  int v117; // [rsp+38h] [rbp-70h]
  __int16 v118; // [rsp+3Ch] [rbp-6Ch]
  void *v119; // [rsp+40h] [rbp-68h]
  __int64 v120; // [rsp+48h] [rbp-60h]
  _QWORD v121[2]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v122; // [rsp+60h] [rbp-48h]

  v7 = (int *)(a1 + 16);
  v8 = a1;
  v9 = *(_WORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v9 != 5 )
  {
    if ( sub_10CCDE0(v9)
      || v9 <= 0x13u && (v35 = 982656, _bittest64(&v35, v9))
      || v9 == 1
      || ((v9 - 8) & 0xFFF7) == 0
      || !v10
      || !sub_FDE0B0((_WORD *)v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
    {
      sub_1564840((__int64)&v114, a1, v7, 14);
      v11 = (unsigned __int8 *)v114;
      if ( !v114 )
      {
        v43 = v115;
        v44 = *(_DWORD *)(v115 + 14976);
        if ( v44 )
        {
          v45 = (unsigned int)(v44 - 1);
          *(_DWORD *)(v115 + 14976) = v45;
          v11 = *(unsigned __int8 **)(v43 + 8 * v45 + 14848);
          v46 = *((unsigned int *)v11 + 134);
          *v11 = 0;
          v47 = *((_QWORD *)v11 + 66);
          *((_DWORD *)v11 + 106) = 0;
          v48 = v47 + (v46 << 6);
          while ( v47 != v48 )
          {
            while ( 1 )
            {
              v48 -= 64;
              v49 = *(void **)(v48 + 24);
              if ( v49 == (void *)(v48 + 40) )
                break;
              operator delete(v49);
              if ( v47 == v48 )
                goto LABEL_72;
            }
          }
LABEL_72:
          *((_DWORD *)v11 + 134) = 0;
        }
        else
        {
          v11 = (unsigned __int8 *)operator new(0x3A0u);
          *v11 = 0;
          *((_QWORD *)v11 + 12) = v11 + 112;
          *((_QWORD *)v11 + 16) = v11 + 144;
          *((_QWORD *)v11 + 20) = v11 + 176;
          *((_QWORD *)v11 + 24) = v11 + 208;
          *((_QWORD *)v11 + 28) = v11 + 240;
          *((_QWORD *)v11 + 32) = v11 + 272;
          *((_QWORD *)v11 + 36) = v11 + 304;
          *((_QWORD *)v11 + 40) = v11 + 336;
          *((_QWORD *)v11 + 44) = v11 + 368;
          *((_QWORD *)v11 + 48) = v11 + 400;
          *((_QWORD *)v11 + 52) = v11 + 432;
          *((_QWORD *)v11 + 13) = 0;
          v11[112] = 0;
          *((_QWORD *)v11 + 17) = 0;
          v11[144] = 0;
          *((_QWORD *)v11 + 21) = 0;
          v11[176] = 0;
          *((_QWORD *)v11 + 25) = 0;
          v11[208] = 0;
          *((_QWORD *)v11 + 29) = 0;
          v11[240] = 0;
          *((_QWORD *)v11 + 33) = 0;
          v11[272] = 0;
          *((_QWORD *)v11 + 37) = 0;
          v11[304] = 0;
          *((_QWORD *)v11 + 41) = 0;
          v11[336] = 0;
          *((_QWORD *)v11 + 45) = 0;
          v11[368] = 0;
          *((_QWORD *)v11 + 49) = 0;
          v11[400] = 0;
          *((_QWORD *)v11 + 53) = 0x800000000LL;
          *((_QWORD *)v11 + 66) = v11 + 544;
          *((_QWORD *)v11 + 67) = 0x600000000LL;
        }
        v114 = v11;
      }
      v11[*v11 + 1] = 4;
      v12 = v114;
      v13 = *(unsigned __int8 *)v114;
      *(_BYTE *)v114 = v13 + 1;
      v12[v13 + 2] = 5;
      if ( (_BYTE)v122 )
      {
        sub_FC7790(v116, (__int64 *)&v114, SHIBYTE(v122));
        v116 = 0;
        v122 = 0;
      }
      if ( v119 != v121 )
        operator delete(v119);
      v14 = (void **)v114;
      if ( !v114 )
        return 0;
      v15 = v115;
      if ( !v115 )
        return 0;
      if ( (unsigned __int64)v114 >= v115 && (unsigned __int64)v114 <= v115 + 14848 )
      {
LABEL_166:
        v88 = *(unsigned int *)(v15 + 14976);
        *(_DWORD *)(v15 + 14976) = v88 + 1;
        *(_QWORD *)(v15 + 8 * v88 + 14848) = v14;
        return 0;
      }
      v16 = *((void ***)v114 + 66);
      v17 = &v16[8 * (unsigned __int64)*((unsigned int *)v114 + 134)];
      if ( v16 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v17 -= 8;
            v18 = (void **)v17[3];
            if ( v18 == v17 + 5 )
              break;
            operator delete(v18);
            if ( v16 == v17 )
              goto LABEL_15;
          }
        }
        while ( v16 != v17 );
LABEL_15:
        v17 = (void **)v14[66];
      }
      if ( v17 != v14 + 68 )
        free(v17);
      v19 = (void **)v14[52];
      if ( v19 != v14 + 54 )
        free(v19);
      v20 = v14 + 48;
      v21 = v14 + 8;
      do
      {
        while ( *v20 != v20 + 2 )
        {
          operator delete(*v20);
          v20 -= 4;
          if ( v20 == v21 )
            goto LABEL_23;
        }
        v20 -= 4;
      }
      while ( v20 != v21 );
LABEL_23:
      operator delete(v14, 0x3A0u);
      return 0;
    }
    v23 = *(_WORD *)(a1 + 32);
    switch ( v23 )
    {
      case 76:
        v40 = 2;
        goto LABEL_74;
      case 82:
        v40 = 17;
        goto LABEL_74;
      case 91:
        v40 = 31;
        goto LABEL_74;
      case 141:
        v40 = 40;
        goto LABEL_74;
      case 131:
        v40 = 19;
        goto LABEL_74;
    }
    if ( v23 != 5 )
    {
LABEL_35:
      v24 = 0;
      sub_1564840((__int64)&v114, v8, v7, 1525);
      v25 = *(_WORD *)(v8 + 32);
      if ( (unsigned __int16)(v25 - 7) > 0xCu && v25 != 1 )
        v24 = *(_QWORD *)(v8 + 24);
      v26 = (unsigned __int8 *)v114;
      if ( !v114 )
      {
        v94 = v115;
        v95 = *(_DWORD *)(v115 + 14976);
        if ( v95 )
        {
          v103 = (unsigned int)(v95 - 1);
          *(_DWORD *)(v115 + 14976) = v103;
          v26 = *(unsigned __int8 **)(v94 + 8 * v103 + 14848);
          v104 = *((unsigned int *)v26 + 134);
          *v26 = 0;
          v105 = *((_QWORD *)v26 + 66);
          *((_DWORD *)v26 + 106) = 0;
          v106 = v105 + (v104 << 6);
          while ( v105 != v106 )
          {
            while ( 1 )
            {
              v106 -= 64;
              v107 = *(void **)(v106 + 24);
              if ( v107 == (void *)(v106 + 40) )
                break;
              operator delete(v107);
              if ( v105 == v106 )
                goto LABEL_331;
            }
          }
LABEL_331:
          *((_DWORD *)v26 + 134) = 0;
        }
        else
        {
          v26 = (unsigned __int8 *)operator new(0x3A0u);
          *v26 = 0;
          *((_QWORD *)v26 + 12) = v26 + 112;
          *((_QWORD *)v26 + 16) = v26 + 144;
          *((_QWORD *)v26 + 20) = v26 + 176;
          *((_QWORD *)v26 + 24) = v26 + 208;
          *((_QWORD *)v26 + 28) = v26 + 240;
          *((_QWORD *)v26 + 32) = v26 + 272;
          *((_QWORD *)v26 + 36) = v26 + 304;
          *((_QWORD *)v26 + 40) = v26 + 336;
          *((_QWORD *)v26 + 44) = v26 + 368;
          *((_QWORD *)v26 + 48) = v26 + 400;
          *((_QWORD *)v26 + 52) = v26 + 432;
          *((_QWORD *)v26 + 13) = 0;
          v26[112] = 0;
          *((_QWORD *)v26 + 17) = 0;
          v26[144] = 0;
          *((_QWORD *)v26 + 21) = 0;
          v26[176] = 0;
          *((_QWORD *)v26 + 25) = 0;
          v26[208] = 0;
          *((_QWORD *)v26 + 29) = 0;
          v26[240] = 0;
          *((_QWORD *)v26 + 33) = 0;
          v26[272] = 0;
          *((_QWORD *)v26 + 37) = 0;
          v26[304] = 0;
          *((_QWORD *)v26 + 41) = 0;
          v26[336] = 0;
          *((_QWORD *)v26 + 45) = 0;
          v26[368] = 0;
          *((_QWORD *)v26 + 49) = 0;
          v26[400] = 0;
          *((_QWORD *)v26 + 53) = 0x800000000LL;
          *((_QWORD *)v26 + 66) = v26 + 544;
          *((_QWORD *)v26 + 67) = 0x600000000LL;
        }
        v114 = v26;
      }
      v26[*v26 + 1] = 5;
      v27 = v114;
      v28 = *(unsigned __int8 *)v114;
      *(_BYTE *)v114 = v28 + 1;
      v27[v28 + 2] = v24;
      if ( (_BYTE)v122 )
      {
        sub_FC7790(v116, (__int64 *)&v114, SHIBYTE(v122));
        v116 = 0;
        v122 = 0;
      }
      if ( v119 != v121 )
        operator delete(v119);
      v14 = (void **)v114;
      if ( !v114 )
        return 0;
      v15 = v115;
      if ( !v115 )
        return 0;
      if ( (unsigned __int64)v114 >= v115 && (unsigned __int64)v114 <= v115 + 14848 )
        goto LABEL_166;
      v29 = *((void ***)v114 + 66);
      v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v114 + 134)];
      if ( v29 != v30 )
      {
        do
        {
          while ( 1 )
          {
            v30 -= 8;
            v31 = (void **)v30[3];
            if ( v31 == v30 + 5 )
              break;
            operator delete(v31);
            if ( v29 == v30 )
              goto LABEL_47;
          }
        }
        while ( v29 != v30 );
LABEL_47:
        v30 = (void **)v14[66];
      }
      if ( v30 != v14 + 68 )
        free(v30);
      v32 = (void **)v14[52];
      if ( v32 != v14 + 54 )
        free(v32);
      v33 = v14 + 48;
      v34 = v14 + 8;
      do
      {
        while ( *v33 != v33 + 2 )
        {
          operator delete(*v33);
          v33 -= 4;
          if ( v33 == v34 )
            goto LABEL_23;
        }
        v33 -= 4;
      }
      while ( v33 != v34 );
      goto LABEL_23;
    }
    v10 = *(_QWORD *)(a1 + 24);
  }
  v36 = *(unsigned int **)(v10 + 16);
  v37 = *v36;
  v110 = v37 != 6;
  v38 = v37 != 7;
  v39 = v37 != 17;
  if ( v37 == 5 )
  {
    v40 = 0;
    if ( v36[4] != 1853453153 || *((_BYTE *)v36 + 20) != 99 )
    {
      v41 = 0;
LABEL_66:
      v42 = v37 != 8;
LABEL_80:
      v51 = v39 | v41;
      goto LABEL_81;
    }
LABEL_175:
    v41 = 1;
    goto LABEL_66;
  }
  if ( v37 != 6 )
  {
    if ( v37 != 4 )
    {
      v53 = v37 != 8;
      if ( v37 == 7 )
      {
        if ( v36[4] == 1701995376 && *((_WORD *)v36 + 10) == 29793 && *((_BYTE *)v36 + 22) == 101 )
        {
          v42 = v37 != 8;
          v52 = 1;
          v40 = 15;
          v41 = 1;
          v111 = 1;
LABEL_84:
          v54 = v52 | v41;
          goto LABEL_85;
        }
        v42 = v37 != 8;
        v52 = 1;
        v41 = 0;
        v40 = 0;
LABEL_83:
        v111 = v37 != 5;
        if ( !v53 )
        {
          if ( *((_QWORD *)v36 + 2) == 0x657370616C6C6F63LL )
          {
            v55 = 1;
            v41 = 1;
            v40 = 4;
          }
          else
          {
            v55 = v41 | v111;
          }
          v113 = v37 != 15;
          goto LABEL_86;
        }
        goto LABEL_84;
      }
      v42 = v37 != 8;
      v40 = 0;
      v41 = 0;
      goto LABEL_80;
    }
    v40 = 2;
    if ( v36[4] != 1869903201 )
    {
      if ( v36[4] != 1684957538 )
      {
        v40 = 0;
        v42 = 1;
        v41 = 0;
        goto LABEL_80;
      }
      v40 = 3;
    }
    v42 = 1;
    v41 = 1;
    goto LABEL_80;
  }
  if ( v36[4] == 1635021921 && *((_WORD *)v36 + 10) == 26723 )
  {
    v40 = 1;
    goto LABEL_175;
  }
  if ( v36[4] == 1634038371 && *((_WORD *)v36 + 10) == 25972 )
  {
    v42 = 1;
    v52 = 1;
    v41 = 1;
    v40 = 14;
    goto LABEL_82;
  }
  v42 = 1;
  v51 = v37 != 17;
  v41 = 0;
  v40 = 0;
LABEL_81:
  v52 = v37 != 4;
  if ( v51 )
  {
LABEL_82:
    v53 = v41 | v42;
    goto LABEL_83;
  }
  if ( !(*((_QWORD *)v36 + 2) ^ 0x5F746E6573657270LL | *((_QWORD *)v36 + 3) ^ 0x74616572635F726FLL)
    && *((_BYTE *)v36 + 32) == 101 )
  {
    v54 = 1;
    v41 = 1;
    v40 = 16;
  }
  else
  {
    v54 = v41 | v52;
  }
  v111 = v37 != 5;
LABEL_85:
  v113 = v37 != 15;
  v55 = v41 | v111;
  if ( v54 )
  {
LABEL_86:
    v56 = v41 | v113;
    if ( v55 )
      goto LABEL_87;
    if ( v36[4] == 1886348144 && *((_BYTE *)v36 + 20) == 121 )
    {
      v41 = 1;
      v40 = 6;
LABEL_89:
      v57 = v41 | v38;
      goto LABEL_90;
    }
LABEL_88:
    if ( !((unsigned __int8)v41 | v110) )
    {
      if ( v36[4] == 2037411683 && *((_WORD *)v36 + 10) == 28265 )
      {
        v41 = 1;
        v40 = 8;
        goto LABEL_92;
      }
LABEL_91:
      if ( !((unsigned __int8)v41 | v39)
        && !(*((_QWORD *)v36 + 2) ^ 0x5F746E6573657270LL | *((_QWORD *)v36 + 3) ^ 0x6979706F635F726FLL)
        && *((_BYTE *)v36 + 32) == 110 )
      {
        v41 = 1;
        v40 = 10;
LABEL_93:
        v58 = v41 | (v37 != 18);
        goto LABEL_94;
      }
LABEL_92:
      if ( !((unsigned __int8)v41 | v42) )
      {
        v59 = v41 | v38;
        if ( *((_QWORD *)v36 + 2) == 0x74756F79706F6370LL )
        {
          v59 = 1;
          v41 = 1;
          v40 = 12;
        }
        v112 = v37 != 13;
        goto LABEL_95;
      }
      goto LABEL_93;
    }
    goto LABEL_89;
  }
  v56 = v41 | v113;
  if ( v36[4] == 2037411683 )
  {
    v40 = 5;
    v41 = 1;
    goto LABEL_88;
  }
LABEL_87:
  if ( v56 )
    goto LABEL_88;
  if ( *((_QWORD *)v36 + 2) == 0x5F746E6573657270LL
    && v36[6] == 1667199599
    && *((_WORD *)v36 + 14) == 28783
    && *((_BYTE *)v36 + 30) == 121 )
  {
    v40 = 7;
    v41 = 1;
    goto LABEL_91;
  }
  v57 = v38 | v41;
LABEL_90:
  if ( v57 )
    goto LABEL_91;
  if ( v36[4] == 1886348144 && *((_WORD *)v36 + 10) == 27001 && *((_BYTE *)v36 + 22) == 110 )
  {
    v41 = 1;
    v40 = 9;
    goto LABEL_93;
  }
  if ( v36[4] != 2037411683 || *((_WORD *)v36 + 10) != 30063 || *((_BYTE *)v36 + 22) != 116 )
    goto LABEL_93;
  v58 = 1;
  v41 = 1;
  v40 = 11;
LABEL_94:
  v112 = v37 != 13;
  v59 = v41 | v38;
  if ( !v58 )
  {
    if ( !(*((_QWORD *)v36 + 2) ^ 0x5F746E6573657270LL | *((_QWORD *)v36 + 3) ^ 0x6F79706F635F726FLL)
      && *((_WORD *)v36 + 16) == 29813 )
    {
      v60 = 1;
      v41 = 1;
      v40 = 13;
    }
    else
    {
      v60 = v41 | v112;
    }
    goto LABEL_96;
  }
LABEL_95:
  v60 = v41 | v112;
  if ( !v59 )
  {
    if ( v36[4] == 1634100580 && *((_WORD *)v36 + 10) == 27765 && *((_BYTE *)v36 + 22) == 116 )
    {
      v41 = 1;
      v40 = 17;
    }
    v61 = v37 != 10;
    v62 = v37 != 11;
    goto LABEL_97;
  }
LABEL_96:
  v61 = v37 != 10;
  v62 = v37 != 11;
  if ( !v60 )
  {
    if ( *((_QWORD *)v36 + 2) != 0x5F746C7561666564LL || v36[6] != 1853453153 || *((_BYTE *)v36 + 28) != 99 )
      goto LABEL_102;
    v40 = 18;
LABEL_188:
    v65 = 1;
    v66 = v37 != 9;
LABEL_189:
    v64 = v65 | v62;
    goto LABEL_106;
  }
LABEL_97:
  if ( v41 )
    goto LABEL_188;
  if ( v37 == 6 )
  {
    if ( v36[4] == 1701602660 && *((_WORD *)v36 + 10) == 25972 )
    {
      v40 = 19;
      goto LABEL_188;
    }
    if ( v36[4] == 1635018084 && *((_WORD *)v36 + 10) == 26723 )
    {
      v40 = 20;
      goto LABEL_188;
    }
    if ( v36[4] == 1769366884 && *((_WORD *)v36 + 10) == 25955 )
    {
      v40 = 21;
      goto LABEL_188;
    }
  }
LABEL_102:
  v63 = v41 | v61;
  if ( (unsigned __int8)v41 | v61 )
  {
    v66 = v37 != 9;
    v65 = v41 | v113;
    if ( !((unsigned __int8)v41 | v113) )
    {
      if ( *((_QWORD *)v36 + 2) == 0x725F656369766564LL
        && v36[6] == 1684632421
        && *((_WORD *)v36 + 14) == 28261
        && *((_BYTE *)v36 + 30) == 116 )
      {
        v65 = v41 | v61;
        v40 = 24;
      }
      else
      {
        v63 = v37 != 9;
      }
LABEL_107:
      v67 = v65 | v111;
      if ( !v63 )
      {
        if ( *((_QWORD *)v36 + 2) == 0x7470656369766564LL && *((_BYTE *)v36 + 24) == 114 )
        {
          v65 = 1;
          v40 = 23;
          goto LABEL_110;
        }
        goto LABEL_109;
      }
      goto LABEL_108;
    }
    v65 = v41;
    goto LABEL_189;
  }
  if ( *((_QWORD *)v36 + 2) == 0x6E5F656369766564LL && *((_WORD *)v36 + 12) == 28021 )
  {
    v64 = 1;
    v65 = 1;
    v40 = 22;
  }
  else
  {
    v64 = v62;
    v65 = 0;
  }
  v66 = v37 != 9;
  v61 = 0;
LABEL_106:
  v63 = v65 | v66;
  if ( v64 )
    goto LABEL_107;
  if ( *((_QWORD *)v36 + 2) == 0x745F656369766564LL && *((_WORD *)v36 + 12) == 28793 && *((_BYTE *)v36 + 26) == 101 )
  {
    v65 = 1;
    v40 = 25;
    goto LABEL_109;
  }
  v67 = v65 | v111;
LABEL_108:
  if ( !v67 )
  {
    if ( v36[4] == 1887007844 && *((_BYTE *)v36 + 20) == 101 )
    {
      v40 = 26;
      goto LABEL_210;
    }
    goto LABEL_110;
  }
LABEL_109:
  if ( !((unsigned __int8)v65 | v42) )
  {
    if ( *((_QWORD *)v36 + 2) == 0x657A696C616E6966LL )
    {
      v40 = 27;
      goto LABEL_210;
    }
    goto LABEL_111;
  }
LABEL_110:
  if ( !((unsigned __int8)v65 | (v37 != 12)) )
  {
    if ( *((_QWORD *)v36 + 2) != 0x6972707473726966LL || v36[6] != 1702125942 )
      goto LABEL_227;
    v40 = 28;
LABEL_210:
    v68 = 1;
LABEL_211:
    v69 = v61 | v68;
LABEL_115:
    if ( !v69 )
    {
      if ( *((_QWORD *)v36 + 2) == 0x65736572705F6669LL && *((_WORD *)v36 + 12) == 29806 )
      {
        v40 = 32;
        goto LABEL_198;
      }
LABEL_117:
      if ( !(v52 | (unsigned __int8)v68) )
      {
        if ( v36[4] == 1802398060 )
        {
          v68 = 1;
          v40 = 34;
          goto LABEL_199;
        }
        if ( v68 )
        {
LABEL_199:
          if ( v37 == 6 )
          {
            if ( v68 )
            {
LABEL_201:
              v66 = 1;
LABEL_202:
              v90 = v52 || v66;
              goto LABEL_203;
            }
            goto LABEL_123;
          }
          if ( v68 )
            goto LABEL_201;
LABEL_218:
          if ( v37 == 7 )
          {
            if ( v36[4] == 1936028272 && *((_WORD *)v36 + 10) == 28261 && *((_BYTE *)v36 + 22) == 116 )
            {
              v40 = 39;
            }
            else
            {
              if ( v36[4] != 1986622064 || *((_WORD *)v36 + 10) != 29793 || *((_BYTE *)v36 + 22) != 101 )
              {
                v90 = v52;
                v66 = 0;
LABEL_203:
                if ( !v90 )
                {
                  if ( v36[4] == 1718379891 )
                  {
                    v66 = 1;
                    v40 = 42;
                  }
                  else if ( v36[4] == 1701603700 )
                  {
                    v40 = 44;
                    v66 = 1;
                    goto LABEL_130;
                  }
LABEL_129:
                  if ( !v66 && !v110 )
                  {
                    if ( v36[4] == 1952671094 && *((_WORD *)v36 + 10) == 29295 )
                    {
                      v66 = 1;
                      v40 = 46;
                      goto LABEL_132;
                    }
                    goto LABEL_131;
                  }
                  goto LABEL_130;
                }
                goto LABEL_216;
              }
              v40 = 40;
            }
            v66 = 1;
LABEL_216:
            v70 = v66 || v37 != 3;
            goto LABEL_127;
          }
          goto LABEL_124;
        }
LABEL_234:
        if ( !v62 )
        {
          if ( *((_QWORD *)v36 + 2) == 0x6B726F775F6D756ELL
            && *((_WORD *)v36 + 12) == 29285
            && *((_BYTE *)v36 + 26) == 115 )
          {
            v40 = 38;
            goto LABEL_201;
          }
          goto LABEL_218;
        }
        goto LABEL_199;
      }
      goto LABEL_118;
    }
    goto LABEL_192;
  }
LABEL_111:
  if ( v65 )
    goto LABEL_210;
  if ( !v52 )
  {
    if ( v36[4] == 1735287143 )
    {
      v40 = 29;
    }
    else
    {
      v68 = 0;
      v69 = v61;
      if ( v36[4] != 1953722216 )
        goto LABEL_115;
      v40 = 30;
    }
    v68 = 1;
LABEL_192:
    v89 = v62 | v68;
    goto LABEL_193;
  }
LABEL_227:
  v68 = v65 | (v37 != 2);
  if ( v68 )
  {
    v68 = v65;
    goto LABEL_211;
  }
  v89 = v62;
  if ( *((_WORD *)v36 + 8) == 26217 )
  {
    v68 = 1;
    v40 = 31;
    goto LABEL_117;
  }
LABEL_193:
  if ( v89 )
    goto LABEL_117;
  if ( *((_QWORD *)v36 + 2) == 0x646E657065646E69LL && *((_WORD *)v36 + 12) == 28261 && *((_BYTE *)v36 + 26) == 116 )
  {
    v40 = 33;
    goto LABEL_198;
  }
LABEL_118:
  if ( v68 )
  {
LABEL_198:
    v68 = 1;
    goto LABEL_199;
  }
  if ( v66 )
    goto LABEL_234;
  if ( *((_QWORD *)v36 + 2) == 0x74616572635F6F6ELL && *((_BYTE *)v36 + 24) == 101 )
  {
    v40 = 35;
    goto LABEL_201;
  }
  if ( *((_QWORD *)v36 + 2) == 0x676E61675F6D756ELL && *((_BYTE *)v36 + 24) == 115 )
  {
    v40 = 37;
    goto LABEL_201;
  }
  if ( v37 != 6 )
    goto LABEL_218;
LABEL_123:
  if ( v36[4] == 1869115246 && *((_WORD *)v36 + 10) == 29811 )
  {
    v40 = 36;
    v66 = 1;
    goto LABEL_202;
  }
LABEL_124:
  if ( v66 )
  {
    v66 = 0;
    goto LABEL_202;
  }
  if ( *((_QWORD *)v36 + 2) == 0x6F69746375646572LL && *((_BYTE *)v36 + 24) == 110 )
  {
    v66 = 1;
    v40 = 41;
    goto LABEL_128;
  }
  v70 = v37 != 3;
LABEL_127:
  if ( !v70 && *((_WORD *)v36 + 8) == 25971 && *((_BYTE *)v36 + 18) == 113 )
  {
    v66 = 1;
    v40 = 43;
    goto LABEL_129;
  }
LABEL_128:
  if ( v66 || v61 )
    goto LABEL_129;
  if ( *((_QWORD *)v36 + 2) == 0x697665645F657375LL && *((_WORD *)v36 + 12) == 25955 )
  {
    v66 = 1;
    v40 = 45;
    goto LABEL_131;
  }
LABEL_130:
  if ( !v66 && !v112 )
  {
    if ( *((_QWORD *)v36 + 2) == 0x6C5F726F74636576LL && v36[6] == 1952935525 && *((_BYTE *)v36 + 28) == 104 )
    {
      v40 = 47;
      goto LABEL_249;
    }
    goto LABEL_132;
  }
LABEL_131:
  if ( !v66 && !v52 )
  {
    if ( v36[4] != 1953063287 )
    {
LABEL_133:
      if ( !v66 )
        goto LABEL_134;
      goto LABEL_249;
    }
    v40 = 48;
LABEL_249:
    if ( (*(_QWORD *)v36 & 0xFFFFFFFE) != 0 && *((_WORD *)v36 + 8) == 24415 )
      goto LABEL_136;
LABEL_74:
    v50 = *(__int64 **)(v8 + 8);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 16);
    sub_14634E0(v50, v7);
    return sub_15768E0(v8, a2, a3, a4, v40, *(_DWORD *)(v8 + 40), a5, a6);
  }
LABEL_132:
  if ( v66 || v110 )
    goto LABEL_133;
  if ( v36[4] == 1802661751 )
  {
    v40 = 49;
    if ( *((_WORD *)v36 + 10) == 29285 )
      goto LABEL_249;
  }
LABEL_134:
  if ( (*(_QWORD *)v36 & 0xFFFFFFFE) == 0 || *((_WORD *)v36 + 8) != 24415 )
    goto LABEL_35;
LABEL_136:
  v71 = 0;
  sub_1564840((__int64)&v114, v8, v7, 2058);
  v72 = *(_WORD *)(v8 + 32);
  if ( (unsigned __int16)(v72 - 7) > 0xCu && v72 != 1 )
    v71 = *(_QWORD *)(v8 + 24);
  v73 = (unsigned __int8 *)v114;
  if ( !v114 )
  {
    v92 = v115;
    v93 = *(_DWORD *)(v115 + 14976);
    if ( v93 )
    {
      v96 = (unsigned int)(v93 - 1);
      *(_DWORD *)(v115 + 14976) = v96;
      v73 = *(unsigned __int8 **)(v92 + 8 * v96 + 14848);
      v97 = *((unsigned int *)v73 + 134);
      *v73 = 0;
      v98 = *((_QWORD *)v73 + 66);
      *((_DWORD *)v73 + 106) = 0;
      v99 = v98 + (v97 << 6);
      if ( v98 != v99 )
      {
        v100 = v8;
        v101 = v98;
        do
        {
          while ( 1 )
          {
            v99 -= 64;
            v102 = *(void **)(v99 + 24);
            if ( v102 == (void *)(v99 + 40) )
              break;
            operator delete(v102);
            if ( v101 == v99 )
              goto LABEL_323;
          }
        }
        while ( v101 != v99 );
LABEL_323:
        v8 = v100;
      }
      *((_DWORD *)v73 + 134) = 0;
    }
    else
    {
      v73 = (unsigned __int8 *)operator new(0x3A0u);
      *v73 = 0;
      *((_QWORD *)v73 + 12) = v73 + 112;
      *((_QWORD *)v73 + 16) = v73 + 144;
      *((_QWORD *)v73 + 20) = v73 + 176;
      *((_QWORD *)v73 + 24) = v73 + 208;
      *((_QWORD *)v73 + 28) = v73 + 240;
      *((_QWORD *)v73 + 32) = v73 + 272;
      *((_QWORD *)v73 + 36) = v73 + 304;
      *((_QWORD *)v73 + 40) = v73 + 336;
      *((_QWORD *)v73 + 44) = v73 + 368;
      *((_QWORD *)v73 + 48) = v73 + 400;
      *((_QWORD *)v73 + 52) = v73 + 432;
      *((_QWORD *)v73 + 13) = 0;
      v73[112] = 0;
      *((_QWORD *)v73 + 17) = 0;
      v73[144] = 0;
      *((_QWORD *)v73 + 21) = 0;
      v73[176] = 0;
      *((_QWORD *)v73 + 25) = 0;
      v73[208] = 0;
      *((_QWORD *)v73 + 29) = 0;
      v73[240] = 0;
      *((_QWORD *)v73 + 33) = 0;
      v73[272] = 0;
      *((_QWORD *)v73 + 37) = 0;
      v73[304] = 0;
      *((_QWORD *)v73 + 41) = 0;
      v73[336] = 0;
      *((_QWORD *)v73 + 45) = 0;
      v73[368] = 0;
      *((_QWORD *)v73 + 49) = 0;
      v73[400] = 0;
      *((_QWORD *)v73 + 53) = 0x800000000LL;
      *((_QWORD *)v73 + 66) = v73 + 544;
      *((_QWORD *)v73 + 67) = 0x600000000LL;
    }
    v114 = v73;
  }
  v73[*v73 + 1] = 5;
  v74 = v114;
  v75 = *(unsigned __int8 *)v114;
  *(_BYTE *)v114 = v75 + 1;
  v74[v75 + 2] = v71;
  if ( (_BYTE)v122 )
  {
    sub_FC7790(v116, (__int64 *)&v114, SHIBYTE(v122));
    v116 = 0;
    v122 = 0;
  }
  if ( v119 != v121 )
    operator delete(v119);
  v76 = (void **)v114;
  if ( v114 )
  {
    v77 = v115;
    if ( v115 )
    {
      if ( (unsigned __int64)v114 < v115 || (unsigned __int64)v114 > v115 + 14848 )
      {
        v78 = *((void ***)v114 + 66);
        v79 = &v78[8 * (unsigned __int64)*((unsigned int *)v114 + 134)];
        if ( v78 != v79 )
        {
          do
          {
            while ( 1 )
            {
              v79 -= 8;
              v80 = (void **)v79[3];
              if ( v80 == v79 + 5 )
                break;
              operator delete(v80);
              if ( v78 == v79 )
                goto LABEL_150;
            }
          }
          while ( v78 != v79 );
LABEL_150:
          v79 = (void **)v76[66];
        }
        if ( v79 != v76 + 68 )
          free(v79);
        v81 = (void **)v76[52];
        if ( v81 != v76 + 54 )
          free(v81);
        v82 = v76 + 48;
        v83 = v76 + 8;
        do
        {
          while ( *v82 != v82 + 2 )
          {
            operator delete(*v82);
            v82 -= 4;
            if ( v83 == v82 )
              goto LABEL_158;
          }
          v82 -= 4;
        }
        while ( v83 != v82 );
LABEL_158:
        operator delete(v76, 0x3A0u);
      }
      else
      {
        v91 = *(unsigned int *)(v115 + 14976);
        *(_DWORD *)(v115 + 14976) = v91 + 1;
        *(_QWORD *)(v77 + 8 * v91 + 14848) = v76;
      }
    }
  }
  v84 = *(__int64 **)(v8 + 8);
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 16);
  sub_14634E0(v84, v7);
  v85 = *(_BYTE *)(v8 + 1952);
  v86 = (_BYTE *)(v8 + 1952);
  v87 = *(_WORD *)(v8 + 32) == 22;
  v114 = (void *)(v8 + 1952);
  LOBYTE(v115) = v85;
  *(_BYTE *)(v8 + 1952) = 1;
  v116 = v8;
  v117 = 1507350;
  v118 = 451;
  v119 = sub_146A990;
  v120 = 0;
  v121[0] = 0;
  if ( !v87 )
    goto LABEL_164;
  if ( (unsigned int)*(unsigned __int16 *)(v8 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800((__int64)&v114) )
      goto LABEL_163;
  }
  else
  {
    LODWORD(v121[0]) = sub_146A990(v8);
  }
  sub_156E210((__int64)&v114);
LABEL_163:
  v86 = v114;
  v85 = v115;
LABEL_164:
  *v86 = v85;
  return 4;
}
