_QWORD *__fastcall lsl::Vector<lsl::UUID>::Vector<lsl::OrderedSet<lsl::UUID,std::less<lsl::UUID>>::const_iterator>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // x1
  __int64 v7; // x8
  __int64 **v8; // x22
  __int64 v9; // x23
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 **v13; // [xsp+0h] [xbp-B0h] BYREF
  __int128 v14; // [xsp+8h] [xbp-A8h]
  __int128 v15; // [xsp+18h] [xbp-98h]
  __int128 v16; // [xsp+28h] [xbp-88h]
  __int128 v17; // [xsp+38h] [xbp-78h]
  __int128 v18; // [xsp+48h] [xbp-68h]
  __int128 v19; // [xsp+58h] [xbp-58h]
  __int64 v20; // [xsp+68h] [xbp-48h]
  int v21; // [xsp+70h] [xbp-40h]
  unsigned __int8 v22; // [xsp+74h] [xbp-3Ch]

  *a1 = a4;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v13 = *(__int64 ***)a2;
  v16 = *(_OWORD *)(a2 + 40);
  v17 = *(_OWORD *)(a2 + 56);
  v18 = *(_OWORD *)(a2 + 72);
  v19 = *(_OWORD *)(a2 + 88);
  v14 = *(_OWORD *)(a2 + 8);
  v15 = *(_OWORD *)(a2 + 24);
  v20 = *(_QWORD *)(a2 + 104);
  v21 = *(_DWORD *)(a2 + 112);
  v22 = *(_BYTE *)(a2 + 116);
  for ( i = a3;
        (unsigned __int8)lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::operator<=>((__int64)&v13, i);
        i = a3 )
  {
    v7 = v22 - 1LL;
    v8 = (&v13)[v7 + 1];
    v9 = *((unsigned __int8 *)&v20 + v7);
    lsl::Vector<lsl::UUID>::reserve((__int64)a1, a1[2] + 1LL);
    v10 = a1[1];
    v11 = a1[2];
    a1[2] = v11 + 1;
    *(_OWORD *)(v10 + 16 * v11) = *(_OWORD *)&v8[2 * v9];
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::operator++(&v13);
  }
  return a1;
}
