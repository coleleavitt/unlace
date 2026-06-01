__int64 __fastcall sub_4DB900(__int64 **a1, _QWORD *a2, std::ostream *a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 *i; // r12
  __int64 v10; // r14

  v5 = *a2;
  sub_654200(*a2, 0);
  result = (__int64)__dynamic_cast(
                      *(const void **)(v5 + 2968),
                      (const struct __class_type_info *)&`typeinfo for'datalog::rel_context_base,
                      (const struct __class_type_info *)&`typeinfo for'datalog::rel_context,
                      0);
  if ( !result )
    __cxa_bad_cast();
  v7 = *a1;
  if ( *a1 )
  {
    v8 = result;
    result = *((unsigned int *)v7 - 1);
    for ( i = &v7[result]; i != v7; ++v7 )
    {
      v10 = *v7;
      result = sub_629B80(*v7 + 8, *(_QWORD *)(v8 + 48));
      if ( (_BYTE)result || *(_BYTE *)(v10 + 40) )
        result = sub_4DA7A0(v10, a2, a3, a4);
    }
  }
  return result;
}

