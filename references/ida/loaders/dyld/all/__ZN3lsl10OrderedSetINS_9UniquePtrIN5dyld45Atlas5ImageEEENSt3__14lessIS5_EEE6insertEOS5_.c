double __usercall lsl::OrderedSet<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>>::insert@<D0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v6; // x8
  double result; // d0
  char v8; // w9
  __int64 v9; // [xsp+0h] [xbp-100h] BYREF
  __int128 v10; // [xsp+8h] [xbp-F8h]
  __int128 v11; // [xsp+18h] [xbp-E8h]
  __int128 v12; // [xsp+28h] [xbp-D8h]
  __int128 v13; // [xsp+38h] [xbp-C8h]
  __int128 v14; // [xsp+48h] [xbp-B8h]
  __int64 v15; // [xsp+58h] [xbp-A8h]
  __int16 v16; // [xsp+60h] [xbp-A0h]
  char v17; // [xsp+62h] [xbp-9Eh]
  char v18; // [xsp+68h] [xbp-98h]
  _BYTE v19[104]; // [xsp+70h] [xbp-90h] BYREF

  lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::const_iterator(
    v19,
    a1,
    a2);
  lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::insert_internal(
    &v9,
    a1,
    v19,
    a2);
  v6 = v9;
  *(_OWORD *)(a3 + 24) = v11;
  *(_OWORD *)(a3 + 40) = v12;
  *(_OWORD *)(a3 + 56) = v13;
  *(_OWORD *)(a3 + 72) = v14;
  result = *(double *)&v10;
  *(_OWORD *)(a3 + 8) = v10;
  *(_QWORD *)(a3 + 88) = v15;
  *(_WORD *)(a3 + 96) = v16;
  v8 = v17;
  *(_QWORD *)a3 = v6;
  *(_BYTE *)(a3 + 98) = v8;
  *(_BYTE *)(a3 + 104) = v18;
  return result;
}
