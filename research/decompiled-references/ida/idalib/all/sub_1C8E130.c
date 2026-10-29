__int64 __fastcall sub_1C8E130(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 *v10; // rax
  __int64 v11; // rbx
  __int64 *v13; // rax
  __int64 v14; // r9

  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 4) != 0 )
  {
    v13 = sub_1C8AA80(a1, v5 & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
    if ( v13 )
      return sub_19BE8F0(*a1, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 32), v13, *(unsigned int *)(a2 + 36), v14);
    else
      return 1;
  }
  else
  {
    v6 = *a1;
    sub_18C74E0(*a1, 0, 0, 4);
    v10 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a3, a4, v7, v8, v9);
    if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      v11 = 1;
    else
      v11 = sub_19BEAF0(
              *a1,
              *(_QWORD *)(a2 + 8),
              *(_DWORD *)(a2 + 32),
              (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL,
              *(_DWORD *)(a2 + 36),
              *(double *)a3.m128_u64);
    sub_190D5E0(v6, a3);
    return v11;
  }
}
