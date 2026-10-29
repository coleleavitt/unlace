__int64 __fastcall sub_B70460(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64); // rdx
  __int64 v17; // rax

  v5 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(v5 + 8) & 7LL;
  v7 = v6 | (*(__int64 *)(v5 + 8) >> 3) & 1;
  if ( v7 )
    v5 = sub_F64F00(**(_QWORD **)(a2 + 16));
  v8 = sub_F63240(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7, a5);
  v10 = 0;
  if ( v8 )
  {
    v11 = *a1;
    v12 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_QWORD *)(v12 + 8) & 7LL;
    v14 = v13 | (*(__int64 *)(v12 + 8) >> 3) & 1;
    if ( v14 )
      v12 = sub_F64F00(**(_QWORD **)(a2 + 16));
    v15 = sub_F63240(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14, v9);
    v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL);
    if ( v16 == sub_A01140 )
      v17 = sub_B70A60(v15);
    else
      v17 = v16(v15);
    LOBYTE(v10) = v11 == v17;
  }
  return v10;
}
