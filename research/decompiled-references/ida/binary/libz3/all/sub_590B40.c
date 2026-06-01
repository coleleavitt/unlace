void __fastcall sub_590B40(__int64 a1, const void *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64 *); // rax
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (__int64 *)__dynamic_cast(
                    a2,
                    (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                    (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                    0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = v2;
  v4 = v2[1];
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8), v2[5]);
  v5 = v3[6];
  v6 = v3[7];
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v7 = (_QWORD *)v3[5];
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v7 + 144LL);
  if ( v8 == sub_586990 )
  {
    v9 = v7[6];
    if ( v5 != v9 )
    {
      if ( v5 )
      {
        v10 = (*(_DWORD *)(v5 + 8))-- == 1;
        if ( v10 )
        {
          sub_15D7BC0(v6, v5);
          v9 = v7[6];
        }
      }
      v3[6] = v9;
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
    }
  }
  else
  {
    v8(v3[5], v3 + 6);
  }
  v11 = *(_QWORD *)(v4 + 40);
  sub_15DB5C0(v11, *(unsigned int *)(a1 + 24), *(_QWORD *)(v3[2] + 8LL * *(unsigned int *)(a1 + 24)));
  sub_15E1B70(v11);
  v12 = sub_15E1B70(v11);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  if ( v5 )
  {
    v10 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v6, v5);
  }
  sub_588670((int)v20, v3[1], (__int64)v3, v3[6]);
  v14 = v20[0];
  sub_588670((int)v19, v3[1], (__int64)v3, v13);
  sub_5875C0(v4, "filter_equal", v19[0], v14);
  v15 = v19[0];
  if ( v19[0] )
  {
    v16 = v19[1];
    v10 = (*(_DWORD *)(v19[0] + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v16, v15);
  }
  v17 = v20[0];
  if ( v20[0] )
  {
    v18 = v20[1];
    v10 = (*(_DWORD *)(v20[0] + 8LL))-- == 1;
    if ( v10 )
      sub_15D7BC0(v18, v17);
  }
  if ( v13 )
  {
    v10 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v6, v13);
  }
}

