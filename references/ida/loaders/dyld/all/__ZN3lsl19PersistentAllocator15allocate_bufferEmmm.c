unsigned __int64 __fastcall lsl::PersistentAllocator::allocate_buffer(
        lsl::PersistentAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v8; // x8
  __int64 v9; // x9
  unsigned __int64 v10; // x19
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // x25
  __int64 v13; // x24
  unsigned __int64 v14; // x8
  __int64 v15; // x9
  __int64 **v16; // x8
  __int64 v17; // x10
  char *v18; // x9
  bool v19; // cf
  char *v20; // x9
  char *v21; // x10
  unsigned __int64 v22; // x8
  vm_address_t bytes; // x27
  __int64 v24; // x1
  __int64 v25; // x28
  unsigned __int64 v26; // x22
  lsl::Lock *v28; // [xsp+0h] [xbp-210h]
  vm_address_t v29; // [xsp+8h] [xbp-208h]
  char *v30; // [xsp+10h] [xbp-200h]
  __int64 v31; // [xsp+18h] [xbp-1F8h]
  char *v32; // [xsp+20h] [xbp-1F0h]
  vm_address_t v33; // [xsp+30h] [xbp-1E0h] BYREF
  __int64 v34; // [xsp+38h] [xbp-1D8h]
  char *v35; // [xsp+40h] [xbp-1D0h] BYREF
  __int128 v36; // [xsp+48h] [xbp-1C8h]
  __int128 v37; // [xsp+58h] [xbp-1B8h]
  __int128 v38; // [xsp+68h] [xbp-1A8h]
  __int128 v39; // [xsp+78h] [xbp-198h]
  __int128 v40; // [xsp+88h] [xbp-188h]
  _BYTE v41[29]; // [xsp+98h] [xbp-178h] BYREF
  __int64 **v42[14]; // [xsp+C0h] [xbp-150h] BYREF
  unsigned __int8 v43; // [xsp+134h] [xbp-DCh]
  _BYTE v44[120]; // [xsp+138h] [xbp-D8h] BYREF

  v28 = *((lsl::Lock **)this + 30);
  lsl::Lock::lock(v28);
  v8 = 16;
  if ( a3 <= 0x10 )
    v9 = 16;
  else
    v9 = a3;
  if ( a2 > 0x10 )
    v8 = a2;
  v10 = (v8 + v9 - 1) & -v9;
  v11 = v10 + a4;
  v12 = a3 - 1;
  v13 = -(__int64)a3;
  v14 = v9 + v10 + 16;
  v32 = (char *)this + 8;
  if ( v14 <= 0x40000 )
    v14 = 0x40000;
  v29 = v14;
  v30 = (char *)this + 48;
  v31 = v13;
LABEL_9:
  v35 = nullptr;
  *(_QWORD *)&v36 = v11;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
    v42,
    (char *)this + 88,
    &v35);
  while ( 1 )
  {
    v35 = (char *)this + 88;
    v36 = 0u;
    v37 = 0u;
    v38 = 0u;
    v39 = 0u;
    v40 = 0u;
    memset(v41, 0, sizeof(v41));
    if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
                             v42,
                             &v35) )
    {
      bytes = lsl::MemoryManager::vm_allocate_bytes(*((lsl::MemoryManager **)this + 30), v29);
      v25 = v24;
      v33 = bytes;
      v34 = v24;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
        v44,
        v32,
        &v33);
      v13 = v31;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
        &v35,
        v32,
        v44,
        &v33);
      v33 = bytes;
      v34 = v25;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
        v44,
        (char *)this + 88,
        &v33);
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::insert_internal(
        &v35,
        (char *)this + 88,
        v44,
        &v33);
      v33 = bytes;
      v34 = v25;
      v11 = v10 + a4;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
        v44,
        v30,
        &v33);
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
        &v35,
        v30,
        v44,
        &v33);
      lsl::PersistentAllocator::reloadMagazine(this);
      goto LABEL_9;
    }
    v15 = v43 - 1LL;
    v16 = v42[v15 + 1];
    v17 = *((unsigned __int8 *)&v42[13] + v15);
    v18 = (char *)v16[2 * v17 + 1] - a4;
    v19 = (unsigned __int64)v18 >= v10;
    v20 = &v18[-v10];
    if ( !v19
      || (v21 = (char *)v16[2 * v17] + a4,
          v22 = (unsigned __int64)&v21[v12] & v13,
          v22 - (unsigned __int64)v21 > (unsigned __int64)v20) )
    {
      atomic_fetch_or((atomic_ullong *volatile)this + 27, 0);
      goto LABEL_17;
    }
    atomic_fetch_add((atomic_ullong *volatile)this + 27, v11);
    if ( v11 || v22 != a4 )
      break;
LABEL_17:
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator++(v42);
  }
  v26 = v22 - a4;
  lsl::PersistentAllocator::reserveRange((__int64)this, (__int64 *)v42, v26, v11);
  lsl::PersistentAllocator::reloadMagazine(this);
  (*(void (__fastcall **)(lsl::PersistentAllocator *))(*(_QWORD *)this + 40LL))(this);
  lsl::Lock::unlock(v28);
  return v26;
}
