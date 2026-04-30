__int64 __fastcall type_editor_t__::vfunc_5(QT::QSyntaxHighlighter **this, QT::QEvent *a2)
{
  int v3; // eax
  QT::QSyntaxHighlighter *v5; // rdi

  v3 = *((unsigned __int16 *)a2 + 4);
  if ( v3 == 97 )
  {
    sub_527B60((QT::QPlainTextEdit *)this);
  }
  else if ( v3 == 17 || v3 == 100 )
  {
    v5 = *(this + 17);
    if ( v5 )
      QT::QSyntaxHighlighter::rehighlight(v5);
  }
  return QT::QPlainTextEdit::event((QT::QPlainTextEdit *)this, a2);
}
