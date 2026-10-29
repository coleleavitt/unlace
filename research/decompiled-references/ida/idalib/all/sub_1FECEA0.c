__int64 __fastcall sub_1FECEA0(volatile signed __int32 ***a1)
{
  volatile signed __int32 *v1; // rbp
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax
  int v4; // edx
  int v5; // eax

  v1 = **a1;
  if ( v1 )
  {
    v2 = v1 + 4;
    result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(**a1);
    v4 = v1[4] & 0x7FFFFFFF;
    if ( v4 != 1 )
    {
      do
      {
        _InterlockedOr(v2, 0x80000000);
        v5 = std::__atomic_futex_unsigned_base::_M_futex_wait_until(v1 + 4, v1 + 4, v4 | 0x80000000, 0, 0, 0);
        v4 = *v2 & 0x7FFFFFFF;
        result = v5 ^ 1u;
      }
      while ( !((unsigned __int8)result | (v4 == 1)) );
    }
  }
  else
  {
    std::__throw_future_error(3);
    return sub_1FECF20();
  }
  return result;
}
