__int64 __fastcall sub_3FDBE0(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rsi
  _QWORD *v3; // rsi

  if ( (debug & 0x100) != 0 )
    sub_365330();
  *(_BYTE *)(a1 + 2233) = 0;
  sub_3C6650(a1 + 1704, *(_QWORD **)(a1 + 1776));
  *(_QWORD *)(a1 + 1776) = 0;
  v1 = *(_QWORD **)(a1 + 1880);
  *(_QWORD *)(a1 + 1784) = a1 + 1768;
  *(_QWORD *)(a1 + 1792) = a1 + 1768;
  *(_QWORD *)(a1 + 1800) = 0;
  sub_3C6650(a1 + 1808, v1);
  *(_QWORD *)(a1 + 1880) = 0;
  v2 = *(_QWORD **)(a1 + 1984);
  *(_QWORD *)(a1 + 1888) = a1 + 1872;
  *(_QWORD *)(a1 + 1896) = a1 + 1872;
  *(_QWORD *)(a1 + 1904) = 0;
  sub_3C6650(a1 + 1912, v2);
  *(_QWORD *)(a1 + 1984) = 0;
  v3 = *(_QWORD **)(a1 + 2088);
  *(_QWORD *)(a1 + 1992) = a1 + 1976;
  *(_QWORD *)(a1 + 2000) = a1 + 1976;
  *(_QWORD *)(a1 + 2008) = 0;
  sub_3C6650(a1 + 2016, v3);
  *(_QWORD *)(a1 + 2088) = 0;
  *(_QWORD *)(a1 + 2096) = a1 + 2080;
  *(_QWORD *)(a1 + 2104) = a1 + 2080;
  *(_QWORD *)(a1 + 2112) = 0;
  return a1 + 2080;
}

