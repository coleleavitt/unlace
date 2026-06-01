void __fastcall sub_981A60(__int64 a1)
{
  bool v2; // zf
  std::thread *v3; // r12
  std::thread *i; // rbx
  std::thread *v5; // rdi
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  void (__fastcall *v8)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  void (__fastcall *v14)(_QWORD *, _QWORD *, __int64); // rax
  volatile signed __int32 *v15; // rdi
  int v16; // eax

  v2 = *(_BYTE *)(a1 + 25) == 0;
  *(_QWORD *)a1 = &off_2B40120;
  if ( !v2 )
  {
    std::condition_variable::notify_one((std::condition_variable *)(a1 + 88));
    std::thread::join((std::thread *)(a1 + 40));
  }
  *(_BYTE *)(a1 + 24) = 1;
  std::condition_variable::notify_all((std::condition_variable *)(a1 + 248));
  v3 = *(std::thread **)(a1 + 192);
  for ( i = *(std::thread **)(a1 + 184); v3 != i; i = (std::thread *)((char *)i + 8) )
  {
    v5 = i;
    std::thread::join(v5);
  }
  v6 = *(_QWORD **)(a1 + 304);
  v7 = *(_QWORD **)(a1 + 296);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v7[2];
      if ( v8 )
        v8(v7, v7, 3);
      v7 += 6;
    }
    while ( v6 != v7 );
    v7 = *(_QWORD **)(a1 + 296);
  }
  if ( v7 )
    operator delete(v7, *(_QWORD *)(a1 + 312) - (_QWORD)v7);
  std::condition_variable::~condition_variable((std::condition_variable *)(a1 + 248));
  v9 = *(_QWORD **)(a1 + 184);
  v10 = *(_QWORD **)(a1 + 192);
  v11 = v9;
  if ( v10 != v9 )
  {
    while ( !*v11 )
    {
      if ( v10 == ++v11 )
        goto LABEL_15;
    }
LABEL_31:
    std::terminate();
  }
LABEL_15:
  if ( v9 )
    operator delete(v9, *(_QWORD *)(a1 + 200) - (_QWORD)v9);
  v12 = *(_QWORD **)(a1 + 144);
  v13 = *(_QWORD **)(a1 + 136);
  if ( v12 != v13 )
  {
    do
    {
      v14 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v13[2];
      if ( v14 )
        v14(v13, v13, 3);
      v13 += 7;
    }
    while ( v12 != v13 );
    v13 = *(_QWORD **)(a1 + 136);
  }
  if ( v13 )
    operator delete(v13, *(_QWORD *)(a1 + 152) - (_QWORD)v13);
  std::condition_variable::~condition_variable((std::condition_variable *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 40) )
    goto LABEL_31;
  v15 = *(volatile signed __int32 **)(a1 + 16);
  if ( v15 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) != 1 )
        return;
LABEL_30:
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15);
      return;
    }
    v16 = *((_DWORD *)v15 + 3);
    *((_DWORD *)v15 + 3) = v16 - 1;
    if ( v16 == 1 )
      goto LABEL_30;
  }
}
