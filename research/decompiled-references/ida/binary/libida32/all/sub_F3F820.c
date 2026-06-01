__int64 __fastcall sub_F3F820(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r14
  _QWORD savedregs[21]; // [rsp+0h] [rbp+0h] BYREF

  v4 = (a1 & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(a1 + 8);
  sub_A3A3D0((__m128 *)savedregs, a1);
  return sub_F3C590(
           a2,
           *(_QWORD *)(a1 + 24),
           (unsigned __int64 *)(a1 + 48),
           *(unsigned __int16 *)(a1 + 22),
           (unsigned __int16 *)savedregs,
           a3,
           v4);
}

