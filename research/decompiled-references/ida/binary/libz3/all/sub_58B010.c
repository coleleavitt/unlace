void __fastcall sub_58B010(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4, int a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64 *); // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]

  sub_58A930(&v22, a1, a2, a3, a5, a6);
  sub_588670((int)v20, a1, (__int64)a4, v22);
  v8 = v22;
  if ( v22 )
  {
    v9 = v23;
    v10 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  v11 = *(_QWORD *)(a1 + 40);
  v22 = 0;
  v23 = v11;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a4 + 144LL);
  if ( v12 == sub_586990 )
  {
    v13 = a4[6];
    if ( v13 )
    {
      v22 = a4[6];
      ++*(_DWORD *)(v13 + 8);
    }
  }
  else
  {
    v12((__int64)a4, &v22);
    LODWORD(v13) = v22;
  }
  sub_588670((int)v21, a1, (__int64)a4, v13);
  v14 = v22;
  if ( v22 )
  {
    v15 = v23;
    v10 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v15, v14);
  }
  sub_5875C0(a1, "join", v20[0], v21[0]);
  v16 = v21[0];
  if ( v21[0] )
  {
    v17 = v21[1];
    v10 = (*(_DWORD *)(v21[0] + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v17, v16);
  }
  v18 = v20[0];
  if ( v20[0] )
  {
    v19 = v20[1];
    v10 = (*(_DWORD *)(v20[0] + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v19, v18);
  }
}

