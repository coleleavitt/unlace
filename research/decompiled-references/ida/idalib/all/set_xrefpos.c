unsigned __int64 __fastcall set_xrefpos(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _BYTE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  _BYTE v9[11]; // [rsp+Dh] [rbp-3Bh] BYREF
  _QWORD v10[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = *a2;
  v10[0] = __readfsqword(0x28u);
  v4 = ea2node(v3);
  v5 = (_BYTE *)pack_dq(v9, v10, v4);
  if ( v5 < (_BYTE *)v10 )
    *v5++ = *((_BYTE *)a2 + 8);
  v6 = ea2node(a1);
  netnode_supset(v6, 27, v9, v5 - v9, 83, v7);
  return v10[0] - __readfsqword(0x28u);
}
