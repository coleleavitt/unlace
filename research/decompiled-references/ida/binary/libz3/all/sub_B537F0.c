__int64 *__fastcall sub_B537F0(__int64 *a1, _QWORD *a2)
{
  char **exception; // r13
  __int64 v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // ecx
  size_t v17; // rsi
  unsigned int *v18; // rax
  _QWORD *v19; // rbp
  _QWORD *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbp
  unsigned __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rdi
  _QWORD *v37; // rax
  unsigned int v38; // [rsp+14h] [rbp-94h]
  __int64 v39; // [rsp+18h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-78h] BYREF
  __int64 v41; // [rsp+38h] [rbp-70h]
  __int64 v42; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+48h] [rbp-60h]
  __int64 v44[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = a2[3];
  v6 = (_QWORD *)a2[88];
  *a1 = 0;
  v40 = 0;
  a1[1] = v5;
  v7 = a2[3];
  v42 = 0;
  v39 = v7;
  v41 = v7;
  v43 = v7;
  if ( !v6 )
    goto LABEL_44;
  v8 = &v6[*((unsigned int *)v6 - 1)];
  if ( v8 == v6 )
  {
    *((_DWORD *)v8 - 1) = 0;
LABEL_44:
    LODWORD(v24) = v7;
    v10 = nullptr;
    goto LABEL_22;
  }
  v9 = v6;
  v10 = nullptr;
  sub_14BB8A0(a2[2] + 7456LL, *v6, &v40, &v42);
  while ( 1 )
  {
    v14 = v40;
    if ( v10 )
    {
      v15 = *((_DWORD *)v10 - 1);
      if ( v15 == *((_DWORD *)v10 - 2) )
      {
        v16 = (3 * v15 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v44, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v44);
          sub_233E40((__int64)v44);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (3 * v15 + 1) >> 1;
        v18 = (unsigned int *)sub_186B300(v10 - 1, v17);
        v10 = v18 + 2;
        *v18 = v38;
        LODWORD(v18) = v18[1];
        v13 = &v10[(unsigned int)v18];
        v12 = (_DWORD)v18 + 1;
      }
      else
      {
        v11 = v15;
        v12 = v15 + 1;
        v13 = &v10[v11];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x18u);
      v10 = v37 + 1;
      *v37 = 2;
      v12 = 1;
      v13 = v10;
    }
    ++v9;
    *v13 = v14;
    v40 = 0;
    *((_DWORD *)v10 - 1) = v12;
    if ( v8 == v9 )
      break;
    sub_14BB8A0(a2[2] + 7456LL, *v9, &v40, &v42);
  }
  v19 = (_QWORD *)a2[88];
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = a2[87];
          v23 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_19;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_19:
    v19 = (_QWORD *)a2[88];
    if ( v19 )
LABEL_20:
      *((_DWORD *)v19 - 1) = 0;
  }
  v24 = a2[3];
LABEL_22:
  v25 = sub_15E1AF0(v24);
  v26 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v27 = *a1;
  if ( *a1 )
  {
    v28 = a1[1];
    v23 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v28, v27);
  }
  *a1 = v26;
  sub_14B9B80(a2 + 7, a1);
  v29 = v42;
  if ( v42 )
  {
    v30 = v43;
    v23 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v30, v29);
  }
  if ( v10 )
  {
    v31 = v10;
    v32 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v32 )
    {
      do
      {
        while ( 1 )
        {
          v33 = *v31;
          if ( *v31 )
          {
            v23 = (*(_DWORD *)(v33 + 8))-- == 1;
            if ( v23 )
              break;
          }
          if ( (unsigned __int64)++v31 >= v32 )
            goto LABEL_37;
        }
        ++v31;
        sub_15D7BC0(v39, v33);
      }
      while ( (unsigned __int64)v31 < v32 );
    }
LABEL_37:
    sub_186B220(v10 - 1);
  }
  v34 = v40;
  if ( v40 )
  {
    v35 = v41;
    v23 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v35, v34);
  }
  return a1;
}

