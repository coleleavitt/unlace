__int64 __fastcall sub_3F4540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  char v5; // dl

  v3 = QT::QStandardItemModel::itemFromIndex(a2, a3);
  if ( v3 && (v4 = sub_3F2920(v3), v5) )
  {
    sub_3F3CE0(a1, a2, v4);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 2;
    *(_OWORD *)a1 = 0;
  }
  return a1;
}
