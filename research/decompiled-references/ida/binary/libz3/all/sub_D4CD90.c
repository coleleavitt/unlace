__int64 __fastcall sub_D4CD90(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rax
  int v19; // edx
  int v20; // r13d
  _QWORD *v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 *v26; // rdx
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  int v29; // r12d
  int v30; // r14d
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r12d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r13
  unsigned __int8 v40; // dl
  __int64 v41; // rax
  unsigned int v42; // r15d
  size_t v43; // rsi
  char **v44; // rbx
  unsigned int *v45; // rax
  unsigned int v46; // eax
  _QWORD *v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 *v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  unsigned int v56; // r12d
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  __int64 v59; // rcx
  unsigned int v60; // r14d
  unsigned int v61; // ecx
  unsigned int *v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rdx
  _QWORD *v65; // rdx
  unsigned int v66; // r13d
  unsigned int v67; // ecx
  unsigned int *v68; // rax
  _QWORD *v69; // rdx
  char **exception; // r13
  char **v71; // r13
  __int64 v72[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v22 = (_QWORD *)a1[7];
    if ( v22 )
    {
      v23 = *((_DWORD *)v22 - 1);
      if ( v23 == *((_DWORD *)v22 - 2) )
      {
        v34 = (3 * v23 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v35 || v23 >= v34 )
          goto LABEL_57;
        v36 = (unsigned int *)sub_186B300(v22 - 1, v35);
        v37 = v36[1];
        v22 = v36 + 2;
        *v36 = v34;
        a1[7] = v36 + 2;
        LODWORD(v36) = v37;
        v26 = &v22[v37];
        v25 = (_DWORD)v36 + 1;
      }
      else
      {
        v24 = v23;
        v25 = v23 + 1;
        v26 = &v22[v24];
      }
    }
    else
    {
      v54 = (_QWORD *)sub_186B270(0x18u);
      v22 = v54 + 1;
      *v54 = 2;
      v25 = 1;
      a1[7] = v22;
      v26 = v22;
    }
    *v26 = a2;
    *((_DWORD *)v22 - 1) = v25;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v20 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_24:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_42;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = a1[1];
      ++*(_DWORD *)(a2 + 8);
      v8 = sub_D48360(a1[18], *(_QWORD *)(a2 + 16), 0, 0, a1 + 60, (__int64)(a1 + 62));
      v9 = (_QWORD *)a1[7];
      if ( v8 == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        if ( v9 )
        {
          v46 = *((_DWORD *)v9 - 1);
          if ( v46 == *((_DWORD *)v9 - 2) )
          {
            v66 = (3 * v46 + 1) >> 1;
            v67 = 8 * v66 + 8;
            if ( 8 * v46 + 8 >= v67 || v46 >= v66 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_D47290(v72, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v72);
              sub_233E40((__int64)v72);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v68 = (unsigned int *)sub_186B300(v9 - 1, v67);
            v9 = v68 + 2;
            *v68 = v66;
            v46 = v68[1];
            a1[7] = v9;
          }
        }
        else
        {
          v69 = (_QWORD *)sub_186B270(0x18u);
          *v69 = 2;
          v46 = 0;
          v9 = v69 + 1;
          a1[7] = v9;
        }
        v9[v46] = a2;
        *((_DWORD *)v9 - 1) = v46 + 1;
      }
      else
      {
        v10 = a1[60];
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        if ( v9 )
        {
          v11 = *((_DWORD *)v9 - 1);
          if ( v11 == *((_DWORD *)v9 - 2) )
          {
            v60 = (3 * v11 + 1) >> 1;
            v61 = 8 * v60 + 8;
            if ( 8 * v11 + 8 >= v61 || v11 >= v60 )
            {
              v71 = (char **)__cxa_allocate_exception(0x28u);
              sub_D47290(v72, "Overflow encountered when expanding vector");
              *v71 = (char *)off_1C63128;
              sub_2333C0(v71 + 1, v72);
              sub_233E40((__int64)v72);
              __cxa_throw(v71, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = (unsigned int *)sub_186B300(v9 - 1, v61);
            v63 = v62[1];
            v9 = v62 + 2;
            *v62 = v60;
            a1[7] = v62 + 2;
            LODWORD(v62) = v63;
            v14 = &v9[v63];
            v13 = (_DWORD)v62 + 1;
          }
          else
          {
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v9[v12];
          }
        }
        else
        {
          v65 = (_QWORD *)sub_186B270(0x18u);
          *v65 = 2;
          v13 = 1;
          v9 = v65 + 1;
          a1[7] = v9;
          v14 = v9;
        }
        *v14 = v10;
        v15 = a1[60];
        *((_DWORD *)v9 - 1) = v13;
        if ( v15 )
        {
          v16 = a1[61];
          v17 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v16, v15);
        }
        a1[60] = 0;
        v18 = a1[5];
        if ( v18 )
        {
          v19 = *(_DWORD *)(v18 - 4);
          if ( v19 )
            *(_BYTE *)(v18 + 16LL * (unsigned int)(v19 - 1) + 8) |= 2u;
        }
      }
      v17 = (*(_DWORD *)(a2 + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v7, a2);
      return 1;
    }
    v38 = sub_1680FB0(a1[4], a2, 0);
    v39 = v38;
    if ( v38 )
    {
      v47 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v38 + 8);
      if ( v47 )
      {
        v48 = *((_DWORD *)v47 - 1);
        if ( v48 == *((_DWORD *)v47 - 2) )
        {
          v56 = (3 * v48 + 1) >> 1;
          v57 = 8 * v56 + 8;
          if ( 8 * v48 + 8 >= v57 || v48 >= v56 )
            goto LABEL_57;
          v58 = (unsigned int *)sub_186B300(v47 - 1, v57);
          v59 = v58[1];
          v47 = v58 + 2;
          *v58 = v56;
          a1[7] = v58 + 2;
          LODWORD(v58) = v59;
          v51 = &v47[v59];
          v50 = (_DWORD)v58 + 1;
        }
        else
        {
          v49 = v48;
          v50 = v48 + 1;
          v51 = &v47[v49];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x18u);
        *v64 = 2;
        v50 = 1;
        v47 = v64 + 1;
        a1[7] = v47;
        v51 = v47;
      }
      *v51 = v39;
      *((_DWORD *)v47 - 1) = v50;
      if ( a2 != v39 )
      {
        v52 = a1[5];
        if ( v52 )
        {
          v53 = *(_DWORD *)(v52 - 4);
          if ( v53 )
            *(_BYTE *)(v52 + 16LL * (unsigned int)(v53 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v20 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_42:
    sub_D4C880(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v27 = 3;
    if ( a3 != 3 )
      v27 = (a3 - 1) & 3;
    v28 = a1[7];
    v29 = v27;
    if ( v28 )
      v30 = *(_DWORD *)(v28 - 4);
    else
      v30 = 0;
    v31 = (_QWORD *)a1[5];
    if ( !v31 )
    {
LABEL_74:
      v55 = (_QWORD *)sub_186B270(0x28u);
      v31 = v55 + 1;
      *v55 = 2;
      a1[5] = v55 + 1;
      v33 = (__int64)(v55 + 1);
      goto LABEL_39;
    }
    v32 = *((unsigned int *)v31 - 1);
    if ( (_DWORD)v32 != *((_DWORD *)v31 - 2) )
      goto LABEL_38;
    v42 = (unsigned int)(3 * v32 + 1) >> 1;
    v43 = 16 * v42 + 8;
    if ( 16 * (int)v32 + 8 < (unsigned int)v43 && (unsigned int)v32 < v42 )
    {
LABEL_60:
      v45 = (unsigned int *)sub_186B300(v31 - 1, v43);
      v31 = v45 + 2;
      a1[5] = v45 + 2;
      *v45 = v42;
      v33 = (__int64)&v45[4 * v45[1] + 2];
      goto LABEL_39;
    }
LABEL_57:
    v44 = (char **)__cxa_allocate_exception(0x28u);
    sub_D47290(v72, "Overflow encountered when expanding vector");
    *v44 = (char *)off_1C63128;
    sub_2333C0(v44 + 1, v72);
    sub_233E40((__int64)v72);
    __cxa_throw(v44, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_24;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v40 = 3;
  if ( a3 != 3 )
    v40 = (a3 - 1) & 3;
  v41 = a1[7];
  v29 = v40;
  if ( v41 )
    v30 = *(_DWORD *)(v41 - 4);
  else
    v30 = 0;
  v31 = (_QWORD *)a1[5];
  if ( !v31 )
    goto LABEL_74;
  v32 = *((unsigned int *)v31 - 1);
  if ( (_DWORD)v32 == *((_DWORD *)v31 - 2) )
  {
    v42 = (unsigned int)(3 * v32 + 1) >> 1;
    v43 = 16 * v42 + 8;
    if ( 16 * (int)v32 + 8 >= (unsigned int)v43 || (unsigned int)v32 >= v42 )
      goto LABEL_57;
    goto LABEL_60;
  }
LABEL_38:
  v33 = (__int64)&v31[2 * v32];
LABEL_39:
  *(_QWORD *)v33 = a2;
  *(_DWORD *)(v33 + 12) = v30;
  *(_DWORD *)(v33 + 8) = v20 | (16 * v29);
  ++*((_DWORD *)v31 - 1);
  return 0;
}

