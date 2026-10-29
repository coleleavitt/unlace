void __fastcall sub_58E830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v8; // r12
  __int64 v9; // r15
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  sub_58DAB0(&v16, a1, (__int64 *)(a2 + 16), a3, a6);
  v8 = v16;
  v9 = v17;
  sub_588670((int)v15, a1, a4, v16);
  if ( v8 )
  {
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  sub_588670((int)&v16, a1, a4, a5);
  sub_5875C0(a1, "project", v15[0], v16);
  v11 = v16;
  if ( v16 )
  {
    v12 = v17;
    v10 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v12, v11);
  }
  v13 = v15[0];
  if ( v15[0] )
  {
    v14 = v15[1];
    v10 = (*(_DWORD *)(v15[0] + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v14, v13);
  }
}

