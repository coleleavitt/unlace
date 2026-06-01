__int64 __fastcall sub_598F40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 *v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 *v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 result; // rax
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(int *)(a1 + 8);
  v15[1] = __readfsqword(0x28u);
  v5 = switch_dbctx(v3);
  v6 = *(__int64 **)(v5 + 1672);
  v7 = sub_7BE710(v6 + 300, v5, a3, 65);
  v8 = sub_3BDE50(v6, a3);
  sub_3BEFF0(v6, v15, v8);
  v9 = v15[0];
  v10 = switch_dbctx(*(int *)(a2 + 8));
  v11 = *(__int64 **)(v10 + 1672);
  v12 = sub_7BE710(v11 + 300, v10, a3, 65);
  v13 = sub_3BDE50(v11, a3);
  sub_3BEFF0(v11, v15, v13);
  result = 1;
  if ( v15[0] == v9 )
    return 2LL * (v12 != v7);
  return result;
}
