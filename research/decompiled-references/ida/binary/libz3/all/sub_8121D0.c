std::ostream *__fastcall sub_8121D0(_QWORD *a1, std::ostream *a2)
{
  __int64 v2; // rax
  int v3; // r13d
  unsigned int v5; // ebx
  unsigned int v6; // edx

  v2 = a1[11];
  if ( !v2 )
    return a2;
  v3 = *(_DWORD *)(v2 - 4);
  if ( !v3 )
    return a2;
  v5 = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  do
  {
    v6 = v5++;
    sub_811D50(a1, a2, v6);
  }
  while ( v5 != v3 );
  return a2;
}

