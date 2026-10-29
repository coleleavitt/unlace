/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4232A0
// Address: 0x00000000004232A0

//----- (00000000004232A0) ----------------------------------------------------
__int64 __fastcall sub_4232A0(
        __int64 a1,
        unsigned int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        char a12)
{
  double v12; // xmm4_8
  double v13; // xmm5_8
  double v14; // xmm4_8
  double v15; // xmm5_8

  *(_BYTE *)(a1 + 861) = a12;
  *(_BYTE *)(a1 + 861) &= 1u;
  if ( !(unsigned __int8)sub_4837D0("IDA_FORCE_PTRACE_ATTACH", 0) && !ptrace(PTRACE_SEIZE, a2, 0, 0) )
  {
    if ( !ptrace(PTRACE_INTERRUPT, a2, 0, 0) )
    {
      *(_BYTE *)(a1 + 1350) = 1;
      goto LABEL_4;
    }
    ptrace(PTRACE_DETACH, a2, 0, 0);
  }
  *(_BYTE *)(a1 + 1350) = 0;
  if ( ptrace(PTRACE_ATTACH, a2, 0, 0) )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( !(unsigned __int8)sub_4217E0(a1, a2, 1, a3, a4, *(double *)a5.m128_u64, a6, v12, v13, a9, a10) )
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    return 0xFFFFFFFFLL;
  }
  sub_4223D0((_QWORD *)a1, a3, a4, a5, a6, v14, v15, a9, a10);
  return 1;
}
// 423307: variable 'v12' is possibly undefined
// 423307: variable 'v13' is possibly undefined
// 423335: variable 'v14' is possibly undefined
// 423335: variable 'v15' is possibly undefined
