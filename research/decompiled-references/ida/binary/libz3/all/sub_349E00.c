void __fastcall sub_349E00(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax

  if ( *(_BYTE *)(a1 + 532) )
  {
    v1 = *(__int64 **)(a1 + 208);
    if ( v1 )
    {
      v2 = &v1[*((unsigned int *)v1 - 1)];
      while ( v2 != v1 )
      {
        v3 = *v1++;
        v4 = sub_2FF8B0(a1);
        sub_E5EBF0(v4, v3);
      }
    }
    v5 = *(__int64 **)(a1 + 192);
    if ( v5 )
    {
      v6 = &v5[*((unsigned int *)v5 - 1)];
      while ( v6 != v5 )
      {
        v7 = *v5++;
        v8 = sub_2FF8B0(a1);
        sub_E5EBF0(v8, v7);
      }
    }
  }
}

