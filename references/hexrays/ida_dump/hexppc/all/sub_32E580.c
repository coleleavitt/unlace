__int64 __fastcall sub_32E580(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 i; // rbp
  __int64 v10; // rsi

  if ( *a1 )
    result = get_func_ranges(a2, *a1, a3, a4, a5, a6);
  v8 = a1[1];
  for ( i = v8 + 16LL * a1[2]; i != v8; result = rangeset_t_add(a2, v10) )
  {
    v10 = v8;
    v8 += 16;
  }
  return result;
}
