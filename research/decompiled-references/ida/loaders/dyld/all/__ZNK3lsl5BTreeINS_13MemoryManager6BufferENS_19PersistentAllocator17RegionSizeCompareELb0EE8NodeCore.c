__int64 __fastcall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::NodeCore<15u,10u>::lower_bound_index(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x10
  _QWORD *v4; // x9
  unsigned __int64 v5; // x13
  unsigned __int64 *v6; // x14
  _QWORD *v7; // x14
  unsigned __int64 v8; // x15
  unsigned __int64 v9; // x16
  _BOOL4 v10; // w16
  bool v11; // zf
  _BOOL4 v12; // w15

  v2 = *(_BYTE *)(a1 + 248) & 0x7F;
  if ( (*(_BYTE *)(a1 + 248) & 0x7F) != 0 )
  {
    v3 = a2[1];
    v4 = (_QWORD *)a1;
    do
    {
      v5 = v2 >> 1;
      v6 = &v4[2 * (v2 >> 1)];
      v9 = *v6;
      v8 = v6[1];
      v7 = v6 + 2;
      v10 = v9 < *a2;
      v11 = v8 == v3;
      v12 = v8 < v3;
      if ( v11 )
        v12 = v10;
      v2 += ~(v2 >> 1);
      if ( v12 )
        v4 = v7;
      else
        v2 = v5;
    }
    while ( v2 );
  }
  else
  {
    LODWORD(v4) = a1;
  }
  return (unsigned __int8)((unsigned int)((_DWORD)v4 - a1) >> 4);
}
