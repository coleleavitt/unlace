__int64 __fastcall sub_3EFEC0(__int64 a1, int a2, unsigned int a3, unsigned __int8 a4, double a5, __m128 a6)
{
  __int64 v6; // rbp
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  v8[0] = 0xFFFFFFFF00000000LL;
  v8[1] = 0;
  v6 = sub_3EF590(a1, "readx18", a2, nullptr, a3, a4, a5, a6);
  sub_11C7E0((__int64)v8);
  sub_151110(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 832) + 712LL);
  return v6;
}
