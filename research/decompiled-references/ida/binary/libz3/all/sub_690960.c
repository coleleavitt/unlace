unsigned __int64 __fastcall sub_690960(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  __int64 *v14; // r14
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r13d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  char **exception; // rbx
  __int64 v24[9]; // [rsp+0h] [rbp-48h] BYREF

  result = a2[1];
  if ( result )
  {
    v5 = (__int64 *)a2[1];
    v6 = result + 8LL * *(unsigned int *)(result - 4);
    if ( result >= v6 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *a2;
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v6 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( (unsigned __int64)v5 < v6 );
LABEL_8:
    result = a2[1];
    if ( result )
LABEL_9:
      *(_DWORD *)(result - 4) = 0;
  }
  v10 = *(__int64 **)(a1 + 4472);
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = *v10;
      v13 = (_QWORD *)result;
      v14 = &v10[v11];
      if ( *v10 )
        ++*(_DWORD *)(v12 + 8);
      if ( result )
        goto LABEL_19;
      v15 = (_QWORD *)sub_186B270(0x18u);
      v13 = v15 + 1;
      *v15 = 2;
      result = 1;
      a2[1] = (__int64)v13;
      v16 = v13;
      while ( 1 )
      {
        ++v10;
        *v16 = v12;
        *((_DWORD *)v13 - 1) = result;
        if ( v14 == v10 )
          break;
        while ( 1 )
        {
          v12 = *v10;
          if ( *v10 )
            ++*(_DWORD *)(v12 + 8);
LABEL_19:
          v17 = *((_DWORD *)v13 - 1);
          if ( v17 == *((_DWORD *)v13 - 2) )
            break;
          v18 = v17;
          ++v10;
          result = v17 + 1;
          v13[v18] = v12;
          *((_DWORD *)v13 - 1) = result;
          if ( v14 == v10 )
            return result;
        }
        v19 = (3 * v17 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v20 || v17 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_68CF80(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v13 - 1, v20);
        v22 = v21[1];
        v13 = v21 + 2;
        *v21 = v19;
        a2[1] = (__int64)(v21 + 2);
        LODWORD(v21) = v22;
        v16 = &v13[v22];
        result = (unsigned int)((_DWORD)v21 + 1);
      }
    }
  }
  return result;
}

