__int64 __fastcall sub_1C38CC0(_QWORD *a1, unsigned int a2, __int64 a3, const void *a4, size_t a5)
{
  __int64 v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 result; // rax

  v6 = a1[68];
  v7 = sub_6F3470(a1[30] + 552LL, a4, a5);
  v8 = sub_A81910((_QWORD *)a1[31], a3, a2);
  result = sub_B731A0(a1[31], v6, a2, a2, v7, a3, (__int64)v8, 0);
  *(_BYTE *)(result + 29) |= 2u;
  *(_BYTE *)(result + 98) |= 0x80u;
  return result;
}
