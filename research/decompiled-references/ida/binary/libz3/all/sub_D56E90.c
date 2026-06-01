__int64 *__fastcall sub_D56E90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int *v8; // rax
  int v9; // r14d
  _DWORD *v10; // rax
  int v11; // esi
  int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r15
  int v25[2]; // [rsp+10h] [rbp-80h]
  int v26[2]; // [rsp+10h] [rbp-80h]
  int v27[2]; // [rsp+10h] [rbp-80h]
  int v29[2]; // [rsp+28h] [rbp-68h] BYREF
  int v30[2]; // [rsp+30h] [rbp-60h] BYREF
  int v31[2]; // [rsp+38h] [rbp-58h] BYREF
  int v32; // [rsp+40h] [rbp-50h] BYREF
  char v33; // [rsp+48h] [rbp-48h]
  __int64 v34; // [rsp+50h] [rbp-40h] BYREF
  __int64 v35; // [rsp+58h] [rbp-38h]

  v7 = *(_QWORD *)(a2 + 8);
  *a1 = 0;
  a1[1] = v7;
  v8 = *(int **)(*(_QWORD *)(sub_15D1F10(a3) + 24) + 8LL);
  if ( *((_BYTE *)v8 + 8) )
    sub_DBF6E(0);
  v9 = *v8;
  v10 = *(_DWORD **)(a4 + 24);
  v11 = *(_DWORD *)(a2 + 448);
  if ( v10 && v11 == *v10 && v10[1] == 1 )
  {
    v22 = *(_QWORD *)(a2 + 8);
    sub_15E1AF0(*(_QWORD *)(a2 + 432));
    sub_15E1AF0(*(_QWORD *)(a2 + 432));
    *(_QWORD *)v25 = *(_QWORD *)(a2 + 8);
    sub_D81BF0(a2 + 232, 2, 3);
    sub_15E1B70(v25[0]);
    sub_15E1BF0(v22);
    sub_15E1AF0(*(_QWORD *)(a2 + 432));
    *(_QWORD *)v26 = *(_QWORD *)(a2 + 8);
    sub_D81BF0(a2 + 232, 3, 3);
    sub_15E1B70(v26[0]);
    sub_15E1BF0(v22);
    sub_15E1AF0(*(_QWORD *)(a2 + 432));
    *(_QWORD *)v27 = *(_QWORD *)(a2 + 8);
    sub_D50430(a2 + 232, 3u);
    sub_15E1B70(v27[0]);
    sub_15E1BF0(v22);
    sub_15E1AF0(*(_QWORD *)(a2 + 432));
    v23 = a2 + 232;
    v24 = *(_QWORD *)(a2 + 8);
    sub_D50390(v23, 3u);
    sub_15E1B70(v24);
    v16 = sub_15E1BF0(v22);
    v17 = v16;
    if ( !v16 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v12 = sub_15C5560(a2 + 432, a4);
  v33 = 0;
  v34 = 0;
  *(_QWORD *)v29 = a3;
  v13 = *(_QWORD *)(a2 + 240);
  v32 = v12 - 2;
  v35 = 0;
  sub_15DCAD0(v13, (int)v29, 0);
  sub_15D0DF0(&v34);
  sub_15D0DF0(&v32);
  v32 = v9 - 2;
  *(_QWORD *)v30 = a3;
  v14 = *(_QWORD *)(a2 + 240);
  v33 = 0;
  LODWORD(v34) = v12 - 1;
  LOBYTE(v35) = 0;
  sub_15DCAD0(v14, (int)v30, 0);
  sub_15D0DF0(&v34);
  sub_15D0DF0(&v32);
  v32 = v9 - 1;
  *(_QWORD *)v31 = a3;
  v15 = *(_QWORD *)(a2 + 240);
  v33 = 0;
  LODWORD(v34) = v9 - 1;
  LOBYTE(v35) = 0;
  sub_15DCAD0(v15, (int)v31, 0);
  sub_15D0DF0(&v34);
  sub_15D0DF0(&v32);
  v16 = sub_15E1BF0(*(_QWORD *)(a2 + 432));
  v17 = v16;
  if ( v16 )
LABEL_5:
    ++*(_DWORD *)(v16 + 8);
LABEL_6:
  v18 = *a1;
  if ( *a1 )
  {
    v19 = a1[1];
    if ( (*(_DWORD *)(v18 + 8))-- == 1 )
      sub_15D7BC0(v19, v18);
  }
  *a1 = v17;
  return a1;
}

