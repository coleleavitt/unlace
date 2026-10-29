__int64 __fastcall sub_E937E0(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rdi

  sub_971800(*a1, "ompx_attribute(");
  v3 = *(__int64 **)(a2 + 16);
  v4 = &v3[*(unsigned int *)(a2 + 24)];
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v5 = *v3++;
      sub_AFB560(v5, (const char *)*a1, a1[1]);
      if ( v4 == v3 )
        break;
      sub_971800(*a1, ", ");
    }
  }
  return sub_971800(*a1, ")");
}

