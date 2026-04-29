void *__fastcall lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild(
        char *a1,
        unsigned int a2,
        lsl::Allocator *this)
{
  char *v3; // x19
  char *v4; // x23
  __int64 v5; // x22
  int v6; // w10
  int v7; // w25
  int v8; // w11
  __int64 v10; // x26
  __int64 v11; // x24
  char *v12; // x21
  char *v13; // x8
  _BYTE *buffer; // x0
  _BYTE *v15; // x20
  char v16; // w8
  __int128 v17; // q0
  unsigned __int8 v18; // w21
  char *v19; // x25
  void *result; // x0
  __int64 v21; // x8
  int v22; // w9
  int v23; // w12
  char v24; // w8
  int v25; // w11
  int v26; // w8
  int v27; // w9

  if ( a1[248] < 0 )
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild();
  if ( (unsigned __int8)a1[248] >= 0xFu )
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild();
  v3 = a1;
  v4 = a1 + 120;
  v5 = (__int64)&a1[8 * a2 + 120];
  v6 = *(char *)(*(_QWORD *)v5 + 248LL);
  v7 = *(_BYTE *)(*(_QWORD *)v5 + 248LL) & 0x7F;
  if ( v6 >= 0 )
    v8 = 15;
  else
    v8 = 31;
  if ( v7 != v8 )
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild();
  v10 = a2;
  if ( v6 >= 0 )
    v11 = 7;
  else
    v11 = 15;
  v12 = &a1[8 * a2];
  if ( (unsigned __int8)a1[248] != a2 )
  {
    a1 = (char *)_platform_memmove(&a1[8 * a2 + 8], &a1[8 * a2], 8LL * (unsigned __int8)a1[248] - 8LL * a2);
    a2 = (unsigned __int8)v3[248];
  }
  if ( (a2 & 0x80) != 0 )
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild(a1);
  v13 = &v4[8 * a2];
  if ( v13 != (char *)v5 )
    _platform_memmove((void *)(v5 + 16), (const void *)(v5 + 8), (size_t)&v13[-v5]);
  *(_QWORD *)v12 = *(_QWORD *)(*(_QWORD *)v5 + 8 * v11);
  buffer = (_BYTE *)lsl::Allocator::allocate_buffer(this, 0x100u, 0x100u);
  v15 = buffer;
  v16 = *(_BYTE *)(*(_QWORD *)v5 + 248LL);
  buffer[248] = v16 & 0x80;
  if ( v16 < 0 )
  {
    *((_QWORD *)buffer + 30) = 0;
    v17 = 0u;
    *((_OWORD *)buffer + 13) = 0u;
    *((_OWORD *)buffer + 14) = 0u;
    *((_OWORD *)buffer + 11) = 0u;
    *((_OWORD *)buffer + 12) = 0u;
    *((_OWORD *)buffer + 9) = 0u;
    *((_OWORD *)buffer + 10) = 0u;
    *((_OWORD *)buffer + 7) = 0u;
    *((_OWORD *)buffer + 8) = 0u;
  }
  else
  {
    *((_QWORD *)buffer + 14) = 0;
    v17 = 0u;
  }
  *((_OWORD *)buffer + 5) = v17;
  *((_OWORD *)buffer + 6) = v17;
  *((_OWORD *)buffer + 3) = v17;
  *((_OWORD *)buffer + 4) = v17;
  *((_OWORD *)buffer + 1) = v17;
  *((_OWORD *)buffer + 2) = v17;
  *(_OWORD *)buffer = v17;
  if ( v3[248] < 0 )
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild();
  v18 = ~(_BYTE)v11 + v7;
  v19 = &v4[8 * v10];
  *((_QWORD *)v19 + 1) = buffer;
  result = _platform_memmove(buffer, (const void *)(*(_QWORD *)v19 + 8 * v11 + 8), 8LL * v18);
  v21 = *(_QWORD *)v19;
  v22 = *(char *)(*(_QWORD *)v19 + 248LL);
  if ( (v22 & 0x80000000) == 0 )
  {
    if ( (char)v15[248] < 0 )
      lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild(result);
    result = _platform_memmove(v15 + 120, (const void *)(v21 + 8 * v11 + 128), 8LL * v18 + 8);
    v21 = *(_QWORD *)v5;
    LOBYTE(v22) = *(_BYTE *)(*(_QWORD *)v5 + 248LL);
  }
  *(_BYTE *)(v21 + 248) = v22 + ~v18;
  v15[248] += v18;
  ++v3[248];
  if ( (char)v15[248] >= 0 )
    v23 = 15;
  else
    v23 = 31;
  if ( (v15[248] & 0x7F) == v23
    || ((v24 = *(_BYTE *)(v21 + 248), v25 = v24, v26 = v24 & 0x7F, v25 >= 0) ? (v27 = 15) : (v27 = 31), v26 == v27) )
  {
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::splitChild(result);
  }
  return result;
}
