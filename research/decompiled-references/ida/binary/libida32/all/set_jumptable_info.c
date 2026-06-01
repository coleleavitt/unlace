unsigned __int64 __fastcall set_jumptable_info(unsigned int a1, unsigned int *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  _BYTE v9[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v10[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = *a2;
  v10[0] = __readfsqword(0x28u);
  v4 = ea2node(v3);
  v5 = pack_dd(v9, v10, v4);
  v6 = pack_dd(v5, v10, a2[1]);
  v7 = ea2node(a1);
  netnode_supset(v7, 4, v9, v6 - (_QWORD)v9, 83);
  return v10[0] - __readfsqword(0x28u);
}

