void __fastcall CLIWidget__::vfunc_3(QT::QWidget *this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  const void *v12; // rsi

  *(_QWORD *)this = &CLIWidget___vtable;
  *((_QWORD *)this + 2) = CLIWidget___vtable_at__16;
  if ( qword_8CAD90 > 0 )
  {
    v7 = qword_8CAD88;
    while ( 1 )
    {
      v8 = v7;
      if ( qword_8CAD88 + 8 * qword_8CAD90 == v7 )
        break;
      v7 += 8;
      if ( this == *(QT::QWidget **)(v7 - 8) )
      {
        v9 = v8 - qword_8CAD88;
        goto LABEL_6;
      }
    }
  }
  v9 = -8;
LABEL_6:
  if ( !qword_8CAD80 || *(int *)qword_8CAD80 > 1 )
    sub_1B15F0((__int64)&qword_8CAD80, 0, 0, 0, a5, a6);
  v10 = qword_8CAD90;
  v11 = qword_8CAD88 + 8 * qword_8CAD90;
  v12 = (const void *)(qword_8CAD88 + v9 + 8);
  if ( qword_8CAD88 == qword_8CAD88 + v9 )
  {
    if ( (const void *)v11 != v12 )
      qword_8CAD88 += v9 + 8;
  }
  else if ( (const void *)v11 != v12 )
  {
    memmove((void *)(qword_8CAD88 + v9), v12, v11 - (_QWORD)v12);
    v10 = qword_8CAD90;
  }
  qword_8CAD90 = v10 - 1;
  QT::QWidget::~QWidget(this);
}
