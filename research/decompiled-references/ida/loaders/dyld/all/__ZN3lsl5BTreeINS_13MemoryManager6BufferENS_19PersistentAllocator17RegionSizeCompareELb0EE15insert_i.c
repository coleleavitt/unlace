__int64 __usercall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::insert_internal@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        _QWORD *a3@<X2>,
        __int64 a4@<X8>)
{
  __int64 result; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  unsigned __int64 v11; // x12
  bool v12; // w9
  bool v13; // zf
  bool v14; // w10
  int v15; // w23
  __int64 buffer; // x0
  char v17; // w23
  __int64 v18; // x9
  unsigned __int8 v19; // w8
  __int64 v20; // [xsp+0h] [xbp-B0h] BYREF
  __int128 v21; // [xsp+8h] [xbp-A8h]
  __int128 v22; // [xsp+18h] [xbp-98h]
  __int128 v23; // [xsp+28h] [xbp-88h]
  __int128 v24; // [xsp+38h] [xbp-78h]
  __int128 v25; // [xsp+48h] [xbp-68h]
  _BYTE v26[29]; // [xsp+58h] [xbp-58h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v20 = a1;
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    v25 = 0u;
    memset(v26, 0, sizeof(v26));
    result = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
               a2,
               &v20);
    if ( !(_BYTE)result )
      goto LABEL_6;
    v9 = *(unsigned __int8 *)(a2 + 116);
    v10 = a3[1];
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8 * (v9 - 1) + 8) + 16LL * *(unsigned __int8 *)(a2 + v9 - 1 + 104) + 8);
    v12 = *a3 < *(_QWORD *)(*(_QWORD *)(a2 + 8 * (v9 - 1) + 8) + 16LL * *(unsigned __int8 *)(a2 + v9 - 1 + 104));
    v13 = v10 == v11;
    v14 = v10 < v11;
    if ( !v13 )
      v12 = v14;
    if ( !v12 )
    {
      v17 = 0;
      *(_QWORD *)a4 = *(_QWORD *)a2;
      *(_QWORD *)(a4 + 104) = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
      *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
      *(_DWORD *)(a4 + 112) = *(_DWORD *)(a2 + 112);
      *(_BYTE *)(a4 + 116) = v9;
    }
    else
    {
LABEL_6:
      v20 = a1;
      v21 = 0u;
      v22 = 0u;
      v23 = 0u;
      v24 = 0u;
      v25 = 0u;
      memset(v26, 0, sizeof(v26));
      if ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
                              a2,
                              &v20)
        && *(unsigned __int8 *)(a2 + 116) == *(unsigned __int8 *)(a1 + 32) )
      {
        v15 = 0;
      }
      else
      {
        lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator--(a2);
        v15 = 1;
      }
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::prepareForInsertion(a2);
      v18 = *(unsigned __int8 *)(a2 + 116) - 1LL;
      v19 = *(_BYTE *)(a2 + v18 + 104);
      if ( v15 )
      {
        *(_BYTE *)(a2 + v18 + 104) = ++v19;
        v18 = *(unsigned __int8 *)(a2 + 116) - 1LL;
      }
      result = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::NodeCore<15u,10u>::insert(
                 *(_QWORD *)(a2 + 8 + 8 * v18),
                 v19,
                 a3);
      ++*(_QWORD *)(a1 + 24);
      *(_QWORD *)a4 = *(_QWORD *)a2;
      *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
      *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
      *(_QWORD *)(a4 + 104) = *(_QWORD *)(a2 + 104);
      *(_DWORD *)(a4 + 112) = *(_DWORD *)(a2 + 112);
      *(_BYTE *)(a4 + 116) = *(_BYTE *)(a2 + 116);
      v17 = 1;
    }
  }
  else
  {
    buffer = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)(a1 + 8), 0x100u, 0x100u);
    *(_BYTE *)(buffer + 248) = 0x80;
    *(_OWORD *)buffer = 0u;
    *(_OWORD *)(buffer + 16) = 0u;
    *(_OWORD *)(buffer + 32) = 0u;
    *(_OWORD *)(buffer + 48) = 0u;
    *(_OWORD *)(buffer + 64) = 0u;
    *(_OWORD *)(buffer + 80) = 0u;
    *(_OWORD *)(buffer + 96) = 0u;
    *(_OWORD *)(buffer + 112) = 0u;
    *(_OWORD *)(buffer + 128) = 0u;
    *(_OWORD *)(buffer + 144) = 0u;
    *(_OWORD *)(buffer + 160) = 0u;
    *(_OWORD *)(buffer + 176) = 0u;
    *(_OWORD *)(buffer + 192) = 0u;
    *(_OWORD *)(buffer + 208) = 0u;
    *(_OWORD *)(buffer + 224) = 0u;
    *(_QWORD *)a1 = buffer;
    v17 = 1;
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a2 + 8) = buffer;
    *(_BYTE *)(a2 + 116) = 1;
    result = ((__int64 (*)(void))lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::NodeCore<15u,10u>::insert)();
    ++*(_QWORD *)(a1 + 24);
    *(_QWORD *)a4 = *(_QWORD *)a2;
    *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
    *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
    *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
    *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
    *(_QWORD *)(a4 + 104) = *(_QWORD *)(a2 + 104);
    *(_DWORD *)(a4 + 112) = *(_DWORD *)(a2 + 112);
    *(_BYTE *)(a4 + 116) = *(_BYTE *)(a2 + 116);
  }
  *(_BYTE *)(a4 + 120) = v17;
  return result;
}
