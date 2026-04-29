unsigned __int64 __fastcall sub_111A0(
        __int64 a1,
        __int16 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  _BYTE vars0[409]; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars199; // [rsp+199h] [rbp+199h]
  __int64 vars1A9; // [rsp+1A9h] [rbp+1A9h]
  int vars1B1; // [rsp+1B1h] [rbp+1B1h]
  __int64 vars1B9; // [rsp+1B9h] [rbp+1B9h]
  int vars1C1; // [rsp+1C1h] [rbp+1C1h]
  char vars1C5; // [rsp+1C5h] [rbp+1C5h]
  unsigned __int64 vars1C8; // [rsp+1C8h] [rbp+1C8h]

  vars1C8 = __readfsqword(0x28u);
  sub_60B0((__int64)vars0, a1, 0);
  *(_QWORD *)vars0 = &off_22350;
  *(_QWORD *)&vars0[385] = get_eah(vars0);
  *(_QWORD *)&vars0[393] = 0;
  *(_QWORD *)&vars0[401] = 0;
  vars1A9 = 0;
  vars1B1 = -1;
  vars1B9 = 0;
  vars1C1 = 0;
  vars1C5 = 0;
  vars199 = 0;
  sub_FE40((__int64)vars0, a2, 0.0, a4, a5, a6, v10, v11, a9, a10);
  sub_4D70(vars0);
  return vars1C8 - __readfsqword(0x28u);
}
