__int64 __fastcall sub_7CC5B0(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v5; // rdi

  v2 = *(__int64 **)(a1 + 2392);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 320LL))(
                                               v5,
                                               a2) )
      v5 = *v2++;
  }
  return result;
}

