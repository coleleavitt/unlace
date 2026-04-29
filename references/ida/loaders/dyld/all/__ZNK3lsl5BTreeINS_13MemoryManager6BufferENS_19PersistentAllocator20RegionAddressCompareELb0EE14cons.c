__int64 __fastcall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // w8
  unsigned int v3; // w9
  __int64 v4; // x10
  unsigned __int8 *v5; // x11
  unsigned __int8 *v6; // x12
  unsigned int v7; // w13
  unsigned int v8; // w14
  bool v9; // zf
  unsigned int v10; // w8

  v2 = *(unsigned __int8 *)(a2 + 116);
  v3 = *(unsigned __int8 *)(a1 + 116);
  if ( v2 >= v3 )
    v4 = *(unsigned __int8 *)(a1 + 116);
  else
    v4 = *(unsigned __int8 *)(a2 + 116);
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned __int8 *)(a1 + 104);
    v6 = (unsigned __int8 *)(a2 + 104);
    while ( 1 )
    {
      v7 = *v5;
      v8 = *v6;
      if ( v7 != v8 )
        break;
      ++v5;
      ++v6;
      if ( !--v4 )
        goto LABEL_8;
    }
    if ( v7 < v8 )
      return 0xFFFFFFFFLL;
    else
      return 1;
  }
  else
  {
LABEL_8:
    v9 = v3 == v2;
    if ( v3 < v2 )
      v10 = -1;
    else
      v10 = 1;
    if ( v9 )
      return 0;
    else
      return v10;
  }
}
