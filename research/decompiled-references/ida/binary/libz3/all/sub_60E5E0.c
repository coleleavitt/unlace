__int64 __fastcall sub_60E5E0(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r10
  __int64 v8; // r13
  int v9; // edi
  int v10; // r9d
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // edx
  int v23; // r13d
  _QWORD *v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // rdx
  unsigned __int8 v30; // dl
  __int64 v31; // rax
  int v32; // r12d
  int v33; // r14d
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r12d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int8 v43; // dl
  __int64 v44; // rax
  unsigned int v45; // r15d
  size_t v46; // rsi
  char **exception; // rbx
  unsigned int *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 *v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r12
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rsi
  int v63; // eax
  _QWORD *v64; // rsi
  __int64 v65; // rax
  int v66; // edi
  unsigned int v67; // r10d
  _QWORD *v68; // r14
  __int64 v69; // r8
  unsigned int v70; // r9d
  _QWORD *v71; // r15
  int v72; // esi
  __int64 v73; // r9
  _QWORD *v74; // r10
  _QWORD *v75; // rax
  _QWORD *v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned int v79; // r12d
  unsigned int v80; // ecx
  unsigned int *v81; // rax
  __int64 v82; // rcx
  unsigned int v83; // r13d
  unsigned int v84; // ecx
  unsigned int *v85; // rax
  __int64 v86; // rsi
  unsigned int v87; // r14d
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rsi
  __int64 v91; // r15
  _QWORD *v92; // rax
  int v93; // r10d
  char *v94; // rdi
  char *v95; // r11
  char *v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rsi
  _QWORD *v99; // rdx
  _QWORD *v100; // rdx
  _QWORD *v101; // rax
  _QWORD *v102; // rdx
  char **v103; // r13
  char **v104; // r13
  __int64 v105; // [rsp+8h] [rbp-90h]
  size_t v106; // [rsp+10h] [rbp-88h]
  __int64 v107; // [rsp+10h] [rbp-88h]
  int v108; // [rsp+18h] [rbp-80h]
  unsigned int v109; // [rsp+18h] [rbp-80h]
  int v110; // [rsp+20h] [rbp-78h]
  __int64 v111[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v25 = (_QWORD *)a1[7];
    if ( v25 )
    {
      v26 = *((_DWORD *)v25 - 1);
      if ( v26 == *((_DWORD *)v25 - 2) )
      {
        v37 = (3 * v26 + 1) >> 1;
        v38 = 8 * v37 + 8;
        if ( 8 * v26 + 8 >= (unsigned int)v38 || v26 >= v37 )
          goto LABEL_55;
        v39 = (unsigned int *)sub_186B300(v25 - 1, v38);
        v40 = v39[1];
        v25 = v39 + 2;
        *v39 = v37;
        a1[7] = v39 + 2;
        LODWORD(v39) = v40;
        v29 = &v25[v40];
        v28 = (_DWORD)v39 + 1;
      }
      else
      {
        v27 = v26;
        v28 = v26 + 1;
        v29 = &v25[v27];
      }
    }
    else
    {
      v57 = (_QWORD *)sub_186B270(0x18u);
      v25 = v57 + 1;
      *v57 = 2;
      v28 = 1;
      a1[7] = v25;
      v29 = v25;
    }
    *v29 = a2;
    *((_DWORD *)v25 - 1) = v28;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v23 = 0;
    goto LABEL_19;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
LABEL_22:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_40;
    }
    goto LABEL_44;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_44:
    v41 = sub_1680FB0(a1[4], a2, 0);
    v42 = v41;
    if ( v41 )
    {
      v50 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v41 + 8);
      if ( v50 )
      {
        v51 = *((_DWORD *)v50 - 1);
        if ( v51 == *((_DWORD *)v50 - 2) )
        {
          v79 = (3 * v51 + 1) >> 1;
          v80 = 8 * v79 + 8;
          if ( 8 * v51 + 8 >= v80 || v51 >= v79 )
            goto LABEL_55;
          v81 = (unsigned int *)sub_186B300(v50 - 1, v80);
          v82 = v81[1];
          v50 = v81 + 2;
          *v81 = v79;
          a1[7] = v81 + 2;
          LODWORD(v81) = v82;
          v54 = &v50[v82];
          v53 = (_DWORD)v81 + 1;
        }
        else
        {
          v52 = v51;
          v53 = v51 + 1;
          v54 = &v50[v52];
        }
      }
      else
      {
        v100 = (_QWORD *)sub_186B270(0x18u);
        *v100 = 2;
        v53 = 1;
        v50 = v100 + 1;
        a1[7] = v50;
        v54 = v50;
      }
      *v54 = v42;
      *((_DWORD *)v50 - 1) = v53;
      if ( a2 != v42 )
      {
        v55 = a1[5];
        if ( v55 )
        {
          v56 = *(_DWORD *)(v55 - 4);
          if ( v56 )
            *(_BYTE *)(v55 + 16LL * (unsigned int)(v56 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v23 = 1;
LABEL_19:
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
      {
        if ( v5 )
          goto LABEL_22;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_6;
        v43 = 3;
        if ( a3 != 3 )
          v43 = (a3 - 1) & 3;
        v44 = a1[7];
        v32 = v43;
        if ( v44 )
          v33 = *(_DWORD *)(v44 - 4);
        else
          v33 = 0;
        v34 = (_QWORD *)a1[5];
        if ( v34 )
        {
          v35 = *((unsigned int *)v34 - 1);
          if ( (_DWORD)v35 == *((_DWORD *)v34 - 2) )
          {
            v45 = (unsigned int)(3 * v35 + 1) >> 1;
            v46 = 16 * v45 + 8;
            if ( 16 * (int)v35 + 8 >= (unsigned int)v46 || (unsigned int)v35 >= v45 )
              goto LABEL_55;
            goto LABEL_58;
          }
LABEL_36:
          v36 = (__int64)&v34[2 * v35];
LABEL_37:
          *(_QWORD *)v36 = a2;
          *(_DWORD *)(v36 + 12) = v33;
          *(_DWORD *)(v36 + 8) = v23 | (16 * v32);
          ++*((_DWORD *)v34 - 1);
          return 0;
        }
LABEL_77:
        v58 = (_QWORD *)sub_186B270(0x28u);
        v34 = v58 + 1;
        *v58 = 2;
        a1[5] = v58 + 1;
        v36 = (__int64)(v58 + 1);
        goto LABEL_37;
      }
      v30 = 3;
      if ( a3 != 3 )
        v30 = (a3 - 1) & 3;
      v31 = a1[7];
      v32 = v30;
      if ( v31 )
        v33 = *(_DWORD *)(v31 - 4);
      else
        v33 = 0;
      v34 = (_QWORD *)a1[5];
      if ( !v34 )
        goto LABEL_77;
      v35 = *((unsigned int *)v34 - 1);
      if ( (_DWORD)v35 != *((_DWORD *)v34 - 2) )
        goto LABEL_36;
      v45 = (unsigned int)(3 * v35 + 1) >> 1;
      v46 = 16 * v45 + 8;
      if ( 16 * (int)v35 + 8 < (unsigned int)v46 && (unsigned int)v35 < v45 )
      {
LABEL_58:
        v48 = (unsigned int *)sub_186B300(v34 - 1, v46);
        v34 = v48 + 2;
        a1[5] = v48 + 2;
        *v48 = v45;
        v36 = (__int64)&v48[4 * v48[1] + 2];
        goto LABEL_37;
      }
LABEL_55:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v111, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v111);
      sub_233E40((__int64)v111);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
LABEL_40:
    sub_60E090(a1, a2);
    return 1;
  }
LABEL_6:
  v7 = a1[18];
  v8 = *(_QWORD *)(a2 + 16);
  v105 = a1[1];
  v9 = *(_DWORD *)(v8 + 12);
  v10 = *(_DWORD *)(a2 + 8) + 1;
  v11 = *(_QWORD *)(v7 + 120);
  *(_DWORD *)(a2 + 8) = v10;
  v12 = *(__int64 **)(v11 + 152);
  v13 = *(unsigned int *)(v11 + 160);
  v14 = v13 - 1;
  v13 *= 8;
  v15 = (__int64 *)((char *)v12 + v13);
  v16 = 8LL * (v9 & v14);
  v17 = &v12[(unsigned __int64)v16 / 8];
  if ( v16 == v13 )
  {
LABEL_59:
    if ( v12 == v17 )
      goto LABEL_13;
    while ( 1 )
    {
      v49 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
      {
        if ( *(_DWORD *)(v49 + 12) == v9 && v8 == v49 )
          goto LABEL_78;
      }
      else if ( !v49 )
      {
        goto LABEL_13;
      }
      if ( v17 == ++v12 )
        goto LABEL_13;
    }
  }
  v18 = &v12[(unsigned __int64)v16 / 8];
  while ( 1 )
  {
    v19 = *v18;
    if ( (unsigned __int64)*v18 <= 1 )
    {
      if ( !v19 )
        goto LABEL_13;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v19 + 12) == v9 && v8 == v19 )
      break;
LABEL_10:
    if ( v15 == ++v18 )
      goto LABEL_59;
  }
LABEL_78:
  v59 = *(_QWORD *)(v7 + 128);
  ++*(_DWORD *)(v8 + 8);
  v60 = *(_QWORD **)(v59 + 232);
  if ( v60 )
  {
    v61 = *((_DWORD *)v60 - 1);
    if ( v61 == *((_DWORD *)v60 - 2) )
    {
      v87 = (3 * v61 + 1) >> 1;
      v88 = 8 * v87 + 8;
      if ( 8 * v61 + 8 >= (unsigned int)v88 || v61 >= v87 )
      {
        v104 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v111, "Overflow encountered when expanding vector");
        *v104 = (char *)off_1C63128;
        sub_2333C0(v104 + 1, v111);
        sub_233E40((__int64)v111);
        __cxa_throw(v104, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v89 = (unsigned int *)sub_186B300(v60 - 1, v88);
      v90 = v89[1];
      v60 = v89 + 2;
      *(_QWORD *)(v59 + 232) = v89 + 2;
      *v89 = v87;
      LODWORD(v89) = v90;
      v64 = &v60[v90];
      v63 = (_DWORD)v89 + 1;
    }
    else
    {
      v62 = v61;
      v63 = v61 + 1;
      v64 = &v60[v62];
    }
  }
  else
  {
    v102 = (_QWORD *)sub_186B270(0x18u);
    *v102 = 2;
    v63 = 1;
    v60 = v102 + 1;
    *(_QWORD *)(v59 + 232) = v60;
    v64 = v60;
  }
  *v64 = v8;
  *((_DWORD *)v60 - 1) = v63;
  v65 = *(unsigned int *)(v59 + 160);
  v66 = *(_DWORD *)(v59 + 168);
  v67 = 2 * v65;
  if ( 3 * (int)v65 < (unsigned int)(4 * (v66 + *(_DWORD *)(v59 + 164))) )
  {
    v91 = v67;
    v108 = 2 * v65;
    v106 = 8LL * v67;
    v92 = (_QWORD *)sub_186B270(v106);
    v93 = v108;
    v69 = v106;
    v68 = v92;
    if ( v108 )
    {
      memset(v92, 0, 8 * v91);
      v69 = v106;
      v93 = v108;
    }
    v94 = *(char **)(v59 + 152);
    v70 = v93 - 1;
    v71 = (_QWORD *)((char *)v68 + v69);
    v95 = &v94[8 * *(unsigned int *)(v59 + 160)];
    v96 = v94;
    if ( v94 != v95 )
    {
      do
      {
        if ( *(_QWORD *)v96 > 1u )
        {
          v97 = 8LL * (*(_DWORD *)(*(_QWORD *)v96 + 12LL) & v70);
          v98 = &v68[(unsigned __int64)v97 / 8];
          if ( v69 == v97 )
          {
LABEL_119:
            if ( v68 == v98 )
            {
LABEL_131:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v99 = v68;
            while ( *v99 )
            {
              if ( v98 == ++v99 )
                goto LABEL_131;
            }
          }
          else
          {
            v99 = &v68[(unsigned __int64)v97 / 8];
            while ( *v99 )
            {
              if ( v71 == ++v99 )
                goto LABEL_119;
            }
          }
          *v99 = *(_QWORD *)v96;
        }
        v96 += 8;
      }
      while ( v95 != v96 );
      v94 = *(char **)(v59 + 152);
    }
    if ( v94 )
    {
      v110 = v93;
      v109 = v93 - 1;
      v107 = v69;
      sub_186B220(v94);
      v93 = v110;
      v70 = v109;
      v69 = v107;
    }
    *(_QWORD *)(v59 + 152) = v68;
    v66 = 0;
    *(_DWORD *)(v59 + 160) = v93;
    *(_DWORD *)(v59 + 168) = 0;
  }
  else
  {
    v68 = *(_QWORD **)(v59 + 152);
    v69 = 8 * v65;
    v70 = v65 - 1;
    v71 = &v68[v65];
  }
  v72 = *(_DWORD *)(v8 + 12);
  v73 = 8LL * (v72 & v70);
  v74 = &v68[(unsigned __int64)v73 / 8];
  if ( v73 != v69 )
  {
    v75 = &v68[(unsigned __int64)v73 / 8];
    v76 = nullptr;
    while ( 1 )
    {
      v77 = *v75;
      if ( *v75 > 1u )
      {
        if ( *(_DWORD *)(v77 + 12) == v72 && v8 == v77 )
        {
          *v75 = v8;
          v10 = *(_DWORD *)(a2 + 8);
          goto LABEL_13;
        }
      }
      else
      {
        if ( !v77 )
        {
          if ( v76 )
            goto LABEL_129;
          v76 = v75;
          goto LABEL_130;
        }
        v76 = v75;
      }
      if ( v71 == ++v75 )
        goto LABEL_94;
    }
  }
  v76 = nullptr;
LABEL_94:
  while ( 2 )
  {
    if ( v74 == v68 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v78 = *v68;
    if ( *v68 > 1u )
    {
      if ( *(_DWORD *)(v78 + 12) == v72 && v8 == v78 )
      {
        *v68 = v8;
        v10 = *(_DWORD *)(a2 + 8);
        goto LABEL_13;
      }
      goto LABEL_93;
    }
    if ( v78 )
    {
      v76 = v68;
LABEL_93:
      ++v68;
      continue;
    }
    break;
  }
  if ( v76 )
LABEL_129:
    *(_DWORD *)(v59 + 168) = v66 - 1;
  else
    v76 = v68;
LABEL_130:
  *v76 = v8;
  v10 = *(_DWORD *)(a2 + 8);
  ++*(_DWORD *)(v59 + 164);
LABEL_13:
  v20 = a1[7];
  *(_DWORD *)(a2 + 8) = v10 + 1;
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 - 4);
    if ( v21 == *(_DWORD *)(v20 - 8) )
    {
      v83 = (3 * v21 + 1) >> 1;
      v84 = 8 * v83 + 8;
      if ( 8 * v21 + 8 >= v84 || v21 >= v83 )
      {
        v103 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v111, "Overflow encountered when expanding vector");
        *v103 = (char *)off_1C63128;
        sub_2333C0(v103 + 1, v111);
        sub_233E40((__int64)v111);
        __cxa_throw(v103, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (unsigned int *)sub_186B300((void *)(v20 - 8), v84);
      v86 = v85[1];
      *v85 = v83;
      a1[7] = v85 + 2;
      *(_QWORD *)&v85[2 * v86 + 2] = a2;
      v85[1] = v86 + 1;
    }
    else
    {
      *(_QWORD *)(v20 + 8LL * v21) = a2;
      *(_DWORD *)(v20 - 4) = v21 + 1;
    }
  }
  else
  {
    v101 = (_QWORD *)sub_186B270(0x18u);
    v101[1] = a2;
    a1[7] = v101 + 1;
    *v101 = 0x100000002LL;
  }
  if ( (*(_DWORD *)(a2 + 8))-- == 1 )
    sub_15D7BC0(v105, a2);
  return 1;
}

