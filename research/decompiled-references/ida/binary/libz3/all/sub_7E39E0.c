int **__fastcall sub_7E39E0(__int64 a1, unsigned int **a2, int **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  __int64 *v11; // rbx
  unsigned int v12; // ecx
  size_t v13; // r15
  __int64 *v14; // rbp
  int v15; // esi
  __int64 v16; // rcx
  __int64 *v17; // r8
  int **result; // rax
  _QWORD *v19; // rdi
  int **v20; // rdx
  __int64 *v21; // rax
  int v22; // r8d
  __int64 *v23; // r14
  __int64 *v24; // r9
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rdx
  _OWORD *v29; // rax
  _QWORD *v30; // rcx
  unsigned int *v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  void **v34; // r14
  unsigned int v35; // ebp
  unsigned int v36; // edx
  size_t v37; // rsi
  unsigned int v38; // r14d
  unsigned int *v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD *v43; // rdx
  unsigned int v44; // esi
  __int64 v45; // rdi
  int v46; // esi
  _QWORD *v47; // rdi
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  unsigned int v51; // ebx
  unsigned int v52; // eax
  unsigned int *v53; // rax
  __int64 v54; // rax
  int v55; // esi
  char **exception; // rbx
  int v57; // [rsp+8h] [rbp-80h]
  unsigned int v58; // [rsp+8h] [rbp-80h]
  unsigned int v59; // [rsp+8h] [rbp-80h]
  _QWORD *v60; // [rsp+8h] [rbp-80h]
  int v61; // [rsp+10h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  __int64 v63[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    v7 = **a2;
    if ( (unsigned int)v7 < *(_DWORD *)(v6 - 4) )
    {
      v8 = *(_QWORD *)(v6 + 8 * v7);
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 > 7 )
        goto LABEL_4;
    }
  }
  v9 = sub_186B270(0x18u);
  v29 = (_OWORD *)sub_186B270(0x40u);
  v30 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(v9 + 8) = 8;
  *(_QWORD *)v9 = v29;
  *v29 = 0;
  v29[1] = 0;
  v29[2] = 0;
  v29[3] = 0;
  v31 = *a2;
  *(_DWORD *)(v9 + 16) = 0;
  if ( !v30 || (v32 = *v31, (unsigned int)v32 >= *((_DWORD *)v30 - 1)) || (v33 = v30[v32]) == 0 )
  {
    v43 = *(_QWORD **)(a1 + 64);
    if ( v43 )
    {
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 == *((_DWORD *)v43 - 2) )
      {
        v51 = (3 * v44 + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * v44 + 8 >= v52 || v44 >= v51 )
        {
LABEL_82:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v63, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v63);
          sub_233E40((__int64)v63);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (unsigned int *)sub_186B300(v43 - 1, v52);
        v30 = *(_QWORD **)(a1 + 56);
        v43 = v53 + 2;
        *v53 = v51;
        v54 = v53[1];
        *(_QWORD *)(a1 + 64) = v43;
        v55 = v54;
        v47 = &v43[v54];
        v31 = *a2;
        v46 = v55 + 1;
      }
      else
      {
        v45 = v44;
        v46 = v44 + 1;
        v47 = &v43[v45];
      }
    }
    else
    {
      v49 = (_QWORD *)sub_186B270(0x18u);
      v30 = *(_QWORD **)(a1 + 56);
      v46 = 1;
      v50 = v49;
      *v49 = 2;
      v31 = *a2;
      v43 = v50 + 1;
      *(_QWORD *)(a1 + 64) = v43;
      v47 = v43;
    }
    *v47 = a2;
    *((_DWORD *)v43 - 1) = v46;
    goto LABEL_49;
  }
  v34 = (void **)(v33 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v33 > 7 )
  {
    if ( *v34 )
      sub_186B220(*v34);
    sub_186B220(v34);
    v31 = *a2;
    v30 = *(_QWORD **)(a1 + 56);
LABEL_49:
    v32 = *v31;
    v62 = v9 | 1;
    if ( v30 )
    {
      v59 = *((_DWORD *)v30 - 1);
      if ( (unsigned int)v32 >= v59 )
      {
        v35 = v32 + 1;
        if ( v59 < (int)v32 + 1 )
          goto LABEL_56;
        *((_DWORD *)v30 - 1) = v35;
      }
    }
    else
    {
      v35 = v32 + 1;
      if ( (_DWORD)v32 == -1 )
      {
        v32 = 0xFFFFFFFFLL;
      }
      else
      {
        v48 = (_QWORD *)sub_186B270(0x18u);
        v59 = 0;
        v30 = v48 + 1;
        *v48 = 2;
        *(_QWORD *)(a1 + 56) = v48 + 1;
LABEL_56:
        while ( 1 )
        {
          v40 = *((_DWORD *)v30 - 2);
          if ( v40 >= v35 )
            break;
          v36 = (3 * v40 + 1) >> 1;
          v37 = 8 * v36 + 8;
          v38 = v36;
          if ( 8 * v40 + 8 >= (unsigned int)v37 || v40 >= v36 )
            goto LABEL_82;
          v39 = (unsigned int *)sub_186B300(v30 - 1, v37);
          v30 = v39 + 2;
          *v39 = v38;
          *(_QWORD *)(a1 + 56) = v39 + 2;
        }
        *((_DWORD *)v30 - 1) = v35;
        v41 = 8LL * v35;
        v42 = 8LL * v59;
        if ( v42 != v41 )
        {
          v60 = v30;
          memset(&v30[(unsigned __int64)v42 / 8], 0, v41 - v42);
          v30 = v60;
        }
      }
    }
    goto LABEL_59;
  }
  v62 = v9 | 1;
LABEL_59:
  v30[v32] = v62;
LABEL_4:
  v10 = *(unsigned int *)(v9 + 8);
  if ( 3 * (int)v10 < (unsigned int)(4 * (*(_DWORD *)(v9 + 12) + *(_DWORD *)(v9 + 16))) )
  {
    v57 = 2 * v10;
    v13 = 8LL * (unsigned int)(2 * v10);
    v21 = (__int64 *)sub_186B270(v13);
    v22 = v57;
    v11 = v21;
    if ( v57 )
    {
      memset(v21, 0, v13);
      v22 = v57;
    }
    v23 = *(__int64 **)v9;
    v12 = v22 - 1;
    v14 = &v11[v13 / 8];
    v24 = (__int64 *)(*(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8));
    if ( *(__int64 **)v9 != v24 )
    {
      do
      {
        while ( (unsigned __int64)*v23 <= 1 )
        {
          if ( v24 == ++v23 )
            goto LABEL_33;
        }
        v25 = 8LL * (**(_DWORD **)*v23 & v12);
        v26 = &v11[(unsigned __int64)v25 / 8];
        if ( v13 == v25 )
        {
LABEL_37:
          if ( v11 == v26 )
          {
LABEL_67:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v27 = v11;
          while ( *v27 )
          {
            if ( v26 == ++v27 )
              goto LABEL_67;
          }
        }
        else
        {
          v27 = &v11[(unsigned __int64)v25 / 8];
          while ( *v27 )
          {
            if ( v14 == ++v27 )
              goto LABEL_37;
          }
        }
        v28 = *v23++;
        *v27 = v28;
      }
      while ( v24 != v23 );
LABEL_33:
      v24 = *(__int64 **)v9;
    }
    if ( v24 )
    {
      v61 = v22;
      v58 = v22 - 1;
      sub_186B220(v24);
      v22 = v61;
      v12 = v58;
    }
    *(_QWORD *)v9 = v11;
    *(_DWORD *)(v9 + 8) = v22;
    *(_DWORD *)(v9 + 16) = 0;
  }
  else
  {
    v11 = *(__int64 **)v9;
    v12 = v10 - 1;
    v13 = 8 * v10;
    v14 = (__int64 *)(*(_QWORD *)v9 + v13);
  }
  v15 = **a3;
  v16 = v15 & v12;
  v17 = &v11[v16];
  if ( 8 * v16 != v13 )
  {
    result = (int **)&v11[v16];
    v19 = nullptr;
    while ( 1 )
    {
      v20 = (int **)*result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( **v20 == v15 && a3 == v20 )
        {
          *result = (int *)a3;
          return result;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_61;
          v19 = result;
          goto LABEL_62;
        }
        v19 = result;
      }
      if ( ++result == (int **)v14 )
        goto LABEL_17;
    }
  }
  v19 = nullptr;
  while ( 1 )
  {
LABEL_17:
    if ( v17 == v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (int **)*v11;
    if ( (unsigned __int64)*v11 <= 1 )
      break;
    if ( **result == v15 && a3 == result )
    {
      *v11 = (__int64)a3;
      return result;
    }
LABEL_16:
    ++v11;
  }
  if ( result )
  {
    v19 = v11;
    goto LABEL_16;
  }
  if ( v19 )
LABEL_61:
    --*(_DWORD *)(v9 + 16);
  else
    v19 = v11;
LABEL_62:
  *v19 = a3;
  ++*(_DWORD *)(v9 + 12);
  return result;
}

