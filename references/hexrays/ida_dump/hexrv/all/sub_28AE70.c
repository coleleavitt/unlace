__int64 __fastcall sub_28AE70(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  char v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rbp

  v3 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v3 + 8) != 61 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    if ( *(_DWORD *)(v3 + 8) != 61 )
      return 0;
  }
  v5 = sub_250E30(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48));
  if ( v5 > 1 )
    return 0;
  v6 = *(_QWORD *)(a2 + 32);
  v7 = v6;
  if ( v6 == v3 )
    v7 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(v7 + 8) == 61 )
  {
    v13 = sub_250E30(*(__int64 **)(v7 + 24), (_QWORD *)(v7 + 48));
    if ( v5 != v13 && v13 <= 1 )
    {
      v14 = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 8) = 48;
      v12 = (v5 ^ 1) & 1;
      if ( v14 )
      {
        sub_250A30(v14);
        clear_tinfo_t(v14 + 48);
        j__qfree(v14);
      }
      v15 = *(_QWORD *)(a2 + 40);
      if ( v15 )
      {
        sub_250A30(*(_QWORD *)(a2 + 40));
        clear_tinfo_t(v15 + 48);
        j__qfree(v15);
      }
      *(_QWORD *)(a2 + 32) = 0;
      goto LABEL_14;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_298490(v6) || !(unsigned __int8)sub_298490(*(_QWORD *)(a2 + 40)) )
    return 0;
  v11 = *(_QWORD *)(a2 + 32);
  v12 = (v5 ^ (v11 == v3)) & 1;
  if ( v11 == v3 )
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 8) = (v5 == 0) + 17;
  if ( v3 )
  {
    sub_250A30(v3);
    clear_tinfo_t(v3 + 48);
    j__qfree(v3);
  }
LABEL_14:
  if ( v12 )
    *(_QWORD *)(a2 + 24) = sub_23F860(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(a2 + 24), v8, v9, v10);
  *(_QWORD *)(a2 + 40) = 0;
  sub_23F5C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
