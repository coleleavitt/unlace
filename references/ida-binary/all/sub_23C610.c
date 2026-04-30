const __m128i *__fastcall sub_23C610(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // eax
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rsi
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v21; // [rsp-10h] [rbp-38h]
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  if ( qword_8CC0E0 && (a10 = 44, (unsigned int)sub_20CEA0(qword_8CC0E0, 44, 0, " ", 0, 0, 0)) )
  {
    v12 = qword_8CC0E0;
    v22 = 1;
    v13 = *(_QWORD *)(qword_8CC0E0 + 32);
    if ( qword_8CC0E0 )
    {
      v14 = sub_20CEA0(qword_8CC0E0, 44, 0, " ", 0, 0, 0);
      v17 = v21;
      if ( v14 )
      {
        v17 = 44;
        sub_20CEA0(v12, 44, &v22, 0, 0, 0, 0);
      }
      if ( ((v13 & 0x8000) != 0) != *(_BYTE *)(qword_8CC0E0 + 33) >> 7 )
      {
        sub_23C5D0(0, v17, a1, a2, a3, a4, v15, v16, a7, a8);
        return sub_23C5D0(*(_BYTE *)(dbg + 33) >> 7, v17, a1, a2, a3, a4, v18, v19, a7, a8);
      }
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(40044, a10, a11, a12, *(double *)a1.m128_u64);
  }
  return (const __m128i *)(v23 - __readfsqword(0x28u));
}
