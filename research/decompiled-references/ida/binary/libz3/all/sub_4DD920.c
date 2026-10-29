__int64 __fastcall sub_4DD920(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *i; // r12
  __int64 v5; // rdi

  result = *(_QWORD *)(a1 + 80);
  v3 = *(__int64 **)result;
  if ( *(_QWORD *)result )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result]; i != v3; result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(
                                               v5,
                                               a2) )
      v5 = *v3++;
  }
  return result;
}

