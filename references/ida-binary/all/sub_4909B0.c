__int64 __fastcall sub_4909B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int8 (__fastcall *v4)(__int64, _QWORD *, _BYTE *); // r14
  _QWORD v6[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h]
  _BYTE v8[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 328);
  if ( !v1 )
    return 0;
  v2 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 328));
  v6[0] = -1;
  v6[1] = 0;
  v3 = v2;
  v7 = 0;
  v4 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *, _BYTE *))(*(_QWORD *)v2 + 480LL);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v8);
  if ( !v4(v3, v6, v8) || (HIDWORD(v6[0]) | LODWORD(v6[0])) < 0 || !v7 )
    return 0;
  QT::QAbstractItemView::setCurrentIndex(v1, v6);
  QT::QAbstractItemView::edit(v1, v6);
  return 1;
}
