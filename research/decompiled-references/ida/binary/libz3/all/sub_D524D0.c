__int64 __fastcall sub_D524D0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  void *v15; // [rsp+8h] [rbp-B0h]
  __int64 v16; // [rsp+18h] [rbp-A0h]
  __int64 v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+28h] [rbp-90h]
  __int64 v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h]
  __int64 v21; // [rsp+40h] [rbp-78h] BYREF
  __int64 v22; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+58h] [rbp-60h]
  _QWORD v25[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+70h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  v19 = 0;
  v20 = v5;
  v23 = 0;
  v24 = v5;
  v21 = 0;
  v22 = v5;
  sub_D51BC0(a1, v6, &v19, &v23, &v21);
  v25[0] = 0;
  v25[1] = 0;
  v7 = v19;
  v16 = v22;
  v8 = v21;
  v26[0] = 1;
  v26[1] = 0;
  v9 = v23;
  v17 = v24;
  v18 = v20;
  sub_182CBA0(qword_1C7F2C0, v26);
  BYTE4(v26[0]) &= ~1u;
  LODWORD(v26[0]) = 1;
  sub_1674520(a1 + 232, v25, 1);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v15, v26);
  result = sub_15E1BF0(*(_QWORD *)(a1 + 432));
  v11 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v12 = *a4;
  if ( *a4 )
  {
    v13 = a4[1];
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v13, v12);
  }
  *a4 = v11;
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v17, v9);
  }
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v16, v8);
  }
  if ( v7 )
  {
    v14 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v14 )
      return sub_15D7BC0(v18, v7);
  }
  return result;
}

