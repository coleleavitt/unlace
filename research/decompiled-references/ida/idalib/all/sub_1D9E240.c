__int64 __fastcall sub_1D9E240(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi

  v6 = *(_QWORD *)(a2 + 16);
  if ( (v6 & 4) == 0 )
  {
    v7 = *a1;
    sub_18C74E0(*a1, 0, 0, 4);
    v11 = sub_1D8B300(a1, (unsigned __int16 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL), a3, a4, v8, v9, v10);
    if ( v11 == 1 )
    {
      v14 = 1;
    }
    else
    {
      v12 = *a1;
      v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || (v14 = a2, v13 != (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL)) )
        v14 = sub_19BEAF0(
                v12,
                *(_QWORD *)(a2 + 8),
                *(_DWORD *)(a2 + 32),
                v13,
                *(_DWORD *)(a2 + 36),
                *(double *)a3.m128_u64);
    }
    sub_190D5E0(v7, a3);
    return v14;
  }
  v16 = sub_1D99A60(a1, v6 & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( !v16 )
    return 1;
  v18 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v14 = a2;
    if ( v16 == (__int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v14;
  }
  return sub_19BE8F0(v18, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 32), v16, *(unsigned int *)(a2 + 36), v17);
}
