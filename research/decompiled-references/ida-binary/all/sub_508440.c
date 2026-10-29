__int64 __fastcall sub_508440(char a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = qword_8D2330;
  v2 = qword_8D2330 + 8 * xmmword_8D2338;
  if ( v2 == qword_8D2330 )
    return 0;
  while ( *(_BYTE *)(*(_QWORD *)v1 + 8LL) != a1 )
  {
    v1 += 8;
    if ( v2 == v1 )
      return 0;
  }
  return *(_QWORD *)v1;
}
