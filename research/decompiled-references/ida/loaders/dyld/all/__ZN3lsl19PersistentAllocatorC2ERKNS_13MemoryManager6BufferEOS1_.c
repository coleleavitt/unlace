__int64 __fastcall lsl::PersistentAllocator::PersistentAllocator(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // x23
  __int64 v7; // x0
  __int64 v8; // x26
  __int64 v9; // x27
  __int64 v10; // x0
  __int64 v11; // x8
  __int128 v13; // [xsp+0h] [xbp-160h] BYREF
  _QWORD v14[16]; // [xsp+10h] [xbp-150h] BYREF
  _BYTE v15[120]; // [xsp+90h] [xbp-D0h] BYREF

  *(_QWORD *)a1 = &off_94140;
  *(_QWORD *)(a1 + 8) = 0;
  v6 = a1 + 8;
  v7 = a1 + 128;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = v7;
  *(_QWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = off_940E8;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_OWORD *)(a1 + 152) = 0u;
  *(_OWORD *)(a1 + 168) = 0u;
  *(_OWORD *)(a1 + 184) = 0u;
  *(_BYTE *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = a1;
  *(_QWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = a3;
  lsl::PersistentAllocator::MagazineAllocator<256u,256u>::refill();
  v8 = *a2 + 3328LL;
  v9 = a2[1] - 3328LL;
  v13 = *(_OWORD *)a2;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
    v15,
    v6,
    &v13);
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
    v14,
    v6,
    v15,
    &v13);
  *(_QWORD *)&v13 = v8;
  *((_QWORD *)&v13 + 1) = v9;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
    v15,
    a1 + 88,
    &v13);
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::insert_internal(
    v14,
    a1 + 88,
    v15,
    &v13);
  *(_QWORD *)&v13 = v8;
  *((_QWORD *)&v13 + 1) = v9;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
    v15,
    a1 + 48,
    &v13);
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
    v14,
    a1 + 48,
    v15,
    &v13);
  v10 = lsl::Allocator::aligned_alloc((lsl::Allocator *)a1, 8u, 0x28u);
  *(_WORD *)(v10 + 32) = 0;
  *(_OWORD *)v10 = 0u;
  *(_OWORD *)(v10 + 16) = 0u;
  *(_OWORD *)v10 = *(_OWORD *)a3;
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v10 + 16);
  v11 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = v11;
  LOBYTE(v11) = *(_BYTE *)(v10 + 32);
  *(_BYTE *)(v10 + 32) = *(_BYTE *)(a3 + 32);
  *(_BYTE *)(a3 + 32) = v11;
  *(_BYTE *)(v10 + 33) = *(_BYTE *)(a3 + 33);
  *(_QWORD *)(a1 + 240) = v10;
  *(_QWORD *)(v10 + 16) = a1;
  atomic_store(0, (unsigned __int64 *)(a1 + 216));
  return a1;
}
