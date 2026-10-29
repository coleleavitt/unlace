/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_idc_func
// Address: 0x0000000000078C00

//----- (0000000000078C00) ----------------------------------------------------
__int64 __fastcall call_idc_func(
        char *a1,
        const char *a2,
        char *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  _QWORD v12[26]; // [rsp+8h] [rbp-D0h] BYREF

  v12[19] = __readfsqword(0x28u);
  sub_78CB0((__int64)v12, a6, 0);
  LODWORD(a5) = sub_766D0(v12, a2, 0, a4, a3, a1, a7, a8, a5);
  sub_78F40((__int64)v12, a7, a8);
  return (unsigned int)a5;
}
