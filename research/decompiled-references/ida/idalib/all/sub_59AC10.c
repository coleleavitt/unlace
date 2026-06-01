unsigned __int64 __fastcall sub_59AC10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 *v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // r14
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v4 = *(int *)(a2 + 8);
  v17 = __readfsqword(0x28u);
  v6 = switch_dbctx(v4);
  v7 = *(__int64 **)(v6 + 1672);
  v8 = sub_7BE710(v7 + 300, v6, a3, 65);
  v9 = sub_3BDE50(v7, a3);
  sub_3BEFF0(v7, &v16, v9);
  v10 = v16;
  v11 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
  v12 = sub_3BDE50(v11, a3);
  v13 = v11;
  v11 += 300;
  sub_59AA30(v13, v12, v10);
  v14 = *(v11 - 300);
  LOBYTE(v16) = 1;
  sub_7BE7C0(v11, v14, a3, &v16, 1, 80);
  v16 = v8;
  sub_7BE7C0(v11, v14, a3, &v16, 8, 65);
  return v17 - __readfsqword(0x28u);
}
