__int64 __fastcall sub_5A3AE9(__int64 a1, int a2, unsigned int *a3, __int64 a4, char a5, __int64 a6, char a7)
{
  unsigned int v8; // ebx
  _BYTE v13[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-20h] BYREF

  sub_5938F8((__int64)v13);
  sub_593898((__int64)v14);
  v8 = sub_5A393A(a1, 0xFFFFFFFF, -1, a2, a3, a4, (__int64)v14, (__int64)v13, a5, a6, a7);
  sub_5936A0((__int64)v14);
  sub_5936BC((__int64)v13);
  return v8;
}
