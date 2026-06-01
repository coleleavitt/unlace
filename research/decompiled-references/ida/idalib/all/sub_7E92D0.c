unsigned __int64 __fastcall sub_7E92D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned __int64 result; // rax
  __int64 i; // r14
  __int64 v6; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  result = sub_3A0970(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v6 = 5 * i;
      result = sub_7E9270((__int64 *)(*(_QWORD *)(a1 + 16) + 32 * v6), a2);
    }
  }
  return result;
}
