unsigned __int16 *__fastcall sub_1C1FFB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int16 *result; // rax
  char v15; // dl
  __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
    v11 = *(_QWORD *)(a1 + 96);
    v12 = *(_QWORD *)(a1 + 8);
    v16[0] = v11;
LABEL_3:
    sub_18F5260(v12, v9, (int *)(a1 + 20), 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
    v12 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(a1 + 104);
    v13 = *(_QWORD *)(a1 + 88);
    return sub_19E1580(
             *(__int64 **)(v12 + 736),
             v13,
             v10,
             *(_DWORD *)(a1 + 20),
             *(_QWORD **)(a1 + 112),
             v9,
             a7,
             a8,
             v16,
             1);
  }
  v15 = sub_1C1D810((_QWORD *)a1, a2, a7, a8, a3, a4, a5, a6);
  result = (_WORD *)(&dword_0 + 1);
  if ( v15 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    v9 = *(_QWORD *)(a1 + 104);
    v12 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v13 + 8);
    v16[0] = *(_QWORD *)(a1 + 96);
    if ( !v9 )
      return sub_19E1580(
               *(__int64 **)(v12 + 736),
               v13,
               v10,
               *(_DWORD *)(a1 + 20),
               *(_QWORD **)(a1 + 112),
               v9,
               a7,
               a8,
               v16,
               1);
    goto LABEL_3;
  }
  return result;
}
