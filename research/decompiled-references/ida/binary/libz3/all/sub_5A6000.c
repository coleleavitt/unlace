__int64 __fastcall sub_5A6000(__int64 **a1)
{
  char **exception; // rbx
  __int64 *v2; // r13
  __int64 v3; // rax
  __int64 v4; // rdx
  size_t v5; // rbp
  _QWORD *v6; // rax
  _DWORD *i; // rbx
  unsigned int v8; // r13d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 *v12; // r12
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 j; // rax
  __int64 result; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-59h]
  __int64 v18[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a1;
  if ( !*a1 )
    return 1;
  v3 = *((unsigned int *)v2 - 1);
  if ( !(_DWORD)v3 )
    return 1;
  v4 = *(_QWORD *)(v2[(unsigned int)(v3 - 1)] + 16);
  if ( v4 && (v5 = *(unsigned int *)(v4 - 4), (_DWORD)v5) )
  {
    v6 = (_QWORD *)sub_186B270(0xAu);
    *v6 = 2;
    for ( i = v6 + 1; ; i = v10 + 2 )
    {
      v11 = *(i - 2);
      if ( v11 >= (unsigned int)v5 )
        break;
      v8 = (3 * v11 + 1) >> 1;
      v9 = v8 + 8;
      if ( v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = (unsigned int *)sub_186B300(i - 2, v9);
      *v10 = v8;
    }
    *(i - 1) = v5;
    memset(i, 1, v5);
    v2 = *a1;
    if ( !*a1 || (v12 = &v2[*((unsigned int *)v2 - 1)], v2 == v12) )
    {
      LOBYTE(result) = 1;
LABEL_20:
      v17 = result;
      sub_186B220(i - 2);
      return v17;
    }
    v13 = *a1;
    do
    {
      v14 = *(_QWORD *)(*v13 + 56);
      for ( j = 0; j != v5; ++j )
        *((_BYTE *)i + j) &= *(_DWORD *)(v14 + 4 * j) != -1;
      ++v13;
    }
    while ( v13 != v12 );
  }
  else
  {
    v12 = &v2[v3];
    i = nullptr;
  }
  do
  {
    result = sub_5A5630(*v2, (__int64)i);
    if ( !(_BYTE)result )
      break;
    ++v2;
  }
  while ( v2 != v12 );
  if ( i )
    goto LABEL_20;
  return result;
}

