__int64 __fastcall sub_597630(__int64 a1, __int64 *a2)
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
  unsigned int v15; // eax
  __int64 *v16; // rbx
  unsigned int v17; // r12d
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  unsigned int v22; // r13d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-50h]
  __int64 v29[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  v4 = a2[1];
  v28 = nullptr;
  v27 = v3;
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
          v22 = (3 * v9 + 1) >> 1;
          v23 = 8 * v22 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v23 || v9 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v29, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v29);
            sub_233E40((__int64)v29);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(v6 - 1, v23);
          v25 = v24[1];
          v6 = v24 + 2;
          *v24 = v22;
          v28 = v6;
          LODWORD(v24) = v25;
          v12 = &v6[v25];
          v4 = a2[1];
          v11 = (_DWORD)v24 + 1;
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
        v26 = (_QWORD *)sub_186B270(0x18u);
        v6 = v26 + 1;
        *v26 = 2;
        v4 = a2[1];
        v11 = 1;
        v28 = v6;
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
      sub_597330(&v27, v14, v13);
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64), &v27);
  v16 = v28;
  v17 = v15;
  if ( v28 )
  {
    v18 = (unsigned __int64)&v28[*((unsigned int *)v28 - 1)];
    if ( (unsigned __int64)v28 >= v18 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v19 = *v16;
        if ( *v16 )
        {
          if ( (*(_DWORD *)(v19 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v16 >= v18 )
          goto LABEL_20;
      }
      sub_15D7BC0(v27, v19);
      ++v16;
    }
    while ( (unsigned __int64)v16 < v18 );
LABEL_20:
    v16 = v28;
    if ( v28 )
LABEL_21:
      sub_186B220(v16 - 1);
  }
  return v17;
}

