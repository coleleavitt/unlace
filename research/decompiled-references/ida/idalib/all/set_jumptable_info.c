unsigned __int64 __fastcall set_jumptable_info(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  _BYTE v10[20]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v11[4]; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *a2;
  v12 = __readfsqword(0x28u);
  v4 = ea2node(v3);
  v5 = pack_dq(v10, v11, v4);
  v6 = pack_dq(v5, v11, a2[1]);
  v7 = ea2node(a1);
  netnode_supset(v7, 4, v10, v6 - (_QWORD)v10, 83, v8);
  return v12 - __readfsqword(0x28u);
}
