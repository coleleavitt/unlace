__int64 __fastcall sub_8EAE30(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v5; // rdi

  v2 = *(__int64 **)(a1 + 8688);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 120LL))(
                                               v5,
                                               a2) )
      v5 = *v2++;
  }
  return result;
}

