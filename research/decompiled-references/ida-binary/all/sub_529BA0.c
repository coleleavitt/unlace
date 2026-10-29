unsigned __int64 __fastcall sub_529BA0(QT::QWidget *this, QT::QWidget *a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v7; // rbp
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  QT::QPlainTextEdit::QPlainTextEdit(this, a2);
  v4 = QT::QMetaObject::className((QT::QMetaObject *)&off_89E260);
  sub_525E40((__int64)this + 40, (const __m128i *)&off_86DC40, 11, v4);
  *((_BYTE *)this + 106) = 0;
  *((_OWORD *)this + 7) = 0;
  *((_QWORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 136) = 0;
  *(_QWORD *)this = &text_area_t___vtable;
  *((_QWORD *)this + 5) = text_area_t___vtable_at__40;
  *((_QWORD *)this + 2) = text_area_t___vtable_at__16;
  *((_WORD *)this + 52) = 256;
  *((_QWORD *)this + 19) = 0;
  sub_527D10((__m128i *)this, 4);
  QT::QObject::connect(&v8, this, "2textChanged()", this, "1changedText()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  v5 = QT::QPlainTextEdit::document(this);
  QT::QObject::connect(&v8, v5, "2contentsChange(int, int, int)", this, "1contentsChanged(int, int, int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  *((_QWORD *)this + 20) = 0;
  *(_QWORD *)((char *)this + 171) = 0;
  *(_DWORD *)((char *)this + 167) = 0;
  *(_DWORD *)((char *)this + 178) = 0;
  sub_4EBBA0(this);
  if ( a3 )
  {
    v7 = (_QWORD *)operator new(0x90u);
    sub_5277F0((__int64)v7, (__int64)this, "lines");
    *v7 = &line_number_margin_t___vtable;
    v7[2] = line_number_margin_t___vtable_at__16;
    v7[5] = line_number_margin_t___vtable_at__40;
    sub_529A10(this, (__int64)v7);
  }
  return v9 - __readfsqword(0x28u);
}
