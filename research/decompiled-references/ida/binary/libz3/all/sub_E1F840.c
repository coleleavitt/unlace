__int64 __fastcall sub_E1F840(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 *v7; // r13
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // r14
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  int v14; // eax
  _QWORD *v15; // rsi
  unsigned int v16; // eax
  _QWORD *v17; // r13
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int v20; // ebp
  unsigned int *v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // ebp
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *(__int64 **)(a2 + 8);
  v8 = (_QWORD *)a1[13];
  v32 = a4;
  if ( v7 )
  {
    v9 = *((unsigned int *)v7 - 1);
    if ( v8 )
    {
      v10 = *((_DWORD *)v8 - 1);
      if ( (_DWORD)v9 )
      {
        v11 = *v7;
        v12 = &v7[v9];
        if ( *v7 )
          ++*(_DWORD *)(v11 + 8);
        while ( 1 )
        {
          v16 = *((_DWORD *)v8 - 1);
          if ( v16 == *((_DWORD *)v8 - 2) )
          {
            v18 = (3 * v16 + 1) >> 1;
            v19 = 8 * v18 + 8;
            v20 = v18;
            if ( 8 * v16 + 8 >= (unsigned int)v19 || v16 >= v18 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_180760(v33, "Overflow encountered when expanding vector", v5);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v33);
              sub_233E40((__int64)v33);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v21 = (unsigned int *)sub_186B300(v8 - 1, v19);
            v22 = v21[1];
            v8 = v21 + 2;
            *v21 = v20;
            a1[13] = v21 + 2;
            LODWORD(v21) = v22;
            v15 = &v8[v22];
            v14 = (_DWORD)v21 + 1;
LABEL_7:
            ++v7;
            *v15 = v11;
            *((_DWORD *)v8 - 1) = v14;
            if ( v12 == v7 )
              break;
          }
          else
          {
            ++v7;
            v8[v16] = v11;
            *((_DWORD *)v8 - 1) = v16 + 1;
            if ( v12 == v7 )
              break;
          }
          v11 = *v7;
          if ( *v7 )
            ++*(_DWORD *)(v11 + 8);
        }
      }
    }
    else
    {
      if ( (_DWORD)v9 )
      {
        v11 = *v7;
        v12 = &v7[v9];
        v10 = 0;
        if ( *v7 )
          ++*(_DWORD *)(v11 + 8);
        v13 = (_QWORD *)sub_186B270(0x18u);
        v8 = v13 + 1;
        *v13 = 2;
        v14 = 1;
        a1[13] = v8;
        v15 = v8;
        goto LABEL_7;
      }
      v10 = 0;
    }
    a4 = v32;
    v17 = a1 + 12;
  }
  else
  {
    v17 = a1 + 12;
    if ( v8 )
      v10 = *((_DWORD *)v8 - 1);
    else
      v10 = 0;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, __int64))(*a1 + 376LL))(a1, v17, a3, a4);
  v24 = a1[13];
  if ( v24 )
  {
    v25 = v24 + 8LL * *(unsigned int *)(v24 - 4);
    v26 = (__int64 *)(v24 + 8LL * v10);
    if ( (unsigned __int64)v26 >= v25 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v27 = *v26;
        if ( *v26 )
        {
          v28 = a1[12];
          if ( (*(_DWORD *)(v27 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v26 >= v25 )
          goto LABEL_25;
      }
      sub_15D7BC0(v28, v27);
      ++v26;
    }
    while ( (unsigned __int64)v26 < v25 );
LABEL_25:
    v24 = a1[13];
    if ( v24 )
LABEL_26:
      *(_DWORD *)(v24 - 4) = v10;
  }
  return v23;
}

