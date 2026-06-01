unsigned __int64 __fastcall sub_3D0150(QT::QAbstractScrollArea *this)
{
  int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // r15
  _DWORD *v4; // rax
  int v5; // r13d
  int v6; // r12d
  int v7; // r14d
  __int64 v8; // rdi
  int v10; // [rsp+Ch] [rbp-4Ch]
  int v11; // [rsp+10h] [rbp-48h] BYREF
  int v12; // [rsp+14h] [rbp-44h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v1 = QT::QFrame::frameWidth(this);
  v2 = QT::QAbstractScrollArea::viewport(this);
  v3 = *((_QWORD *)this + 36);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v2 + 32);
    v5 = v4[6];
    v6 = v4[7];
    v7 = v4[5];
    v10 = v4[8];
    v11 = v1;
    v12 = v10 + v1 + (QT::QAbstractScrollArea::viewportMargins(this) >> 32) + 1 - v5;
    QT::QWidget::move(v3, &v11);
    v8 = *((_QWORD *)this + 36);
    v12 = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 1 - *(_DWORD *)(*(_QWORD *)(v8 + 32) + 24LL);
    v11 = v6 - 2 * v1 + 1 - v7;
    QT::QWidget::resize(v8, &v11);
  }
  return v13 - __readfsqword(0x28u);
}
