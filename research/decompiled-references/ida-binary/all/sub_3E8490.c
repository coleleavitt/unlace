void __fastcall sub_3E8490(__int64 a1)
{
  QT::QDialog *v1; // rbp
  void *v3; // rdi
  volatile signed __int32 *v4; // rax

  v1 = (QT::QDialog *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = &TWelcomeForm___vtable;
  *(_QWORD *)a1 = TWelcomeForm___vtable_at__16;
  v3 = *(void **)(a1 + 32);
  if ( v3 )
    operator delete(v3, 0x80u);
  v4 = *(volatile signed __int32 **)(a1 + 48);
  if ( v4 && !_InterlockedSub(v4, 1u) )
    free(*(void **)(a1 + 48));
  *(_QWORD *)(a1 - 16) = &ui_dialog_t___vtable;
  *(_QWORD *)a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v1);
  operator delete(v1, 0x58u);
}
