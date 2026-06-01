void __fastcall font_picker_t__::vfunc_4(QT::QFontDialog *this)
{
  QT::QFont *v2; // rdi

  v2 = (QT::QFontDialog *)((char *)this + 48);
  *((_QWORD *)v2 - 6) = &font_picker_t___vtable;
  *((_QWORD *)v2 - 4) = font_picker_t___vtable_at__16;
  QT::QFont::~QFont(v2);
  QT::QFontDialog::~QFontDialog(this);
  operator delete(this, 0x40u);
}
