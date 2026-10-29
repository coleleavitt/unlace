_QWORD *__fastcall sub_589240(__int64 a1)
{
  const void *v2; // rax
  _QWORD *v3; // rax
  void *v4; // r12
  _QWORD *v5; // rbp
  __int64 (__fastcall *v6)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64 *); // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v20[2]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v21[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = (const void *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 40LL))(
                       *(_QWORD *)(a1 + 8),
                       a1 + 16);
  if ( !v2 )
    BUG();
  v3 = __dynamic_cast(
         v2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  v4 = (void *)v3[5];
  v5 = v3;
  v6 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v4 + 16LL);
  if ( v6 == sub_4C9C10 )
  {
    (**(void (__fastcall ***)(void *))v4)(v4);
    sub_186B220(v4);
  }
  else
  {
    v6((void (__fastcall ***)(_QWORD))v4);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40));
  v5[5] = v7;
  v8 = v7;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 144LL);
  if ( v9 == sub_586990 )
  {
    v10 = v5[6];
    v11 = *(_QWORD *)(v8 + 48);
    if ( v10 != v11 )
    {
      if ( v10 )
      {
        v12 = v5[7];
        v13 = (*(_DWORD *)(v10 + 8))-- == 1;
        if ( v13 )
        {
          sub_15D7BC0(v12, v10);
          v11 = *(_QWORD *)(v8 + 48);
        }
      }
      v5[6] = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
    }
  }
  else
  {
    v9(v8, v5 + 6);
    v11 = v5[6];
  }
  if ( *(_QWORD *)(a1 + 48) == v11 )
    return v5;
  sub_588670((int)v21, *(_QWORD *)(a1 + 8), a1, v11);
  v14 = v21[0];
  sub_588670((int)v20, *(_QWORD *)(a1 + 8), a1, *(_QWORD *)(a1 + 48));
  sub_5875C0(*(_QWORD *)(a1 + 8), "clone", v20[0], v14);
  v15 = v20[0];
  if ( v20[0] && (v16 = v20[1], v13 = *(_DWORD *)(v20[0] + 8) == 1, --*(_DWORD *)(v20[0] + 8), v13) )
  {
    sub_15D7BC0(v16, v15);
    v17 = v21[0];
    if ( !v21[0] )
      return v5;
  }
  else
  {
    v17 = v21[0];
    if ( !v21[0] )
      return v5;
  }
  v18 = v21[1];
  v13 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( !v13 )
    return v5;
  sub_15D7BC0(v18, v17);
  return v5;
}

