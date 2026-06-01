unsigned __int8 *__fastcall lsl::PersistentAllocator::reloadMagazine(unsigned __int8 *this)
{
  __int64 v1; // x19
  unsigned __int64 v2; // x8
  __int64 v3; // x9
  unsigned __int64 v4; // x10
  unsigned __int64 *v5; // x11
  __int64 v6; // x12
  unsigned __int64 v7; // t1
  __int64 v8; // x10
  unsigned __int64 *v9; // x11
  unsigned __int64 v10; // t1
  unsigned __int8 *v11; // x20
  __int64 v12; // x22
  unsigned __int64 v13; // x21
  __int64 v14; // x8
  __int64 **v15; // x9
  __int64 v16; // x10
  __int64 *v17; // x8
  bool v18; // cf
  char *v19; // x8
  __int64 *v20; // x9
  unsigned __int64 v21; // x23
  vm_address_t v23; // x1
  vm_address_t bytes; // x0
  __int64 v25; // x1
  vm_address_t v26; // x24
  __int64 v27; // x25
  __int64 v28; // x23
  __int64 v29; // x19
  vm_address_t v30; // x19
  __int64 v31; // x21
  vm_address_t v32; // [xsp+0h] [xbp-150h] BYREF
  __int64 v33; // [xsp+8h] [xbp-148h]
  __int64 **v34[14]; // [xsp+10h] [xbp-140h] BYREF
  unsigned __int8 v35; // [xsp+84h] [xbp-CCh]
  __int64 v36; // [xsp+90h] [xbp-C0h] BYREF
  __int128 v37; // [xsp+98h] [xbp-B8h]
  __int128 v38; // [xsp+A8h] [xbp-A8h]
  __int128 v39; // [xsp+B8h] [xbp-98h]
  __int128 v40; // [xsp+C8h] [xbp-88h]
  __int128 v41; // [xsp+D8h] [xbp-78h]
  _BYTE v42[29]; // [xsp+E8h] [xbp-68h] BYREF

  v1 = (__int64)this;
  v2 = 2 * (*(this + 80) + (unsigned __int64)*(this + 120) + *(this + 40)) + 3;
  v3 = *(this + 200);
  if ( *(this + 200) )
  {
    v4 = 0;
    v5 = (unsigned __int64 *)(this + 144);
    v6 = *(this + 200);
    do
    {
      v7 = *v5;
      v5 += 2;
      v4 += v7 >> 8;
      --v6;
    }
    while ( v6 );
    if ( v2 <= v4 )
      return this;
    v8 = 0;
    v9 = (unsigned __int64 *)(this + 144);
    do
    {
      v10 = *v9;
      v9 += 2;
      v8 += v10 >> 8;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v8 = 0;
  }
  v11 = this + 88;
  v12 = (__int64)(this + 128);
  v13 = (2 * v2 - v8) << 8;
  v36 = 0;
  *(_QWORD *)&v37 = v13;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
    v34,
    this + 88,
    &v36);
  v36 = v1 + 88;
  v37 = 0u;
  v38 = 0u;
  v39 = 0u;
  v40 = 0u;
  v41 = 0u;
  memset(v42, 0, sizeof(v42));
  if ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
                          v34,
                          &v36) )
  {
    while ( 1 )
    {
      v14 = v35 - 1LL;
      v15 = v34[v14 + 1];
      v16 = *((unsigned __int8 *)&v34[13] + v14);
      v17 = v15[2 * v16 + 1];
      v18 = (unsigned __int64)v17 >= v13;
      v19 = (char *)v17 - v13;
      if ( v18 )
      {
        v20 = v15[2 * v16];
        v21 = ((unsigned __int64)v20 + 255) & 0xFFFFFFFFFFFFFF00LL;
        if ( v21 - (unsigned __int64)v20 <= (unsigned __int64)v19 && (v21 | v13) != 0 )
          break;
      }
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator++(v34);
      v36 = v1 + 88;
      v37 = 0u;
      v38 = 0u;
      v39 = 0u;
      v40 = 0u;
      v41 = 0u;
      memset(v42, 0, sizeof(v42));
      if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
                               v34,
                               &v36) )
        goto LABEL_18;
    }
    lsl::PersistentAllocator::MagazineAllocator<256u,256u>::refill(v1 + 128, v21, v13);
    return (unsigned __int8 *)lsl::PersistentAllocator::reserveRange(v1, (__int64 *)v34, v21, v13);
  }
  else
  {
LABEL_18:
    if ( v13 <= 0x40000 )
      v23 = 0x40000;
    else
      v23 = v13;
    bytes = lsl::MemoryManager::vm_allocate_bytes(*(lsl::MemoryManager **)(v1 + 240), v23);
    if ( !bytes )
      lsl::PersistentAllocator::reloadMagazine(nullptr);
    v26 = bytes;
    v27 = v25;
    v28 = v1 + 48;
    v29 = v1 + 8;
    lsl::PersistentAllocator::MagazineAllocator<256u,256u>::refill(v12, bytes, v13);
    v32 = v26;
    v33 = v27;
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
      &v36,
      v29,
      &v32);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
      v34,
      v29,
      &v36,
      &v32);
    v30 = v26 + v13;
    v31 = v27 - v13;
    v32 = v30;
    v33 = v31;
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
      &v36,
      v11,
      &v32);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::insert_internal(
      v34,
      v11,
      &v36,
      &v32);
    v32 = v30;
    v33 = v31;
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
      &v36,
      v28,
      &v32);
    return (unsigned __int8 *)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
                                v34,
                                v28,
                                &v36,
                                &v32);
  }
}
