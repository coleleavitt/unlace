void __fastcall sub_58E950(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64 *); // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+28h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 40);
  v27 = 0;
  v28 = v9;
  v30 = v9;
  v10 = *a2;
  v29 = 0;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(v10 + 144);
  if ( v11 == sub_586990 )
  {
    v12 = a2[6];
    if ( v12 )
    {
      ++*(_DWORD *)(v12 + 8);
      v27 = v12;
    }
  }
  else
  {
    v11((__int64)a2, &v27);
  }
  v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a3 + 144LL);
  if ( v13 == sub_586990 )
  {
    v14 = v29;
    v15 = a3[6];
    if ( v29 != v15 )
    {
      if ( v29 )
      {
        v16 = v30;
        v17 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v17 )
        {
          sub_15D7BC0(v16, v14);
          v15 = a3[6];
        }
      }
      v29 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
    }
  }
  else
  {
    v13((__int64)a3, &v29);
  }
  v18 = sub_15E1B70(*(_QWORD *)(a1 + 40));
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v20 = v27;
  if ( v27 )
  {
    v21 = v28;
    v17 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v17 )
    {
      v26 = v18;
      sub_15D7BC0(v21, v20);
      v19 = v26;
    }
  }
  v27 = v19;
  sub_58E830(a1, (__int64)a2, v19, (__int64)a3, v29, a5);
  v22 = v29;
  if ( v29 )
  {
    v23 = v30;
    v17 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v23, v22);
  }
  v24 = v27;
  if ( v27 )
  {
    v25 = v28;
    v17 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v25, v24);
  }
}

