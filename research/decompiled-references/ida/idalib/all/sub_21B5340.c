__int64 __fastcall sub_21B5340(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8,
        __int64 a9)
{
  char v9; // dl
  __int64 v10; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]

  sub_21B4A00((__int64)&vars0, a2, a3, a4, a5, a6, a7, a8, a9);
  v9 = vars8 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
  v10 = vars0;
  vars0 = 0;
  *(_BYTE *)(a1 + 8) = v9;
  *(_QWORD *)a1 = v10;
  sub_21B3560(&vars0);
  return a1;
}
