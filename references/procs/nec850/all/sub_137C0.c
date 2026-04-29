__int64 __fastcall sub_137C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax

  v2 = netnode_altval(*(_QWORD *)(a1 + 120), 2, 65);
  v3 = node2ea(v2);
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 152) = v3;
  v5 = netnode_altval(v4, 1, 65);
  v6 = node2ea(v5);
  v7 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 160) = v6;
  v8 = netnode_altval(v7, 3, 65);
  v9 = node2ea(v8);
  v10 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 168) = v9;
  v11 = netnode_altval(v10, 4, 577);
  v12 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 176) = v11;
  v13 = netnode_altval(v12, -2, 65);
  result = 1;
  if ( v13 )
  {
    result = netnode_altval(*(_QWORD *)(a1 + 120), -1, 65);
    *(_WORD *)(a1 + 184) = result;
  }
  else
  {
    *(_WORD *)(a1 + 184) = 1;
  }
  return result;
}
