__int64 __fastcall sub_6221F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 24);
  v10[1] = __readfsqword(0x28u);
  v3 = *(_QWORD **)(v1 + 1672);
  v9 = sub_3BDE50(v3, v2);
  sub_42D900(&v9, *(unsigned __int64 **)(a1 + 104), *(_QWORD *)(a1 + 112));
  v4 = sub_3BDD60(v3, v9);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = v4;
  v7 = *(_QWORD *)(v5 + 1672);
  v10[0] = v4;
  sub_7BE7C0(v7 + 2328, v5, v6, v10, 8, 65);
  return 0;
}
