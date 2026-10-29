/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: code_highlight_block_0
// Address: 0x00000000004430E0

//----- (00000000004430E0) ----------------------------------------------------
__int64 __fastcall code_highlight_block_0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // x25
  unsigned __int8 *v7; // x0
  __int64 (__fastcall *v8)(); // x2
  __int64 (*v9)(); // x2
  unsigned int v10; // w0
  unsigned int v11; // w20
  unsigned __int64 v12; // x20
  char *v13; // x21
  __int64 v14; // x27
  int v15; // w22
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x28
  unsigned __int64 v19; // x2
  unsigned __int8 *v20; // x1
  char *v21; // x22
  char *v22; // x20
  int v23; // w0
  char *v24; // x28
  unsigned int v25; // w3
  int v26; // w0
  char *v27; // x2
  int v29; // w0
  unsigned __int64 v30; // x2
  int v31; // w0
  unsigned int v32; // w0
  char *v34; // x20
  int v35; // w0
  bool v36; // cc
  _BYTE *v37; // x0
  __int64 v38; // x20
  _QWORD *v39; // x20
  __int64 v40; // x28
  _QWORD *v41; // x28
  __int64 (*v42)(); // x3
  unsigned int v43; // w3
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x0
  const char *v47; // x28
  __int64 v48; // x1
  const char **v49; // x27
  __int64 v50; // x20
  char *v51; // x20
  int v52; // w28
  _QWORD *v53; // x28
  _QWORD *v54; // x4
  __int64 (*v55)(); // x5
  __int64 (*v56)(); // x3
  __int64 v57; // x20
  unsigned __int8 *v58; // x0
  bool v59; // zf
  int v60; // w0
  void *v61; // x0
  int v62; // w0
  char v63; // w20
  int v64; // w0
  int v65; // w0
  char *v66; // x20
  size_t v67; // x0
  unsigned int v68; // w3
  int v69; // w0
  int v70; // w0
  __int64 v71; // x28
  int v72; // w27
  int v73; // w0
  int v74; // w0
  __int64 v76; // x0
  __int64 v77; // x28
  int v78; // w0
  unsigned int v79; // w2
  int v80; // w1
  void *v81; // x0
  int v82; // w0
  int v83; // w0
  __int64 v84; // x20
  signed __int64 v85; // [xsp+70h] [xbp-F0h]
  int v86; // [xsp+78h] [xbp-E8h]
  _QWORD *v87; // [xsp+78h] [xbp-E8h]
  _BOOL4 v88; // [xsp+78h] [xbp-E8h]
  __int64 v89; // [xsp+78h] [xbp-E8h]
  unsigned int v90; // [xsp+80h] [xbp-E0h]
  __int64 (*v91)(); // [xsp+80h] [xbp-E0h]
  unsigned __int64 v92; // [xsp+80h] [xbp-E0h]
  size_t n; // [xsp+90h] [xbp-D0h]
  __int64 v94; // [xsp+98h] [xbp-C8h]
  _BOOL4 v95; // [xsp+98h] [xbp-C8h]
  size_t v96; // [xsp+A0h] [xbp-C0h]
  __int64 v97; // [xsp+A8h] [xbp-B8h]
  unsigned __int64 v98; // [xsp+B8h] [xbp-A8h]
  unsigned int v99; // [xsp+C4h] [xbp-9Ch] BYREF
  char *s1; // [xsp+C8h] [xbp-98h] BYREF
  unsigned __int8 *v101; // [xsp+D0h] [xbp-90h] BYREF
  unsigned __int8 *v102; // [xsp+D8h] [xbp-88h] BYREF
  char *v103; // [xsp+E0h] [xbp-80h] BYREF
  char *v104; // [xsp+E8h] [xbp-78h] BYREF
  char *v105; // [xsp+F0h] [xbp-70h] BYREF
  char *v106; // [xsp+F8h] [xbp-68h] BYREF
  char *v107; // [xsp+100h] [xbp-60h] BYREF
  char *v108; // [xsp+108h] [xbp-58h] BYREF
  char *v109; // [xsp+110h] [xbp-50h] BYREF
  char *v110; // [xsp+118h] [xbp-48h] BYREF
  char *v111; // [xsp+120h] [xbp-40h] BYREF
  char *v112; // [xsp+128h] [xbp-38h] BYREF
  char *v113; // [xsp+130h] [xbp-30h] BYREF
  char *v114; // [xsp+138h] [xbp-28h] BYREF
  void *ptr; // [xsp+140h] [xbp-20h] BYREF
  size_t v116; // [xsp+148h] [xbp-18h]
  __int64 v117; // [xsp+150h] [xbp-10h]
  __int64 v118; // [xsp+158h] [xbp-8h]

  v5 = *(char **)a3;
  s1 = v5;
  if ( !v5 )
    return v118 ^ _stack_chk_guard;
  n = *(_QWORD *)(a3 + 8);
  v7 = (unsigned __int8 *)v5;
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 40LL);
  if ( v8 == nullsub_2 )
  {
    *(_QWORD *)(a1 + 160) = v5;
    *(_QWORD *)(a1 + 168) = v5;
    v9 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
    if ( v9 == sub_442BA0 )
    {
LABEL_4:
      *(_DWORD *)(a1 + 176) = 0;
      goto LABEL_5;
    }
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v8)(a2, 0);
    v7 = (unsigned __int8 *)s1;
    *(_QWORD *)(a1 + 160) = s1;
    *(_QWORD *)(a1 + 168) = v7;
    v9 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
    if ( v9 == sub_442BA0 )
      goto LABEL_4;
  }
  v62 = ((__int64 (__fastcall *)(__int64))v9)(a2);
  v63 = v62;
  if ( v62 <= 0 )
  {
    v7 = (unsigned __int8 *)s1;
    goto LABEL_4;
  }
  if ( (v62 & 0xF) != 0 )
  {
    sub_442F40(a1, a2, (v62 & 0xF) - 1, (const char **)&s1);
    if ( (v63 & 0x10) == 0 )
      goto LABEL_103;
  }
  else if ( (v62 & 0x10) == 0 )
  {
LABEL_103:
    v7 = (unsigned __int8 *)s1;
    goto LABEL_5;
  }
  sub_443038(a1, a2, (const char **)&s1);
  v7 = (unsigned __int8 *)s1;
LABEL_5:
  while ( 1 )
  {
    v101 = v7;
    v10 = sub_485C28(&v101);
    v11 = v10;
    if ( v10 <= 0x7F )
    {
      if ( isspace(v10) )
        goto LABEL_81;
      if ( !v11 )
        break;
    }
    v12 = *(_QWORD *)(a1 + 96);
    v13 = s1;
    if ( v12 )
    {
      v14 = *(_QWORD *)(a1 + 88);
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        v17 = 48 * v16;
        v18 = v14 + v17;
        v19 = *(_QWORD *)(v14 + v17 + 8);
        if ( v19 > 1 && !strncmp(v13, *(const char **)(v14 + v17), v19 - 1) )
          break;
        v16 = ++v15;
        if ( v15 >= v12 )
          goto LABEL_13;
      }
      sub_442BD8(a1, a2, v13, *(_DWORD *)(a1 + 176));
      v44 = *(_QWORD *)(v18 + 8);
      v59 = v44 == 0;
      v45 = v44 - 1;
      if ( v59 )
        v45 = 0;
      s1 += v45;
      sub_442F40(a1, a2, v15, (const char **)&s1);
      v20 = (unsigned __int8 *)s1;
    }
    else
    {
LABEL_13:
      v20 = (unsigned __int8 *)v13;
    }
    v102 = v20;
    if ( *(unsigned __int8 *)(a1 + 185) == (unsigned int)sub_485C28(&v102) )
    {
      v21 = *(char **)(a1 + 168);
      v22 = s1;
      if ( v21 != *(char **)a3 )
      {
        while ( v21 != v22 )
        {
          v23 = (unsigned __int8)*v21;
          if ( (v23 & 0x80) != 0 || !isspace(v23) )
            goto LABEL_28;
          ++v21;
        }
      }
      sub_442BD8(a1, a2, v22, *(_DWORD *)(a1 + 176));
      sub_443038(a1, a2, (const char **)&s1);
      v7 = (unsigned __int8 *)s1;
      continue;
    }
    v22 = s1;
LABEL_28:
    v103 = v22;
    v29 = sub_485C28((unsigned __int8 **)&v103);
    if ( *(unsigned __int8 *)(a1 + 182) == v29 )
    {
      v24 = s1;
LABEL_23:
      v25 = *(_DWORD *)(a1 + 176);
      *(_BYTE *)(a1 + 112) = v29;
      sub_442BD8(a1, a2, v24, v25);
      v26 = sub_485C28((unsigned __int8 **)&s1);
      v27 = s1;
      if ( v26 == -1 )
        v27 = ++s1;
      v7 = sub_442E60(a1, a2, (unsigned __int8 *)v27, *(_BYTE *)(a1 + 112));
      s1 = (char *)v7;
      if ( !v7 )
        return v118 ^ _stack_chk_guard;
      continue;
    }
    v24 = s1;
    if ( *(unsigned __int8 *)(a1 + 180) == v29 )
      goto LABEL_23;
    v30 = *(_QWORD *)(a1 + 72);
    if ( v30 > 1 && !strncmp(s1, *(const char **)(a1 + 64), v30 - 1) )
    {
      sub_442BD8(a1, a2, v24, *(_DWORD *)(a1 + 176));
      v66 = s1;
      v67 = strlen(s1);
      v68 = *(_DWORD *)(a1 + 120);
      s1 = &v66[v67];
      sub_442BD8(a1, a2, &v66[v67], v68);
      *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
      v7 = (unsigned __int8 *)s1;
      continue;
    }
    ptr = v24;
    v31 = sub_485C28((unsigned __int8 **)&ptr);
    v59 = v31 == 95;
    v32 = (v31 & 0xFFFFFFDF) - 65;
    if ( !v59 && v32 > 0x19 )
    {
      v85 = 0;
      goto LABEL_69;
    }
    do
    {
      v34 = (char *)ptr;
      v35 = sub_485C28((unsigned __int8 **)&ptr);
      v36 = v35 != 95 && (v35 & 0xFFFFFFDF) - 65 > 0x19;
    }
    while ( !v36 || (unsigned int)(v35 - 48) <= 9 );
    v85 = v34 - v24;
    if ( v34 == v24 )
    {
LABEL_69:
      v51 = s1;
      if ( !s1 )
        goto LABEL_72;
      v105 = s1;
      v52 = sub_485C28((unsigned __int8 **)&v105);
      if ( !v52 )
        goto LABEL_71;
      ptr = nullptr;
      v116 = 0;
      v117 = 0;
      if ( !n )
        goto LABEL_85;
      v81 = nullptr;
      if ( n != -1 )
      {
        v81 = sub_491288((__int64)&ptr, nullptr, n + 1, 1u);
        ptr = v81;
      }
      v116 = n + 1;
      memmove(v81, v5, n);
      *((_BYTE *)ptr + n) = 0;
      if ( v116 )
        v58 = (unsigned __int8 *)ptr;
      else
LABEL_85:
        v58 = (unsigned __int8 *)&qword_4B2D48;
      v92 = sub_486068(v58) + 1;
      if ( (unsigned int)(v52 - 48) <= 9 )
      {
        v88 = 0;
        goto LABEL_93;
      }
      if ( ((v52 - 43) & 0xFFFFFFFD) != 0 )
      {
        v88 = v52 == 46;
LABEL_89:
        v59 = (v52 & 0xFFFFFFDF) != 0x45 && !v88;
        if ( v59 )
        {
LABEL_96:
          v61 = ptr;
          goto LABEL_97;
        }
        goto LABEL_93;
      }
      if ( v51 == v5 )
      {
        v88 = v52 == 46;
        goto LABEL_93;
      }
      v108 = v51;
      sub_485DD0(nullptr, (unsigned __int64 *)&v108, (unsigned __int64)v5);
      v69 = sub_485C28((unsigned __int8 **)&v108);
      v88 = v52 == 46;
      if ( (v69 & 0xFFFFFFDF) - 65 <= 0x19 || !sub_442BC0(v69) )
        goto LABEL_89;
LABEL_93:
      v107 = v51;
      sub_485FB8((unsigned __int8 **)&v107, 1);
      v60 = sub_485C28((unsigned __int8 **)&v107);
      if ( v52 == 48 )
      {
        v95 = 0;
        v71 = 1;
        if ( (v60 & 0xFFFFFFDF) == 0x58 )
        {
          v106 = v51;
          sub_485FB8((unsigned __int8 **)&v106, 2);
          v82 = sub_485C28((unsigned __int8 **)&v106);
          if ( (v82 & 0xFFFFFFDF) - 65 > 0x19 && sub_442BC0(v82) )
            goto LABEL_96;
          v71 = 2;
          v95 = 1;
        }
      }
      else
      {
        if ( ((v52 - 43) & 0xFFFFFFFD) == 0 || (v52 & 0xFFFFFFDF) == 0x45 )
        {
          if ( v92 <= 1 )
            goto LABEL_96;
          v109 = v51;
          sub_485FB8((unsigned __int8 **)&v109, 1);
          v70 = sub_485C28((unsigned __int8 **)&v109);
          if ( (v70 & 0xFFFFFFDF) - 65 <= 0x19 )
          {
            v95 = 0;
          }
          else
          {
            v95 = sub_442BC0(v70);
            if ( v95 )
              goto LABEL_96;
          }
          v71 = 1;
          goto LABEL_123;
        }
        v71 = 1;
        v95 = 0;
      }
      if ( v92 <= v71 )
      {
        v61 = ptr;
        v89 = v71;
        goto LABEL_147;
      }
LABEL_123:
      v72 = 0;
      do
      {
        v110 = v51;
        if ( v71 > 0 )
        {
          sub_485FB8((unsigned __int8 **)&v110, v71);
        }
        else if ( v71 )
        {
          if ( under_debugger )
            goto LABEL_171;
          goto LABEL_172;
        }
        v73 = sub_485C28((unsigned __int8 **)&v110);
        if ( (v73 & 0xFFFFFFDF) - 65 > 0x19 && sub_442BC0(v73) )
          break;
        v111 = v51;
        if ( v71 > 0 )
          sub_485FB8((unsigned __int8 **)&v111, v71);
        v74 = sub_485C28((unsigned __int8 **)&v111);
        if ( (unsigned int)(v74 - 48) <= 9 || v95 && (v74 & 0xFFFFFFDF) - 65 <= 5 )
        {
          ++v71;
          continue;
        }
        if ( v74 == 46 )
        {
          if ( v88 )
            goto LABEL_96;
          ++v71;
          v88 = 1;
          continue;
        }
        if ( v72 || (v74 & 0xFFFFFFDF) != 0x45 )
        {
          if ( v74 != 76 || v71 == 0 )
            goto LABEL_96;
          v89 = v71 + 1;
          if ( v92 > v71 + 1 )
          {
            v113 = v51;
            if ( v89 > 0 )
            {
              sub_485FB8((unsigned __int8 **)&v113, v89);
              v83 = sub_485C28((unsigned __int8 **)&v113);
              if ( (unsigned int)(v83 - 97) <= 0x19 || (unsigned int)(v83 - 65) <= 0x19 )
                goto LABEL_96;
              if ( !sub_442BC0(v83) )
              {
                v61 = ptr;
LABEL_97:
                if ( v61 )
                {
                  v116 = 0;
                  j__free(v61);
                }
LABEL_71:
                v51 = s1;
                goto LABEL_72;
              }
              goto LABEL_141;
            }
            if ( !under_debugger )
              sub_492270(1834);
LABEL_171:
            __break(0x3E8u);
LABEL_172:
            sub_492270(1834);
          }
LABEL_141:
          v114 = v51;
          v76 = v71 - 1;
          v77 = v76;
          if ( v76 > 0 )
          {
            sub_485FB8((unsigned __int8 **)&v114, v76);
          }
          else if ( v76 )
          {
            v84 = 0;
            do
            {
              sub_485DD0(nullptr, (unsigned __int64 *)&v114, (unsigned __int64)v5);
              --v84;
            }
            while ( v77 < v84 );
          }
          v78 = sub_485C28((unsigned __int8 **)&v114);
          v79 = v78 - 48;
          v80 = v78;
          v61 = ptr;
          if ( v79 > 9 && (!v95 || (v80 & 0xFFFFFFDF) - 65 > 5) )
            goto LABEL_97;
LABEL_147:
          if ( v61 )
            goto LABEL_148;
          v51 = s1;
LABEL_150:
          sub_442BD8(a1, a2, v51, *(_DWORD *)(a1 + 176));
          sub_485FB8((unsigned __int8 **)&s1, v89);
          sub_442BD8(a1, a2, s1, 7u);
          v7 = (unsigned __int8 *)s1;
          goto LABEL_5;
        }
        v112 = v51;
        if ( v71 + 1 <= 0 )
        {
          if ( !under_debugger )
            sub_492270(1834);
          goto LABEL_171;
        }
        sub_485FB8((unsigned __int8 **)&v112, v71 + 1);
        if ( (((unsigned int)sub_485C28((unsigned __int8 **)&v112) - 43) & 0xFFFFFFFD) != 0 )
          ++v71;
        else
          v71 += 2;
        v72 = 1;
      }
      while ( v71 < v92 );
      v61 = ptr;
      v89 = v71;
      if ( ptr )
      {
LABEL_148:
        v116 = 0;
        j__free(v61);
      }
      v51 = s1;
      if ( v89 )
        goto LABEL_150;
LABEL_72:
      v53 = *(_QWORD **)(a1 + 136);
      v54 = &v53[*(_QWORD *)(a1 + 144)];
      if ( v53 != v54 )
      {
        v55 = sub_442BB0;
        do
        {
          while ( 1 )
          {
            v56 = *(__int64 (**)())(*(_QWORD *)*v53 + 16LL);
            if ( v56 != v55 )
              break;
LABEL_74:
            if ( v54 == ++v53 )
              goto LABEL_78;
          }
          v87 = v54;
          v91 = v55;
          v57 = ((__int64 (__fastcall *)(_QWORD, void **, char *))v56)(*v53, &ptr, v51);
          v54 = v87;
          v55 = v91;
          if ( v57 <= 0 )
          {
            v51 = s1;
            goto LABEL_74;
          }
          ++v53;
          sub_442BD8(a1, a2, s1, *(_DWORD *)(a1 + 176));
          sub_485FB8((unsigned __int8 **)&s1, v57);
          sub_442BD8(a1, a2, s1, (unsigned int)ptr);
          v51 = s1;
          v54 = v87;
          v55 = v91;
          *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
        }
        while ( v87 != v53 );
      }
LABEL_78:
      if ( v85 )
      {
        v7 = (unsigned __int8 *)&v51[v85];
        s1 = &v51[v85];
      }
      else
      {
        while ( 1 )
        {
          v104 = v51;
          v64 = sub_485C28((unsigned __int8 **)&v104);
          if ( (v64 & 0xFFFFFFDF) - 65 > 0x19 && sub_442BC0(v64) )
            break;
          v65 = sub_485C28((unsigned __int8 **)&s1);
          v51 = s1;
          if ( v65 == -1 )
            v51 = ++s1;
        }
        v7 = (unsigned __int8 *)s1;
      }
      if ( v13 != (char *)v7 )
        continue;
LABEL_81:
      if ( (unsigned int)sub_485C28((unsigned __int8 **)&s1) != -1 )
        goto LABEL_53;
      v7 = (unsigned __int8 *)++s1;
    }
    else
    {
      v37 = nullptr;
      ptr = nullptr;
      v116 = 0;
      v117 = 0;
      v38 = v85 + 1;
      if ( v85 != -1 )
      {
        ptr = sub_491288((__int64)&ptr, nullptr, v85 + 1, 1u);
        memset((char *)ptr + v116, 0, v38 - v116);
        v116 = v85 + 1;
        v37 = ptr;
      }
      v37[v85] = 0;
      sub_493350((unsigned __int64)ptr, (unsigned __int8 *)s1, v38);
      v39 = *(_QWORD **)(a1 + 136);
      v40 = *(_QWORD *)(a1 + 144);
      v90 = *(_DWORD *)(a1 + 176);
      v99 = v90;
      v41 = &v39[v40];
      if ( v39 != v41 )
      {
        do
        {
          v42 = *(__int64 (**)())(*(_QWORD *)*v39 + 24LL);
          if ( v42 != sub_442BB8
            && ((unsigned __int8 (__fastcall *)(_QWORD, unsigned int *, void **))v42)(*v39, &v99, &ptr) )
          {
            break;
          }
          ++v39;
        }
        while ( v41 != v39 );
        v43 = *(_DWORD *)(a1 + 176);
        v90 = v99;
        if ( v43 != v99 )
          goto LABEL_51;
      }
      v98 = *(_QWORD *)(a1 + 48);
      if ( !v98 )
        goto LABEL_67;
      v97 = *(_QWORD *)(a1 + 40);
      v96 = v116;
      v86 = 0;
      v46 = 0;
      while ( 1 )
      {
        v47 = (const char *)ptr;
        v48 = v97 + 32 * v46;
        v49 = *(const char ***)v48;
        v94 = v48;
        v50 = *(_QWORD *)v48 + 8LL * *(_QWORD *)(v48 + 8);
        if ( !v96 )
          v47 = (const char *)&qword_4B2D48;
        if ( v49 != (const char **)v50 )
          break;
LABEL_156:
        v46 = ++v86;
        if ( v86 >= v98 )
          goto LABEL_67;
      }
      while ( strcmp(v47, *v49) )
      {
        if ( (const char **)v50 == ++v49 )
          goto LABEL_156;
      }
      v99 = *(_DWORD *)(v94 + 24);
      if ( v99 == v90 )
      {
LABEL_67:
        if ( ptr )
        {
          v116 = 0;
          j__free(ptr);
        }
        goto LABEL_69;
      }
      v43 = v90;
LABEL_51:
      sub_442BD8(a1, a2, s1, v43);
      s1 += v85;
      sub_442BD8(a1, a2, s1, v99);
      if ( ptr )
      {
        v116 = 0;
        j__free(ptr);
      }
LABEL_53:
      v7 = (unsigned __int8 *)s1;
    }
  }
  if ( *(char **)(a1 + 168) != s1 )
    sub_442BD8(a1, a2, s1, *(_DWORD *)(a1 + 176));
  return v118 ^ _stack_chk_guard;
}
// 4439EC: conditional instruction was optimized away because x28.8==0
// 442BA8: using guessed type __int64 __fastcall nullsub_2();
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
