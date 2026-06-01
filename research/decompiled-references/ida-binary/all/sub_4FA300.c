__int64 __fastcall sub_4FA300(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r13
  __int64 v5; // r12
  char32_t v6; // esi
  void **v7; // rax
  __int64 v8; // rax
  QT::QChar *v9; // rdi
  __int16 v10; // ax
  unsigned __int16 v11; // dx
  int v12; // eax
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  char32_t vars8[2]; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  QT::QAbstractButton::shortcut((QT::QAbstractButton *)&ptr);
  v2 = sub_5192C0(&ptr, a2);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&ptr);
  if ( v2 )
  {
    v2 &= 0x1FFFFFFu;
  }
  else
  {
    QT::QAbstractButton::text((QT::QAbstractButton *)&ptr);
    v4 = vars10;
    v5 = *(_QWORD *)vars8;
    if ( (-vars10 < 0 || vars10 == 0) && vars10 > 0 )
    {
      v6 = vars8[0];
      v7 = (void **)QT::QtPrivate::qustrchr((2 * vars10) >> 1, *(_QWORD *)vars8, 38);
      if ( &ptr != v7 )
      {
        v8 = ((__int64)v7 - v5) >> 1;
        if ( (_DWORD)v8 != -1 && (int)v8 < v4 - 1 )
        {
          v9 = (QT::QChar *)*(unsigned __int16 *)(v5 + 2LL * ((int)v8 + 1));
          if ( (_WORD)v9 != 38 )
          {
            v10 = QT::QChar::toUpper(v9, v6);
            v11 = v10 - 65;
            v12 = (char)v10 & 0x1FFFFFF;
            if ( v11 < 0x1Au )
              v2 = v12;
          }
        }
      }
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return v2;
}
