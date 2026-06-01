__int64 __fastcall sub_3782C0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 result; // rax
  __int64 v21; // rbx
  char v22; // dl
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25[3]; // [rsp+0h] [rbp-18h] BYREF

  v25[1] = __readfsqword(0x28u);
  v10 = sub_17D870(a1);
  if ( !v10 )
    return 0;
  v13 = v10;
  if ( (unsigned int)sub_1EB590(v10, a2, v11, v12, *(double *)a3.m128_u64) != 3 )
    return 0;
  v21 = *(_QWORD *)(v13 + 904);
  if ( !v21 )
    return 0;
  v22 = sub_3757B0(
          (int)v25,
          (int)"Please enter address belonging to a function or data item",
          v14,
          v15,
          v16,
          v17,
          a3,
          a4,
          a5,
          a6,
          v18,
          v19,
          a9,
          a10,
          v25[0]);
  result = 0;
  if ( v22 )
    return (unsigned __int8)sub_3777A0(v21, v25[0], *(double *)a3.m128_u64, a4, a5, a6, v23, v24, a9, a10);
  return result;
}
