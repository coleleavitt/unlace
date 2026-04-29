__int64 __usercall lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::insert_internal@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        _QWORD *a3@<X2>,
        __int64 a4@<X8>)
{
  __int64 result; // x0
  __int64 v9; // x8
  char *v10; // x10
  int v11; // w9
  int v12; // w12
  char *v13; // x10
  char *v14; // x11
  _BOOL4 v15; // w13
  bool v16; // w14
  int v17; // t1
  int v18; // t1
  int v19; // w23
  __int64 buffer; // x0
  char v21; // w23
  __int64 v22; // x9
  unsigned __int8 v23; // w8
  __int64 v24; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v25; // [xsp+8h] [xbp-98h]
  __int128 v26; // [xsp+18h] [xbp-88h]
  __int128 v27; // [xsp+28h] [xbp-78h]
  __int128 v28; // [xsp+38h] [xbp-68h]
  _BYTE v29[27]; // [xsp+48h] [xbp-58h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v24 = a1;
    v25 = 0u;
    v26 = 0u;
    v27 = 0u;
    v28 = 0u;
    memset(v29, 0, sizeof(v29));
    result = lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator<=>(a2, (__int64)&v24);
    if ( !(_BYTE)result )
      goto LABEL_12;
    v9 = *(unsigned __int8 *)(a2 + 98);
    v10 = *(char **)(*(_QWORD *)(a2 + 8 * (v9 - 1) + 8) + 8LL * *(unsigned __int8 *)(a2 + v9 - 1 + 88));
    v11 = *(char *)*a3;
    if ( v11 < *v10 )
      goto LABEL_12;
    v12 = (unsigned __int8)*v10;
    v13 = v10 + 1;
    v14 = (char *)(*a3 + 1LL);
    while ( 1 )
    {
      v15 = (char)v12 < (char)v11;
      v16 = v12 == 0;
      if ( !(_BYTE)v11 || !v12 || (char)v12 < (char)v11 )
        break;
      v17 = *v14++;
      v11 = v17;
      v18 = *v13++;
      v12 = (unsigned __int8)v18;
      if ( v11 < v18 )
      {
        v15 = 0;
        v16 = 0;
        break;
      }
    }
    if ( v16 || v15 )
    {
      v21 = 0;
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
LABEL_12:
      v24 = a1;
      v25 = 0u;
      v26 = 0u;
      v27 = 0u;
      v28 = 0u;
      memset(v29, 0, sizeof(v29));
      if ( (unsigned __int8)lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator<=>(
                              a2,
                              (__int64)&v24)
        && *(unsigned __int8 *)(a2 + 98) == *(unsigned __int8 *)(a1 + 32) )
      {
        v19 = 0;
      }
      else
      {
        lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator--(a2);
        v19 = 1;
      }
      lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::prepareForInsertion(a2);
      v22 = *(unsigned __int8 *)(a2 + 98) - 1LL;
      v23 = *(_BYTE *)(a2 + v22 + 88);
      if ( v19 )
      {
        *(_BYTE *)(a2 + v22 + 88) = ++v23;
        v22 = *(unsigned __int8 *)(a2 + 98) - 1LL;
      }
      result = lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::insert(
                 *(_QWORD *)(a2 + 8 + 8 * v22),
                 v23,
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
      v21 = 1;
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
    v21 = 1;
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a2 + 8) = buffer;
    *(_BYTE *)(a2 + 98) = 1;
    result = ((__int64 (*)(void))lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::insert)();
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
  *(_BYTE *)(a4 + 104) = v21;
  return result;
}
