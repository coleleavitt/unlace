void __fastcall sub_3E8420(__int64 a1)
{
  void *v2; // rdi
  volatile signed __int32 *v3; // rax

  *(_QWORD *)(a1 - 16) = &TWelcomeForm___vtable;
  *(_QWORD *)a1 = TWelcomeForm___vtable_at__16;
  v2 = *(void **)(a1 + 32);
  if ( v2 )
    operator delete(v2, 0x80u);
  v3 = *(volatile signed __int32 **)(a1 + 48);
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*(void **)(a1 + 48));
  *(_QWORD *)(a1 - 16) = &ui_dialog_t___vtable;
  *(_QWORD *)a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 16));
}
