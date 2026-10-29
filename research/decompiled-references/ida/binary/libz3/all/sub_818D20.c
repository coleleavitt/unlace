__int64 __fastcall sub_818D20(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rax
  int v3; // r12d
  int v4; // eax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // ebp
  unsigned int v18; // r12d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 440);
  v3 = *(_DWORD *)(a1 + 448);
  if ( v2 )
    v4 = *(_DWORD *)(v2 - 4);
  else
    v4 = 0;
  if ( v3 == v4 )
    return 0;
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
    v3 = *(_DWORD *)(a1 + 448);
  }
  v6 = *(_QWORD *)(a1 + 80);
  v7 = sub_180C100(v6 + 2144, 24);
  v8 = *(_QWORD **)(v6 + 2128);
  v9 = v7;
  *(_QWORD *)v7 = &off_1C4C070;
  *(_QWORD *)(v7 + 8) = a1 + 448;
  *(_DWORD *)(v7 + 16) = v3;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v18 = (3 * v10 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v19 || v10 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v23, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v8 - 1, v19);
      v21 = v20[1];
      v8 = v20 + 2;
      *(_QWORD *)(v6 + 2128) = v20 + 2;
      *v20 = v18;
      LODWORD(v20) = v21;
      v13 = &v8[v21];
      v12 = (_DWORD)v20 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v8[v11];
    }
  }
  else
  {
    v22 = (_QWORD *)sub_186B270(0x18u);
    v8 = v22 + 1;
    *v22 = 2;
    v12 = 1;
    *(_QWORD *)(v6 + 2128) = v8;
    v13 = v8;
  }
  *v13 = v9;
  *((_DWORD *)v8 - 1) = v12;
  v14 = *(_QWORD *)(a1 + 440);
  if ( !v14 )
    return 0;
  v15 = *(_DWORD *)(a1 + 448);
  v16 = 0;
  do
  {
    if ( v15 >= *(_DWORD *)(v14 - 4) )
      break;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL) )
      break;
    v16 |= sub_865020(a1);
    v15 = *(_DWORD *)(a1 + 448) + 1;
    v14 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 448) = v15;
  }
  while ( v14 );
  return v16;
}

