__int64 __fastcall sub_2D89B0(QT::QAccessibleWidget *this, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rax
  char *v12; // rbx
  char *v13; // r14
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 i; // r12
  __int64 *v19; // rax
  __int64 v20; // rdi
  bool v21; // zf

  v4 = QT::QAccessibleWidget::widget(this);
  v7 = sub_1EA6A0(v4 + 384, a2, v5, v6, a3);
  v8 = QT::QAccessibleWidget::widget(this);
  v11 = (char *)sub_1EB5B0(v8, a2, v9, v10, a3);
  v12 = v11;
  v13 = v11 + 40;
  if ( v11[68] )
    goto LABEL_2;
  v15 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v11 + 520LL))(v11, v13);
  v12[68] = v15;
  if ( v15 )
    goto LABEL_2;
  v16 = *((_QWORD *)v12 + 5);
  if ( !v16 )
  {
    *((_DWORD *)v12 + 16) = -1;
    return QT::QAccessibleWidget::widget(this);
  }
  v17 = *((_QWORD *)v12 + 6);
  if ( v17 )
  {
    for ( i = 0; i != v17; ++i )
    {
      v19 = (__int64 *)(v16 + 24 * i);
      v20 = *v19;
      if ( *v19 )
      {
        v19[1] = 0;
        qfree(v20, v13);
        v16 = *((_QWORD *)v12 + 5);
      }
    }
  }
  *((_QWORD *)v12 + 6) = 0;
  qfree(v16, v13);
  v21 = v12[68] == 0;
  *((_QWORD *)v12 + 5) = 0;
  *((_QWORD *)v12 + 7) = 0;
  *((_DWORD *)v12 + 16) = -1;
  if ( !v21 )
LABEL_2:
    sub_176780((__int64 *)v13, v7 + 24);
  return QT::QAccessibleWidget::widget(this);
}
