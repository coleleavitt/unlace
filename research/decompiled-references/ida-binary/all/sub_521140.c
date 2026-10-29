__int64 __fastcall sub_521140(QT::QAbstractItemView *a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdx
  _DWORD *v6; // rax
  _DWORD *v7; // rcx

  v3 = QT::QAbstractItemView::model(a1);
  v4 = 0;
  if ( !v3 )
    return v4;
  v5 = v3;
  v6 = *(_DWORD **)(v3 + 96);
  v7 = &v6[*(_QWORD *)(v5 + 104)];
  if ( v7 == v6 )
    return v4;
  do
  {
    if ( ((a2 ^ *v6) & 0x70000) == 0 )
      return 1;
    ++v6;
  }
  while ( v7 != v6 );
  return 0;
}
