__int64 __fastcall lsl::PersistentAllocator::vm_allocated_bytes(lsl::PersistentAllocator *this)
{
  char *v1; // x19
  __int64 v2; // x0
  __int128 v3; // q0
  __int128 v4; // q1
  __int128 v5; // q2
  __int128 v6; // q0
  int v7; // w8
  __int64 v8; // x19
  __int64 v10; // [xsp+8h] [xbp-118h] BYREF
  __int128 v11; // [xsp+10h] [xbp-110h]
  __int128 v12; // [xsp+20h] [xbp-100h]
  __int128 v13; // [xsp+30h] [xbp-F0h]
  __int128 v14; // [xsp+40h] [xbp-E0h]
  __int128 v15; // [xsp+50h] [xbp-D0h]
  __int128 v16; // [xsp+60h] [xbp-C0h]
  __int64 v17; // [xsp+70h] [xbp-B0h]
  int v18; // [xsp+78h] [xbp-A8h]
  unsigned __int8 v19; // [xsp+7Ch] [xbp-A4h]
  char *v20; // [xsp+80h] [xbp-A0h] BYREF
  __int128 v21; // [xsp+88h] [xbp-98h]
  __int128 v22; // [xsp+98h] [xbp-88h]
  __int128 v23; // [xsp+A8h] [xbp-78h]
  __int128 v24; // [xsp+B8h] [xbp-68h]
  __int128 v25; // [xsp+C8h] [xbp-58h]
  _BYTE v26[29]; // [xsp+D8h] [xbp-48h] BYREF

  v1 = (char *)this + 8;
  v20 = (char *)this + 8;
  v21 = 0u;
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  memset(v26, 0, sizeof(v26));
  v2 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v20);
  v10 = *(_QWORD *)v2;
  v3 = *(_OWORD *)(v2 + 88);
  v4 = *(_OWORD *)(v2 + 72);
  v5 = *(_OWORD *)(v2 + 56);
  v13 = *(_OWORD *)(v2 + 40);
  v14 = v5;
  v15 = v4;
  v16 = v3;
  v6 = *(_OWORD *)(v2 + 24);
  v11 = *(_OWORD *)(v2 + 8);
  v12 = v6;
  v7 = *(_DWORD *)(v2 + 112);
  v17 = *(_QWORD *)(v2 + 104);
  v18 = v7;
  v19 = *(_BYTE *)(v2 + 116);
  v20 = v1;
  v21 = 0u;
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  memset(v26, 0, sizeof(v26));
  if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                           &v10,
                           &v20) )
    return 0;
  v8 = 0;
  do
  {
    v8 += *(_QWORD *)(*(&v10 + v19) + 16LL * *((unsigned __int8 *)&v17 + v19 - 1) + 8);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v10);
  }
  while ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                             &v10,
                             &v20) );
  return v8;
}
