__int64 __fastcall sub_7844E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE v4[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0x40u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C54648;
  *(_QWORD *)(v2 + 16) = 0;
  sub_1858590(v2 + 24, a2);
  *(_QWORD *)(v2 + 48) = a1;
  *(_QWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  sub_17F9A60(v4, "sat");
  sub_18572D0(v4);
  return sub_EE8D70(v2);
}

