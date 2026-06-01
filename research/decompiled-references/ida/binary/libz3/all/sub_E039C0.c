void __fastcall sub_E039C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // r13
  void (__fastcall ***v8)(void *); // r15
  __int64 (__fastcall *v9)(); // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  void (__fastcall ***v12)(void *); // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  bool v16; // zf
  __int64 v17; // rax
  void (__fastcall **v18)(void *); // [rsp+8h] [rbp-50h]
  _QWORD v19[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_DFBCB0(a1);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 928LL);
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 296);
  v8 = sub_DFF530(a1);
  v9 = (__int64 (__fastcall *)())(*v8)[17];
  if ( v9 == sub_E0F590 )
  {
    v10 = (__int64)v8[7];
    v11 = *(_QWORD *)(v10 + 312);
    if ( !v11 )
    {
      v18 = v8[7];
      sub_DFBCB0(v10);
      v10 = (__int64)v18;
      v11 = (__int64)v18[39];
    }
    v12 = sub_DFF530(v10);
    v13 = sub_DE2610(v11, (__int64)v12, a3);
    if ( v13 )
      goto LABEL_7;
    v17 = sub_160A100(v8, a3);
  }
  else
  {
    v17 = ((__int64 (__fastcall *)(void (__fastcall ***)(void *), __int64))v9)(v8, a3);
  }
  v13 = v17;
  if ( v17 )
LABEL_7:
    ++*(_DWORD *)(v13 + 8);
  if ( a4 )
  {
    sub_DFBCB0(a1);
    v14 = sub_1638090(*(_QWORD *)(a1 + 296));
    v15 = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    if ( v13 )
    {
      v16 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v7, v13);
    }
    v13 = v15;
  }
  v19[0] = 0;
  sub_DFBCB0(a1);
  sub_16245D0(a2, v13, *(_QWORD *)(a1 + 296), v19);
  sub_18572D0(v19);
  if ( v13 )
  {
    v16 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v7, v13);
  }
}

