__int64 __fastcall sub_3411F0(__int64 a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // rbp
  unsigned int v12; // r14d
  __int64 result; // rax
  int v14; // r12d
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r15d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = (_QWORD *)a2[1];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *a2;
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_8:
    v6 = (_QWORD *)a2[1];
    if ( v6 )
LABEL_9:
      *((_DWORD *)v6 - 1) = 0;
  }
  v11 = a1 + 880;
  v12 = 0;
  result = sub_8E37A0(v11);
  v14 = result;
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      v17 = sub_8E37C0(v11, v12);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v19 = (_QWORD *)a2[1];
      if ( !v19 )
        break;
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_BFCE0(v27, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v27);
          sub_233E40((__int64)v27);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v12;
        v23 = (unsigned int *)sub_186B300(v19 - 1, v22);
        v24 = v23[1];
        v25 = v23 + 2;
        *v23 = v21;
        a2[1] = (__int64)(v23 + 2);
        result = (unsigned int)(v24 + 1);
        *(_QWORD *)&v25[2 * v24] = v18;
        *(v25 - 1) = result;
        if ( v14 == v12 )
          return result;
      }
      else
      {
        v15 = v20;
        result = v20 + 1;
        v16 = &v19[v15];
LABEL_13:
        ++v12;
        *v16 = v18;
        *((_DWORD *)v19 - 1) = result;
        if ( v14 == v12 )
          return result;
      }
    }
    v26 = (_QWORD *)sub_186B270(0x18u);
    v19 = v26 + 1;
    *v26 = 2;
    result = 1;
    a2[1] = (__int64)v19;
    v16 = v19;
    goto LABEL_13;
  }
  return result;
}

