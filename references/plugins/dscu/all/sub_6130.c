unsigned __int64 __fastcall sub_6130(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // rdx
  __int64 v9; // rax
  _BYTE v11[56]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF

  v12[0] = __readfsqword(0x28u);
  v2 = pack_dd(v11, v12, 1);
  v3 = pack_dq(v2, v12, *(_QWORD *)a2);
  v4 = pack_dq(v3, v12, *(_QWORD *)(a2 + 8));
  v5 = pack_dd(v4, v12, *(unsigned int *)(a2 + 16));
  v6 = pack_dd(v5, v12, *(unsigned int *)(a2 + 20));
  v7 = pack_dd(v6, v12, *(unsigned int *)(a2 + 24));
  v8 = byte_190C8;
  if ( *(_QWORD *)(a2 + 40) )
    v8 = *(const char **)(a2 + 32);
  v9 = pack_ds(v7, v12, v8, 0);
  netnode_supset(*(_QWORD *)(a1 + 104), *(_QWORD *)a2 + *(_QWORD *)(a2 + 8) - 1LL, v11, v9 - (_QWORD)v11, 114);
  return v12[0] - __readfsqword(0x28u);
}
