__int64 __fastcall sub_18BE40(char a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = qword_255510;
  v2 = qword_255510 + 8 * xmmword_255518;
  if ( v2 == qword_255510 )
    return 0;
  while ( *(_BYTE *)(*(_QWORD *)v1 + 8LL) != a1 )
  {
    v1 += 8;
    if ( v2 == v1 )
      return 0;
  }
  return *(_QWORD *)v1;
}

