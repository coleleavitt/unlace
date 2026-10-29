__int64 __fastcall sub_12FE8E0(__int64 *a1, const void *a2, size_t a3)
{
  unsigned int v3; // r12d
  size_t v4; // rbx
  __int64 v5; // r14
  size_t v6; // r13

  v3 = 0;
  v4 = a1[1];
  if ( a3 <= v4 )
  {
    v5 = *a1;
    v6 = v4 - a3;
    if ( !a3 || !memcmp((const void *)(v5 + v6), a2, a3) )
    {
      *a1 = v5;
      v3 = 1;
      if ( v4 > v6 )
        v4 = v6;
      a1[1] = v4;
    }
  }
  return v3;
}
