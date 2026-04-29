__n128 __fastcall lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::NodeCore<10u,7u>::insert(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  char v3; // w8
  char v4; // w10
  __int64 v5; // x11
  int v6; // w8
  __int64 v7; // x11
  __int64 v8; // x10
  __int64 v9; // x11
  __int64 v10; // x12
  __int64 v11; // t1
  __n128 result; // q0

  v3 = *(_BYTE *)(a1 + 240);
  v4 = v3;
  v5 = v3 & 0x7F;
  if ( v3 >= 0 )
    v6 = 7;
  else
    v6 = 10;
  if ( (_DWORD)v5 == v6 )
    lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::NodeCore<10u,7u>::insert();
  if ( v6 == a2 )
    lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::NodeCore<10u,7u>::insert();
  if ( (_DWORD)v5 != a2 )
  {
    v7 = 3 * v5;
    v8 = a1 + 8 * v7;
    v9 = 24LL * a2 - 8 * v7;
    v10 = v8;
    do
    {
      v11 = *(_QWORD *)(v10 - 24);
      v10 -= 24;
      *(_QWORD *)v8 = v11;
      *(_OWORD *)(v8 + 8) = *(_OWORD *)(v8 - 16);
      v8 = v10;
      v9 += 24;
    }
    while ( v9 );
    v4 = *(_BYTE *)(a1 + 240);
  }
  *(_QWORD *)(a1 + 24LL * a2) = *(_QWORD *)a3;
  result = *(__n128 *)(a3 + 8);
  *(__n128 *)(a1 + 24LL * a2 + 8) = result;
  *(_BYTE *)(a1 + 240) = v4 + 1;
  return result;
}
