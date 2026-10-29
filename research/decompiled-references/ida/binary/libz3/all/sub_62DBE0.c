__int64 __fastcall sub_62DBE0(__int64 *a1, __int64 *a2)
{
  char **exception; // r12
  unsigned int v3; // r14d
  __int64 v6; // rax
  __int64 i; // rax
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // rax
  unsigned int j; // r15d
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int *v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+Ch] [rbp-7Ch]
  __int64 v28; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29; // [rsp+28h] [rbp-60h] BYREF
  __int64 v30[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  v6 = *a1;
  v29 = 0;
  v28 = v6;
  for ( i = a2[1]; i; ++v3 )
  {
    if ( v3 >= *(_DWORD *)(i - 4) )
      break;
    v8 = *(_QWORD *)(i + 8LL * v3);
    v30[0] = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    sub_62BD60(&v29, v30);
    i = a2[1];
  }
  sub_15EE300(&v28);
  v9 = (_QWORD *)a2[1];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *a2;
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_13;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_13:
    v9 = (_QWORD *)a2[1];
    if ( v9 )
LABEL_14:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = v29;
  for ( j = 0; v29; v14 = v29 )
  {
    if ( j >= *(_DWORD *)(v14 - 4) )
      return sub_2334C0(&v28);
    v16 = *(_QWORD *)(v14 + 8LL * j);
    if ( !*(_WORD *)(v16 + 4) || (v16 = sub_15E1B70(*a1)) != 0 )
    {
      v17 = (_QWORD *)a2[1];
      ++*(_DWORD *)(v16 + 8);
      if ( v17 )
        goto LABEL_19;
    }
    else
    {
      v17 = (_QWORD *)a2[1];
      if ( v17 )
      {
LABEL_19:
        v18 = *((_DWORD *)v17 - 1);
        if ( v18 == *((_DWORD *)v17 - 2) )
        {
          v23 = (3 * v18 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v24 || v18 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v30, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v30);
            sub_233E40((__int64)v30);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = (3 * v18 + 1) >> 1;
          v25 = (unsigned int *)sub_186B300(v17 - 1, v24);
          v17 = v25 + 2;
          a2[1] = (__int64)(v25 + 2);
          *v25 = v27;
          LODWORD(v25) = v25[1];
          v21 = &v17[(unsigned int)v25];
          v20 = (_DWORD)v25 + 1;
        }
        else
        {
          v19 = v18;
          v20 = v18 + 1;
          v21 = &v17[v19];
        }
        goto LABEL_21;
      }
    }
    v26 = (_QWORD *)sub_186B270(0x18u);
    v17 = v26 + 1;
    *v26 = 2;
    v20 = 1;
    a2[1] = (__int64)v17;
    v21 = v17;
LABEL_21:
    *v21 = v16;
    ++j;
    *((_DWORD *)v17 - 1) = v20;
  }
  return sub_2334C0(&v28);
}

