void __fastcall sub_469B80(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rbp
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi

  *(a1 - 2) = &JumpAnywhereDialog___vtable;
  *a1 = JumpAnywhereDialog___vtable_at__16;
  v3 = a1[27];
  if ( v3 )
  {
    a1[28] = 0;
    qfree(v3, a2);
  }
  v4 = a1[24];
  if ( v4 )
  {
    a1[25] = 0;
    qfree(v4, a2);
  }
  v5 = (volatile signed __int32 *)a1[23];
  if ( v5 )
  {
    v6 = v5 + 2;
    if ( *((_QWORD *)v5 + 1) == 0x100000001LL )
    {
      v9 = *(_QWORD *)v5;
      v10 = a1[23];
      *((_QWORD *)v5 + 1) = 0;
      (*(void (__fastcall **)(__int64, const char *, volatile signed __int32 *))(v9 + 16))(v10, a2, v6);
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
  v8 = a1[19];
  if ( v8 )
  {
    a1[20] = 0;
    qfree(v8, a2);
  }
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 2));
}
