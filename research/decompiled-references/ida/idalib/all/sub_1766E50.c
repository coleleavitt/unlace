__int64 __fastcall sub_1766E50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v2 )
    return 1;
  v4 = v2;
  if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  v8 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v8 == 1 )
    return 1;
  v5 = v8 & 0xFFFFFFFFFFFFFFFELL;
LABEL_4:
  v6 = *(_QWORD *)(*a1 + 544);
  if ( *(_DWORD *)(*a1 + 12632) || v4 != *(_QWORD *)(a2 + 16) || *(_QWORD *)(a2 + 24) != v6 )
    return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v4, v5, v6, v3);
  v9 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
    v9 = *(_QWORD *)(a2 + 32);
  if ( v9 == v5 )
    return a2;
  else
    return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v4, v5, v6, v3);
}
