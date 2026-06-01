void __fastcall sub_20093A0(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64, __int64); // rax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  void *v8; // rdi
  _DWORD *v9; // rbp
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rbp
  void **v14; // r12
  void **v15; // rbp
  int v16; // eax
  signed __int32 v17; // eax

  v1 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 136);
  if ( v1 )
    v1(a1 + 120, a1 + 120, 3);
  v3 = *(char **)(a1 + 96);
  if ( *(_DWORD *)(a1 + 108) )
  {
    v4 = *(_DWORD *)(a1 + 104);
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 && v7 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v3[v5], *v7 + 9LL, 8);
          v3 = *(char **)(a1 + 96);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v8 = *(void **)(a1 + 72);
  if ( v8 )
    operator delete(v8);
  v9 = *(_DWORD **)(a1 + 64);
  if ( v9 )
  {
    if ( (*v9)-- == 1 )
    {
      sub_FD6C20((__int64)v9);
      operator delete(v9, 0x328u);
    }
  }
  v11 = *(volatile signed __int32 **)(a1 + 56);
  if ( v11 && !_InterlockedSub(v11 + 2, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = *(volatile signed __int32 **)(a1 + 48);
  if ( v12 && !_InterlockedSub(v12 + 2, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = *(volatile signed __int32 **)(a1 + 40);
  if ( v13 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_24;
    }
    else
    {
      v16 = *((_DWORD *)v13 + 2);
      *((_DWORD *)v13 + 2) = v16 - 1;
      if ( v16 != 1 )
        goto LABEL_24;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( &_pthread_key_create )
    {
      v17 = _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF);
    }
    else
    {
      v17 = *((_DWORD *)v13 + 3);
      *((_DWORD *)v13 + 3) = v17 - 1;
    }
    if ( v17 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
  }
LABEL_24:
  v14 = *(void ***)(a1 + 16);
  v15 = *(void ***)(a1 + 8);
  if ( v14 != v15 )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 4;
        if ( v15 == v14 )
          goto LABEL_27;
      }
      v15 += 4;
    }
    while ( v14 != v15 );
LABEL_27:
    v15 = *(void ***)(a1 + 8);
  }
  if ( v15 )
    operator delete(v15);
}
