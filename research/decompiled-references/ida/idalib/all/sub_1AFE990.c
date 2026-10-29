__int64 __fastcall sub_1AFE990(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  double v28[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_15F1950(*a1, a2, a3, a4, a5, a6);
  sub_15F2480(*a1);
  if ( a2 )
  {
    v8 = a3 + 56;
    v9 = *a1;
    if ( !a3 )
      v8 = 0;
    sub_17A2E00(v9, a2, v8);
  }
  else
  {
    v23 = a3 + 56;
    if ( !a3 )
      v23 = 0;
    *(_QWORD *)(*a1 + 544) = v23;
  }
  sub_18C74E0(*a1, 6, 0, 4);
  v10 = *(_QWORD *)(a3 + 48);
  v11 = sub_1AFE760((_QWORD *)*a1, *(_DWORD *)(a3 + 24), v10, "omp_priv", 8u, 0);
  v16 = sub_1AFE760((_QWORD *)*a1, *(_DWORD *)(a3 + 24), v10, "omp_orig", 8u, 0);
  if ( a2 )
  {
    sub_17B7670(*a1, v11, a2, 1, v14, v15);
    sub_17B7670(*a1, v16, a2, 1, v17, v18);
  }
  else
  {
    sub_B94AD0((__m128i *)(a3 + 56), v11, v12, v13, v14, v15);
    sub_B94AD0((__m128i *)(a3 + 56), v16, v24, v25, v26, v27);
  }
  v19 = sub_1AE9760(*a1, v16, v10, *(_DWORD *)(a3 + 24));
  v20 = *(_DWORD *)(a3 + 24);
  v21 = *a1;
  *(_QWORD *)&v28[0] = v19;
  *(_QWORD *)&v28[1] = sub_1AE9760(v21, v11, v10, v20);
  *(__m128 *)(a3 + 120) = _mm_loadh_ps(v28);
  return v11;
}
