__int64 __usercall lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::insert_internal@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X8>)
{
  __int64 result; // x0
  __int64 v9; // x9
  __int64 v10; // x8
  unsigned int v11; // w11
  unsigned int v12; // w12
  char v14; // w23
  int v15; // w23
  __int64 buffer; // x0
  __int64 v17; // x9
  unsigned __int8 v18; // w8
  __int64 v19; // [xsp+0h] [xbp-B0h] BYREF
  __int128 v20; // [xsp+8h] [xbp-A8h]
  __int128 v21; // [xsp+18h] [xbp-98h]
  __int128 v22; // [xsp+28h] [xbp-88h]
  __int128 v23; // [xsp+38h] [xbp-78h]
  __int128 v24; // [xsp+48h] [xbp-68h]
  _BYTE v25[29]; // [xsp+58h] [xbp-58h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v19 = a1;
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    memset(v25, 0, sizeof(v25));
    result = lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::operator<=>(a2, &v19);
    if ( (_BYTE)result )
    {
      v9 = 0;
      v10 = *(unsigned __int8 *)(a2 + 116);
      while ( 1 )
      {
        v11 = *(unsigned __int8 *)(a3 + v9);
        v12 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 8 * (v10 - 1) + 8)
                                 + 16LL * *(unsigned __int8 *)(a2 + v10 - 1 + 104)
                                 + v9);
        if ( v11 < v12 )
          break;
        if ( v12 < v11 || v9++ == 15 )
        {
          v14 = 0;
          *(_QWORD *)a4 = *(_QWORD *)a2;
          *(_QWORD *)(a4 + 104) = *(_QWORD *)(a2 + 104);
          *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
          *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
          *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
          *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
          *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
          *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
          *(_DWORD *)(a4 + 112) = *(_DWORD *)(a2 + 112);
          *(_BYTE *)(a4 + 116) = v10;
          goto LABEL_19;
        }
      }
    }
    v19 = a1;
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    memset(v25, 0, sizeof(v25));
    if ( (unsigned __int8)lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::operator<=>(a2, &v19)
      && *(unsigned __int8 *)(a2 + 116) == *(unsigned __int8 *)(a1 + 32) )
    {
      v15 = 0;
    }
    else
    {
      lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::operator--(a2);
      v15 = 1;
    }
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::prepareForInsertion(a2);
    v17 = *(unsigned __int8 *)(a2 + 116) - 1LL;
    v18 = *(_BYTE *)(a2 + v17 + 104);
    if ( v15 )
    {
      *(_BYTE *)(a2 + v17 + 104) = ++v18;
      v17 = *(unsigned __int8 *)(a2 + 116) - 1LL;
    }
    result = lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::insert(
               *(_QWORD *)(a2 + 8 + 8 * v17),
               v18,
               a3);
    ++*(_QWORD *)(a1 + 24);
    *(_QWORD *)a4 = *(_QWORD *)a2;
    *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
    *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
    *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
    *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
    *(_QWORD *)(a4 + 104) = *(_QWORD *)(a2 + 104);
    *(_DWORD *)(a4 + 112) = *(_DWORD *)(a2 + 112);
    *(_BYTE *)(a4 + 116) = *(_BYTE *)(a2 + 116);
    v14 = 1;
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
    *(_QWORD *)a1 = buffer;
    v14 = 1;
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a2 + 8) = buffer;
    *(_BYTE *)(a2 + 116) = 1;
    result = ((__int64 (*)(void))lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::insert)();
    ++*(_QWORD *)(a1 + 24);
    *(_QWORD *)a4 = *(_QWORD *)a2;
    *(_OWORD *)(a4 + 40) = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(a4 + 56) = *(_OWORD *)(a2 + 56);
    *(_OWORD *)(a4 + 72) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(a4 + 88) = *(_OWORD *)(a2 + 88);
    *(_OWORD *)(a4 + 8) = *(_OWORD *)(a2 + 8);
    *(_OWORD *)(a4 + 24) = *(_OWORD *)(a2 + 24);
    *(_QWORD *)(a4 + 104) = *(_QWORD *)(a2 + 104);
    *(_DWORD *)(a4 + 112) = *(_DWORD *)(a2 + 112);
    *(_BYTE *)(a4 + 116) = *(_BYTE *)(a2 + 116);
  }
LABEL_19:
  *(_BYTE *)(a4 + 120) = v14;
  return result;
}
