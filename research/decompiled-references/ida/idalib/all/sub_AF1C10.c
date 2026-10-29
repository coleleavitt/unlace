__int64 __fastcall sub_AF1C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 v8; // rbx

  if ( a3 != a5 )
    return 0;
  if ( !(_DWORD)a3 )
    return 1;
  v6 = a2 + 24LL * (unsigned int)(a3 - 1) + 24;
  v8 = a2;
  do
  {
    if ( !sub_AF1940(a1, v8, a4) )
      return 0;
    v8 += 24;
    a4 += 24;
  }
  while ( v6 != v8 );
  return 1;
}
