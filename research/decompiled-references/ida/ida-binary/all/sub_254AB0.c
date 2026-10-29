unsigned __int64 __fastcall sub_254AB0(
        unsigned __int8 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v9; // rcx
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 v12; // rdx
  int v13; // r13d
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+8h] [rbp-60h]
  int v17; // [rsp+10h] [rbp-58h]
  int v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3843C0()
    || ((v12 = *(unsigned __int16 *)(dbg + 82), !_bittest((const int *)&v12, a1 + 3))
     || (v15 = 0,
         v17 = dword_8CC428,
         v16 = 1018,
         v18 = a1 + 4,
         v13 = sub_238AE0((double *)&qword_8CC2B0, (__int64)&v15, a2),
         sub_238680((__int64)&v15, (const char *)&v15),
         v13 <= 0))
    && (int)sub_254670((_QWORD *)(unsigned int)dword_8CC428, a1, a2, a3, a4, a5, v10, v11, a8, a9, v12, v9) <= 0 )
  {
    v17 = dword_8CC428;
    v15 = 0;
    if ( a1 )
    {
      v16 = 1020;
    }
    else
    {
      v16 = 1018;
      v18 = 1;
    }
    sub_238AE0((double *)&qword_8CC2B0, (__int64)&v15, a2);
    sub_238680((__int64)&v15, (const char *)&v15);
  }
  return v19 - __readfsqword(0x28u);
}
