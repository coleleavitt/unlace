unsigned __int64 __fastcall sub_2E6340(__int64 *a1, QT::QAbstractItemView *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _DWORD v6[4]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 17);
  v9 = __readfsqword(0x28u);
  v8[0] = -1;
  v8[1] = 0;
  v8[2] = 0;
  (*(void (__fastcall **)(_DWORD *, __int64 *, __int64, _QWORD, _QWORD *))(v2 + 96))(v6, a1, v3, 0, v8);
  if ( (v6[1] | v6[0]) >= 0 && v7 )
  {
    *((_BYTE *)a1 + 76) = 1;
    QT::QAbstractItemView::setCurrentIndex(a2, v6);
    v4 = QT::QAbstractItemView::selectionModel(a2);
    (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v4 + 104LL))(v4, v6, 3);
    *((_BYTE *)a1 + 76) = 0;
  }
  return v9 - __readfsqword(0x28u);
}
