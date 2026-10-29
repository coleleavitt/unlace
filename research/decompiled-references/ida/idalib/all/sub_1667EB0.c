void __fastcall sub_1667EB0(__int64 a1, __int64 a2, const void *a3, size_t a4, char a5)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_BYTE *)(a1 + 24) = a5;
  if ( a5 )
  {
    sub_1667600(a2 + 1056, *(_DWORD *)(a2 + 1144), 2, a3, a4, *(_DWORD *)(a2 + 1140));
    sub_1667960(a2 + 1360, *(_DWORD *)(a2 + 1456), 2, (__int64)a3, a4, *(_QWORD *)(a2 + 1448));
    sub_1667960(a2 + 1464, *(_DWORD *)(a2 + 1560), 2, (__int64)a3, a4, *(_QWORD *)(a2 + 1552));
    sub_1667960(a2 + 1568, *(_DWORD *)(a2 + 1664), 2, (__int64)a3, a4, *(_QWORD *)(a2 + 1656));
    sub_1667960(a2 + 1672, *(_DWORD *)(a2 + 1768), 2, (__int64)a3, a4, *(_QWORD *)(a2 + 1760));
    sub_1667B40(a2 + 1776, *(_DWORD *)(a2 + 1860), 2, a3, a4, *(_BYTE *)(a2 + 1857));
  }
}
