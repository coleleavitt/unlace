void __fastcall sub_58EB10(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64 *); // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64 *); // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h] BYREF
  __int64 v24; // [rsp+18h] [rbp-30h]

  v8 = *(_QWORD *)(a1 + 40);
  v21 = 0;
  v22 = v8;
  v24 = v8;
  v9 = *a2;
  v23 = 0;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(v9 + 144);
  if ( v10 == sub_586990 )
  {
    v11 = a2[6];
    if ( v11 )
    {
      ++*(_DWORD *)(v11 + 8);
      v21 = v11;
    }
  }
  else
  {
    v10((__int64)a2, &v21);
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a3 + 144LL);
  if ( v12 == sub_586990 )
  {
    v13 = v23;
    v14 = a3[6];
    if ( v23 != v14 )
    {
      if ( v23 )
      {
        v15 = v24;
        v16 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v16 )
        {
          sub_15D7BC0(v15, v13);
          v14 = a3[6];
        }
      }
      v23 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
    }
  }
  else
  {
    v12((__int64)a3, &v23);
    LODWORD(v14) = v23;
  }
  sub_58E830(a1, (__int64)a2, v21, (__int64)a3, v14, a4);
  v17 = v23;
  if ( v23 )
  {
    v18 = v24;
    v16 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v18, v17);
  }
  v19 = v21;
  if ( v21 )
  {
    v20 = v22;
    v16 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v20, v19);
  }
}

