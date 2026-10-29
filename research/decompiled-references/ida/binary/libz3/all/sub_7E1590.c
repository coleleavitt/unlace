_QWORD *__fastcall sub_7E1590(_QWORD *a1, _QWORD *a2)
{
  char **exception; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  unsigned int *v8; // rax
  unsigned int v9; // eax
  _QWORD *v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // r8d
  size_t v14; // rsi
  unsigned int *v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // [rsp+0h] [rbp-88h]
  unsigned int v25; // [rsp+Ch] [rbp-7Ch]
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2[9];
  v5 = (_QWORD *)a2[95];
  *a1 = 0;
  v26 = 0;
  v27 = v4;
  if ( !v5 )
    return a1;
  v6 = &v5[*((unsigned int *)v5 - 1)];
  if ( v6 == v5 )
    goto LABEL_19;
  v24 = a2 + 14;
  do
  {
    while ( 1 )
    {
      sub_14B9BF0(a2[10] + 2192LL, *v5, &v26);
      sub_14B9B80(v24, &v26);
      v9 = sub_7E58C0(a2, v26);
      v10 = (_QWORD *)*a1;
      v11 = v9;
      if ( !*a1 )
      {
        v23 = (_QWORD *)sub_186B270(0x10u);
        v10 = v23 + 1;
        *v23 = 2;
        *a1 = v23 + 1;
        v8 = (unsigned int *)(v23 + 1);
        goto LABEL_5;
      }
      v12 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
        break;
      v8 = (unsigned int *)v10 + v12;
LABEL_5:
      ++v5;
      *v8 = v11;
      ++*((_DWORD *)v10 - 1);
      if ( v6 == v5 )
        goto LABEL_11;
    }
    v13 = (unsigned int)(3 * v12 + 1) >> 1;
    v14 = 4 * v13 + 8;
    if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v28, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v28);
      sub_233E40((__int64)v28);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v25 = (unsigned int)(3 * v12 + 1) >> 1;
    v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
    ++v5;
    *a1 = v15 + 2;
    *v15 = v25;
    v15[v15[1]++ + 2] = v11;
  }
  while ( v6 != v5 );
LABEL_11:
  v5 = (_QWORD *)a2[95];
  if ( v5 )
  {
    v16 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v16 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v17 = *v5;
        if ( *v5 )
        {
          v18 = a2[94];
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v5 >= v16 )
          goto LABEL_18;
      }
      sub_15D7BC0(v18, v17);
      ++v5;
    }
    while ( v5 < v16 );
LABEL_18:
    v5 = (_QWORD *)a2[95];
    if ( v5 )
LABEL_19:
      *((_DWORD *)v5 - 1) = 0;
  }
  v20 = v26;
  v21 = v27;
  if ( v26 )
  {
    v19 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v21, v20);
  }
  return a1;
}

