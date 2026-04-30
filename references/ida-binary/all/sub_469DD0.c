void __fastcall sub_469DD0(_QWORD *a1, const char *a2)
{
  QT::QDialog *v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi

  v2 = (QT::QDialog *)(a1 - 2);
  *(a1 - 2) = &JumpAnywhereDialog___vtable;
  *a1 = JumpAnywhereDialog___vtable_at__16;
  v4 = a1[27];
  if ( v4 )
  {
    a1[28] = 0;
    qfree(v4, a2);
  }
  v5 = a1[24];
  if ( v5 )
  {
    a1[25] = 0;
    qfree(v5, a2);
  }
  v6 = (volatile signed __int32 *)a1[23];
  if ( v6 )
  {
    v7 = v6 + 2;
    if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
    {
      v10 = *(_QWORD *)v6;
      v11 = a1[23];
      *((_QWORD *)v6 + 1) = 0;
      (*(void (__fastcall **)(__int64, const char *, volatile signed __int32 *))(v10 + 16))(v11, a2, v7);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
      }
      else
      {
        v8 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 2) = v8 - 1;
      }
      if ( v8 == 1 )
        sub_28E9C0(v6);
    }
  }
  v9 = a1[19];
  if ( v9 )
  {
    a1[20] = 0;
    qfree(v9, a2);
  }
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v2);
  operator delete(v2, 0x100u);
}
