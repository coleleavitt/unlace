char __fastcall sub_B94A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax

  v6 = sub_B91570(a1, a2, a3, a4, a5, a6);
  v11 = *(_QWORD *)(a2 + 16);
  v12 = v6;
  if ( (v11 & 4) != 0 )
    v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = sub_B91570(v13, a2, v7, v8, v9, v10);
  return sub_B94840(v12, a2, 0, v12 == v14);
}
