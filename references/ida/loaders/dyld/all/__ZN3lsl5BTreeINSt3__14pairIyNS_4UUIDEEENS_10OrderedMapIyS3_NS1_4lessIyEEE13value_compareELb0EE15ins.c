__int64 __usercall lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::insert_internal@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        _QWORD *a3@<X2>,
        __int64 a4@<X8>)
{
  __int64 result; // x0
  __int64 v9; // x8
  int v10; // w23
  __int64 buffer; // x0
  char v12; // w23
  __int64 v13; // x9
  char v14; // w8
  __int64 v15; // x9
  unsigned __int8 v16; // w8
  __int64 v17; // x9
  __int64 v18; // x10
  __int64 v19; // [xsp+8h] [xbp-C8h] BYREF
  __int128 v20; // [xsp+10h] [xbp-C0h]
  __int128 v21; // [xsp+20h] [xbp-B0h]
  __int128 v22; // [xsp+30h] [xbp-A0h]
  __int128 v23; // [xsp+40h] [xbp-90h]
  __int128 v24; // [xsp+50h] [xbp-80h]
  __int128 v25; // [xsp+60h] [xbp-70h]
  __int128 v26; // [xsp+70h] [xbp-60h]
  __int128 v27; // [xsp+80h] [xbp-50h]
  __int64 v28; // [xsp+90h] [xbp-40h]

  if ( *(_QWORD *)a1 )
  {
    v19 = a1;
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    v25 = 0u;
    v26 = 0u;
    v27 = 0u;
    v28 = 0;
    result = lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
               a2,
               (__int64)&v19);
    if ( (_BYTE)result )
    {
      v9 = *(unsigned __int8 *)(a2 + 143);
      if ( *a3 >= *(_QWORD *)(*(_QWORD *)(a2 + 8 * (v9 - 1) + 8) + 24LL * *(unsigned __int8 *)(a2 + v9 - 1 + 128)) )
      {
        v12 = 0;
        *(_QWORD *)a4 = *(_QWORD *)a2;
        *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
        *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
        *(_OWORD *)(a4 + 104) = *(_OWORD *)(a2 + 104);
        *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
        *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
        *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
        *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
        *(_QWORD *)(a4 + 135) = *(_QWORD *)(a2 + 135);
        v18 = *(_QWORD *)(a2 + 128);
        *(_QWORD *)(a4 + 120) = *(_QWORD *)(a2 + 120);
        *(_QWORD *)(a4 + 128) = v18;
        *(_BYTE *)(a4 + 143) = v9;
        goto LABEL_13;
      }
    }
    v19 = a1;
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    v25 = 0u;
    v26 = 0u;
    v27 = 0u;
    v28 = 0;
    if ( (unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                            a2,
                            (__int64)&v19)
      && *(unsigned __int8 *)(a2 + 143) == *(unsigned __int8 *)(a1 + 32) )
    {
      v10 = 0;
    }
    else
    {
      lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator--(a2);
      v10 = 1;
    }
    lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::prepareForInsertion(a2);
    v15 = *(unsigned __int8 *)(a2 + 143) - 1LL;
    v16 = *(_BYTE *)(a2 + v15 + 128);
    if ( v10 )
    {
      *(_BYTE *)(a2 + v15 + 128) = ++v16;
      v15 = *(unsigned __int8 *)(a2 + 143) - 1LL;
    }
    result = lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::NodeCore<10u,7u>::insert(
               *(_QWORD *)(a2 + 8 + 8 * v15),
               v16,
               a3);
    ++*(_QWORD *)(a1 + 24);
    *(_QWORD *)a4 = *(_QWORD *)a2;
    *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
    *(_OWORD *)(a4 + 104) = *(_OWORD *)(a2 + 104);
    *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
    *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
    *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
    *(_QWORD *)(a4 + 135) = *(_QWORD *)(a2 + 135);
    v17 = *(_QWORD *)(a2 + 128);
    *(_QWORD *)(a4 + 120) = *(_QWORD *)(a2 + 120);
    *(_QWORD *)(a4 + 128) = v17;
    v14 = *(_BYTE *)(a2 + 143);
    v12 = 1;
  }
  else
  {
    buffer = lsl::Allocator::allocate_buffer(*(lsl::Allocator **)(a1 + 8), 0x100u, 0x100u);
    *(_BYTE *)(buffer + 240) = 0x80;
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
    v12 = 1;
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a2 + 8) = buffer;
    *(_BYTE *)(a2 + 143) = 1;
    result = ((__int64 (*)(void))lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::NodeCore<10u,7u>::insert)();
    ++*(_QWORD *)(a1 + 24);
    *(_QWORD *)a4 = *(_QWORD *)a2;
    *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
    *(_OWORD *)(a4 + 104) = *(_OWORD *)(a2 + 104);
    *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
    *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
    *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
    *(_QWORD *)(a4 + 135) = *(_QWORD *)(a2 + 135);
    v13 = *(_QWORD *)(a2 + 128);
    *(_QWORD *)(a4 + 120) = *(_QWORD *)(a2 + 120);
    *(_QWORD *)(a4 + 128) = v13;
    v14 = *(_BYTE *)(a2 + 143);
  }
  *(_BYTE *)(a4 + 143) = v14;
LABEL_13:
  *(_BYTE *)(a4 + 144) = v12;
  return result;
}
