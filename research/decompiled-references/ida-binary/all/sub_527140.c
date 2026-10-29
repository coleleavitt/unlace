unsigned __int64 __fastcall sub_527140(__int64 a1, char a2)
{
  unsigned int v2; // r13d
  signed int v3; // r12d
  int v4; // ebp
  unsigned int v5; // r15d
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // r8d
  __int64 v11; // rax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // [rsp+0h] [rbp-78h]
  unsigned int v16; // [rsp+0h] [rbp-78h]
  int v17; // [rsp+0h] [rbp-78h]
  int v18; // [rsp+0h] [rbp-78h]
  _BYTE v19[8]; // [rsp+18h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v19);
  v2 = QT::QTextCursor::selectionStart((QT::QTextCursor *)v19);
  v3 = QT::QTextCursor::selectionEnd((QT::QTextCursor *)v19);
  if ( (int)v2 > v3 )
  {
    v14 = v2;
    v2 = v3;
    v3 = v14;
  }
  QT::QTextCursor::setPosition(v19, v2, 0);
  v4 = QT::QTextCursor::position((QT::QTextCursor *)v19);
  if ( v4 < v3 )
  {
    QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
    QT::QTextCursor::beginEditBlock((QT::QTextCursor *)ptr);
    v5 = 0;
    QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
    while ( 1 )
    {
      QT::QTextCursor::movePosition(v19, 4, 0, 1);
      if ( a2 )
      {
        QT::QTextCursor::insertText((QT::QTextCursor *)v19, (const QT::QString *)(a1 + 112));
        v6 = *(_DWORD *)(a1 + 108);
        v3 += v6;
        v7 = v2 + v6;
        if ( v4 == v2 )
          v5 = v7;
        goto LABEL_7;
      }
      v16 = QT::QTextCursor::position((QT::QTextCursor *)v19);
      v9 = QT::QTextCursor::position((QT::QTextCursor *)v19);
      QT::QTextCursor::setPosition(v19, (unsigned int)(*(_DWORD *)(a1 + 108) + v9), 1);
      QT::QTextCursor::selectedText((QT::QTextCursor *)ptr);
      QT::QTextCursor::setPosition(v19, v16, 0);
      if ( v21 > 0 )
        break;
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        free(ptr[0]);
        v10 = 0;
LABEL_20:
        v3 -= v10;
        goto LABEL_21;
      }
      v10 = 0;
LABEL_21:
      if ( v4 == v2 )
        v5 = v2 - v10;
LABEL_7:
      QT::QTextCursor::movePosition(v19, 4, 0, 1);
      v15 = QT::QTextCursor::position((QT::QTextCursor *)v19);
      if ( (unsigned __int8)QT::QTextCursor::movePosition(v19, 16, 0, 1) )
      {
        v8 = QT::QTextCursor::position((QT::QTextCursor *)v19);
        v4 = v8;
        if ( v15 < v8 && v8 < v3 )
          continue;
      }
      QT::QTextCursor::setPosition(v19, v5, 0);
      QT::QTextCursor::setPosition(v19, (unsigned int)v3, 1);
      QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
      QT::QTextCursor::endEditBlock((QT::QTextCursor *)ptr);
      QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
      goto LABEL_25;
    }
    v10 = 0;
    v11 = 0;
    do
    {
      if ( *((_WORD *)ptr[1] + v11) != 32 )
        break;
      v11 = ++v10;
    }
    while ( v10 < v21 );
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v18 = v10;
      free(ptr[0]);
      v10 = v18;
    }
    if ( v10 > 0 )
    {
      v17 = v10;
      QT::QTextCursor::movePosition(v19, 4, 0, 1);
      v13 = QT::QTextCursor::position((QT::QTextCursor *)v19);
      QT::QTextCursor::setPosition(v19, (unsigned int)(v13 + v17), 1);
      QT::QTextCursor::removeSelectedText((QT::QTextCursor *)v19);
      v10 = v17;
    }
    goto LABEL_20;
  }
LABEL_25:
  QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v19);
  return v22 - __readfsqword(0x28u);
}
