_QWORD *__fastcall sub_57D9E0(__int64 a1, const void *a2)
{
  _QWORD *result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi

  result = __dynamic_cast(
             a2,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
             0);
  if ( !result )
    __cxa_bad_cast();
  v4 = result[4];
  v5 = result;
  v6 = 0;
  if ( v4 )
  {
    while ( v6 < *(_DWORD *)(v4 - 4) )
    {
      result = *(_QWORD **)(a1 + 8);
      v7 = result[v6];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v4 + 8LL * v6++);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v8);
        v4 = v5[4];
        if ( !v4 )
          return result;
      }
      else
      {
        ++v6;
      }
    }
  }
  return result;
}

