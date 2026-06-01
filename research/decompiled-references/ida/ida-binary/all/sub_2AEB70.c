unsigned __int64 __fastcall sub_2AEB70(QT::QWidget *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64 *); // rax
  __int64 v12; // rax
  QT::QWidget *v13; // r12
  QT::QVBoxLayout *v14; // rbp
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  sub_1A14D0(a1, a2);
  v7 = *((_QWORD *)a1 + 112);
  v8 = *((_QWORD *)a1 + 91);
  *(_QWORD *)a1 = &UserGraphViewer___vtable;
  *((_QWORD *)a1 + 2) = UserGraphViewer___vtable_at__16;
  *((_QWORD *)a1 + 5) = UserGraphViewer___vtable_at__40;
  *((_QWORD *)a1 + 13) = UserGraphViewer___vtable_at__104;
  v9 = (__int64 *)qalloc_or_throw(264);
  sub_29C4E0((__int64)v9, a4);
  v9[32] = (__int64)a1;
  *v9 = (__int64)user_graph_t___vtable;
  sub_1EAF30(a1, (__int64)v9);
  v10 = *v9;
  v9[7] = a5;
  v9[8] = v8;
  v11 = *(__int64 (__fastcall **)(__int64 *))(v10 + 232);
  if ( v11 == user_graph_t__::vfunc_29 )
  {
    if ( !sub_293760((__int64)v9, 11, v9) )
      goto LABEL_3;
    sub_2AD280(v9 + 19, v9 + 25);
    sub_2AD280(v9 + 16, v9 + 22);
  }
  else if ( !(unsigned __int8)v11(v9) )
  {
    goto LABEL_3;
  }
  sub_2BB440(v7, (_DWORD)v9, 12, (_DWORD)v9, v16, v17);
  v18 = 0;
  if ( (unsigned __int8)sub_2B5270(v7, &v18, v9) )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 600LL))(v7, v18);
LABEL_3:
  v12 = *((_QWORD *)a1 + 1);
  v13 = *(QT::QWidget **)(v12 + 16);
  if ( v13 )
  {
    v14 = (QT::QVBoxLayout *)QT::QWidget::layout(*(QT::QWidget **)(v12 + 16));
    if ( !v14 )
    {
      v14 = (QT::QVBoxLayout *)operator new(0x20u);
      QT::QVBoxLayout::QVBoxLayout(v14);
      QT::QLayout::setContentsMargins(v14, 0, 0, 0, 0);
    }
    QT::QLayout::addWidget(v14, a1);
    if ( v14 != (QT::QVBoxLayout *)QT::QWidget::layout(v13) )
      QT::QWidget::setLayout(v13, v14);
    QT::QWidget::setFocusProxy(v13, a1);
  }
  return v19 - __readfsqword(0x28u);
}
