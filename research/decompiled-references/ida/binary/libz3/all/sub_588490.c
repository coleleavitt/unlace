__int64 *__fastcall sub_588490(__int64 *a1, __int64 a2)
{
  char **exception; // r12
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 *v6; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+8h] [rbp-90h]
  unsigned int v26; // [rsp+1Ch] [rbp-7Ch]
  __int64 v27[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 16);
  v25 = v3;
  if ( v4 )
  {
    v6 = nullptr;
    v7 = 0;
    while ( v7 < *(_DWORD *)(v4 - 4) )
    {
      sub_15DB5C0(v3, v7, *(_QWORD *)(v4 + 8LL * v7));
      v8 = sub_15E1B70(v3);
      v9 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      if ( v6 )
      {
        v10 = *((_DWORD *)v6 - 1);
        if ( v10 == *((_DWORD *)v6 - 2) )
        {
          v21 = (3 * v10 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v10 + 8 >= (unsigned int)v22 || v10 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v27, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v27);
            sub_233E40((__int64)v27);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = (3 * v10 + 1) >> 1;
          v23 = (unsigned int *)sub_186B300(v6 - 1, v22);
          v6 = (__int64 *)(v23 + 2);
          *v23 = v26;
          LODWORD(v23) = v23[1];
          v13 = &v6[(unsigned int)v23];
          v12 = (_DWORD)v23 + 1;
        }
        else
        {
          v11 = v10;
          v12 = v10 + 1;
          v13 = &v6[v11];
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        v13 = v24 + 1;
        *v24 = 2;
        v12 = 1;
        v6 = v13;
      }
      v4 = *(_QWORD *)(a2 + 16);
      *v13 = v9;
      ++v7;
      *((_DWORD *)v6 - 1) = v12;
      v3 = *(_QWORD *)(a2 + 32);
      if ( !v4 )
        goto LABEL_10;
    }
    if ( v6 )
    {
LABEL_10:
      v14 = *((unsigned int *)v6 - 1);
      goto LABEL_11;
    }
    v14 = 0;
  }
  else
  {
    v6 = nullptr;
    v14 = 0;
  }
LABEL_11:
  v15 = sub_15EC1C0(v3, v14);
  *a1 = v15;
  a1[1] = v3;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( v6 )
  {
    v16 = v6;
    v17 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v17 )
    {
      do
      {
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 )
          {
            if ( (*(_DWORD *)(v18 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v16 >= v17 )
            goto LABEL_20;
        }
        ++v16;
        sub_15D7BC0(v25, v18);
      }
      while ( (unsigned __int64)v16 < v17 );
    }
LABEL_20:
    sub_186B220(v6 - 1);
  }
  return a1;
}

