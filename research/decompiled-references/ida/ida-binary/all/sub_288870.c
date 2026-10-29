__int64 __fastcall sub_288870(
        QT::QCoreApplication *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  int v13; // r13d
  const __m128i *v14; // r12
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // edx
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 result; // rax
  unsigned __int8 v21; // [rsp+Fh] [rbp-49h]
  __int64 *v22; // [rsp+10h] [rbp-48h] BYREF
  char v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v12 = *((_QWORD *)this + 2);
  v24 = __readfsqword(0x28u);
  v13 = a3;
  v22 = (__int64 *)this;
  v23 = 0;
  v14 = (const __m128i *)sub_1EA680(v12 + 384, a2, a3, a4, *(double *)a5.m128_u64);
  sub_176E70(this);
  v17 = sub_288470((__int64)&v22, 2 - (unsigned int)(unsigned __int8)a2, v13, a5, a6, a7, a8, v15, v16, a11, a12);
  result = 0;
  if ( v17 > 0 )
    result = sub_284C60(
               (__int64)this,
               (unsigned int)v14[1].m128i_i16[7],
               v14,
               0,
               *(double *)a5.m128_u64,
               a6,
               a7,
               a8,
               v18,
               v19,
               a11,
               a12);
  if ( v23 )
  {
    if ( v22[49] != v22[45] )
    {
      v21 = result;
      sub_174FE0(v22);
      return v21;
    }
  }
  return result;
}
