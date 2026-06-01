__int64 __fastcall sub_D556B0(__int64 a1, __int64 a2, __int64 *a3)
{
  int *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rax
  void *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 result; // rax
  __int64 v23; // [rsp+8h] [rbp-88h]
  __int64 v24; // [rsp+10h] [rbp-80h]
  int v26; // [rsp+20h] [rbp-70h]
  unsigned int v27; // [rsp+28h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-68h]
  int v29[2]; // [rsp+30h] [rbp-60h] BYREF
  int v30[2]; // [rsp+38h] [rbp-58h] BYREF
  __int64 v31; // [rsp+40h] [rbp-50h] BYREF
  __int64 v32; // [rsp+48h] [rbp-48h]
  __int64 v33; // [rsp+50h] [rbp-40h] BYREF
  __int64 v34; // [rsp+58h] [rbp-38h]

  v4 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v4 + 8) )
    sub_DBF6E(0);
  v5 = *v4;
  v31 = 1;
  v32 = 0;
  v27 = v5;
  v6 = *(_QWORD *)(a1 + 8);
  v33 = 1;
  v23 = v6;
  v34 = 0;
  sub_182CBA0(qword_1C7F2C0, &v33);
  BYTE4(v33) &= ~1u;
  LODWORD(v33) = 1;
  sub_1674520(a1 + 232, &v31, v27);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  sub_182CBA0(v7, &v33);
  v8 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v29 = v9;
  LOBYTE(v32) = 0;
  v24 = v10;
  LOBYTE(v34) = 0;
  v11 = *(_QWORD *)(a1 + 240);
  LODWORD(v31) = v27 - 1;
  LODWORD(v33) = v27 - 1;
  v12 = sub_15DCAD0(v11, (int)v29, 0);
  sub_15D0DF0(&v33);
  sub_15D0DF0(&v31);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  *(_QWORD *)v30 = v9;
  LOBYTE(v32) = 0;
  v33 = 0;
  v15 = *(_QWORD *)(a1 + 240);
  LODWORD(v31) = v27 - 2;
  v34 = 0;
  v28 = sub_15DCAD0(v15, (int)v30, 0);
  sub_15D0DF0(&v33);
  sub_15D0DF0(&v31);
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v31 = v14;
  v16 = *(_QWORD *)(a1 + 240);
  v32 = v28;
  v17 = sub_15E1AF0(v16);
  v18 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v19 = *a3;
  if ( *a3 )
  {
    v20 = a3[1];
    v21 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v20, v19);
  }
  result = (__int64)a3;
  *a3 = v18;
  if ( v28 )
  {
    v26 = *(_DWORD *)(v28 + 8);
    result = (unsigned int)(v26 - 1);
    *(_DWORD *)(v28 + 8) = result;
    if ( v26 == 1 )
      result = sub_15D7BC0(v24, v28);
  }
  if ( v14 )
  {
    v21 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v24, v14);
  }
  if ( v12 )
  {
    v21 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v24, v12);
  }
  if ( v9 )
  {
    v21 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v21 )
      return sub_15D7BC0(v23, v9);
  }
  return result;
}

