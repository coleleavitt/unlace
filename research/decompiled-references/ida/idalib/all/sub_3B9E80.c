__int64 __fastcall sub_3B9E80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  char (__fastcall *v9)(__int64, __int64); // rax
  __int64 (__fastcall *v10)(__int64, _QWORD); // rax
  __int64 v12; // rdi

  v3 = a3;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) )
    goto LABEL_9;
  if ( *(_BYTE *)(a1 + 48) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 40) == v5 )
      goto LABEL_9;
    v6 = std::_Rb_tree_decrement(v5);
    if ( *(_QWORD *)(v6 + 32) != a2 )
      goto LABEL_9;
    v7 = *(unsigned int *)(v6 + 40);
    *(_QWORD *)(a1 + 32) = v6;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    if ( v12 == *(_QWORD *)(a1 + 24) || *(_QWORD *)(v12 + 32) != a2 )
      goto LABEL_9;
    v7 = *(unsigned int *)(v12 + 40);
    *(_QWORD *)(a1 + 16) = std::_Rb_tree_increment(v12);
  }
  v8 = v3;
  if ( (_DWORD)v7 )
    v8 = v3 | (v7 << 32);
  v3 = v8;
LABEL_9:
  v9 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 != sub_3B7D60 )
    return ((__int64 (__fastcall *)(__int64, __int64))v9)(a1, v3);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56);
  if ( v10 )
    return v10(v3, *(_QWORD *)(a1 + 64));
  else
    return (v3 & 0x600) == 0;
}
