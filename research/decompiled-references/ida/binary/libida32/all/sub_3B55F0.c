__int64 __fastcall sub_3B55F0(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  char (__fastcall *v8)(__int64, __int64); // rax
  __int64 (__fastcall *v9)(__int64, _QWORD); // rax
  __int64 v11; // rdi

  v3 = a3;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) )
    goto LABEL_9;
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( *(_QWORD *)(a1 + 40) == *(_QWORD *)(a1 + 32) )
      goto LABEL_9;
    v5 = std::_Rb_tree_decrement();
    if ( *(_DWORD *)(v5 + 32) != a2 )
      goto LABEL_9;
    v6 = *(unsigned int *)(v5 + 36);
    *(_QWORD *)(a1 + 32) = v5;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 == *(_QWORD *)(a1 + 24) || *(_DWORD *)(v11 + 32) != a2 )
      goto LABEL_9;
    v6 = *(unsigned int *)(v11 + 36);
    *(_QWORD *)(a1 + 16) = std::_Rb_tree_increment();
  }
  v7 = v3;
  if ( (_DWORD)v6 )
    v7 = v3 | (v6 << 32);
  v3 = v7;
LABEL_9:
  v8 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 != sub_3B34D0 )
    return ((__int64 (__fastcall *)(__int64, __int64))v8)(a1, v3);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56);
  if ( v9 )
    return v9(v3, *(_QWORD *)(a1 + 64));
  else
    return (v3 & 0x600) == 0;
}

