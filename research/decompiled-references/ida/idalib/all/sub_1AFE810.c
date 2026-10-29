// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_1AFE810(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  double v28[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_15F1950(*a1, a2, a3, a4, a5, a6);
  sub_15F2480(*a1);
  v8 = *(unsigned int *)(*a1 + 40);
  if ( !(_DWORD)v8 )
  {
    *(_DWORD *)byte_8 = 0;
    BUG();
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v8 - 8);
  *(_BYTE *)(v9 + 9) |= 1u;
  if ( a2 )
  {
    v10 = a3 + 56;
    v11 = *a1;
    if ( !a3 )
      v10 = 0;
    sub_17A2E00(v11, a2, v10);
  }
  else
  {
    v23 = a3 + 56;
    if ( !a3 )
      v23 = 0;
    *(_QWORD *)(*a1 + 544) = v23;
  }
  sub_18C74E0(*a1, 6, 0, 4);
  v12 = *(_QWORD *)(a3 + 48);
  v13 = sub_1AFE760((_QWORD *)*a1, *(_DWORD *)(a3 + 24), v12, "omp_in", 6u, 0);
  v18 = sub_1AFE760((_QWORD *)*a1, *(_DWORD *)(a3 + 24), v12, "omp_out", 7u, 0);
  if ( a2 )
  {
    sub_17B7670(*a1, v13, a2, 1, v16, v17);
    sub_17B7670(*a1, v18, a2, 1, v19, v20);
  }
  else
  {
    sub_B94AD0((__m128i *)(a3 + 56), v13, v14, v15, v16, v17);
    sub_B94AD0((__m128i *)(a3 + 56), v18, v24, v25, v26, v27);
  }
  v21 = sub_1AE9760(*a1, v13, v12, *(_DWORD *)(a3 + 24));
  result = sub_1AE9760(*a1, v18, v12, *(_DWORD *)(a3 + 24));
  *(_QWORD *)&v28[1] = v21;
  *(_QWORD *)&v28[0] = result;
  *(__m128 *)(a3 + 104) = _mm_loadh_ps(v28);
  return result;
}
