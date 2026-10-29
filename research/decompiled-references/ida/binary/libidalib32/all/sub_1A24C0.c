__int64 __fastcall sub_1A24C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi

  v1 = qword_255F20;
  v2 = qword_255F20 + 8 * xmmword_255F28;
  if ( v2 == qword_255F20 )
    return 0;
  while ( a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 176LL) + 56LL) )
  {
    v1 += 8;
    if ( v2 == v1 )
      return 0;
  }
  return *(_QWORD *)v1;
}

