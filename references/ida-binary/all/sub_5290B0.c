unsigned __int64 __fastcall sub_5290B0(QT::QPlainTextEdit *this, QT::QKeyEvent *a2)
{
  int v2; // ebp
  int v3; // r13d
  unsigned int v4; // r14d
  int v5; // eax
  char v7; // r13
  int v8; // r15d
  int v9; // r13d
  __int64 v10; // r14
  void *v11; // rax
  int v12; // r14d
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // r14d
  char v17; // al
  __int64 v18; // rsi
  char hasSelection; // r12
  int v20; // r12d
  int v21; // r13d
  double v22; // xmm0_8
  int v23; // r13d
  void *v24; // [rsp+18h] [rbp-90h] BYREF
  _BYTE v25[8]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v26[8]; // [rsp+28h] [rbp-80h] BYREF
  void *v27[4]; // [rsp+30h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v2 = QT::QKeyEvent::modifiers(a2);
  v3 = *((_DWORD *)a2 + 16);
  if ( sub_51A390(a2) )
    return sub_54ED60(this);
  v4 = v3 - 16777217;
  if ( v2 == 100663296 )
  {
    if ( v4 > 1 )
      return QT::QPlainTextEdit::keyPressEvent(this, a2);
  }
  else
  {
    if ( v2 != 0x2000000 )
    {
      if ( v2 == 0x4000000 )
      {
        if ( v3 != 16777217 )
          return QT::QPlainTextEdit::keyPressEvent(this, a2);
      }
      else
      {
        if ( v2 )
          return QT::QPlainTextEdit::keyPressEvent(this, a2);
        if ( v3 != 16777217 )
        {
          if ( *((_BYTE *)this + 105) )
          {
            v5 = *((_DWORD *)a2 + 16);
            if ( v5 == 16777220 || v5 == 16777219 && *((_DWORD *)this + 27) )
              goto LABEL_14;
          }
          return QT::QPlainTextEdit::keyPressEvent(this, a2);
        }
        if ( *((_DWORD *)this + 27) )
        {
          *((_BYTE *)a2 + 12) = 1;
          QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
          hasSelection = QT::QTextCursor::hasSelection((QT::QTextCursor *)ptr);
          QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
          if ( hasSelection )
          {
            if ( *((_BYTE *)this + 106) )
              sub_527140((__int64)this, 1);
          }
          else
          {
            QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v26);
            v20 = QT::QTextCursor::position((QT::QTextCursor *)v26);
            QT::QTextCursor::movePosition(v26, 3, 0, 1);
            v21 = (int)(v20 - QT::QTextCursor::position((QT::QTextCursor *)v26)) % *((_DWORD *)this + 27);
            if ( v21 )
            {
              QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v27);
              QT::QString::mid(ptr, (char *)this + 112, v21, -1);
              QT::QTextCursor::insertText((QT::QTextCursor *)v27, (const QT::QString *)ptr);
              if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                free(ptr[0]);
              QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v27);
            }
            else
            {
              QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
              QT::QTextCursor::insertText((QT::QTextCursor *)ptr, (QT::QPlainTextEdit *)((char *)this + 112));
              QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
            }
            QT::QPlainTextEdit::ensureCursorVisible(this);
            QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v26);
          }
          return v30 - __readfsqword(0x28u);
        }
      }
      *((_BYTE *)a2 + 12) = 1;
      v18 = 1;
      return sub_54ED70(this, v18);
    }
    if ( v4 > 1 )
    {
      if ( *((_DWORD *)a2 + 16) == 16777220 && *((_BYTE *)this + 105) )
      {
LABEL_14:
        QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
        v7 = QT::QTextCursor::hasSelection((QT::QTextCursor *)ptr);
        QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
        if ( v7 )
        {
          QT::QPlainTextEdit::keyPressEvent(this, a2);
        }
        else
        {
          *((_BYTE *)a2 + 12) = 1;
          QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)&v24);
          QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
          QT::QTextCursor::beginEditBlock((QT::QTextCursor *)ptr);
          QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
          if ( *((_DWORD *)a2 + 16) == 16777220 )
          {
            QT::QTextCursor::movePosition(&v24, 3, 0, 1);
            QT::QTextCursor::movePosition(&v24, 13, 1, 1);
            QT::QTextCursor::selection((QT::QTextCursor *)ptr);
            QT::QTextDocumentFragment::toPlainText((QT::QTextDocumentFragment *)v27);
            QT::QTextDocumentFragment::~QTextDocumentFragment((QT::QTextDocumentFragment *)ptr);
            v22 = QT::QString::fromUtf8(ptr, 2, "\\S");
            QT::QRegularExpression::QRegularExpression(v25, ptr, 0);
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
            v23 = QT::QString::indexOf((QT::QString *)v27, (const QT::QRegularExpression *)v25, 0, nullptr);
            if ( v23 == -1 )
              v23 = QT::QString::count(v27, 32, 1, v22);
            QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v26);
            QT::QString::fromUtf8(ptr, 1, "\n", v22);
            QT::QTextCursor::insertText((QT::QTextCursor *)v26, (const QT::QString *)ptr);
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
            QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v26);
            if ( v23 > 0 )
            {
              QT::QString::mid(ptr, v27, 0, v23);
              QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v26);
              QT::QTextCursor::insertText((QT::QTextCursor *)v26, (const QT::QString *)ptr);
              QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v26);
              if ( ptr[0] )
              {
                if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                  free(ptr[0]);
              }
            }
            QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)v25);
            if ( v27[0] && !_InterlockedSub((volatile signed __int32 *)v27[0], 1u) )
              free(v27[0]);
          }
          else
          {
            QT::QTextCursor::movePosition(&v24, 8, 1, 1);
            QT::QTextCursor::selection((QT::QTextCursor *)v27);
            QT::QTextDocumentFragment::toPlainText((QT::QTextDocumentFragment *)ptr);
            QT::QTextDocumentFragment::~QTextDocumentFragment((QT::QTextDocumentFragment *)v27);
            v8 = v29;
            if ( (int)v29 - 1 < 0 )
              goto LABEL_75;
            v9 = 0;
            v10 = 2LL * ((int)v29 - 1);
            do
            {
              if ( !ptr[0] || *(int *)ptr[0] > 1 )
                QT::QString::reallocData(ptr, v29, 1);
              if ( *(_WORD *)((char *)ptr[1] + v10) != 32 )
                break;
              ++v9;
              v10 -= 2;
            }
            while ( v8 != v9 );
            if ( v9 <= 0 )
            {
LABEL_75:
              QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v27);
              QT::QTextCursor::movePosition(v27, 7, 1, 1);
              QT::QTextCursor::deleteChar((QT::QTextCursor *)v27);
            }
            else
            {
              QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v27);
              v11 = v24;
              v24 = v27[0];
              v27[0] = v11;
              QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v27);
              v12 = QT::QTextCursor::position((QT::QTextCursor *)&v24);
              QT::QTextCursor::movePosition(&v24, 3, 0, 1);
              v13 = QT::QTextCursor::position((QT::QTextCursor *)&v24);
              v14 = *((_DWORD *)this + 27);
              v15 = (v12 - v13) % v14;
              v16 = v15;
              if ( v15 )
              {
                if ( v15 > v9 )
                {
                  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v27);
                  QT::QTextCursor::movePosition(v27, 7, 1, 1);
                }
                else
                {
                  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v27);
                  QT::QTextCursor::movePosition(v27, 7, 1, v16);
                }
                QT::QTextCursor::deleteChar((QT::QTextCursor *)v27);
              }
              else
              {
                if ( v14 <= v9 )
                  v9 = *((_DWORD *)this + 27);
                QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v27);
                QT::QTextCursor::movePosition(v27, 7, 1, (unsigned int)v9);
                QT::QTextCursor::deleteChar((QT::QTextCursor *)v27);
              }
            }
            QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v27);
            if ( ptr[0] )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                free(ptr[0]);
            }
          }
          QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
          QT::QTextCursor::endEditBlock((QT::QTextCursor *)ptr);
          QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
          QT::QPlainTextEdit::ensureCursorVisible(this);
          QT::QTextCursor::~QTextCursor((QT::QTextCursor *)&v24);
        }
        return v30 - __readfsqword(0x28u);
      }
      return QT::QPlainTextEdit::keyPressEvent(this, a2);
    }
  }
  if ( !*((_DWORD *)this + 27) )
  {
    *((_BYTE *)a2 + 12) = 1;
    v18 = 0;
    return sub_54ED70(this, v18);
  }
  if ( !*((_BYTE *)this + 106) )
    return QT::QPlainTextEdit::keyPressEvent(this, a2);
  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
  v17 = QT::QTextCursor::hasSelection((QT::QTextCursor *)ptr);
  if ( v3 != 16777218 || !v17 )
  {
    QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
    return QT::QPlainTextEdit::keyPressEvent(this, a2);
  }
  QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
  return sub_527140((__int64)this, 0);
}
