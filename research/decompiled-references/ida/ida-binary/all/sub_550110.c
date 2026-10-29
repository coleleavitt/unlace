void __fastcall sub_550110(__int64 a1, char *a2)
{
  void (__fastcall *v2)(QT::QDialog *, const char *); // rax
  __int64 v3; // rdi

  v2 = *(void (__fastcall **)(QT::QDialog *, const char *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == text_area_dialog_t__::vfunc_3 )
  {
    v3 = *((_QWORD *)a2 + 11);
    *(_QWORD *)a2 = &text_area_dialog_t___vtable;
    *((_QWORD *)a2 + 2) = text_area_dialog_t___vtable_at__16;
    if ( v3 )
    {
      *((_QWORD *)a2 + 12) = 0;
      qfree(v3, a2);
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
