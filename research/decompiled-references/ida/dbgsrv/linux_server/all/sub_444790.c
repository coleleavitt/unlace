/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444790
// Address: 0x0000000000444790

//----- (0000000000444790) ----------------------------------------------------
__int64 __fastcall sub_444790(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rbp
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rax
  __int64 v14; // rdx
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rdi
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v20; // ebx
  __int64 v22; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v24; // [rsp+8h] [rbp-70h]
  unsigned __int8 v25[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-40h]
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  ptr = nullptr;
  v24 = 0;
  v10 = sub_443440((__int64)a1, (__int64)&ptr, 0.0, a3, a4, a5, a6, a7, a8, a9);
  if ( v10 )
  {
    v13 = a1[4];
    v14 = a1[3];
    v25[0] = 2;
    v26 = 0;
    v27 = 0;
    sub_4418C0(v25, (unsigned __int8 *)(v14 + 32 * v13 - 32), 0.0, a3, a4, a5, v11, v12, a8, a9);
    v17 = a1[4];
    if ( v17 )
    {
      v22 = v17 - 1;
      a1[4] = v22;
      sub_441540(a1[3] + 32 * v22, 0.0, a3, a4, a5, v15, v16, a8, a9);
    }
    sub_441540((__int64)v25, 0.0, a3, a4, a5, v15, v16, a8, a9);
    v20 = sub_443DD0(
            a1,
            v10,
            (const char **)&ptr,
            (__m128i *)(a1[3] + 32LL * a1[4] - 32),
            0.0,
            a3,
            a4,
            a5,
            v18,
            v19,
            a8,
            a9);
  }
  else
  {
    sub_4446F0(a1, 0.0, a3, a4, a5, v11, v12, a8, a9);
    v20 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    j__free(ptr);
  }
  return v20;
}
// 444806: variable 'v11' is possibly undefined
// 444806: variable 'v12' is possibly undefined
// 444888: variable 'v15' is possibly undefined
// 444888: variable 'v16' is possibly undefined
// 444836: variable 'v18' is possibly undefined
// 444836: variable 'v19' is possibly undefined
