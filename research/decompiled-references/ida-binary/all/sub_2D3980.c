__int64 __fastcall sub_2D3980(QT::QWidget *a1, char *s, __int64 a3)
{
  int *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = (int *)sub_1E88B0(a3, (__int64)a1 + 1136);
  sub_202FB0(a1, s, v4);
  *((_QWORD *)a1 + 125) = 0;
  *((_QWORD *)a1 + 126) = 0;
  *(_QWORD *)a1 = &hintview_t___vtable;
  *((_QWORD *)a1 + 2) = hintview_t___vtable_at__16;
  *((_QWORD *)a1 + 13) = hintview_t___vtable_at__104;
  *((_QWORD *)a1 + 5) = hintview_t___vtable_at__40;
  *((_QWORD *)a1 + 127) = 0;
  *((_QWORD *)a1 + 128) = 0;
  *((_QWORD *)a1 + 131) = 0;
  *((_QWORD *)a1 + 134) = 0;
  *((_QWORD *)a1 + 137) = 0;
  *(_OWORD *)((char *)a1 + 1032) = 0;
  *((_OWORD *)a1 + 66) = 0;
  *(_OWORD *)((char *)a1 + 1080) = 0;
  *((_OWORD *)a1 + 69) = 0;
  sub_2D1400((__int64)a1 + 1024, s);
  v5 = *((_QWORD *)a1 + 111);
  *((_DWORD *)a1 + 281) = 0;
  *((_BYTE *)a1 + 1128) = 1;
  *((_QWORD *)a1 + 142) = 0;
  *(_OWORD *)((char *)a1 + 1144) = 0;
  *(_DWORD *)(v5 + 436) = 1;
  qword_8CCE70 = a1;
  QT::QWidget::setWindowFlags(a1, 2061);
  QT::QFrame::setFrameShadow(a1, 32);
  QT::QWidget::setFocusPolicy(a1, 0);
  QT::QWidget::setAttribute(a1, 55, 1, v6, v7, v8);
  if ( dword_8BA7B0 < 0 )
    dword_8BA7B0 = internal_register_place_class(&qword_8CCE80, 2, 0, 930);
  return sub_1FC230((__m128i *)a1, a3);
}
