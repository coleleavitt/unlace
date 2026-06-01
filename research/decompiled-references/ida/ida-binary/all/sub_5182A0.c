_QWORD *__fastcall sub_5182A0(QT::QSyntaxHighlighter *a1, QT::QObject *a2, __int64 *a3)
{
  __int64 v4; // rax
  _QWORD *result; // rax

  QT::QSyntaxHighlighter::QSyntaxHighlighter(a1, a2);
  *((_QWORD *)a1 + 2) = a2;
  *(_QWORD *)a1 = &extlang_syntax_highlighter_t___vtable;
  v4 = *a3;
  *((_QWORD *)a1 + 4) = *a3;
  if ( v4 )
    ++*(_DWORD *)(v4 + 12);
  result = (_QWORD *)operator new(0x10u);
  result[1] = a1;
  *result = qt_highlighter_cbs_t___vtable;
  *((_QWORD *)a1 + 3) = result;
  return result;
}
