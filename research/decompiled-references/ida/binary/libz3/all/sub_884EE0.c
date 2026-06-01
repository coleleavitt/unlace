__int64 __fastcall sub_884EE0(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 result; // rax
  bool v17; // zf
  void *v18; // [rsp+8h] [rbp-90h]
  unsigned int v19; // [rsp+8h] [rbp-90h]
  unsigned int v20; // [rsp+10h] [rbp-88h]
  unsigned int v21; // [rsp+14h] [rbp-84h]
  __int64 v22; // [rsp+18h] [rbp-80h]
  __int64 v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+28h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  _QWORD v27[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+50h] [rbp-48h] BYREF

  v2 = a1[9];
  v27[0] = 0;
  v22 = v2;
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v28);
  v6 = a1[105];
  BYTE4(v28[0]) &= ~1u;
  LODWORD(v28[0]) = 1;
  if ( !v6 )
  {
    sub_16669E0(a1 + 104);
    v6 = a1[105];
  }
  v7 = sub_166A700(v6, (unsigned int)v27, 1, v3, v4, v5);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v18, v28);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v23 = a1[9];
  v8 = sub_15E1B70(a1[104]);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v24 = a1[9];
  v10 = sub_15E1B70(a1[104]);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v25 = a1[9];
  v12 = sub_15E1A70(a1[104]);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v26 = a1[9];
  v14 = sub_15E1B70(a1[104]);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v19 = sub_7E58C0((__int64)a1, v14);
  v20 = sub_7E58D0((__int64)a1, v9, v11);
  v21 = sub_7E58D0((__int64)a1, v9, v13);
  sub_7E5400((__int64)a1, v19 ^ 1, v20, nullptr);
  result = sub_7E5400((__int64)a1, v19, v21, nullptr);
  if ( v15 )
  {
    v17 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v26, v15);
  }
  if ( v13 )
  {
    v17 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v25, v13);
  }
  if ( v11 )
  {
    v17 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v24, v11);
  }
  if ( v9 )
  {
    v17 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v23, v9);
  }
  if ( v7 )
  {
    v17 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v17 )
      return sub_15D7BC0(v22, v7);
  }
  return result;
}

