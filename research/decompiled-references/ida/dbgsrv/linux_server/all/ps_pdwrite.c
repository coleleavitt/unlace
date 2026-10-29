/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdwrite
// Address: 0x000000000041E490

//----- (000000000041E490) ----------------------------------------------------
__int64 __fastcall ps_pdwrite(
        unsigned int *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v13; // eax
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 result; // rax
  __int64 (__fastcall **v18)(_QWORD, __int64); // [rsp+0h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-40h]
  __int64 v20; // [rsp+10h] [rbp-38h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v13 = *a1;
  v21 = __readfsqword(0x28u);
  v20 = 0;
  v18 = (__int64 (__fastcall **)(_QWORD, __int64))&off_4C20F0;
  v19 = v13;
  sub_45A8A0(&v18);
  if ( !v20 )
    return 2;
  result = 1;
  if ( !*(_BYTE *)(v20 + 1349) && *(_DWORD *)(v20 + 1340) != -1 )
    return (int)sub_41E0D0(v20, *a1, a2, a3, a4, 0, a5, a6, a7, a8, v15, v16, a11, a12) <= 0;
  return result;
}
// 41E505: variable 'v15' is possibly undefined
// 41E505: variable 'v16' is possibly undefined
// 4C20F0: using guessed type _UNKNOWN *off_4C20F0;
