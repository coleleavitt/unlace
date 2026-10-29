__int64 __fastcall sub_16319F0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _QWORD v6[3]; // [rsp+0h] [rbp-58h] BYREF
  int v7; // [rsp+1Ch] [rbp-3Ch] BYREF
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = a3;
  v6[0] = a4;
  v8[0] = &v7;
  v8[1] = a1;
  v8[2] = a2;
  v8[3] = v6;
  v6[1] = a5;
  sub_1630D20(v8, 2, "__arm_in", 8);
  sub_1630D20(v8, 3, "__arm_out", 9);
  sub_1630D20(v8, 4, "__arm_inout", 11);
  sub_1630D20(v8, 1, "__arm_preserves", 15);
  return *(_BYTE *)(a2 + 58) & 1;
}
