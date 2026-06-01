__int64 __fastcall sub_597A50(__int64 a1, __int64 *a2)
{
  char **exception; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v6; // rdx
  unsigned int v7; // r12d
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rsi
  _DWORD *v13; // rdx
  int v14; // esi
  __int64 result; // rax
  __int64 *v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  unsigned int v20; // r13d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+18h] [rbp-50h]
  __int64 v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  v4 = a2[1];
  v26 = nullptr;
  v25 = v3;
  if ( v4 )
  {
    v6 = nullptr;
    v7 = 0;
    do
    {
      if ( v7 >= *(_DWORD *)(v4 - 4) )
        break;
      v8 = *(_QWORD *)(v4 + 8LL * v7);
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      if ( v6 )
      {
        v9 = *((_DWORD *)v6 - 1);
        if ( v9 == *((_DWORD *)v6 - 2) )
        {
          v20 = (3 * v9 + 1) >> 1;
          v21 = 8 * v20 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v21 || v9 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v27, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v27);
            sub_233E40((__int64)v27);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v6 - 1, v21);
          v23 = v22[1];
          v6 = v22 + 2;
          *v22 = v20;
          v26 = v6;
          LODWORD(v22) = v23;
          v12 = &v6[v23];
          v4 = a2[1];
          v11 = (_DWORD)v22 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = &v6[v10];
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        v6 = v24 + 1;
        *v24 = 2;
        v4 = a2[1];
        v11 = 1;
        v26 = v6;
        v12 = v6;
      }
      *v12 = v8;
      ++v7;
      *((_DWORD *)v6 - 1) = v11;
    }
    while ( v4 );
  }
  v13 = *(_DWORD **)(a1 + 56);
  if ( v13 )
  {
    v14 = *(v13 - 1);
    if ( v14 )
      sub_597330(&v25, v14, v13);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64), &v25);
  v16 = v26;
  if ( v26 )
  {
    result = *((unsigned int *)v26 - 1);
    v17 = (unsigned __int64)&v26[result];
    if ( (unsigned __int64)v26 >= v17 )
      return sub_186B220(v16 - 1);
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
      result = sub_15D7BC0(v25, v18);
      ++v16;
    }
    while ( (unsigned __int64)v16 < v17 );
LABEL_20:
    v16 = v26;
    if ( v26 )
      return sub_186B220(v16 - 1);
  }
  return result;
}

