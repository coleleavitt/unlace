double __usercall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::find@<D0>(
        __int64 a1@<X0>,
        _QWORD *a2@<X1>,
        __int64 a3@<X8>)
{
  unsigned __int8 v6; // w8
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x12
  bool v9; // w9
  bool v10; // zf
  bool v11; // w10
  double result; // d0
  __int64 v13; // x10
  __int64 v14; // [xsp+8h] [xbp-128h] BYREF
  __int128 v15; // [xsp+10h] [xbp-120h]
  __int128 v16; // [xsp+20h] [xbp-110h]
  __int128 v17; // [xsp+30h] [xbp-100h]
  __int128 v18; // [xsp+40h] [xbp-F0h]
  __int128 v19; // [xsp+50h] [xbp-E0h]
  _BYTE v20[29]; // [xsp+60h] [xbp-D0h] BYREF
  __int64 v21; // [xsp+80h] [xbp-B0h] BYREF
  __int128 v22; // [xsp+88h] [xbp-A8h]
  __int128 v23; // [xsp+98h] [xbp-98h]
  __int128 v24; // [xsp+A8h] [xbp-88h]
  __int128 v25; // [xsp+B8h] [xbp-78h]
  __int128 v26; // [xsp+C8h] [xbp-68h]
  __int128 v27; // [xsp+D8h] [xbp-58h]
  __int64 v28; // [xsp+E8h] [xbp-48h]
  int v29; // [xsp+F0h] [xbp-40h]
  unsigned __int8 v30; // [xsp+F4h] [xbp-3Ch]

  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
    &v21,
    a1,
    a2);
  v14 = a1;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  memset(v20, 0, sizeof(v20));
  if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
                           (__int64)&v21,
                           (__int64)&v14) )
    goto LABEL_5;
  v6 = v30;
  v7 = a2[1];
  v8 = *(_QWORD *)(*(&v21 + v30) + 16LL * *((unsigned __int8 *)&v28 + v30 - 1) + 8);
  v9 = *a2 < *(_QWORD *)(*(&v21 + v30) + 16LL * *((unsigned __int8 *)&v28 + v30 - 1));
  v10 = v7 == v8;
  v11 = v7 < v8;
  if ( !v10 )
    v9 = v11;
  if ( !v9 )
  {
    v13 = v28;
    *(_QWORD *)a3 = v21;
    *(_OWORD *)(a3 + 40) = v24;
    *(_OWORD *)(a3 + 56) = v25;
    *(_OWORD *)(a3 + 72) = v26;
    *(_OWORD *)(a3 + 88) = v27;
    *(_OWORD *)(a3 + 8) = v22;
    result = *(double *)&v23;
    *(_OWORD *)(a3 + 24) = v23;
    *(_QWORD *)(a3 + 104) = v13;
    *(_DWORD *)(a3 + 112) = v29;
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
