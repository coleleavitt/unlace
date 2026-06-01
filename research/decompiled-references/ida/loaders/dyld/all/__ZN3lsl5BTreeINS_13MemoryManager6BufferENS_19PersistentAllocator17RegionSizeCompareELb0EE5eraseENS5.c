__n128 __usercall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::erase@<Q0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v6; // x22
  int v7; // w23
  unsigned int v8; // w8
  __int64 v9; // x25
  __int64 v10; // x27
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  __int128 v14; // q0
  __n128 result; // q0
  __int64 v16; // x8

  v6 = *(unsigned __int8 *)(a2 + 116);
  v7 = *(unsigned __int8 *)(a1 + 32);
  v8 = v6;
  if ( (_DWORD)v6 != v7 )
  {
    v9 = *(_QWORD *)(a2 + 8 + 8 * (v6 - 1));
    v10 = *(unsigned __int8 *)(a2 + 104 + v6 - 1);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator++((__int64 ***)a2);
    v11 = *(unsigned __int8 *)(a2 + 116) - 1LL;
    v12 = *(_QWORD *)(a2 + 8 + 8 * v11);
    v13 = *(unsigned __int8 *)(a2 + 104 + v11);
    v14 = *(_OWORD *)(v9 + 16 * v10);
    *(_OWORD *)(v9 + 16 * v10) = *(_OWORD *)(v12 + 16 * v13);
    *(_OWORD *)(v12 + 16 * v13) = v14;
    v8 = *(unsigned __int8 *)(a2 + 116);
  }
  if ( (*(char *)(*(_QWORD *)(a2 + 8 * (v8 - 1LL) + 8) + 248LL) & 0x80000000) == 0 )
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::erase();
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::NodeCore<15u,10u>::erase();
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::rebalanceFromErasure(a2);
  if ( (_DWORD)v6 != v7 )
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator--(a2);
  --*(_QWORD *)(a1 + 24);
  *(_QWORD *)a3 = *(_QWORD *)a2;
  *(_OWORD *)(a3 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a3 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a3 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a3 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a3 + 8) = *(_OWORD *)(a2 + 8);
  result = *(__n128 *)(a2 + 24);
  *(__n128 *)(a3 + 24) = result;
  v16 = *(_QWORD *)(a2 + 104);
  *(_DWORD *)(a3 + 112) = *(_DWORD *)(a2 + 112);
  *(_QWORD *)(a3 + 104) = v16;
  *(_BYTE *)(a3 + 116) = *(_BYTE *)(a2 + 116);
  return result;
}
