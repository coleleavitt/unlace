__int64 __fastcall sub_DD1320(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  __int16 v6; // [rsp+4h] [rbp-34h] BYREF
  __int16 v7; // [rsp+6h] [rbp-32h] BYREF
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v8[0] = v3;
  LOWORD(v3) = *(_WORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = v3;
  v7 = 0;
  return sub_D455B0(a1, a2, &v6, v8, (__int64)&v7);
}

