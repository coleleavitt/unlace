__int64 __fastcall sub_1DD3170(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdi

  v6 = *(_QWORD *)(a2 + 16);
  if ( (v6 & 4) == 0 )
  {
    v7 = *a1;
    sub_18C74E0(*a1, 0, 0, 4);
    v12 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, v8, v9, v10, v11, a3, a4);
    if ( v12 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v15 = 1;
    }
    else
    {
      v13 = *a1;
      v14 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || (v15 = a2, v14 != (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL)) )
        v15 = sub_19BEAF0(
                v13,
                *(_QWORD *)(a2 + 8),
                *(_DWORD *)(a2 + 32),
                v14,
                *(_DWORD *)(a2 + 36),
                *(double *)a3.m128_u64);
    }
    sub_190D5E0(v7, a3);
    return v15;
  }
  v17 = sub_1DD1930((__int64)a1, v6 & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( !v17 )
    return 1;
  v19 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v15 = a2;
    if ( v17 == (__int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v15;
  }
  return sub_19BE8F0(v19, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 32), v17, *(unsigned int *)(a2 + 36), v18);
}
