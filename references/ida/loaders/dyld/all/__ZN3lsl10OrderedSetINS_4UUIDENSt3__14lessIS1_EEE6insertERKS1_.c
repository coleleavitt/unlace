double __usercall lsl::OrderedSet<lsl::UUID,std::less<lsl::UUID>>::insert@<D0>(
        __int64 a1@<X0>,
        __int128 *a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v5; // x8
  double result; // d0
  char v7; // w9
  __int64 v8; // [xsp+0h] [xbp-130h] BYREF
  __int128 v9; // [xsp+8h] [xbp-128h]
  __int128 v10; // [xsp+18h] [xbp-118h]
  __int128 v11; // [xsp+28h] [xbp-108h]
  __int128 v12; // [xsp+38h] [xbp-F8h]
  __int128 v13; // [xsp+48h] [xbp-E8h]
  __int128 v14; // [xsp+58h] [xbp-D8h]
  __int64 v15; // [xsp+68h] [xbp-C8h]
  int v16; // [xsp+70h] [xbp-C0h]
  char v17; // [xsp+74h] [xbp-BCh]
  char v18; // [xsp+78h] [xbp-B8h]
  __int128 v19; // [xsp+80h] [xbp-B0h] BYREF
  _BYTE v20[120]; // [xsp+90h] [xbp-A0h] BYREF

  v19 = *a2;
  lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::const_iterator(v20, a1, &v19);
  lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::insert_internal(&v8, a1, v20, &v19);
  v5 = v8;
  *(_OWORD *)(a3 + 40) = v11;
  *(_OWORD *)(a3 + 56) = v12;
  *(_OWORD *)(a3 + 72) = v13;
  *(_OWORD *)(a3 + 88) = v14;
  *(_OWORD *)(a3 + 8) = v9;
  result = *(double *)&v10;
  *(_OWORD *)(a3 + 24) = v10;
  *(_QWORD *)(a3 + 104) = v15;
  *(_DWORD *)(a3 + 112) = v16;
  v7 = v17;
  *(_QWORD *)a3 = v5;
  *(_BYTE *)(a3 + 116) = v7;
  *(_BYTE *)(a3 + 120) = v18;
  return result;
}
