void *__fastcall lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild(
        char *a1,
        unsigned int a2,
        lsl::Allocator *this)
{
  char *v3; // x19
  char *v4; // x22
  char *v5; // x22
  __int64 v6; // t1
  int v7; // w10
  int v8; // w24
  int v9; // w11
  __int64 v11; // x25
  __int64 v12; // x23
  char *v13; // x21
  __int64 v14; // x9
  _BYTE *buffer; // x0
  _BYTE *v16; // x20
  char v17; // w8
  unsigned __int8 v18; // w21
  void *result; // x0
  __int64 v20; // x8
  int v21; // w9
  int v22; // w12
  char v23; // w8
  int v24; // w11
  int v25; // w8
  int v26; // w9

  if ( a1[248] < 0 )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild();
  if ( (unsigned __int8)a1[248] >= 0xAu )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild();
  v3 = a1;
  v4 = &a1[8 * a2];
  v6 = *((_QWORD *)v4 + 20);
  v5 = v4 + 160;
  v7 = *(char *)(v6 + 248);
  v8 = *(_BYTE *)(v6 + 248) & 0x7F;
  if ( v7 >= 0 )
    v9 = 10;
  else
    v9 = 15;
  if ( v8 != v9 )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild();
  v11 = a2;
  if ( v7 >= 0 )
    v12 = 5;
  else
    v12 = 7;
  v13 = &a1[16 * a2];
  if ( (unsigned __int8)a1[248] != a2 )
  {
    a1 = (char *)_platform_memmove(&a1[16 * a2 + 16], &a1[16 * a2], 16LL * (unsigned __int8)a1[248] - 16LL * a2);
    a2 = (unsigned __int8)v3[248];
  }
  if ( (a2 & 0x80) != 0 )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild(a1);
  v14 = (__int64)&v3[8 * a2 + 168];
  if ( (char *)v14 != v5 + 8 )
    _platform_memmove(v5 + 16, v5 + 8, v14 - (_QWORD)(v5 + 8));
  *(_OWORD *)v13 = *(_OWORD *)(*(_QWORD *)v5 + 16 * v12);
  buffer = (_BYTE *)lsl::Allocator::allocate_buffer(this, 0x100u, 0x100u);
  v16 = buffer;
  v17 = *(_BYTE *)(*(_QWORD *)v5 + 248LL);
  buffer[248] = v17 & 0x80;
  if ( v17 < 0 )
  {
    *((_OWORD *)buffer + 13) = 0u;
    *((_OWORD *)buffer + 14) = 0u;
    *((_OWORD *)buffer + 11) = 0u;
    *((_OWORD *)buffer + 12) = 0u;
    *((_OWORD *)buffer + 10) = 0u;
  }
  *((_OWORD *)buffer + 8) = 0u;
  *((_OWORD *)buffer + 9) = 0u;
  *((_OWORD *)buffer + 6) = 0u;
  *((_OWORD *)buffer + 7) = 0u;
  *((_OWORD *)buffer + 4) = 0u;
  *((_OWORD *)buffer + 5) = 0u;
  *((_OWORD *)buffer + 2) = 0u;
  *((_OWORD *)buffer + 3) = 0u;
  *(_OWORD *)buffer = 0u;
  *((_OWORD *)buffer + 1) = 0u;
  if ( v3[248] < 0 )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild();
  v18 = ~(_BYTE)v12 + v8;
  *(_QWORD *)&v3[8 * v11 + 168] = buffer;
  result = _platform_memmove(buffer, (const void *)(*(_QWORD *)v5 + 16 * v12 + 16), 16LL * v18);
  v20 = *(_QWORD *)v5;
  v21 = *(char *)(*(_QWORD *)v5 + 248LL);
  if ( (v21 & 0x80000000) == 0 )
  {
    if ( (char)v16[248] < 0 )
      lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild(result);
    result = _platform_memmove(v16 + 160, (const void *)(v20 + 8 * v12 + 168), 8LL * v18 + 8);
    v20 = *(_QWORD *)v5;
    LOBYTE(v21) = *(_BYTE *)(*(_QWORD *)v5 + 248LL);
  }
  *(_BYTE *)(v20 + 248) = v21 + ~v18;
  v16[248] += v18;
  ++v3[248];
  if ( (char)v16[248] >= 0 )
    v22 = 10;
  else
    v22 = 15;
  if ( (v16[248] & 0x7F) == v22
    || ((v23 = *(_BYTE *)(v20 + 248), v24 = v23, v25 = v23 & 0x7F, v24 >= 0) ? (v26 = 10) : (v26 = 15), v25 == v26) )
  {
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild(result);
  }
  return result;
}
