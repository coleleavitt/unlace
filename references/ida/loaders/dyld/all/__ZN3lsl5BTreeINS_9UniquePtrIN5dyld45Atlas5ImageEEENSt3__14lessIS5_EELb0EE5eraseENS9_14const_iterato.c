__n128 __usercall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::erase@<Q0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v6; // x22
  int v7; // w23
  unsigned int v8; // w8
  lsl::AllocationMetadata **v9; // x24
  void *v10; // x1
  lsl::AllocationMetadata **v11; // x8
  lsl::AllocationMetadata *v12; // x9
  lsl::AllocationMetadata *v13; // x10
  lsl::AllocationMetadata *v14; // x10
  __n128 result; // q0
  lsl::AllocationMetadata *v16; // [xsp+8h] [xbp-48h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 98);
  v7 = *(unsigned __int8 *)(a1 + 32);
  v8 = v6;
  if ( (_DWORD)v6 != v7 )
  {
    v9 = (lsl::AllocationMetadata **)(*(_QWORD *)(a2 + 8 + 8 * (v6 - 1)) + 8LL * *(unsigned __int8 *)(a2 + 88 + v6 - 1));
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator++((__int64 ***)a2);
    v11 = (lsl::AllocationMetadata **)(*(_QWORD *)(a2 + 8 + 8 * (*(unsigned __int8 *)(a2 + 98) - 1LL))
                                     + 8LL * *(unsigned __int8 *)(a2 + 88 + *(unsigned __int8 *)(a2 + 98) - 1LL));
    v16 = nullptr;
    if ( &v16 == v9 )
    {
      v12 = nullptr;
    }
    else
    {
      v12 = *v9;
      v16 = *v9;
      *v9 = nullptr;
    }
    if ( v11 != v9 )
    {
      v13 = *v9;
      *v9 = *v11;
      *v11 = v13;
    }
    if ( &v16 != v11 )
    {
      v14 = *v11;
      *v11 = v12;
      v16 = v14;
    }
    lsl::UniquePtr<dyld4::Atlas::Image>::~UniquePtr(&v16, v10);
    v8 = *(unsigned __int8 *)(a2 + 98);
  }
  if ( (*(char *)(*(_QWORD *)(a2 + 8 * (v8 - 1LL) + 8) + 248LL) & 0x80000000) == 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::erase();
  lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::erase();
  lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure(a2);
  if ( (_DWORD)v6 != v7 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator--((__int64 **)a2);
  --*(_QWORD *)(a1 + 24);
  *(_QWORD *)a3 = *(_QWORD *)a2;
  *(_OWORD *)(a3 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a3 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a3 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a3 + 72) = *(_OWORD *)(a2 + 72);
  result = *(__n128 *)(a2 + 8);
  *(__n128 *)(a3 + 8) = result;
  *(_QWORD *)(a3 + 88) = *(_QWORD *)(a2 + 88);
  *(_WORD *)(a3 + 96) = *(_WORD *)(a2 + 96);
  *(_BYTE *)(a3 + 98) = *(_BYTE *)(a2 + 98);
  return result;
}
