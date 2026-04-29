double __usercall lsl::OrderedSet<char const*,lsl::ConstCharStarCompare>::insert@<D0>(
        __int64 a1@<X0>,
        __int64 *a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v5; // x8
  double result; // d0
  char v7; // w9
  __int64 v8; // [xsp+8h] [xbp-108h] BYREF
  __int64 v9; // [xsp+10h] [xbp-100h] BYREF
  __int128 v10; // [xsp+18h] [xbp-F8h]
  __int128 v11; // [xsp+28h] [xbp-E8h]
  __int128 v12; // [xsp+38h] [xbp-D8h]
  __int128 v13; // [xsp+48h] [xbp-C8h]
  __int128 v14; // [xsp+58h] [xbp-B8h]
  __int64 v15; // [xsp+68h] [xbp-A8h]
  __int16 v16; // [xsp+70h] [xbp-A0h]
  char v17; // [xsp+72h] [xbp-9Eh]
  char v18; // [xsp+78h] [xbp-98h]
  _BYTE v19[104]; // [xsp+80h] [xbp-90h] BYREF

  v8 = *a2;
  lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::const_iterator(v19, a1, &v8);
  lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::insert_internal(&v9, a1, v19, &v8);
  v5 = v9;
  *(_OWORD *)(a3 + 24) = v11;
  *(_OWORD *)(a3 + 40) = v12;
  *(_OWORD *)(a3 + 56) = v13;
  *(_OWORD *)(a3 + 72) = v14;
  result = *(double *)&v10;
  *(_OWORD *)(a3 + 8) = v10;
  *(_QWORD *)(a3 + 88) = v15;
  *(_WORD *)(a3 + 96) = v16;
  v7 = v17;
  *(_QWORD *)a3 = v5;
  *(_BYTE *)(a3 + 98) = v7;
  *(_BYTE *)(a3 + 104) = v18;
  return result;
}
