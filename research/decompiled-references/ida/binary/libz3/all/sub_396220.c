__int64 __fastcall sub_396220(_QWORD *a1, __int64 a2)
{
  void *v2; // rbx
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  __int64 v9; // r12
  _QWORD *v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // edx
  unsigned int v17; // ecx
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rbp
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  _QWORD *v38; // rsi
  __int64 *v39; // rbp
  unsigned __int64 v40; // r13
  __int64 v41; // rsi
  unsigned int v43; // ecx
  size_t v44; // rsi
  unsigned int *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // ebp
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rsi
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  char **exception; // rbp
  char **v54; // rbp
  char **v55; // rbp
  int v56; // [rsp-8h] [rbp-78h]
  unsigned int v57; // [rsp+0h] [rbp-70h]
  unsigned int v58; // [rsp+0h] [rbp-70h]
  int v59[2]; // [rsp+0h] [rbp-70h]
  int v60[2]; // [rsp+0h] [rbp-70h]
  int v61; // [rsp+8h] [rbp-68h]
  int v62; // [rsp+10h] [rbp-60h]
  __int64 v63; // [rsp+18h] [rbp-58h] BYREF
  __int64 v64; // [rsp+20h] [rbp-50h]
  int v65; // [rsp+28h] [rbp-48h]
  int v66; // [rsp+30h] [rbp-40h]
  int v67; // [rsp+38h] [rbp-38h]
  void *v68; // [rsp+40h] [rbp-30h]

  if ( !a1[7] )
    return 0;
  v68 = v2;
  v5 = a1[4];
  sub_DFBCB0(v5);
  v8 = *(_DWORD *)(a2 + 32);
  v9 = *(_QWORD *)(v5 + 296);
  v10 = nullptr;
  if ( v8 )
  {
    v11 = 0;
    while ( 1 )
    {
      v14 = sub_15DB5C0(v9, v11, *(_QWORD *)(a2 + 8LL * v11 + 48));
      v15 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      if ( !v10 )
        break;
      v16 = *((_DWORD *)v10 - 1);
      if ( v16 == *((_DWORD *)v10 - 2) )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 8 * v17 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v63, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v63);
          sub_233E40((__int64)&v63);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (3 * v16 + 1) >> 1;
        v19 = (unsigned int *)sub_186B300(v10 - 1, v18);
        v10 = v19 + 2;
        ++v11;
        *v19 = v57;
        v20 = v19[1];
        v8 = v20 + 1;
        v10[v20] = v15;
        *((_DWORD *)v10 - 1) = v20 + 1;
        if ( v11 >= *(_DWORD *)(a2 + 32) )
          goto LABEL_13;
      }
      else
      {
        v12 = v16;
        v8 = v16 + 1;
        v13 = &v10[v12];
LABEL_5:
        *v13 = v15;
        ++v11;
        *((_DWORD *)v10 - 1) = v8;
        if ( v11 >= *(_DWORD *)(a2 + 32) )
          goto LABEL_13;
      }
    }
    v46 = (_QWORD *)sub_186B270(0x18u);
    v10 = v46 + 1;
    *v46 = 2;
    v8 = 1;
    v13 = v46 + 1;
    goto LABEL_5;
  }
LABEL_13:
  v21 = sub_15DC610(v9, a2, v8, (int)v10, v6, v7, v56, v57, v61, v62, v63, v64, v65, v66, v67, v68);
  v22 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_64B4C0(&v63, a1[10], v21, 0);
  v23 = v63;
  v63 = v22;
  if ( v22 )
  {
    v24 = v64;
    v25 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v24, v22);
      v26 = a1[7];
      if ( !v23 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  v26 = a1[7];
  if ( v23 )
LABEL_18:
    ++*(_DWORD *)(v23 + 8);
LABEL_19:
  v27 = *(_QWORD **)(v26 + 32);
  if ( v27 )
  {
    v28 = *((_DWORD *)v27 - 1);
    if ( v28 == *((_DWORD *)v27 - 2) )
    {
      v43 = (3 * v28 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v44 || v28 >= v43 )
      {
        v55 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v63, "Overflow encountered when expanding vector");
        *v55 = (char *)off_1C63128;
        sub_2333C0(v55 + 1, &v63);
        sub_233E40((__int64)&v63);
        __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58 = (3 * v28 + 1) >> 1;
      v45 = (unsigned int *)sub_186B300(v27 - 1, v44);
      v27 = v45 + 2;
      *(_QWORD *)(v26 + 32) = v45 + 2;
      v26 = a1[7];
      *v45 = v58;
      LODWORD(v45) = v45[1];
      v31 = &v27[(unsigned int)v45];
      v30 = (_DWORD)v45 + 1;
    }
    else
    {
      v29 = v28;
      v30 = v28 + 1;
      v31 = &v27[v29];
    }
  }
  else
  {
    v52 = (_QWORD *)sub_186B270(0x18u);
    v27 = v52 + 1;
    *v52 = 2;
    v30 = 1;
    *(_QWORD *)(v26 + 32) = v27;
    v31 = v27;
    v26 = a1[7];
  }
  *v31 = v23;
  *((_DWORD *)v27 - 1) = v30;
  v32 = (_QWORD *)sub_180C100(a1 + 13, 16);
  v33 = (_QWORD *)a1[11];
  v34 = v32;
  *v32 = off_1C4DF80;
  v32[1] = v26 + 24;
  if ( v33 )
  {
    v35 = *((_DWORD *)v33 - 1);
    if ( v35 == *((_DWORD *)v33 - 2) )
    {
      v47 = (3 * v35 + 1) >> 1;
      v48 = 8 * v47 + 8;
      if ( 8 * v35 + 8 >= (unsigned int)v48 || v35 >= v47 )
      {
        v54 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v63, "Overflow encountered when expanding vector");
        *v54 = (char *)off_1C63128;
        sub_2333C0(v54 + 1, &v63);
        sub_233E40((__int64)&v63);
        __cxa_throw(v54, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      *(_QWORD *)v59 = v34;
      v49 = (unsigned int *)sub_186B300(v33 - 1, v48);
      v50 = v49[1];
      v33 = v49 + 2;
      v34 = *(_QWORD **)v59;
      *v49 = v47;
      a1[11] = v49 + 2;
      LODWORD(v49) = v50;
      v38 = &v33[v50];
      v37 = (_DWORD)v49 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v33[v36];
    }
  }
  else
  {
    *(_QWORD *)v60 = v32;
    v51 = (_QWORD *)sub_186B270(0x18u);
    v33 = v51 + 1;
    *v51 = 2;
    v34 = *(_QWORD **)v60;
    v37 = 1;
    a1[11] = v33;
    v38 = v33;
  }
  *v38 = v34;
  *((_DWORD *)v33 - 1) = v37;
  if ( v10 )
  {
    v39 = v10;
    v40 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v40 )
    {
      do
      {
        while ( 1 )
        {
          v41 = *v39;
          if ( *v39 )
          {
            v25 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( (unsigned __int64)++v39 >= v40 )
            goto LABEL_32;
        }
        ++v39;
        sub_15D7BC0(v9, v41);
      }
      while ( (unsigned __int64)v39 < v40 );
    }
LABEL_32:
    sub_186B220(v10 - 1);
  }
  if ( v23 )
  {
    v25 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v9, v23);
  }
  return 1;
}

