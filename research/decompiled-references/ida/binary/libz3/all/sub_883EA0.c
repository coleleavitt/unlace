__int64 __fastcall sub_883EA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // eax
  _DWORD *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // eax
  void *v20; // rbx
  __int64 result; // rax
  unsigned int v24; // [rsp+8h] [rbp-70h]
  bool v25; // [rsp+10h] [rbp-68h]
  void *v26; // [rsp+10h] [rbp-68h]
  bool v27; // [rsp+10h] [rbp-68h]
  __int64 v28; // [rsp+18h] [rbp-60h]
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h]

  v28 = a1[9];
  v4 = sub_15E1B70(a1[104]);
  v5 = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v6 = *(_DWORD **)(sub_15D1F10(a3) + 24);
  v25 = 0;
  if ( v6 && *v6 == 5 )
    v25 = v6[1] == 1;
  v29 = 0;
  v30 = 0;
  v31 = 1;
  v32 = 0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  v10 = a1[105];
  BYTE4(v31) &= ~1u;
  LODWORD(v31) = 1;
  if ( !v10 )
  {
    sub_16669E0(a1 + 104);
    v10 = a1[105];
  }
  v11 = sub_166A700(v10, (unsigned int)&v29, v25, v7, v8, v9);
  v24 = sub_7E58D0((__int64)a1, a3, v11);
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v29);
  sub_182CBA0(v26, &v31);
  v12 = sub_7E58D0((__int64)a1, a2, v5);
  sub_7E5400((__int64)a1, v24 ^ 1, v12, nullptr);
  v13 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  v27 = 0;
  if ( v13 && *v13 == 5 )
    v27 = v13[1] == 1;
  v29 = 1;
  v30 = 0;
  v31 = 1;
  v32 = 0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  v17 = a1[105];
  BYTE4(v31) &= ~1u;
  LODWORD(v31) = 1;
  if ( !v17 )
  {
    sub_16669E0(a1 + 104);
    v17 = a1[105];
  }
  v18 = sub_166A700(v17, (unsigned int)&v29, v27, v14, v15, v16);
  v19 = sub_7E58D0((__int64)a1, a2, v18);
  sub_7E5400((__int64)a1, v24, v19, nullptr);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v29);
  result = sub_182CBA0(v20, &v31);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      return sub_15D7BC0(v28, v5);
  }
  return result;
}

