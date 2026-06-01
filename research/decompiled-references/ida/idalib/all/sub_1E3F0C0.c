__int64 __fastcall sub_1E3F0C0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v10; // rcx
  __int64 result; // rax
  _BYTE v12[16]; // [rsp+8h] [rbp-10h] BYREF

  sub_1E3D740(
    *(_QWORD *)a1,
    *(_DWORD *)(a1 + 16),
    a2,
    1,
    *(_BYTE *)(a1 + 24),
    *(_BYTE *)(a1 + 25),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  result = sub_B7D390(a2, (__int64)v12, 0, v10);
  if ( (_BYTE)result )
    *(_BYTE *)(a2 + 84) &= ~8u;
  return result;
}
