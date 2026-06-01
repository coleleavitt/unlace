__int64 __fastcall sub_99AEA0(_QWORD *a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  _DWORD *v9; // r15
  __int64 v10; // rax
  _DWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // zf
  __int64 result; // rax
  void *v16; // [rsp+0h] [rbp-68h]
  int v17[2]; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  _QWORD v19[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v20);
  v5 = a1[44];
  BYTE4(v20[0]) &= ~1u;
  LODWORD(v20[0]) = 1;
  if ( !v5 )
  {
    sub_16669E0(a1 + 43);
    v5 = a1[44];
  }
  sub_166A700(v5, (unsigned int)v19, 1, v2, v3, v4);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v16, v20);
  sub_15E1B70(a1[43]);
  sub_15E1B70(a1[43]);
  v18 = a1[3];
  v6 = sub_15E1B70(a1[43]);
  v7 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = sub_15E1B70(a1[3]);
  v9 = (_DWORD *)v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  *(_QWORD *)v17 = a1[3];
  sub_15E1B70(a1[43]);
  v10 = sub_15E1B70(v17[0]);
  v11 = (_DWORD *)v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  sub_99A7B0((__int64)a1, v7, v9, 1);
  v12 = sub_15E1A70(a1[3]);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  if ( v7 )
  {
    v14 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v18, v7);
  }
  result = sub_99A7B0((__int64)a1, v13, v11, 1);
  if ( v11 )
  {
    v14 = v11[2]-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v18, v11);
  }
  if ( v9 )
  {
    v14 = v9[2]-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v18, v9);
  }
  if ( v13 )
  {
    v14 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v14 )
      return sub_15D7BC0(v18, v13);
  }
  return result;
}

