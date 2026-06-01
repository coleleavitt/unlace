_QWORD *__fastcall sub_5893F0(__int64 a1, __int64 a2)
{
  const void *v3; // rax
  _QWORD *v4; // rax
  void *v5; // r13
  _QWORD *v6; // r12
  __int64 (__fastcall *v7)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64 *); // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v24[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v25[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (const void *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 40LL))(
                       *(_QWORD *)(a1 + 8),
                       a1 + 16);
  if ( !v3 )
    BUG();
  v4 = __dynamic_cast(
         v3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  v5 = (void *)v4[5];
  v6 = v4;
  v7 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v5 + 16LL);
  if ( v7 == sub_4C9C10 )
  {
    (**(void (__fastcall ***)(void *))v5)(v5);
    sub_186B220(v5);
  }
  else
  {
    v7((void (__fastcall ***)(_QWORD))v5);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 128LL))(*(_QWORD *)(a1 + 40), a2);
  v6[5] = v8;
  v9 = v8;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 144LL);
  if ( v10 == sub_586990 )
  {
    v11 = v6[6];
    v12 = *(_QWORD *)(v9 + 48);
    if ( v11 != v12 )
    {
      if ( v11 )
      {
        v13 = v6[7];
        v14 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v14 )
        {
          sub_15D7BC0(v13, v11);
          v12 = *(_QWORD *)(v9 + 48);
        }
      }
      v6[6] = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
    }
  }
  else
  {
    v10(v9, v6 + 6);
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = sub_15E1A70(v15);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_588670((int)v25, *(_QWORD *)(a1 + 8), a1, v6[6]);
  v18 = v25[0];
  sub_588670((int)v24, *(_QWORD *)(a1 + 8), a1, v17);
  sub_5875C0(*(_QWORD *)(a1 + 8), "complement", v24[0], v18);
  v19 = v24[0];
  if ( v24[0] )
  {
    v20 = v24[1];
    v14 = (*(_DWORD *)(v24[0] + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v20, v19);
  }
  v21 = v25[0];
  if ( v25[0] )
  {
    v22 = v25[1];
    v14 = (*(_DWORD *)(v25[0] + 8LL))-- == 1;
    if ( v14 )
      sub_15D7BC0(v22, v21);
  }
  if ( !v17 )
    return v6;
  v14 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( !v14 )
    return v6;
  sub_15D7BC0(v15, v17);
  return v6;
}

