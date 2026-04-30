unsigned __int64 __fastcall sub_4C5F10(_QWORD *a1)
{
  __int64 v1; // rax
  int v2; // r12d
  __int64 v4; // rdi
  int v5; // r13d
  __int64 v6; // rdi
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v1 = a1[5];
  if ( *(_QWORD *)v1 )
  {
    v2 = *(_DWORD *)(v1 + 88);
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(a1[1] + 16LL)) )
    {
      v4 = *(_QWORD *)(a1[5] + 96LL);
      v5 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 1 - *(_DWORD *)(*(_QWORD *)(v4 + 32) + 24LL);
      v12 = 0;
      QT::QWidget::move(v4, &v12);
      v2 += v5;
      v6 = *(_QWORD *)(a1[5] + 96LL);
      v12 = __PAIR64__(v5, *(_DWORD *)(a1[4] + 28LL) + 1 - *(_DWORD *)(a1[4] + 20LL));
      QT::QWidget::resize(v6, &v12);
    }
    v7 = *(_QWORD *)a1[5];
    LODWORD(v12) = 0;
    HIDWORD(v12) = v2;
    QT::QWidget::move(v7, &v12);
    v8 = (_DWORD *)a1[4];
    v9 = *(_QWORD *)a1[5];
    v10 = v8[8] + 1 - v8[6];
    LODWORD(v12) = v8[7] + 1 - v8[5];
    HIDWORD(v12) = v10 - v2;
    QT::QWidget::resize(v9, &v12);
  }
  return v13 - __readfsqword(0x28u);
}
