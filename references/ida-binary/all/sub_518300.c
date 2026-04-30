void __fastcall extlang_syntax_highlighter_t__::vfunc_3(QT::QSyntaxHighlighter *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  *(_QWORD *)this = &extlang_syntax_highlighter_t___vtable;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    --*(_DWORD *)(v3 + 12);
  QT::QSyntaxHighlighter::~QSyntaxHighlighter(this);
}
