__int64 __fastcall sub_1D4E1A0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = sub_1D41150((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v4 )
    return 1;
  v9 = v4;
  if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
  {
    v10 = 0;
    goto LABEL_4;
  }
  v13 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 32), a3, a4, v5, v6, v7);
  if ( v13 == 1 )
    return 1;
  v10 = v13 & 0xFFFFFFFFFFFFFFFELL;
LABEL_4:
  v11 = *(_QWORD *)(*a1 + 544);
  if ( *(_DWORD *)(*a1 + 12632) || v9 != *(_QWORD *)(a2 + 16) || *(_QWORD *)(a2 + 24) != v11 )
    return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v9, v10, v11, v8);
  v14 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
    v14 = *(_QWORD *)(a2 + 32);
  if ( v14 == v10 )
    return a2;
  else
    return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v9, v10, v11, v8);
}
