char __fastcall Z3_parser_context_add_sort(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-58h]
  __int64 v18; // [rsp+0h] [rbp-58h]
  __int64 v19; // [rsp+0h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  _QWORD v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29C1E0();
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = *(_QWORD *)(a1 + 232);
  v21[0] = v6;
  v9 = sub_DF89E0(v7, v21);
  if ( v9 )
  {
    if ( !v5 )
      return v9;
    goto LABEL_11;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 312LL);
  if ( !v10 )
  {
    v19 = *(_QWORD *)(a2 + 24);
    sub_DFBCB0(v19);
    v10 = *(_QWORD *)(v19 + 312);
  }
  v11 = sub_DE1240(v10, a3);
  v12 = *(_QWORD *)(a2 + 24);
  v13 = v11;
  v14 = *(_QWORD *)(v12 + 312);
  if ( !v14 )
  {
    v20 = v11;
    v18 = *(_QWORD *)(a2 + 24);
    sub_DFBCB0(v18);
    v12 = v18;
    v13 = v20;
    v14 = *(_QWORD *)(v18 + 312);
  }
  v17 = v12;
  v15 = sub_DE1720(v14, 0, v21, v13);
  sub_DFAB80(v17, v15 + 24, v15);
  LOBYTE(v9) = sub_25A770(v8, (_QWORD *)(a2 + 24), a3);
  if ( v5 )
  {
LABEL_11:
    LOBYTE(v9) = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return v9;
}

