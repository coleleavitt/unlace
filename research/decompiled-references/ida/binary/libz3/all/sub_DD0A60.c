__int64 __fastcall sub_DD0A60(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, unsigned int **a5)
{
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 *v26; // r15
  __int64 v27; // r14
  __int64 *v28; // rbp
  _QWORD *v29; // rax
  int v30; // eax
  _QWORD *v31; // rsi
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int *v34; // rdx
  __int64 *v35; // r13
  __int64 *v36; // rbp
  _QWORD *v37; // rax
  int v38; // eax
  unsigned int *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // r14d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // r8d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 *v52; // r12
  __int64 v53; // rax
  unsigned __int64 v54; // r13
  __int64 *v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 *v58; // rax
  char **exception; // rbp
  __int64 v61; // [rsp+0h] [rbp-98h]
  unsigned int v62; // [rsp+0h] [rbp-98h]
  __int64 v64; // [rsp+10h] [rbp-88h]
  unsigned int v65; // [rsp+1Ch] [rbp-7Ch]
  __int64 v66; // [rsp+20h] [rbp-78h]
  __int64 v67; // [rsp+20h] [rbp-78h]
  unsigned int v68; // [rsp+28h] [rbp-70h]
  int v69; // [rsp+2Ch] [rbp-6Ch]
  __int64 v70; // [rsp+38h] [rbp-60h] BYREF
  __int64 v71[11]; // [rsp+40h] [rbp-58h] BYREF

  sub_DBF580(*((unsigned int *)a2 + 356), (__int64)"invalid function/constant definition, symbol expected");
  v9 = *((_DWORD *)a2 + 356) == 9;
  v70 = a2[6];
  if ( !v9 )
    sub_DC0980(a2);
  v10 = a2[206];
  if ( v10 )
    v65 = *(_DWORD *)(v10 - 4);
  else
    v65 = 0;
  v11 = sub_DC07A0(a2)[1];
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    v69 = v12;
    v64 = 8 * v12;
  }
  else
  {
    v64 = 0;
    v69 = 0;
  }
  v13 = sub_DC2710(a2)[1];
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 - 4);
    v68 = v14;
    v66 = v14;
  }
  else
  {
    v66 = 0;
    v68 = 0;
  }
  v15 = sub_DCE5D0(a2);
  sub_DC3500(a2, "Invalid recursive function definition");
  v16 = *a2;
  v17 = sub_DC07A0(a2)[1];
  v18 = 0x7FFFFFFF8LL;
  if ( v17 )
    v18 = 8LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
  v61 = *(_QWORD *)(v17 + v18);
  v19 = sub_DC07A0(a2);
  sub_E03BB0(a1, v16, &v70, v15, v19[1] + v64, v61);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = *a3;
  if ( *a3 )
  {
    v22 = a3[1];
    v9 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v22, v21);
  }
  *a3 = v20;
  v23 = sub_DC2710(a2)[1];
  if ( v15 )
  {
    v24 = v66;
    v25 = *(_QWORD **)(a4 + 8);
    v67 = v15;
    v26 = (__int64 *)(v23 + 8 * v24);
    v27 = *v26;
    v28 = (__int64 *)(v23 + 8 * (v15 + v24));
    if ( *v26 )
      ++*(_DWORD *)(v27 + 8);
    if ( v25 )
      goto LABEL_24;
    v29 = (_QWORD *)sub_186B270(0x18u);
    v25 = v29 + 1;
    *v29 = 2;
    v30 = 1;
    *(_QWORD *)(a4 + 8) = v25;
    v31 = v25;
    while ( 1 )
    {
      ++v26;
      *v31 = v27;
      *((_DWORD *)v25 - 1) = v30;
      if ( v28 == v26 )
        break;
      while ( 1 )
      {
        v27 = *v26;
        if ( *v26 )
          ++*(_DWORD *)(v27 + 8);
LABEL_24:
        v32 = *((_DWORD *)v25 - 1);
        if ( v32 == *((_DWORD *)v25 - 2) )
          break;
        ++v26;
        v25[v32] = v27;
        *((_DWORD *)v25 - 1) = v32 + 1;
        if ( v28 == v26 )
          goto LABEL_26;
      }
      v47 = (3 * v32 + 1) >> 1;
      v48 = 8 * v47 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v48 || v32 >= v47 )
      {
LABEL_52:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DBF430(v71, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v71);
        sub_233E40((__int64)v71);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v62 = (3 * v32 + 1) >> 1;
      v49 = (unsigned int *)sub_186B300(v25 - 1, v48);
      v50 = v49[1];
      v25 = v49 + 2;
      *v49 = v62;
      LODWORD(v49) = v50;
      *(_QWORD *)(a4 + 8) = v25;
      v31 = &v25[v50];
      v30 = (_DWORD)v49 + 1;
    }
LABEL_26:
    v33 = a2[206];
    v34 = *a5;
    v35 = (__int64 *)(v33 + 8LL * v65);
    v36 = (__int64 *)(v33 + 8 * (v67 + v65));
    if ( *a5 )
      goto LABEL_30;
    v37 = (_QWORD *)sub_186B270(0x18u);
    v34 = (unsigned int *)(v37 + 1);
    *v37 = 2;
    v38 = 1;
    *a5 = v34;
    v39 = v34;
    while ( 1 )
    {
      v41 = *v35++;
      *(_QWORD *)v39 = v41;
      *(v34 - 1) = v38;
      if ( v36 == v35 )
        break;
LABEL_30:
      v42 = *(v34 - 1);
      if ( v42 == *(v34 - 2) )
      {
        v43 = (3 * v42 + 1) >> 1;
        v44 = 8 * v43 + 8;
        if ( 8 * v42 + 8 >= (unsigned int)v44 || v42 >= v43 )
          goto LABEL_52;
        v45 = (unsigned int *)sub_186B300(v34 - 2, v44);
        v46 = v45[1];
        v34 = v45 + 2;
        *v45 = v43;
        *a5 = v45 + 2;
        v39 = &v45[2 * v46 + 2];
        v38 = v46 + 1;
      }
      else
      {
        v40 = v42;
        v38 = v42 + 1;
        v39 = &v34[2 * v40];
      }
    }
  }
  v51 = a2[206];
  if ( v51 )
    *(_DWORD *)(v51 - 4) = v65;
  v52 = sub_DC07A0(a2);
  v53 = v52[1];
  if ( v53 )
  {
    v54 = v53 + 8LL * *(unsigned int *)(v53 - 4);
    v55 = (__int64 *)(v53 + v64);
    if ( v53 + v64 >= v54 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v56 = *v55;
        if ( *v55 )
        {
          v57 = *v52;
          v9 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( (unsigned __int64)++v55 >= v54 )
          goto LABEL_46;
      }
      sub_15D7BC0(v57, v56);
      ++v55;
    }
    while ( (unsigned __int64)v55 < v54 );
LABEL_46:
    v53 = v52[1];
    if ( v53 )
LABEL_47:
      *(_DWORD *)(v53 - 4) = v69;
  }
  v58 = sub_DC2710(a2);
  sub_39BEE0(v58, v68);
  sub_DCF8B0((__int64)(a2 + 184));
  *((_DWORD *)a2 + 378) = 0;
  return a1;
}

