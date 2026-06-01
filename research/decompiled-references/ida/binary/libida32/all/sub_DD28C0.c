__int64 __fastcall sub_DD28C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  char v7; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_QWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D41EF0(a1, a2, &v8, &v7, (__int64)v9);
}

