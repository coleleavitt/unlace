double __usercall lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::insert@<D0>(
        __int64 a1@<X0>,
        __int64 *a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v5; // x8
  double result; // d0
  __int64 v7; // x10
  __int16 v8; // w9
  __int64 v9; // [xsp+8h] [xbp-168h] BYREF
  __int128 v10; // [xsp+10h] [xbp-160h]
  __int64 v11; // [xsp+20h] [xbp-150h] BYREF
  __int128 v12; // [xsp+28h] [xbp-148h]
  __int128 v13; // [xsp+38h] [xbp-138h]
  __int128 v14; // [xsp+48h] [xbp-128h]
  __int128 v15; // [xsp+58h] [xbp-118h]
  __int128 v16; // [xsp+68h] [xbp-108h]
  __int128 v17; // [xsp+78h] [xbp-F8h]
  __int128 v18; // [xsp+88h] [xbp-E8h]
  __int64 v19; // [xsp+98h] [xbp-D8h]
  _BYTE v20[15]; // [xsp+A0h] [xbp-D0h]
  __int16 v21; // [xsp+AFh] [xbp-C1h]
  _BYTE v22[144]; // [xsp+B8h] [xbp-B8h] BYREF

  v9 = *a2;
  v10 = *(_OWORD *)(a2 + 1);
  lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::const_iterator(
    v22,
    a1,
    &v9,
    *(unsigned __int8 *)(a1 + 16));
  lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::insert_internal(
    &v11,
    a1,
    v22,
    &v9);
  v5 = v11;
  *(_OWORD *)(a3 + 72) = v16;
  *(_OWORD *)(a3 + 88) = v17;
  *(_OWORD *)(a3 + 104) = v18;
  *(_OWORD *)(a3 + 8) = v12;
  *(_OWORD *)(a3 + 24) = v13;
  *(_OWORD *)(a3 + 40) = v14;
  result = *(double *)&v15;
  *(_OWORD *)(a3 + 56) = v15;
  *(_QWORD *)(a3 + 135) = *(_QWORD *)&v20[7];
  v7 = *(_QWORD *)v20;
  *(_QWORD *)(a3 + 120) = v19;
  *(_QWORD *)(a3 + 128) = v7;
  v8 = v21;
  *(_QWORD *)a3 = v5;
  *(_WORD *)(a3 + 143) = v8;
  return result;
}
