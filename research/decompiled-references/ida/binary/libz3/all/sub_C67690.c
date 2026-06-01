__int64 __fastcall sub_C67690(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  _QWORD *v7; // rdx
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  int v16; // r13d
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rdx
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  _QWORD *v27; // rdx
  unsigned __int8 v28; // dl
  __int64 v29; // rax
  int v30; // r12d
  int v31; // r14d
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r12d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r13
  unsigned int v41; // ebx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rdx
  unsigned __int8 v45; // cl
  unsigned int v46; // r15d
  size_t v47; // rsi
  unsigned int *v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 *v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 *v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  unsigned int v67; // r12d
  unsigned int v68; // ecx
  unsigned int *v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // r12d
  unsigned int v72; // ecx
  unsigned int *v73; // rax
  __int64 v74; // rcx
  unsigned int v75; // r13d
  unsigned int v76; // ecx
  unsigned int *v77; // rax
  __int64 v78; // rsi
  unsigned int v79; // r13d
  unsigned int v80; // ecx
  unsigned int *v81; // rax
  __int64 v82; // rcx
  _QWORD *v83; // rdx
  _QWORD *v84; // rdx
  _QWORD *v85; // rax
  char **v86; // r13
  char **v87; // rbx
  char **exception; // r13
  __int64 v89[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v18 = (_QWORD *)a1[7];
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v35 = (3 * v19 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v36 || v19 >= v35 )
          goto LABEL_97;
        v37 = (unsigned int *)sub_186B300(v18 - 1, v36);
        v38 = v37[1];
        v18 = v37 + 2;
        *v37 = v35;
        a1[7] = v37 + 2;
        LODWORD(v37) = v38;
        v22 = &v18[v38];
        v21 = (_DWORD)v37 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v18[v20];
      }
    }
    else
    {
      v65 = (_QWORD *)sub_186B270(0x18u);
      v18 = v65 + 1;
      *v65 = 2;
      v21 = 1;
      a1[7] = v18;
      v22 = v18;
    }
    *v22 = a2;
    *((_DWORD *)v18 - 1) = v21;
    v23 = (_QWORD *)a1[11];
    if ( v23 )
    {
      v24 = *((_DWORD *)v23 - 1);
      if ( v24 == *((_DWORD *)v23 - 2) )
      {
        v41 = (3 * v24 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v42 || v24 >= v41 )
          goto LABEL_97;
        v43 = (unsigned int *)sub_186B300(v23 - 1, v42);
        v44 = v43[1];
        v23 = v43 + 2;
        *v43 = v41;
        a1[11] = v43 + 2;
        LODWORD(v43) = v44;
        v27 = &v23[v44];
        v26 = (_DWORD)v43 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v23[v25];
      }
    }
    else
    {
      v64 = (_QWORD *)sub_186B270(0x18u);
      v23 = v64 + 1;
      *v64 = 2;
      v26 = 1;
      a1[11] = v23;
      v27 = v23;
    }
    *v27 = 0;
    *((_DWORD *)v23 - 1) = v26;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v16 = 0;
    goto LABEL_16;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
LABEL_19:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_40;
    }
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
    v7 = (_QWORD *)a1[7];
LABEL_7:
    v8 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    if ( v7 )
    {
      v9 = *((_DWORD *)v7 - 1);
      if ( v9 == *((_DWORD *)v7 - 2) )
      {
        v79 = (3 * v9 + 1) >> 1;
        v80 = 8 * v79 + 8;
        if ( 8 * v9 + 8 >= v80 || v9 >= v79 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C63CB0(v89, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v89);
          sub_233E40((__int64)v89);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v81 = (unsigned int *)sub_186B300(v7 - 1, v80);
        v82 = v81[1];
        v7 = v81 + 2;
        *v81 = v79;
        a1[7] = v81 + 2;
        LODWORD(v81) = v82;
        v12 = &v7[v82];
        v11 = (_DWORD)v81 + 1;
      }
      else
      {
        v10 = v9;
        v11 = v9 + 1;
        v12 = &v7[v10];
      }
    }
    else
    {
      v49 = (_QWORD *)sub_186B270(0x18u);
      *v49 = 2;
      v11 = 1;
      v7 = v49 + 1;
      a1[7] = v7;
      v12 = v7;
    }
    *v12 = a2;
    *((_DWORD *)v7 - 1) = v11;
    v13 = a1[11];
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 - 4);
      if ( v14 == *(_DWORD *)(v13 - 8) )
      {
        v75 = (3 * v14 + 1) >> 1;
        v76 = 8 * v75 + 8;
        if ( 8 * v14 + 8 >= v76 || v14 >= v75 )
        {
          v86 = (char **)__cxa_allocate_exception(0x28u);
          sub_C63CB0(v89, "Overflow encountered when expanding vector");
          *v86 = (char *)off_1C63128;
          sub_2333C0(v86 + 1, v89);
          sub_233E40((__int64)v89);
          __cxa_throw(v86, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v77 = (unsigned int *)sub_186B300((void *)(v13 - 8), v76);
        v78 = v77[1];
        *v77 = v75;
        a1[11] = v77 + 2;
        *(_QWORD *)&v77[2 * v78 + 2] = 0;
        v77[1] = v78 + 1;
      }
      else
      {
        *(_QWORD *)(v13 + 8LL * v14) = 0;
        *(_DWORD *)(v13 - 4) = v14 + 1;
      }
    }
    else
    {
      v85 = (_QWORD *)sub_186B270(0x18u);
      v85[1] = 0;
      a1[11] = v85 + 1;
      *v85 = 0x100000002LL;
    }
    if ( (*(_DWORD *)(a2 + 8))-- == 1 )
      sub_15D7BC0(v8, a2);
    return 1;
  }
  v39 = sub_1680FB0(a1[4], a2, 0);
  v40 = v39;
  if ( v39 )
  {
    v50 = (_QWORD *)a1[7];
    ++*(_DWORD *)(v39 + 8);
    if ( v50 )
    {
      v51 = *((_DWORD *)v50 - 1);
      if ( v51 == *((_DWORD *)v50 - 2) )
      {
        v67 = (3 * v51 + 1) >> 1;
        v68 = 8 * v67 + 8;
        if ( 8 * v51 + 8 >= v68 || v51 >= v67 )
          goto LABEL_97;
        v69 = (unsigned int *)sub_186B300(v50 - 1, v68);
        v70 = v69[1];
        v50 = v69 + 2;
        *v69 = v67;
        a1[7] = v69 + 2;
        LODWORD(v69) = v70;
        v54 = &v50[v70];
        v53 = (_DWORD)v69 + 1;
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
      v83 = (_QWORD *)sub_186B270(0x18u);
      *v83 = 2;
      v53 = 1;
      v50 = v83 + 1;
      a1[7] = v50;
      v54 = v50;
    }
    *v54 = v40;
    *((_DWORD *)v50 - 1) = v53;
    if ( a2 != v40 )
    {
      v55 = a1[5];
      if ( v55 )
      {
        v56 = *(_DWORD *)(v55 - 4);
        if ( v56 )
          *(_BYTE *)(v55 + 16LL * (unsigned int)(v56 - 1) + 8) |= 2u;
      }
    }
    v57 = sub_1680FB0(a1[9], a2, 0);
    v58 = v57;
    if ( v57 )
      ++*(_DWORD *)(v57 + 8);
    v59 = (_QWORD *)a1[11];
    if ( v59 )
    {
      v60 = *((_DWORD *)v59 - 1);
      if ( v60 == *((_DWORD *)v59 - 2) )
      {
        v71 = (3 * v60 + 1) >> 1;
        v72 = 8 * v71 + 8;
        if ( 8 * v60 + 8 >= v72 || v60 >= v71 )
          goto LABEL_97;
        v73 = (unsigned int *)sub_186B300(v59 - 1, v72);
        v74 = v73[1];
        v59 = v73 + 2;
        *v73 = v71;
        a1[11] = v73 + 2;
        LODWORD(v73) = v74;
        v63 = &v59[v74];
        v62 = (_DWORD)v73 + 1;
      }
      else
      {
        v61 = v60;
        v62 = v60 + 1;
        v63 = &v59[v61];
      }
    }
    else
    {
      v84 = (_QWORD *)sub_186B270(0x18u);
      *v84 = 2;
      v62 = 1;
      v59 = v84 + 1;
      a1[11] = v59;
      v63 = v59;
    }
    *v63 = v58;
    *((_DWORD *)v59 - 1) = v62;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  v16 = 1;
LABEL_16:
  if ( v5 == 1 )
  {
LABEL_40:
    sub_C67090(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v28 = 3;
    if ( a3 != 3 )
      v28 = (a3 - 1) & 3;
    v29 = a1[7];
    v30 = v28;
    if ( v29 )
      v31 = *(_DWORD *)(v29 - 4);
    else
      v31 = 0;
    v32 = (_QWORD *)a1[5];
    if ( !v32 )
    {
LABEL_80:
      v66 = (_QWORD *)sub_186B270(0x28u);
      v32 = v66 + 1;
      *v66 = 2;
      a1[5] = v66 + 1;
      v34 = (__int64)(v66 + 1);
      goto LABEL_37;
    }
    v33 = *((unsigned int *)v32 - 1);
    if ( (_DWORD)v33 != *((_DWORD *)v32 - 2) )
      goto LABEL_36;
    v46 = (unsigned int)(3 * v33 + 1) >> 1;
    v47 = 16 * v46 + 8;
    if ( 16 * (int)v33 + 8 < (unsigned int)v47 && (unsigned int)v33 < v46 )
    {
LABEL_61:
      v48 = (unsigned int *)sub_186B300(v32 - 1, v47);
      v32 = v48 + 2;
      a1[5] = v48 + 2;
      *v48 = v46;
      v34 = (__int64)&v48[4 * v48[1] + 2];
      goto LABEL_37;
    }
LABEL_97:
    v87 = (char **)__cxa_allocate_exception(0x28u);
    sub_C63CB0(v89, "Overflow encountered when expanding vector");
    *v87 = (char *)off_1C63128;
    sub_2333C0(v87 + 1, v89);
    sub_233E40((__int64)v89);
    __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_19;
  v7 = (_QWORD *)a1[7];
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_7;
  v45 = 3;
  if ( a3 != 3 )
    v45 = (a3 - 1) & 3;
  v30 = v45;
  if ( v7 )
    v31 = *((_DWORD *)v7 - 1);
  else
    v31 = 0;
  v32 = (_QWORD *)a1[5];
  if ( !v32 )
    goto LABEL_80;
  v33 = *((unsigned int *)v32 - 1);
  if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
  {
    v46 = (unsigned int)(3 * v33 + 1) >> 1;
    v47 = 16 * v46 + 8;
    if ( 16 * (int)v33 + 8 >= (unsigned int)v47 || (unsigned int)v33 >= v46 )
      goto LABEL_97;
    goto LABEL_61;
  }
LABEL_36:
  v34 = (__int64)&v32[2 * v33];
LABEL_37:
  *(_QWORD *)v34 = a2;
  *(_DWORD *)(v34 + 12) = v31;
  *(_DWORD *)(v34 + 8) = v16 | (16 * v30);
  ++*((_DWORD *)v32 - 1);
  return 0;
}

