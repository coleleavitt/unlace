__int64 __fastcall sub_50FF10(__int64 a1)
{
  unsigned int v1; // ebp
  QT::QPlainTextEdit *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+8h] [rbp-60h]
  __int64 v6; // [rsp+10h] [rbp-58h] BYREF
  int v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+28h] [rbp-40h]
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v1 = 1;
  v10 = __readfsqword(0x28u);
  QT::QTextCursor::block((QT::QTextCursor *)&v4);
  v2 = (QT::QPlainTextEdit *)QT::QMetaObject::cast((QT::QMetaObject *)&off_89E260, *(const QT::QObject **)(a1 + 56));
  QT::QPlainTextEdit::document(v2);
  QT::QTextDocument::begin((QT::QTextDocument *)&v6);
  while ( 1 )
  {
    QT::QTextDocument::end((QT::QTextDocument *)&v8);
    if ( v6 == v8 && v7 == v9 )
      break;
    if ( v4 == v6 && v7 == v5 )
      break;
    ++v1;
    QT::QTextBlock::next((QT::QTextBlock *)&v8);
    v6 = v8;
    v7 = v9;
  }
  return v1;
}
