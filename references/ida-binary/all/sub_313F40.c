unsigned __int64 __fastcall sub_313F40(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r15d
  __int64 v3; // rbp
  __int64 v4; // r15
  QT::QAction *v5; // r12
  __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-90h]
  int v9; // [rsp+10h] [rbp-88h]
  void *v10; // [rsp+20h] [rbp-78h] BYREF
  __int64 v11; // [rsp+30h] [rbp-68h]
  void *ptr[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  sub_2DDEB0((__int64)&v10, -2147483645);
  v9 = v11;
  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(_QWORD *)(v1 + 88);
  v8 = *(_QWORD *)(v1 + 88);
  if ( (int)v11 <= v2 )
    v2 = v11;
  if ( v2 > 0 )
  {
    v3 = 0;
    v4 = 8LL * v2;
    while ( 1 )
    {
      v5 = *(QT::QAction **)(*(_QWORD *)(v1 + 80) + v3);
      QT::QAction::setVisible(v5, 1);
      QT::QWidget::windowTitle((QT::QWidget *)ptr);
      QT::QAction::setText(v5, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QWidget::windowIcon((QT::QWidget *)ptr);
      QT::QAction::setIcon(v5, (const QT::QIcon *)ptr);
      v3 += 8;
      QT::QIcon::~QIcon((QT::QIcon *)ptr);
      if ( v3 == v4 )
        break;
      v1 = *(_QWORD *)(a1 + 352);
    }
  }
  if ( (int)v8 > v9 )
  {
    v6 = 8LL * v9;
    do
    {
      QT::QAction::setVisible(*(QT::QAction **)(*(_QWORD *)(*(_QWORD *)(a1 + 352) + 80LL) + v6), 0);
      v6 += 8;
    }
    while ( v6 != 8 * (v9 + (unsigned __int64)(unsigned int)(v8 - v9 - 1) + 1) );
  }
  if ( v10 && !_InterlockedSub((volatile signed __int32 *)v10, 1u) )
    free(v10);
  return v13 - __readfsqword(0x28u);
}
