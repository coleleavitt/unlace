__int64 __fastcall sub_4996D0(__int64 a1)
{
  __int64 result; // rax

  result = QT::QAbstractItemModel::flags();
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 2376LL) == 1 )
    return (unsigned int)result | 4;
  return result;
}
