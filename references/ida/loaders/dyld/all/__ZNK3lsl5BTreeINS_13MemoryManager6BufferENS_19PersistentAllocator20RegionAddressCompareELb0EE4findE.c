double __usercall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::find@<D0>(
        __int64 a1@<X0>,
        unsigned __int64 *a2@<X1>,
        __int64 a3@<X8>)
{
  unsigned __int8 v6; // w8
  unsigned __int64 *v7; // x9
  unsigned __int64 v8; // x12
  bool v9; // w9
  double result; // d0
  __int64 v11; // x10
  __int64 v12; // [xsp+8h] [xbp-128h] BYREF
  __int128 v13; // [xsp+10h] [xbp-120h]
  __int128 v14; // [xsp+20h] [xbp-110h]
  __int128 v15; // [xsp+30h] [xbp-100h]
  __int128 v16; // [xsp+40h] [xbp-F0h]
  __int128 v17; // [xsp+50h] [xbp-E0h]
  _BYTE v18[29]; // [xsp+60h] [xbp-D0h] BYREF
  __int64 v19; // [xsp+80h] [xbp-B0h] BYREF
  __int128 v20; // [xsp+88h] [xbp-A8h]
  __int128 v21; // [xsp+98h] [xbp-98h]
  __int128 v22; // [xsp+A8h] [xbp-88h]
  __int128 v23; // [xsp+B8h] [xbp-78h]
  __int128 v24; // [xsp+C8h] [xbp-68h]
  __int128 v25; // [xsp+D8h] [xbp-58h]
  __int64 v26; // [xsp+E8h] [xbp-48h]
  int v27; // [xsp+F0h] [xbp-40h]
  unsigned __int8 v28; // [xsp+F4h] [xbp-3Ch]

  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
    &v19,
    a1,
    a2);
  v12 = a1;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  memset(v18, 0, sizeof(v18));
  if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                           (__int64)&v19,
                           (__int64)&v12) )
    goto LABEL_5;
  v6 = v28;
  v7 = (unsigned __int64 *)(*(&v19 + v28) + 16LL * *((unsigned __int8 *)&v26 + v28 - 1));
  v8 = *v7;
  v9 = a2[1] < v7[1];
  if ( *a2 != v8 )
    v9 = *a2 < v8;
  if ( !v9 )
  {
    v11 = v26;
    *(_QWORD *)a3 = v19;
    *(_OWORD *)(a3 + 40) = v22;
    *(_OWORD *)(a3 + 56) = v23;
    *(_OWORD *)(a3 + 72) = v24;
    *(_OWORD *)(a3 + 88) = v25;
    *(_OWORD *)(a3 + 8) = v20;
    result = *(double *)&v21;
    *(_OWORD *)(a3 + 24) = v21;
    *(_QWORD *)(a3 + 104) = v11;
    *(_DWORD *)(a3 + 112) = v27;
    *(_BYTE *)(a3 + 116) = v6;
  }
  else
  {
LABEL_5:
    *(_QWORD *)a3 = a1;
    *(_OWORD *)(a3 + 8) = 0u;
    *(_OWORD *)(a3 + 24) = 0u;
    *(_OWORD *)(a3 + 40) = 0u;
    *(_OWORD *)(a3 + 56) = 0u;
    *(_OWORD *)(a3 + 72) = 0u;
    *(_OWORD *)(a3 + 88) = 0u;
    *(_OWORD *)(a3 + 101) = 0u;
    return 0.0;
  }
  return result;
}
