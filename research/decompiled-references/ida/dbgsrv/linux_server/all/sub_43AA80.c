/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AA80
// Address: 0x000000000043AA80

//----- (000000000043AA80) ----------------------------------------------------
__int64 __fastcall sub_43AA80(
        char *haystack,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        int a12,
        int a13,
        int a14)
{
  double v14; // xmm4_8
  double v15; // xmm5_8
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 result; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  _QWORD v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v21[3] = __readfsqword(0x28u);
  *(double *)a3.m128_u64 = off_4C7FB0(11, (unsigned int)v21, (unsigned int)&off_4C7FB0, a12, a13, a14);
  v21[1] = v21[0];
  v21[0] = &off_4C2C28;
  if ( !strstr(haystack, "static ") )
    return sub_43A9B0(nullptr, haystack, a2, (__int64)v21, a3, a4, a5, a6, v14, v15, a9, a10);
  sub_434860("main", 0, &qword_490A48, 7u, *(double *)a3.m128_u64, a4, a5, a6, v14, v15, a9, a10);
  result = sub_4358E0(
             (unsigned __int64)haystack,
             a2,
             (__int64)v21,
             0,
             *(double *)a3.m128_u64,
             *(double *)a4.m128_u64,
             *(double *)a5.m128_u64,
             a6,
             v16,
             v17,
             a9,
             a10);
  if ( (_BYTE)result )
    return sub_447320(nullptr, "main", nullptr, 0, a2, (__int64)v21, a3, a4, a5, a6, v19, v20, a9, a10);
  return result;
}
// 43AAF5: variable 'v14' is possibly undefined
// 43AAF5: variable 'v15' is possibly undefined
// 43AB05: variable 'v16' is possibly undefined
// 43AB05: variable 'v17' is possibly undefined
// 43AB3F: variable 'v19' is possibly undefined
// 43AB3F: variable 'v20' is possibly undefined
// 490A48: using guessed type __int64 qword_490A48;
// 4C2C28: using guessed type __int64 (__fastcall *off_4C2C28)();
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
