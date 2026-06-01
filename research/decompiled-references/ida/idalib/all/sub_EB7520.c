__int64 __fastcall sub_EB7520(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rdi

  sub_995540(*a1, "ompx_attribute(");
  v3 = *(__int64 **)(a2 + 16);
  v4 = &v3[*(unsigned int *)(a2 + 24)];
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v5 = *v3++;
      sub_B1F2A0(v5, (const char *)*a1, a1[1]);
      if ( v4 == v3 )
        break;
      sub_995540(*a1, ", ");
    }
  }
  return sub_995540(*a1, ")");
}
