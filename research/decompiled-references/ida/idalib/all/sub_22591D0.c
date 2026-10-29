__int64 __fastcall sub_22591D0(__int64 a1, void (__fastcall *a2)(__int64, volatile signed __int32 *), __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 i; // r12
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbp

  v3 = *(_QWORD *)(a1 + 16);
  result = *(unsigned int *)(a1 + 24);
  for ( i = v3 + 8 * result;
        v3 != i;
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7) )
  {
    while ( 1 )
    {
      v7 = *(volatile signed __int32 **)(i - 8);
      v8 = v7 + 2;
      if ( v7 )
        _InterlockedAdd(v8, 1u);
      a2(a3, v7);
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, void (__fastcall *)(__int64, volatile signed __int32 *), __int64))(*(_QWORD *)v7 + 120LL))(
                 v7,
                 a2,
                 a3);
      if ( !_InterlockedSub(v8, 1u) )
        break;
      i -= 8;
      if ( v3 == i )
        return result;
    }
    i -= 8;
  }
  return result;
}
