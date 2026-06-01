__int64 __fastcall sub_180360(__int64 a1, _BYTE *a2)
{
  QT::QToolBar *v2; // rax
  QT::QWidget *v3; // rbp
  __int64 v4; // r12
  QT::QAction *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v2 = (QT::QToolBar *)sub_53C820(qword_8CD748, a1);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( !a2 || !*a2 || *a2 == 45 && !a2[1] )
  {
    QT::QToolBar::addSeparator(v2);
    return 1;
  }
  v4 = sub_534430(a2);
  if ( !v4 )
    return 0;
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v5 = *(QT::QAction **)(v4 + 192);
  if ( v12 > 0 )
  {
    v6 = v11;
    while ( 1 )
    {
      v7 = v6;
      if ( v11 + 8 * v12 == v6 )
        break;
      v6 += 8;
      if ( v5 == *(QT::QAction **)(v6 - 8) )
      {
        if ( v7 - v11 == -8 )
          break;
        result = 0;
        goto LABEL_11;
      }
    }
  }
  QT::QWidget::addAction(v3, v5);
  result = 1;
LABEL_11:
  if ( ptr )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      v9 = result;
      free(ptr);
      return v9;
    }
  }
  return result;
}
