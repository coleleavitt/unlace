void __fastcall ui_action_execution_data_t__::vfunc_0(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, void *); // rcx
  __int64 v5; // rax
  void (__fastcall *v6)(void *); // rdx

  v1 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)a1 = &ui_action_execution_data_t___vtable;
  if ( !v1 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
    v4 = *(void (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 96LL);
    v5 = *(_QWORD *)(a1 + 8);
    if ( v4 == sub_52F740 )
    {
      if ( v5 )
      {
        v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL);
        if ( v6 == sub_52F010 )
          operator delete(*(void **)(a1 + 8), 0x10u);
        else
          v6(*(void **)(a1 + 8));
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, _QWORD, __int64))v4)(v3, *(_QWORD *)(a1 + 8), 1);
    }
  }
}
