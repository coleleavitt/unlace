/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424B30
// Address: 0x0000000000424B30

//----- (0000000000424B30) ----------------------------------------------------
bool sub_424B30(__int64 a1, int a2, ...)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __m128 v6; // xmm6
  __m128 v7; // xmm7
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  char v15; // [rsp+0h] [rbp-4F8h]
  gcc_va_list va; // [rsp+8h] [rbp-4F0h] BYREF
  char v17[1032]; // [rsp+20h] [rbp-4D8h] BYREF
  unsigned __int64 v18; // [rsp+428h] [rbp-D0h]
  __int128 v19; // [rsp+460h] [rbp-98h]
  __int128 v20; // [rsp+470h] [rbp-88h]
  __int128 v21; // [rsp+480h] [rbp-78h]
  __int128 v22; // [rsp+490h] [rbp-68h]
  __int128 v23; // [rsp+4A0h] [rbp-58h]
  __int128 v24; // [rsp+4B0h] [rbp-48h]
  __int128 v25; // [rsp+4C0h] [rbp-38h]
  double v26[5]; // [rsp+4D0h] [rbp-28h]

  va_start(va, a2);
  *(double *)&v19 = va_arg(va, double);
  v2.m128_u64[0] = v19;
  *(double *)&v20 = va_arg(va, double);
  v3.m128_u64[0] = v20;
  *(double *)&v21 = va_arg(va, double);
  v4.m128_u64[0] = v21;
  *(double *)&v22 = va_arg(va, double);
  v5.m128_u64[0] = v22;
  *(double *)&v23 = va_arg(va, double);
  *(double *)&v24 = va_arg(va, double);
  *(double *)&v25 = va_arg(va, double);
  v6.m128_u64[0] = v25;
  v26[0] = va_arg(va, double);
  *(double *)v7.m128_u64 = v26[0];
  va_end(va);
  va_start(va, a2);
  v18 = __readfsqword(0x28u);
  sub_424720(a1, v17, 1024, a2, (int *)va);
  sub_4240B0((int)"%s", (__int64)v17, v8, v9, v10, v11, v2, v3, v4, v5, v12, v13, v6, v7, v15);
  return a2 <= 18;
}
// 424C01: variable 'v8' is possibly undefined
// 424C01: variable 'v9' is possibly undefined
// 424C01: variable 'v10' is possibly undefined
// 424C01: variable 'v11' is possibly undefined
// 424C01: variable 'v2' is possibly undefined
// 424C01: variable 'v3' is possibly undefined
// 424C01: variable 'v4' is possibly undefined
// 424C01: variable 'v5' is possibly undefined
// 424C01: variable 'v12' is possibly undefined
// 424C01: variable 'v13' is possibly undefined
// 424C01: variable 'v6' is possibly undefined
// 424C01: variable 'v7' is possibly undefined
// 424C01: variable 'v15' is possibly undefined
