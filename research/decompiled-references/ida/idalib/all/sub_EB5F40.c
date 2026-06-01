__int64 __fastcall sub_EB5F40(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 *i; // rbx

  sub_995540(*a1, "sizes(");
  v2 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
  if ( v2 != a2 + 24 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    for ( i = (__int64 *)(a2 + 32); ; ++i )
    {
      sub_F07C00(v3, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
      if ( (__int64 *)v2 == i )
        break;
      v3 = *i;
      sub_995540(*a1, ", ");
    }
  }
  return sub_995540(*a1, ")");
}
