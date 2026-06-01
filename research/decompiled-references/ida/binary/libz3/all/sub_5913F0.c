__int64 __fastcall sub_5913F0(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // r13
  _QWORD *v7; // r12
  __int64 (__fastcall *v8)(__int64, __int64 *); // rax
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdi
  bool v12; // zf

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = v2[6];
  v4 = v2[1];
  v5 = v2;
  v6 = v2[7];
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8), v2[5]);
  sub_58C540(v4, v3, (_QWORD *)v5[5]);
  v7 = (_QWORD *)v5[5];
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v7 + 144LL);
  if ( v8 == sub_586990 )
  {
    v9 = v5[6];
    result = v7[6];
    if ( v9 != result )
    {
      if ( v9 )
      {
        v11 = v5[7];
        v12 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v12 )
        {
          sub_15D7BC0(v11, v9);
          result = v7[6];
        }
      }
      v5[6] = result;
      if ( result )
        ++*(_DWORD *)(result + 8);
    }
  }
  else
  {
    result = v8(v5[5], v5 + 6);
  }
  if ( v3 )
  {
    v12 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v12 )
      return sub_15D7BC0(v6, v3);
  }
  return result;
}

