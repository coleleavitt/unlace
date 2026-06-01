_QWORD *__fastcall sub_6A0A60(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  _DWORD *v11; // rdi
  unsigned int v12; // edx
  size_t v13; // rsi
  unsigned int v14; // r14d
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r14
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  _QWORD *v26; // rsi
  bool v27; // zf
  __int64 *v28; // r12
  __int64 v29; // rsi
  unsigned int v31; // r8d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rax
  char **exception; // r14
  char **v37; // r15
  unsigned int v38; // [rsp+10h] [rbp-88h]
  __int64 v39; // [rsp+10h] [rbp-88h]
  __int64 v40; // [rsp+10h] [rbp-88h]
  __int64 v41; // [rsp+10h] [rbp-88h]
  unsigned int v42; // [rsp+1Ch] [rbp-7Ch]
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  __int64 *i; // [rsp+38h] [rbp-60h]
  __int64 v45[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a2[1];
  v7 = a2[424];
  a1[1] = 0;
  i = nullptr;
  *a1 = v6;
  v43 = v6;
  v8 = a2[485];
  if ( v8 )
  {
    v38 = *(_DWORD *)(v8 - 4);
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    v38 = 0;
    if ( !v7 )
    {
      sub_7E6B80(a2 + 581, &v43);
      v17 = i;
      goto LABEL_21;
    }
  }
  v9 = 2 * *(_DWORD *)(v7 - 4);
  if ( v9 )
  {
    v10 = (_QWORD *)sub_186B270(0x18u);
    v11 = v10 + 1;
    *v10 = 2;
    for ( i = v10 + 1; ; i = (__int64 *)(v15 + 2) )
    {
      v16 = *(v11 - 2);
      if ( v16 >= v9 )
        break;
      v12 = (3 * v16 + 1) >> 1;
      v13 = 8 * v12 + 8;
      v14 = v12;
      if ( 8 * v16 + 8 >= (unsigned int)v13 || v16 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v45, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v45);
        sub_233E40((__int64)v45);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v11 - 2, v13);
      v11 = v15 + 2;
      *v15 = v14;
    }
    *(v11 - 1) = v9;
    memset(v11, 0, 8LL * v9);
  }
LABEL_10:
  sub_7E6B80(a2 + 581, &v43);
  v17 = i;
  if ( v38 )
  {
    v18 = 0;
    v19 = 4LL * v38;
    while ( 1 )
    {
      if ( a3 < *(_DWORD *)(a2[424] + 24LL * (*(_DWORD *)(a2[485] + v18) >> 1)) )
        goto LABEL_13;
      v20 = v17[*(unsigned int *)(a2[485] + v18)];
      if ( !v20 )
        goto LABEL_13;
      v21 = (_QWORD *)a1[1];
      v22 = a2[1];
      *(_DWORD *)(v20 + 8) += 2;
      if ( v21 )
      {
        v23 = *((_DWORD *)v21 - 1);
        if ( v23 == *((_DWORD *)v21 - 2) )
        {
          v31 = (3 * v23 + 1) >> 1;
          v32 = 8 * v31 + 8;
          if ( 8 * v23 + 8 >= (unsigned int)v32 || v23 >= v31 )
          {
            v37 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v45, "Overflow encountered when expanding vector");
            *v37 = (char *)off_1C63128;
            sub_2333C0(v37 + 1, v45);
            sub_233E40((__int64)v45);
            __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (3 * v23 + 1) >> 1;
          v40 = v19;
          v33 = (unsigned int *)sub_186B300(v21 - 1, v32);
          v34 = v33[1];
          v21 = v33 + 2;
          a1[1] = v33 + 2;
          v19 = v40;
          *v33 = v42;
          LODWORD(v33) = v34;
          v26 = &v21[v34];
          v25 = (_DWORD)v33 + 1;
        }
        else
        {
          v24 = v23;
          v25 = v23 + 1;
          v26 = &v21[v24];
        }
      }
      else
      {
        v41 = v19;
        v35 = (_QWORD *)sub_186B270(0x18u);
        v21 = v35 + 1;
        *v35 = 2;
        v19 = v41;
        v25 = 1;
        a1[1] = v21;
        v26 = v21;
      }
      *v26 = v20;
      *((_DWORD *)v21 - 1) = v25;
      v27 = (*(_DWORD *)(v20 + 8))-- == 1;
      if ( v27 )
      {
        v39 = v19;
        v18 += 4;
        sub_15D7BC0(v22, v20);
        v19 = v39;
        v17 = i;
        if ( v39 == v18 )
          break;
      }
      else
      {
        v17 = i;
LABEL_13:
        v18 += 4;
        if ( v19 == v18 )
          break;
      }
    }
  }
LABEL_21:
  if ( v17 )
  {
    v28 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v28 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v29 = *v17;
        if ( *v17 )
        {
          v27 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v27 )
            break;
        }
        if ( ++v17 >= v28 )
          goto LABEL_28;
      }
      sub_15D7BC0(v43, v29);
      ++v17;
    }
    while ( v17 < v28 );
LABEL_28:
    v17 = i;
    if ( i )
LABEL_29:
      sub_186B220(v17 - 1);
  }
  return a1;
}

