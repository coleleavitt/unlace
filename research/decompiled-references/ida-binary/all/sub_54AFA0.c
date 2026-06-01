void __fastcall sub_54AFA0(__int64 a1, QT::QFontDialog *a2)
{
  void (__fastcall *v2)(QT::QFontDialog *); // rax

  v2 = *(void (__fastcall **)(QT::QFontDialog *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == font_picker_t__::vfunc_3 )
  {
    *(_QWORD *)a2 = &font_picker_t___vtable;
    *((_QWORD *)a2 + 2) = font_picker_t___vtable_at__16;
    QT::QFont::~QFont((QT::QFontDialog *)((char *)a2 + 48));
    QT::QFontDialog::~QFontDialog(a2);
  }
  else
  {
    v2(a2);
  }
}
