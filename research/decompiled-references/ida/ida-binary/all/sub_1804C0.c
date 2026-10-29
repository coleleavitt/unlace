__int64 __fastcall sub_1804C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  QT::QWidget *v3; // rbp
  __int64 v4; // r12
  QT::QAction *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v2 = sub_53C820(qword_8CD748, a1);
  if ( !v2 )
    return 0;
  v3 = (QT::QWidget *)v2;
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
        QT::QWidget::removeAction(v3, v5);
        result = 1;
        goto LABEL_8;
      }
    }
  }
  result = 0;
LABEL_8:
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
