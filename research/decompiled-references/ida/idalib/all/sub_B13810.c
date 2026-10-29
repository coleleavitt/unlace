__int64 __fastcall sub_B13810(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  int v7; // [rsp+20h] [rbp-28h]
  unsigned __int8 v8; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+28h] [rbp-20h]

  v6[0] = a1;
  v6[1] = a2;
  v9 = 0;
  LODWORD(v5) = 33;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "pixel", 5);
  LODWORD(v5) = 34;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "vertex", 6);
  LODWORD(v5) = 35;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "geometry", 8);
  LODWORD(v5) = 36;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "hull", 4);
  LODWORD(v5) = 37;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "domain", 6);
  LODWORD(v5) = 38;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "compute", 7);
  LODWORD(v5) = 40;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "raygeneration", 13);
  LODWORD(v5) = 41;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "intersection", 12);
  LODWORD(v5) = 42;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "anyhit", 6);
  LODWORD(v5) = 43;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "closesthit", 10);
  LODWORD(v5) = 44;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "miss", 4);
  LODWORD(v5) = 45;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "callable", 8);
  LODWORD(v5) = 46;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "mesh", 4);
  LODWORD(v5) = 47;
  BYTE4(v5) = 1;
  sub_AFAEA0((__int64)v6, &v5, "amplification", 13);
  result = (unsigned __int8)v9;
  if ( (_BYTE)v9 )
  {
    result = v8;
    if ( v8 )
      *a3 = v7;
  }
  return result;
}
