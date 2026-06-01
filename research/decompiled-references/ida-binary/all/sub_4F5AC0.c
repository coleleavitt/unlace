void __fastcall forms_ui::dialog_t__::vfunc_3(QT::QDialog *this, const char *a2)
{
  QT::QDialog **v3; // rdi
  QT::QDialog **v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi

  *(_QWORD *)this = &forms_ui::dialog_t___vtable;
  *((_QWORD *)this + 2) = forms_ui::dialog_t___vtable_at__16;
  v3 = (QT::QDialog **)qword_8D1E90;
  v4 = (QT::QDialog **)(qword_8D1E90 + 8 * xmmword_8D1E98);
  if ( (QT::QDialog **)qword_8D1E90 != v4 )
  {
    while ( this != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_7;
    }
    if ( v4 != v3 )
    {
      a2 = (const char *)(v3 + 1);
      memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
      *(_QWORD *)&xmmword_8D1E98 = xmmword_8D1E98 - 1;
    }
  }
LABEL_7:
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2);
          v6 = *((_QWORD *)this + 8);
        }
      }
    }
    *((_QWORD *)this + 9) = 0;
    qfree(v6, a2);
  }
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
