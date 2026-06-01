__int64 __fastcall sub_E50260(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *i; // r12
  __int64 v5; // rdi

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 88LL))(*(_QWORD *)(a1 + 104));
  v3 = *(__int64 **)(a1 + 432);
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result]; i != v3; result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(
                                               v5,
                                               a2) )
      v5 = *v3++;
  }
  return result;
}

