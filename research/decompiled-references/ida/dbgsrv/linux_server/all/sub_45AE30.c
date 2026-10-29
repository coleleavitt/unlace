/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AE30
// Address: 0x000000000045AE30

//----- (000000000045AE30) ----------------------------------------------------
__int64 __fastcall sub_45AE30(
        __int64 a1,
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
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // rax
  double v17; // xmm4_8
  double v18; // xmm5_8
  char *v19; // rax
  __int64 v20; // rdx

  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( !v10 )
    return 0;
  v13 = 0;
  v14 = v10 + 1;
  if ( v10 != -1 )
  {
    v19 = (char *)sub_481540(a2 + 8, nullptr, v10 + 1, 1u);
    v20 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = v19;
    memset(&v19[v20], 0, v14 - v20);
    *(_QWORD *)(a2 + 16) = v14;
    v13 = *(_QWORD *)(a2 + 8);
  }
  *(_BYTE *)(v13 + v10) = 0;
  v15 = *(_QWORD *)(a2 + 8);
  v16 = sub_45A880();
  if ( v10 == (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v16 + 288LL))(
                v16,
                v11,
                v15,
                v10,
                0) )
    return 0;
  else
    return sub_42D8B0(a2, "read error", 0.0, a4, a5, a6, v17, v18, a9, a10);
}
// 45AEBC: variable 'v17' is possibly undefined
// 45AEBC: variable 'v18' is possibly undefined
