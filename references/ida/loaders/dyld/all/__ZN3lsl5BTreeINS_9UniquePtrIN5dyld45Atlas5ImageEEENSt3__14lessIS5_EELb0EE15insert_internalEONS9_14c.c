__int64 __usercall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::insert_internal@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X8>)
{
  __int64 result; // x0
  __int64 v9; // x8
  int v10; // w23
  __int64 buffer; // x0
  char v12; // w23
  __int64 v13; // x9
  unsigned __int8 v14; // w8
  __int64 v15; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v16; // [xsp+8h] [xbp-98h]
  __int128 v17; // [xsp+18h] [xbp-88h]
  __int128 v18; // [xsp+28h] [xbp-78h]
  __int128 v19; // [xsp+38h] [xbp-68h]
  _BYTE v20[27]; // [xsp+48h] [xbp-58h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v15 = a1;
    v16 = 0u;
    v17 = 0u;
    v18 = 0u;
    v19 = 0u;
    memset(v20, 0, sizeof(v20));
    result = lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator<=>(
               a2,
               (__int64)&v15);
    if ( (_BYTE)result
      && (v9 = *(unsigned __int8 *)(a2 + 98),
          *(_QWORD *)(*(_QWORD *)a3 + 160LL) >= *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (v9 - 1) + 8)
                                                                      + 8LL * *(unsigned __int8 *)(a2 + v9 - 1 + 88))
                                                          + 160LL)) )
    {
      v12 = 0;
      *(_QWORD *)a4 = *(_QWORD *)a2;
      *(_QWORD *)(a4 + 88) = *(_QWORD *)(a2 + 88);
      *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
      *(_WORD *)(a4 + 96) = *(_WORD *)(a2 + 96);
      *(_BYTE *)(a4 + 98) = v9;
    }
    else
    {
      v15 = a1;
      v16 = 0u;
      v17 = 0u;
      v18 = 0u;
      v19 = 0u;
      memset(v20, 0, sizeof(v20));
      if ( (unsigned __int8)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator<=>(
                              a2,
                              (__int64)&v15)
        && *(unsigned __int8 *)(a2 + 98) == *(unsigned __int8 *)(a1 + 32) )
      {
        v10 = 0;
      }
      else
      {
        lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator--(a2);
        v10 = 1;
      }
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::prepareForInsertion(a2);
      v13 = *(unsigned __int8 *)(a2 + 98) - 1LL;
      v14 = *(_BYTE *)(a2 + v13 + 88);
      if ( v10 )
      {
        *(_BYTE *)(a2 + v13 + 88) = ++v14;
        v13 = *(unsigned __int8 *)(a2 + 98) - 1LL;
      }
      result = lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::insert(
                 *(_QWORD *)(a2 + 8 + 8 * v13),
                 v14,
                 a3);
      ++*(_QWORD *)(a1 + 24);
      *(_QWORD *)a4 = *(_QWORD *)a2;
      *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
      *(_QWORD *)(a4 + 88) = *(_QWORD *)(a2 + 88);
      *(_WORD *)(a4 + 96) = *(_WORD *)(a2 + 96);
      *(_BYTE *)(a4 + 98) = *(_BYTE *)(a2 + 98);
      v12 = 1;
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
    *(_QWORD *)(buffer + 240) = 0;
    *(_QWORD *)a1 = buffer;
    v12 = 1;
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a2 + 8) = buffer;
    *(_BYTE *)(a2 + 98) = 1;
    result = ((__int64 (*)(void))lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::insert)();
    ++*(_QWORD *)(a1 + 24);
    *(_QWORD *)a4 = *(_QWORD *)a2;
    *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
    *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
    *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
    *(_QWORD *)(a4 + 88) = *(_QWORD *)(a2 + 88);
    *(_WORD *)(a4 + 96) = *(_WORD *)(a2 + 96);
    *(_BYTE *)(a4 + 98) = *(_BYTE *)(a2 + 98);
  }
  *(_BYTE *)(a4 + 104) = v12;
  return result;
}
