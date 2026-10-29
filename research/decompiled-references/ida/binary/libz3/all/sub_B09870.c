void __fastcall sub_B09870(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebx
  unsigned int v6; // r13d
  unsigned int v7; // esi
  unsigned int v8; // r13d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  char *v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 64);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( a2 < (unsigned int)v4 )
      return;
    v5 = a2 + 100;
    if ( (unsigned int)v4 >= a2 + 100 )
    {
      *((_DWORD *)v3 - 1) = v5;
      return;
    }
  }
  else
  {
    v5 = a2 + 100;
    if ( a2 == -100 )
      return;
    v4 = 0;
    v18 = (_QWORD *)sub_186B270(0x68u);
    v3 = v18 + 1;
    *v18 = 2;
    *(_QWORD *)(a1 + 64) = v18 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v3 - 2);
    if ( v11 >= v5 )
      break;
    v6 = 3 * v11 + 1;
    v7 = v6 & 0xFFFFFFFE;
    v8 = v6 >> 1;
    v9 = 16 * (v8 + v7) + 8;
    if ( 48 * v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0(v19, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v19);
      sub_233E40((__int64)v19);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v3 - 1, v9);
    v3 = v10 + 2;
    *v10 = v8;
    *(_QWORD *)(a1 + 64) = v10 + 2;
  }
  *((_DWORD *)v3 - 1) = v5;
  v12 = 6LL * v5;
  v13 = (char *)&v3[6 * v4];
  v14 = &v3[v12];
  if ( 6 * v4 != v12 )
  {
    v15 = (0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)(v14 - 6) - v13) >> 4)) & 0xFFFFFFFFFFFFFFFLL;
    v16 = 0;
    v17 = v15 + 1;
    do
    {
      ++v16;
      *(_OWORD *)v13 = 0;
      v13 += 48;
      *((_OWORD *)v13 - 2) = 0;
      *((_OWORD *)v13 - 1) = 0;
    }
    while ( v16 < v17 );
  }
}

