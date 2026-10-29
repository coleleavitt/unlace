bool __fastcall sub_B6B830(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rdx
  __int64 v14; // rax

  if ( (*(_BYTE *)(a2 + 12) & 1) == 0 )
    return 0;
  v6 = *(__int64 **)(a2 + 16);
  v7 = *a1;
  v8 = *v6;
  v9 = *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(v9 + 8) & 7LL;
  v11 = v10 | (*(__int64 *)(v9 + 8) >> 3) & 1;
  if ( v11 )
    v9 = sub_F64F00(v8);
  v12 = sub_F63240(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v11, a5);
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL);
  if ( v13 == sub_A01140 )
    v14 = sub_B70A60(v12);
  else
    v14 = v13(v12);
  return v7 == v14;
}
