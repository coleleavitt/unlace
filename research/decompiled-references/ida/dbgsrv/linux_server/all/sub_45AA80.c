/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AA80
// Address: 0x000000000045AA80

//----- (000000000045AA80) ----------------------------------------------------
__int64 __fastcall sub_45AA80(
        _QWORD *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rsi
  __int64 v12; // rbp
  double v13; // xmm4_8
  double v14; // xmm5_8
  int v15; // r14d
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // r12d
  void *v20; // rax
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, int *, _QWORD); // rbx
  unsigned int v22; // eax
  int v23; // eax
  bool v24; // cc
  int v25; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h]
  __int128 v27; // [rsp+10h] [rbp-48h]
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v11 = s1;
  v12 = sub_45A880();
  if ( a1[6] )
    v11 = (const char *)a1[5];
  v15 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, double, double, double, double, double, double, double, double))(*(_QWORD *)v12 + 488LL))(
          v12,
          v11,
          0,
          a3,
          *(double *)a4.m128_u64,
          *(double *)a5.m128_u64,
          *(double *)a6.m128_u64,
          v13,
          v14,
          *(double *)a9.m128_u64,
          *(double *)a10.m128_u64);
  if ( v15 < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30055);
    BUG();
  }
  v18 = sub_4424F0((__int64)a1, a3, a4, a5, a6, v16, v17, a9, a10);
  if ( !v18 )
  {
    v20 = (void *)a1[1];
    v25 = -2;
    v27 = 0;
    ptr = v20;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v12 + 232LL);
    v22 = sub_45A890();
    v23 = v21(v12, v22, (unsigned int)v15, &v25, 0);
    v24 = v25 < -1;
    *(_QWORD *)(a2 + 8) = v23;
    if ( !v24 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v27 = 0;
        j__free(ptr);
      }
    }
  }
  return v18;
}
// 45AAC9: variable 'v13' is possibly undefined
// 45AAC9: variable 'v14' is possibly undefined
// 45AAD9: variable 'v16' is possibly undefined
// 45AAD9: variable 'v17' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
