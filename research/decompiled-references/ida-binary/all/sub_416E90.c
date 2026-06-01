__int64 __fastcall sub_416E90(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  _QWORD *v5; // rax
  void *v6; // rdi
  _QWORD *v7; // r12
  void (*v8)(void); // rax
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(v3 + 32);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(v3 + 32) = 0;
  if ( a2 )
  {
    v5 = (_QWORD *)operator new(8u);
    v6 = *(void **)(a2 + 16);
    v7 = v5;
    *v5 = vault_messenger_t___vtable;
    if ( v6 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
      if ( (char *)v8 == (char *)vault_messenger_t__::vfunc_1 )
        operator delete(v6, 8u);
      else
        v8();
    }
    *(_QWORD *)(a2 + 16) = v7;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = a2;
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  return sub_5318E0(v9, 9, 0, 0);
}
