unsigned __int64 __fastcall sub_4C4810(QT::QWidget *this)
{
  __int64 v2; // rbp
  QT::QLayout *v3; // rax
  int v4; // rax^4
  _QWORD *v5; // rdi
  int v6; // rdx^4
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD v11[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  *((_BYTE *)this + 56) = 1;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10)) >> 32;
  v3 = (QT::QLayout *)QT::QWidget::layout(this);
  v4 = QT::QLayout::contentsMargins(v3) >> 32;
  v5 = *((_QWORD **)this + 9);
  v7 = v6 + v4 + v2;
  if ( *(char *)(v5[4] + 9LL) < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 112LL))(v5) >> 32;
    if ( v7 < (int)v8 )
      v7 = v8;
  }
  v9 = *((_QWORD *)this + 4);
  v11[1] = v7;
  v11[0] = *(_DWORD *)(v9 + 28) + 1 - *(_DWORD *)(v9 + 20);
  QT::QWidget::resize(this, v11);
  return v12 - __readfsqword(0x28u);
}
