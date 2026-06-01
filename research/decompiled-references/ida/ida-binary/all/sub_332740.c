__int64 __fastcall sub_332740(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  bool v10; // dl
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 result; // rax
  int v14; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 25 || v9 == 58 )
    return sub_3AE700();
  v14 = 1;
  v10 = sub_32FD50();
  result = 1;
  if ( !v10 )
    return sub_331480(
             "Floating point",
             (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E500,
             (__int64)&v14,
             0,
             0,
             a2,
             a3,
             a4,
             a5,
             v11,
             v12,
             a8,
             a9);
  return result;
}
