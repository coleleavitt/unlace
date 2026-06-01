/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdread
// Address: 0x000000000041D440

//----- (000000000041D440) ----------------------------------------------------
__int64 __fastcall ps_pdread(
        unsigned int *a1,
        __off64_t a2,
        unsigned __int64 *a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v14; // eax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // r14
  unsigned int v19; // esi
  __int64 (__fastcall **v21)(_QWORD, __int64); // [rsp+0h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v14 = *a1;
  v24 = __readfsqword(0x28u);
  v23 = 0;
  v21 = (__int64 (__fastcall **)(_QWORD, __int64))&off_4C20F0;
  v22 = v14;
  sub_45A8A0(&v21);
  v18 = v23;
  if ( !v23 )
    return 2;
  v19 = *(_DWORD *)(v23 + 1344);
  return (v19 == -1 || !(unsigned int)sub_41D160(v23, v19, a2, a3, a4, 0, a5, a6, a7, a8, v16, v17, a11, a12))
      && (unsigned int)sub_41D160(v18, *a1, a2, a3, a4, 0, a5, a6, a7, a8, v16, v17, a11, a12) == 0;
}
// 41D4AD: variable 'v16' is possibly undefined
// 41D4AD: variable 'v17' is possibly undefined
// 4C20F0: using guessed type _UNKNOWN *off_4C20F0;
