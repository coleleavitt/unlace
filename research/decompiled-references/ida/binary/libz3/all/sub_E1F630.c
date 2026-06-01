__int64 __fastcall sub_E1F630(_QWORD *a1, unsigned int a2, __int64 *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned int v11; // esi
  __int64 v12; // rax
  int v13; // esi
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned int *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r12d
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+4h] [rbp-64h]
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = (_QWORD *)a1[13];
  if ( v8 )
  {
    v29 = *((_DWORD *)v8 - 1);
    if ( a2 )
    {
      v9 = *a3;
      if ( *a3 )
        ++*(_DWORD *)(v9 + 8);
      v10 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    if ( !a2 )
    {
      v29 = 0;
      v19 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 384LL))(a1);
      goto LABEL_15;
    }
    v9 = *a3;
    if ( *a3 )
      ++*(_DWORD *)(v9 + 8);
    v10 = 0;
    v28 = (_QWORD *)sub_186B270(0x18u);
    v29 = 0;
    v13 = 1;
    v8 = v28 + 1;
    *v28 = 2;
    a1[13] = v28 + 1;
    v14 = v28 + 1;
LABEL_8:
    ++v10;
    *v14 = v9;
    for ( *((_DWORD *)v8 - 1) = v13; (unsigned int)v10 < a2; *((_DWORD *)v8 - 1) = v18 + 1 )
    {
      v9 = a3[v10];
      if ( v9 )
      {
        ++*(_DWORD *)(v9 + 8);
        v11 = *((_DWORD *)v8 - 1);
        if ( v11 != *((_DWORD *)v8 - 2) )
        {
LABEL_7:
          v12 = v11;
          v13 = v11 + 1;
          v14 = &v8[v12];
          goto LABEL_8;
        }
      }
      else
      {
LABEL_6:
        v11 = *((_DWORD *)v8 - 1);
        if ( v11 != *((_DWORD *)v8 - 2) )
          goto LABEL_7;
      }
      v15 = (3 * v11 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v11 + 8 >= v16 || v11 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_180760(v30, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v10;
      v17 = (unsigned int *)sub_186B300(v8 - 1, v16);
      v8 = v17 + 2;
      *v17 = v15;
      v18 = v17[1];
      a1[13] = v8;
      v8[v18] = v9;
    }
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 384LL))(a1);
LABEL_15:
  v20 = v19;
  v21 = a1[13];
  if ( v21 )
  {
    v22 = v21 + 8LL * *(unsigned int *)(v21 - 4);
    v23 = (__int64 *)(v21 + 8LL * v29);
    if ( (unsigned __int64)v23 >= v22 )
      goto LABEL_23;
    do
    {
      while ( 1 )
      {
        v24 = *v23;
        if ( *v23 )
        {
          v25 = a1[12];
          if ( (*(_DWORD *)(v24 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v23 >= v22 )
          goto LABEL_22;
      }
      sub_15D7BC0(v25, v24);
      ++v23;
    }
    while ( (unsigned __int64)v23 < v22 );
LABEL_22:
    v21 = a1[13];
    if ( v21 )
LABEL_23:
      *(_DWORD *)(v21 - 4) = v29;
  }
  return v20;
}

