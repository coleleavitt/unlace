__int64 __fastcall sub_45200(__int64 a1, __int64 a2, const char *a3)
{
  _QWORD *v4; // rax
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r12
  void *v9; // rax

  sub_45020(a1, a2, 0);
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_DWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 768) = 0;
  *(_DWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 776) = a1 + 760;
  *(_QWORD *)(a1 + 784) = a1 + 760;
  v4 = (_QWORD *)(a1 + 840);
  *(_OWORD *)(a1 + 632) = 0;
  *(_OWORD *)(a1 + 656) = 0;
  *(_OWORD *)(a1 + 680) = 0;
  *(_OWORD *)(a1 + 712) = 0;
  *(_OWORD *)(a1 + 736) = 0;
  *(_OWORD *)(a1 + 792) = 0;
  *(_OWORD *)(a1 + 808) = 0;
  do
  {
    *v4 = 0;
    v4 += 4;
    *(_OWORD *)(v4 - 3) = 0;
    *((_WORD *)v4 - 4) = 0;
    *((_DWORD *)v4 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 1320) != v4 );
  result = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 1320) = 0;
  memset(
    (void *)((a1 + 848) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 840 - (((_DWORD)a1 + 848) & 0xFFFFFFF8) + 488) >> 3));
  *(_OWORD *)(a1 + 1336) = 0;
  *(_QWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1352) = 0;
  *(_QWORD *)(a1 + 1376) = 0;
  *(_OWORD *)(a1 + 1360) = 0;
  *(_OWORD *)(a1 + 1384) = 0;
  if ( a3 )
  {
    v6 = strlen(a3);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(a1 + 1376, 0, v6 + 1, 1);
    *(_QWORD *)(a1 + 1376) = v9;
    *(_QWORD *)(a1 + 1384) = v7;
    memmove(v9, a3, v8);
    result = *(_QWORD *)(a1 + 1376);
    *(_BYTE *)(result + v8) = 0;
  }
  return result;
}

