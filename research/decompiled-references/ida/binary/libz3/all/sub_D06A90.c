__int64 __fastcall sub_D06A90(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  int v7; // r13d
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdx
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  int v21; // r12d
  int v22; // r14d
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // ebx
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rdx
  unsigned __int8 v36; // dl
  __int64 v37; // rax
  unsigned int v38; // r15d
  size_t v39; // rsi
  unsigned int *v40; // rax
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  __int64 v46; // rax
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rbx
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 *v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  unsigned int v58; // r12d
  unsigned int v59; // ecx
  unsigned int *v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // r12d
  unsigned int v63; // ecx
  unsigned int *v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rdx
  _QWORD *v67; // rdx
  char **exception; // rbp
  __int64 v69[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v9 = (_QWORD *)a1[7];
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 - 1);
      if ( v10 == *((_DWORD *)v9 - 2) )
      {
        v26 = (3 * v10 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v27 || v10 >= v26 )
          goto LABEL_80;
        v28 = (unsigned int *)sub_186B300(v9 - 1, v27);
        v29 = v28[1];
        v9 = v28 + 2;
        *v28 = v26;
        a1[7] = v28 + 2;
        LODWORD(v28) = v29;
        v13 = &v9[v29];
        v12 = (_DWORD)v28 + 1;
      }
      else
      {
        v11 = v10;
        v12 = v10 + 1;
        v13 = &v9[v11];
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      v9 = v56 + 1;
      *v56 = 2;
      v12 = 1;
      a1[7] = v9;
      v13 = v9;
    }
    *v13 = a2;
    *((_DWORD *)v9 - 1) = v12;
    v14 = (_QWORD *)a1[11];
    if ( v14 )
    {
      v15 = *((_DWORD *)v14 - 1);
      if ( v15 == *((_DWORD *)v14 - 2) )
      {
        v32 = (3 * v15 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v33 || v15 >= v32 )
          goto LABEL_80;
        v34 = (unsigned int *)sub_186B300(v14 - 1, v33);
        v35 = v34[1];
        v14 = v34 + 2;
        *v34 = v32;
        a1[11] = v34 + 2;
        LODWORD(v34) = v35;
        v18 = &v14[v35];
        v17 = (_DWORD)v34 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v14[v16];
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0x18u);
      v14 = v55 + 1;
      *v55 = 2;
      v17 = 1;
      a1[11] = v14;
      v18 = v14;
    }
    *v18 = 0;
    *((_DWORD *)v14 - 1) = v17;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_11:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_32:
        sub_D04C80(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      sub_D049F0(a1, a2);
      return 1;
    }
    v30 = sub_1680FB0(a1[4], a2, 0);
    v31 = v30;
    if ( v30 )
    {
      v41 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v30 + 8);
      if ( v41 )
      {
        v42 = *((_DWORD *)v41 - 1);
        if ( v42 == *((_DWORD *)v41 - 2) )
        {
          v58 = (3 * v42 + 1) >> 1;
          v59 = 8 * v58 + 8;
          if ( 8 * v42 + 8 >= v59 || v42 >= v58 )
            goto LABEL_80;
          v60 = (unsigned int *)sub_186B300(v41 - 1, v59);
          v61 = v60[1];
          v41 = v60 + 2;
          *v60 = v58;
          a1[7] = v60 + 2;
          LODWORD(v60) = v61;
          v45 = &v41[v61];
          v44 = (_DWORD)v60 + 1;
        }
        else
        {
          v43 = v42;
          v44 = v42 + 1;
          v45 = &v41[v43];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        *v66 = 2;
        v44 = 1;
        v41 = v66 + 1;
        a1[7] = v41;
        v45 = v41;
      }
      *v45 = v31;
      *((_DWORD *)v41 - 1) = v44;
      if ( a2 != v31 )
      {
        v46 = a1[5];
        if ( v46 )
        {
          v47 = *(_DWORD *)(v46 - 4);
          if ( v47 )
            *(_BYTE *)(v46 + 16LL * (unsigned int)(v47 - 1) + 8) |= 2u;
        }
      }
      v48 = sub_1680FB0(a1[9], a2, 0);
      v49 = v48;
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      v50 = (_QWORD *)a1[11];
      if ( v50 )
      {
        v51 = *((_DWORD *)v50 - 1);
        if ( v51 == *((_DWORD *)v50 - 2) )
        {
          v62 = (3 * v51 + 1) >> 1;
          v63 = 8 * v62 + 8;
          if ( 8 * v51 + 8 >= v63 || v51 >= v62 )
            goto LABEL_80;
          v64 = (unsigned int *)sub_186B300(v50 - 1, v63);
          v65 = v64[1];
          v50 = v64 + 2;
          *v64 = v62;
          a1[11] = v64 + 2;
          LODWORD(v64) = v65;
          v54 = &v50[v65];
          v53 = (_DWORD)v64 + 1;
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
        v67 = (_QWORD *)sub_186B270(0x18u);
        *v67 = 2;
        v53 = 1;
        v50 = v67 + 1;
        a1[11] = v50;
        v54 = v50;
      }
      *v54 = v49;
      *((_DWORD *)v50 - 1) = v53;
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v7 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_32;
  if ( v5 == 2 )
  {
    v19 = 3;
    if ( a3 != 3 )
      v19 = (a3 - 1) & 3;
    v20 = a1[7];
    v21 = v19;
    if ( v20 )
      v22 = *(_DWORD *)(v20 - 4);
    else
      v22 = 0;
    v23 = (_QWORD *)a1[5];
    if ( !v23 )
    {
LABEL_70:
      v57 = (_QWORD *)sub_186B270(0x28u);
      v23 = v57 + 1;
      *v57 = 2;
      a1[5] = v57 + 1;
      v25 = (__int64)(v57 + 1);
      goto LABEL_29;
    }
    v24 = *((unsigned int *)v23 - 1);
    if ( (_DWORD)v24 != *((_DWORD *)v23 - 2) )
      goto LABEL_28;
    v38 = (unsigned int)(3 * v24 + 1) >> 1;
    v39 = 16 * v38 + 8;
    if ( 16 * (int)v24 + 8 < (unsigned int)v39 && (unsigned int)v24 < v38 )
    {
LABEL_53:
      v40 = (unsigned int *)sub_186B300(v23 - 1, v39);
      v23 = v40 + 2;
      a1[5] = v40 + 2;
      *v40 = v38;
      v25 = (__int64)&v40[4 * v40[1] + 2];
      goto LABEL_29;
    }
LABEL_80:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_D03640(v69, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v69);
    sub_233E40((__int64)v69);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_11;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v36 = 3;
  if ( a3 != 3 )
    v36 = (a3 - 1) & 3;
  v37 = a1[7];
  v21 = v36;
  if ( v37 )
    v22 = *(_DWORD *)(v37 - 4);
  else
    v22 = 0;
  v23 = (_QWORD *)a1[5];
  if ( !v23 )
    goto LABEL_70;
  v24 = *((unsigned int *)v23 - 1);
  if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
  {
    v38 = (unsigned int)(3 * v24 + 1) >> 1;
    v39 = 16 * v38 + 8;
    if ( 16 * (int)v24 + 8 >= (unsigned int)v39 || (unsigned int)v24 >= v38 )
      goto LABEL_80;
    goto LABEL_53;
  }
LABEL_28:
  v25 = (__int64)&v23[2 * v24];
LABEL_29:
  *(_QWORD *)v25 = a2;
  *(_DWORD *)(v25 + 12) = v22;
  *(_DWORD *)(v25 + 8) = v7 | (16 * v21);
  ++*((_DWORD *)v23 - 1);
  return 0;
}

