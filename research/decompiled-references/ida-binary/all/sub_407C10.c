__int64 __fastcall sub_407C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  char v6; // al
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-48h]
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[3] = __readfsqword(0x28u);
  if ( (_DWORD)a4 == 8 && (v5 = *(_QWORD **)(a2 + 72)) != nullptr && (v9 = a3, v6 = sub_3F3430(v5), a3 = v9, a4 = 8, v6) )
  {
    v10[0] = sub_524FA0(*(_QWORD *)(a2 + 72) + 40LL, 2165563921LL, 0);
    v10[1] = v8;
    QT::QColor::operator QT::QVariant(a1, v10);
  }
  else
  {
    QT::QSortFilterProxyModel::data(a1, a2, a3, a4);
  }
  return a1;
}
