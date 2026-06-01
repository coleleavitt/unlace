__int64 __fastcall sub_C23F90(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  int v18; // edx
  int v19; // r13d
  _QWORD *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 *v25; // rdx
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  int v28; // r12d
  int v29; // r14d
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned __int8 v39; // dl
  __int64 v40; // rax
  unsigned int v41; // r15d
  size_t v42; // rsi
  char **v43; // rbx
  unsigned int *v44; // rax
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 *v49; // rcx
  __int64 v50; // rax
  int v51; // edx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  unsigned int v54; // r12d
  unsigned int v55; // ecx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // r14d
  unsigned int v59; // ecx
  unsigned int *v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rdx
  _QWORD *v63; // rdx
  char **exception; // r13
  __int64 v65[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v21 = *(_QWORD **)(a1 + 56);
    if ( v21 )
    {
      v22 = *((_DWORD *)v21 - 1);
      if ( v22 == *((_DWORD *)v21 - 2) )
      {
        v33 = (3 * v22 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v34 || v22 >= v33 )
          goto LABEL_57;
        v35 = (unsigned int *)sub_186B300(v21 - 1, v34);
        v36 = v35[1];
        v21 = v35 + 2;
        *v35 = v33;
        *(_QWORD *)(a1 + 56) = v35 + 2;
        LODWORD(v35) = v36;
        v25 = &v21[v36];
        v24 = (_DWORD)v35 + 1;
      }
      else
      {
        v23 = v22;
        v24 = v22 + 1;
        v25 = &v21[v23];
      }
    }
    else
    {
      v52 = (_QWORD *)sub_186B270(0x18u);
      v21 = v52 + 1;
      *v52 = 2;
      v24 = 1;
      *(_QWORD *)(a1 + 56) = v21;
      v25 = v21;
    }
    *v25 = a2;
    *((_DWORD *)v21 - 1) = v24;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v19 = 0;
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
      v7 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_C1BD80(
                           *(__int64 ***)(a1 + 144),
                           *(_QWORD *)(a2 + 16),
                           0,
                           0,
                           (__int64 *)(a1 + 480),
                           (__int64 *)(a1 + 496)) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v65[0] = a2;
        sub_C1B590((_QWORD *)(a1 + 56), v65);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 480);
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        v9 = *(_QWORD **)(a1 + 56);
        if ( v9 )
        {
          v10 = *((_DWORD *)v9 - 1);
          if ( v10 == *((_DWORD *)v9 - 2) )
          {
            v58 = (3 * v10 + 1) >> 1;
            v59 = 8 * v58 + 8;
            if ( 8 * v10 + 8 >= v59 || v10 >= v58 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C1B180(v65, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v65);
              sub_233E40((__int64)v65);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v60 = (unsigned int *)sub_186B300(v9 - 1, v59);
            v61 = v60[1];
            v9 = v60 + 2;
            *v60 = v58;
            *(_QWORD *)(a1 + 56) = v60 + 2;
            LODWORD(v60) = v61;
            v13 = &v9[v61];
            v12 = (_DWORD)v60 + 1;
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
          v63 = (_QWORD *)sub_186B270(0x18u);
          *v63 = 2;
          v12 = 1;
          v9 = v63 + 1;
          *(_QWORD *)(a1 + 56) = v9;
          v13 = v9;
        }
        *v13 = v8;
        v14 = *(_QWORD *)(a1 + 480);
        *((_DWORD *)v9 - 1) = v12;
        if ( v14 )
        {
          v15 = *(_QWORD *)(a1 + 488);
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v15, v14);
        }
        *(_QWORD *)(a1 + 480) = 0;
        v17 = *(_QWORD *)(a1 + 40);
        if ( v17 )
        {
          v18 = *(_DWORD *)(v17 - 4);
          if ( v18 )
            *(_BYTE *)(v17 + 16LL * (unsigned int)(v18 - 1) + 8) |= 2u;
        }
      }
      v16 = (*(_DWORD *)(a2 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v7, a2);
      return 1;
    }
    v37 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v38 = v37;
    if ( v37 )
    {
      v45 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v37 + 8);
      if ( v45 )
      {
        v46 = *((_DWORD *)v45 - 1);
        if ( v46 == *((_DWORD *)v45 - 2) )
        {
          v54 = (3 * v46 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v46 + 8 >= v55 || v46 >= v54 )
            goto LABEL_57;
          v56 = (unsigned int *)sub_186B300(v45 - 1, v55);
          v57 = v56[1];
          v45 = v56 + 2;
          *v56 = v54;
          *(_QWORD *)(a1 + 56) = v56 + 2;
          LODWORD(v56) = v57;
          v49 = &v45[v57];
          v48 = (_DWORD)v56 + 1;
        }
        else
        {
          v47 = v46;
          v48 = v46 + 1;
          v49 = &v45[v47];
        }
      }
      else
      {
        v62 = (_QWORD *)sub_186B270(0x18u);
        *v62 = 2;
        v48 = 1;
        v45 = v62 + 1;
        *(_QWORD *)(a1 + 56) = v45;
        v49 = v45;
      }
      *v49 = v38;
      *((_DWORD *)v45 - 1) = v48;
      if ( a2 != v38 )
      {
        v50 = *(_QWORD *)(a1 + 40);
        if ( v50 )
        {
          v51 = *(_DWORD *)(v50 - 4);
          if ( v51 )
            *(_BYTE *)(v50 + 16LL * (unsigned int)(v51 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v19 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_42:
    sub_C23A80((_QWORD *)a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v26 = 3;
    if ( a3 != 3 )
      v26 = (a3 - 1) & 3;
    v27 = *(_QWORD *)(a1 + 56);
    v28 = v26;
    if ( v27 )
      v29 = *(_DWORD *)(v27 - 4);
    else
      v29 = 0;
    v30 = *(_QWORD **)(a1 + 40);
    if ( !v30 )
    {
LABEL_72:
      v53 = (_QWORD *)sub_186B270(0x28u);
      v30 = v53 + 1;
      *v53 = 2;
      *(_QWORD *)(a1 + 40) = v53 + 1;
      v32 = (__int64)(v53 + 1);
      goto LABEL_39;
    }
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 != *((_DWORD *)v30 - 2) )
      goto LABEL_38;
    v41 = (unsigned int)(3 * v31 + 1) >> 1;
    v42 = 16 * v41 + 8;
    if ( 16 * (int)v31 + 8 < (unsigned int)v42 && (unsigned int)v31 < v41 )
    {
LABEL_60:
      v44 = (unsigned int *)sub_186B300(v30 - 1, v42);
      v30 = v44 + 2;
      *(_QWORD *)(a1 + 40) = v44 + 2;
      *v44 = v41;
      v32 = (__int64)&v44[4 * v44[1] + 2];
      goto LABEL_39;
    }
LABEL_57:
    v43 = (char **)__cxa_allocate_exception(0x28u);
    sub_C1B180(v65, "Overflow encountered when expanding vector");
    *v43 = (char *)off_1C63128;
    sub_2333C0(v43 + 1, v65);
    sub_233E40((__int64)v65);
    __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_24;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v39 = 3;
  if ( a3 != 3 )
    v39 = (a3 - 1) & 3;
  v40 = *(_QWORD *)(a1 + 56);
  v28 = v39;
  if ( v40 )
    v29 = *(_DWORD *)(v40 - 4);
  else
    v29 = 0;
  v30 = *(_QWORD **)(a1 + 40);
  if ( !v30 )
    goto LABEL_72;
  v31 = *((unsigned int *)v30 - 1);
  if ( (_DWORD)v31 == *((_DWORD *)v30 - 2) )
  {
    v41 = (unsigned int)(3 * v31 + 1) >> 1;
    v42 = 16 * v41 + 8;
    if ( 16 * (int)v31 + 8 >= (unsigned int)v42 || (unsigned int)v31 >= v41 )
      goto LABEL_57;
    goto LABEL_60;
  }
LABEL_38:
  v32 = (__int64)&v30[2 * v31];
LABEL_39:
  *(_QWORD *)v32 = a2;
  *(_DWORD *)(v32 + 12) = v29;
  *(_DWORD *)(v32 + 8) = v19 | (16 * v28);
  ++*((_DWORD *)v30 - 1);
  return 0;
}

