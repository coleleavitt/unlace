__int64 __fastcall sub_334180(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  __int64 v11; // rdi
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rax
  int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v18[5]; // [rsp+10h] [rbp-28h] BYREF

  v9 = *(_DWORD *)(a1 + 8);
  v18[1] = __readfsqword(0x28u);
  if ( v9 == 58 || v9 == 25 )
    return sub_3B2AE0(a1, 0);
  v11 = *((_QWORD *)&xmmword_8CC820 + 1);
  if ( (WORD4(xmmword_8CC820) & 0x600) != 0 )
  {
LABEL_6:
    v14 = sub_333830(v11, xmmword_8CC810);
    return (unsigned __int8)sub_32FF30(xmmword_8CC810, v14);
  }
  if ( !(unsigned __int8)sub_1F09E0(0, &v17, v18) )
  {
    v11 = *((_QWORD *)&xmmword_8CC820 + 1);
    goto LABEL_6;
  }
  v16 = *(_DWORD *)(a1 + 8);
  if ( v16 == 58 || v16 == 25 )
    return sub_3C2A00(
             a2,
             *(double *)a3.m128_u64,
             *(double *)a4.m128_u64,
             *(double *)a5.m128_u64,
             v12,
             v13,
             *(double *)a8.m128_u64,
             *(double *)a9.m128_u64);
  else
    return sub_32FF90(a2, a3, a4, a5, v12, v13, a8, a9);
}
