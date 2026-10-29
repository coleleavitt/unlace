__int64 __fastcall sub_2246E40(__int64 *a1, const void *a2, size_t a3)
{
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 v6; // r13

  v3 = -1;
  v4 = a1[1];
  if ( a3 <= v4 )
  {
    v6 = *a1;
    v3 = v4 - a3;
    if ( a3 )
    {
      while ( memcmp((const void *)(v6 + v3), a2, a3) )
      {
        if ( !v3 )
          return -1;
        --v3;
      }
    }
  }
  return v3;
}
