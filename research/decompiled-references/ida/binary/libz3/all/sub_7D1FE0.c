__int64 __fastcall sub_7D1FE0(__int64 a1, __m128 a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *i; // rbp
  __int64 v5; // rdi

  result = sub_7D15C0(a1, a2);
  v3 = *(__int64 **)(a1 + 2392);
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result]; i != v3; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 280LL))(v5) )
      v5 = *v3++;
  }
  return result;
}

