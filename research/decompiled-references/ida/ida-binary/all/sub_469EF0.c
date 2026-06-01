void __fastcall sub_469EF0(__int64 a1, char *a2)
{
  void (__fastcall *v2)(QT::QDialog *, const char *); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rbp
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi

  v2 = *(void (__fastcall **)(QT::QDialog *, const char *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == JumpAnywhereDialog__::vfunc_3 )
  {
    v3 = *((_QWORD *)a2 + 29);
    *(_QWORD *)a2 = &JumpAnywhereDialog___vtable;
    *((_QWORD *)a2 + 2) = JumpAnywhereDialog___vtable_at__16;
    if ( v3 )
    {
      *((_QWORD *)a2 + 30) = 0;
      qfree(v3, a2);
    }
    v4 = *((_QWORD *)a2 + 26);
    if ( v4 )
    {
      *((_QWORD *)a2 + 27) = 0;
      qfree(v4, a2);
    }
    v5 = *((volatile signed __int32 **)a2 + 25);
    if ( v5 )
    {
      v6 = v5 + 2;
      if ( *((_QWORD *)v5 + 1) == 0x100000001LL )
      {
        v9 = *(_QWORD *)v5;
        v10 = *((_QWORD *)a2 + 25);
        *((_QWORD *)v5 + 1) = 0;
        (*(void (__fastcall **)(__int64, char *, volatile signed __int32 *))(v9 + 16))(v10, a2, v6);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v7 = _InterlockedExchangeAdd(v6, 0xFFFFFFFF);
        }
        else
        {
          v7 = *((_DWORD *)v5 + 2);
          *((_DWORD *)v5 + 2) = v7 - 1;
        }
        if ( v7 == 1 )
          sub_28E9C0(v5);
      }
    }
    v8 = *((_QWORD *)a2 + 21);
    if ( v8 )
    {
      *((_QWORD *)a2 + 22) = 0;
      qfree(v8, a2);
    }
    *(_QWORD *)a2 = &ui_dialog_t___vtable;
    *((_QWORD *)a2 + 2) = ui_dialog_t___vtable_at__16;
    QT::QDialog::~QDialog((QT::QDialog *)a2);
  }
  else
  {
    ((void (__fastcall *)(char *))v2)(a2);
  }
}
