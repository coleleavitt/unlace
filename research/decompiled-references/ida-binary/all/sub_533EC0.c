__int64 __fastcall sub_533EC0(QT::QMenu **a1, QT::QAction *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  QT::QAction *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  char isSeparator; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+10h] [rbp-38h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( a2 )
  {
    QT::QWidget::actions((QT::QWidget *)&ptr);
    if ( v22 > 0 )
    {
      v6 = v21;
      while ( 1 )
      {
        v7 = v6;
        if ( v21 + 8 * v22 == v6 )
          break;
        v6 += 8;
        if ( *(QT::QAction **)(v6 - 8) == a2 )
        {
          if ( v7 - v21 < 0 )
            break;
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          return 0;
        }
      }
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v8 = a1[1];
    if ( !v8 )
    {
LABEL_54:
      v8 = nullptr;
      goto LABEL_11;
    }
    if ( (a3 & 1) == 0 )
      goto LABEL_11;
  }
  else
  {
    v8 = a1[1];
    if ( !v8 )
      goto LABEL_44;
    if ( (a3 & 1) == 0 )
    {
LABEL_19:
      if ( !(unsigned __int8)QT::QAction::isSeparator(v8) )
        QT::QMenu::insertSeparator(*a1, v8);
      return 1;
    }
  }
  QT::QWidget::actions((QT::QWidget *)&ptr);
  if ( v22 > 0 )
  {
    v16 = v21;
    while ( 1 )
    {
      v17 = v16;
      if ( v21 + 8 * v22 == v16 )
        break;
      v16 += 8;
      if ( *(QT::QAction **)(v16 - 8) == v8 )
      {
        v19 = (v17 - v21) >> 3;
        if ( (int)v19 < 0 )
          break;
        v18 = (volatile signed __int32 *)ptr;
        if ( (int)v19 < v22 - 1 )
        {
          v8 = *(QT::QAction **)(v21 + 8LL * ((int)v19 + 1));
          if ( ptr )
            goto LABEL_40;
          goto LABEL_42;
        }
        v8 = nullptr;
        if ( ptr )
          goto LABEL_40;
        if ( !a2 )
          goto LABEL_44;
        goto LABEL_54;
      }
    }
  }
  v18 = (volatile signed __int32 *)ptr;
  if ( ptr )
  {
LABEL_40:
    if ( !_InterlockedSub(v18, 1u) )
      free(ptr);
LABEL_42:
    if ( !a2 )
    {
      if ( !v8 )
      {
LABEL_44:
        QT::QWidget::actions((QT::QWidget *)&ptr);
        if ( !v22 || !(unsigned __int8)QT::QAction::isSeparator(*(QT::QAction **)(v21 + 8 * v22 - 8)) )
          QT::QMenu::addSeparator(*a1);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        return 1;
      }
      goto LABEL_19;
    }
  }
  else if ( !a2 )
  {
    goto LABEL_19;
  }
LABEL_11:
  if ( (a3 & 8) != 0 )
  {
    QT::QWidget::actions((QT::QWidget *)&ptr);
    if ( v22 <= 0 )
    {
      if ( !v22 )
      {
LABEL_31:
        if ( ptr )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
        }
        goto LABEL_34;
      }
      v9 = v21;
      v10 = 8 * v22;
    }
    else
    {
      v9 = v21;
      v10 = 8 * v22;
      v11 = v21;
      while ( 1 )
      {
        v12 = v11;
        if ( v21 + 8 * v22 == v11 )
          break;
        v11 += 8;
        if ( *(QT::QAction **)(v11 - 8) == v8 )
        {
          v15 = (v12 - v21) >> 3;
          if ( (int)v15 > 0 )
          {
            isSeparator = QT::QAction::isSeparator(*(QT::QAction **)(v21 + 8LL * ((int)v15 - 1)));
            goto LABEL_29;
          }
          if ( !(_DWORD)v15 )
            goto LABEL_31;
          break;
        }
      }
    }
    isSeparator = QT::QAction::isSeparator(*(QT::QAction **)(v9 + v10 - 8));
LABEL_29:
    if ( !isSeparator )
      QT::QMenu::insertSeparator(*a1, v8);
    goto LABEL_31;
  }
LABEL_34:
  QT::QWidget::insertAction(*a1, v8, a2);
  return 1;
}
