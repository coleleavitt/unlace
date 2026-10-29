__int64 *__fastcall sub_D526C0(__int64 a1, int a2, int a3, __int64 *a4, __int64 *a5)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 *result; // rax
  void *v17; // [rsp+10h] [rbp-B8h]
  __int64 v18; // [rsp+28h] [rbp-A0h]
  __int64 v19; // [rsp+30h] [rbp-98h]
  __int64 v20; // [rsp+38h] [rbp-90h]
  __int64 v21; // [rsp+40h] [rbp-88h] BYREF
  __int64 v22; // [rsp+48h] [rbp-80h]
  __int64 v23; // [rsp+50h] [rbp-78h] BYREF
  __int64 v24; // [rsp+58h] [rbp-70h]
  __int64 v25; // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+68h] [rbp-60h]
  _QWORD v27[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+80h] [rbp-48h] BYREF

  v5 = *a4;
  v6 = *(_QWORD *)(a1 + 8);
  if ( *a4 )
    ++*(_DWORD *)(v5 + 8);
  v22 = v6;
  v21 = 0;
  v25 = 0;
  v26 = v6;
  v23 = 0;
  v24 = v6;
  sub_D51BC0(a1, v5, &v21, &v25, &v23);
  v27[0] = 0;
  v27[1] = 0;
  v7 = v21;
  v19 = v24;
  v8 = v23;
  v28[0] = 1;
  v28[1] = 0;
  v9 = v25;
  v20 = v26;
  v18 = v22;
  sub_182CBA0(qword_1C7F2C0, v28);
  BYTE4(v28[0]) &= ~1u;
  LODWORD(v28[0]) = 1;
  sub_1674520(a1 + 232, v27, 1);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v17, v28);
  v10 = sub_15E1BF0(*(_QWORD *)(a1 + 432));
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *a5;
  if ( *a5 )
  {
    v13 = a5[1];
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v12);
  }
  result = a5;
  *a5 = v11;
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      result = (__int64 *)sub_15D7BC0(v20, v9);
  }
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v14 )
      result = (__int64 *)sub_15D7BC0(v19, v8);
  }
  if ( v7 )
  {
    v14 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v14 )
      result = (__int64 *)sub_15D7BC0(v18, v7);
  }
  if ( v5 )
  {
    v14 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v14 )
      return (__int64 *)sub_15D7BC0(v6, v5);
  }
  return result;
}

