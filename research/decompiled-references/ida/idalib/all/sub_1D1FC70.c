__int64 __fastcall sub_1D1FC70(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax

  v8 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 16), a7, a8, a3, a4, a5, a6);
  if ( !v8 )
    return 1;
  v13 = v8;
  if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
  {
    v14 = 0;
    goto LABEL_4;
  }
  v17 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 32), a7, a8, v9, v10, v11);
  if ( v17 == 1 )
    return 1;
  v14 = v17 & 0xFFFFFFFFFFFFFFFELL;
LABEL_4:
  v15 = *(_QWORD *)(*a1 + 544);
  if ( *(_DWORD *)(*a1 + 12632) || v13 != *(_QWORD *)(a2 + 16) || *(_QWORD *)(a2 + 24) != v15 )
    return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v13, v14, v15, v12);
  v18 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
    v18 = *(_QWORD *)(a2 + 32);
  if ( v18 == v14 )
    return a2;
  else
    return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v13, v14, v15, v12);
}
