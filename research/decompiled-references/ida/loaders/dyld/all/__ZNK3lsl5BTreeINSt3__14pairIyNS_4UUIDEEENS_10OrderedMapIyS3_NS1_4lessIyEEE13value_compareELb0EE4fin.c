double __usercall lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::find@<D0>(
        __int64 a1@<X0>,
        _QWORD *a2@<X1>,
        __int64 a3@<X8>)
{
  unsigned __int8 v6; // w8
  double result; // d0
  __int64 v8; // x9
  __int64 v9; // [xsp+8h] [xbp-158h] BYREF
  __int128 v10; // [xsp+10h] [xbp-150h]
  __int128 v11; // [xsp+20h] [xbp-140h]
  __int128 v12; // [xsp+30h] [xbp-130h]
  __int128 v13; // [xsp+40h] [xbp-120h]
  __int128 v14; // [xsp+50h] [xbp-110h]
  __int128 v15; // [xsp+60h] [xbp-100h]
  __int128 v16; // [xsp+70h] [xbp-F0h]
  __int128 v17; // [xsp+80h] [xbp-E0h]
  __int64 v18; // [xsp+90h] [xbp-D0h]
  __int64 v19; // [xsp+98h] [xbp-C8h] BYREF
  __int128 v20; // [xsp+A0h] [xbp-C0h]
  __int128 v21; // [xsp+B0h] [xbp-B0h]
  __int128 v22; // [xsp+C0h] [xbp-A0h]
  __int128 v23; // [xsp+D0h] [xbp-90h]
  __int128 v24; // [xsp+E0h] [xbp-80h]
  __int128 v25; // [xsp+F0h] [xbp-70h]
  __int128 v26; // [xsp+100h] [xbp-60h]
  __int64 v27; // [xsp+110h] [xbp-50h]
  _BYTE v28[15]; // [xsp+118h] [xbp-48h]
  unsigned __int8 v29; // [xsp+127h] [xbp-39h]

  lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::const_iterator(
    &v19,
    a1,
    a2,
    *(unsigned __int8 *)(a1 + 16));
  v9 = a1;
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0;
  if ( (unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                          (__int64)&v19,
                          (__int64)&v9)
    && (v6 = v29, *a2 >= *(_QWORD *)(*(&v19 + v29) + 24LL * (unsigned __int8)v28[v29 - 1])) )
  {
    *(_QWORD *)a3 = v19;
    *(_OWORD *)(a3 + 72) = v24;
    *(_OWORD *)(a3 + 88) = v25;
    *(_OWORD *)(a3 + 104) = v26;
    *(_OWORD *)(a3 + 8) = v20;
    *(_OWORD *)(a3 + 24) = v21;
    *(_OWORD *)(a3 + 40) = v22;
    result = *(double *)&v23;
    *(_OWORD *)(a3 + 56) = v23;
    *(_QWORD *)(a3 + 135) = *(_QWORD *)&v28[7];
    v8 = *(_QWORD *)v28;
    *(_QWORD *)(a3 + 120) = v27;
    *(_QWORD *)(a3 + 128) = v8;
    *(_BYTE *)(a3 + 143) = v6;
  }
  else
  {
    *(_QWORD *)a3 = a1;
    *(_OWORD *)(a3 + 8) = 0u;
    *(_OWORD *)(a3 + 24) = 0u;
    *(_OWORD *)(a3 + 40) = 0u;
    *(_OWORD *)(a3 + 56) = 0u;
    *(_OWORD *)(a3 + 72) = 0u;
    *(_OWORD *)(a3 + 88) = 0u;
    *(_OWORD *)(a3 + 104) = 0u;
    *(_OWORD *)(a3 + 120) = 0u;
    *(_QWORD *)(a3 + 136) = 0;
    return 0.0;
  }
  return result;
}
