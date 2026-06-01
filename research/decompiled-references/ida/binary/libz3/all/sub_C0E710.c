__int64 __fastcall sub_C0E710(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  int v23[2]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+10h] [rbp-50h] BYREF
  __int64 v25; // [rsp+18h] [rbp-48h]
  _QWORD v26[8]; // [rsp+20h] [rbp-40h] BYREF

  v3 = *(_QWORD *)a1[3];
  v4 = *a1;
  v5 = *(_DWORD *)a1[1];
  LOBYTE(v25) = 0;
  v26[0] = 0;
  v26[1] = 0;
  LODWORD(v24) = v5 - 1;
  v6 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)v23 = v3;
  v7 = sub_15DCAD0(v6, (int)v23, 0);
  sub_15D0DF0(v26);
  sub_15D0DF0(&v24);
  v8 = *(_QWORD *)(v4 + 8);
  v24 = a2;
  v25 = v7;
  v9 = sub_15E1AF0(v8);
  v10 = (__int64 *)a1[5];
  v11 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v12 = *v10;
  if ( *v10 && (v13 = v10[1], v14 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), v14) )
  {
    sub_15D7BC0(v13, v12);
    v15 = (__int64 *)a1[5];
  }
  else
  {
    v15 = v10;
  }
  *v10 = v11;
  sub_14EA0D0(a1[6] + 32, *(_QWORD *)a1[3], *v15);
  v16 = a1[8];
  v17 = (__int64 *)a1[7];
  v18 = *(_QWORD *)(v16 + 8);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v20 = *v17;
  if ( *v17 )
  {
    v21 = v17[1];
    v14 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v21, v20);
  }
  *v17 = v19;
  return 1;
}

