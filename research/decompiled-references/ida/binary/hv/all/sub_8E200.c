__int64 __fastcall sub_8E200(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // eax
  unsigned int v19; // ebp
  __int64 v21[41]; // [rsp+0h] [rbp-178h] BYREF
  int v22; // [rsp+148h] [rbp-30h]
  char v23; // [rsp+14Ch] [rbp-2Ch]
  unsigned __int64 v24; // [rsp+158h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  qword_165B78 = a1;
  v21[0] = a3;
  v21[40] = 0;
  v22 = a2;
  v23 = 0;
  sub_8CD50(v21, a4, a5, a6);
  v18 = sub_8D100(v21, a4, a7, a8, a9, a10, v16, v17, a13, a14);
  qword_165B78 = 0;
  v19 = v18;
  sub_8CEA0((__int64)v21);
  return v19;
}

