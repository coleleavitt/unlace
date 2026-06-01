__int64 __fastcall sub_410EA0(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rsi
  _QWORD *v3; // rsi

  if ( (debug & 0x100) != 0 )
    sub_368890();
  *(_BYTE *)(a1 + 2321) = 0;
  sub_3CB990(a1 + 1792, *(_QWORD **)(a1 + 1864));
  *(_QWORD *)(a1 + 1864) = 0;
  v1 = *(_QWORD **)(a1 + 1968);
  *(_QWORD *)(a1 + 1872) = a1 + 1856;
  *(_QWORD *)(a1 + 1880) = a1 + 1856;
  *(_QWORD *)(a1 + 1888) = 0;
  sub_3CB990(a1 + 1896, v1);
  *(_QWORD *)(a1 + 1968) = 0;
  v2 = *(_QWORD **)(a1 + 2072);
  *(_QWORD *)(a1 + 1976) = a1 + 1960;
  *(_QWORD *)(a1 + 1984) = a1 + 1960;
  *(_QWORD *)(a1 + 1992) = 0;
  sub_3CB990(a1 + 2000, v2);
  *(_QWORD *)(a1 + 2072) = 0;
  v3 = *(_QWORD **)(a1 + 2176);
  *(_QWORD *)(a1 + 2080) = a1 + 2064;
  *(_QWORD *)(a1 + 2088) = a1 + 2064;
  *(_QWORD *)(a1 + 2096) = 0;
  sub_3CB990(a1 + 2104, v3);
  *(_QWORD *)(a1 + 2176) = 0;
  *(_QWORD *)(a1 + 2184) = a1 + 2168;
  *(_QWORD *)(a1 + 2192) = a1 + 2168;
  *(_QWORD *)(a1 + 2200) = 0;
  return a1 + 2168;
}
