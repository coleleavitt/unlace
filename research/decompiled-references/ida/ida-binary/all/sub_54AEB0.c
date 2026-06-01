void __fastcall sub_54AEB0(__int64 a1)
{
  QT::QFontDialog *v1; // rbx
  QT::QFont *v2; // rdi

  v1 = (QT::QFontDialog *)(a1 - 16);
  v2 = (QT::QFont *)(a1 + 32);
  *((_QWORD *)v2 - 6) = &font_picker_t___vtable;
  *((_QWORD *)v2 - 4) = font_picker_t___vtable_at__16;
  QT::QFont::~QFont(v2);
  QT::QFontDialog::~QFontDialog(v1);
}
