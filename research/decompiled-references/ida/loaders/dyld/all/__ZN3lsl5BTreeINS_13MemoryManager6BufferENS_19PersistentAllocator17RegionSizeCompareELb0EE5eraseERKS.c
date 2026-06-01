__int64 __fastcall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::erase(
        __int64 a1)
{
  __int64 v3; // [xsp+0h] [xbp-190h] BYREF
  __int128 v4; // [xsp+8h] [xbp-188h]
  __int128 v5; // [xsp+18h] [xbp-178h]
  __int128 v6; // [xsp+28h] [xbp-168h]
  __int128 v7; // [xsp+38h] [xbp-158h]
  __int128 v8; // [xsp+48h] [xbp-148h]
  __int128 v9; // [xsp+58h] [xbp-138h]
  __int64 v10; // [xsp+68h] [xbp-128h]
  int v11; // [xsp+70h] [xbp-120h]
  char v12; // [xsp+74h] [xbp-11Ch]
  __int64 v13; // [xsp+78h] [xbp-118h] BYREF
  __int128 v14; // [xsp+80h] [xbp-110h]
  __int128 v15; // [xsp+90h] [xbp-100h]
  __int128 v16; // [xsp+A0h] [xbp-F0h]
  __int128 v17; // [xsp+B0h] [xbp-E0h]
  __int128 v18; // [xsp+C0h] [xbp-D0h]
  _BYTE v19[29]; // [xsp+D0h] [xbp-C0h] BYREF
  __int64 v20; // [xsp+F0h] [xbp-A0h] BYREF
  __int128 v21; // [xsp+F8h] [xbp-98h]
  __int128 v22; // [xsp+108h] [xbp-88h]
  __int128 v23; // [xsp+118h] [xbp-78h]
  __int128 v24; // [xsp+128h] [xbp-68h]
  __int128 v25; // [xsp+138h] [xbp-58h]
  __int128 v26; // [xsp+148h] [xbp-48h]
  __int64 v27; // [xsp+158h] [xbp-38h]
  int v28; // [xsp+160h] [xbp-30h]
  char v29; // [xsp+164h] [xbp-2Ch]

  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::find(&v20);
  v13 = a1;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  memset(v19, 0, sizeof(v19));
  if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
                           &v20,
                           &v13) )
    return 0;
  v6 = v23;
  v7 = v24;
  v8 = v25;
  v9 = v26;
  v4 = v21;
  v3 = v20;
  v5 = v22;
  v10 = v27;
  v11 = v28;
  v12 = v29;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::erase(
    a1,
    (__int64)&v3,
    (__int64)&v13);
  return 1;
}
