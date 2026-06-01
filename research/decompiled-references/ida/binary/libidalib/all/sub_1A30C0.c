__int64 __fastcall sub_1A30C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi

  v1 = qword_2570E0;
  v2 = qword_2570E0 + 8 * xmmword_2570E8;
  if ( v2 == qword_2570E0 )
    return 0;
  while ( a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 176LL) + 56LL) )
  {
    v1 += 8;
    if ( v2 == v1 )
      return 0;
  }
  return *(_QWORD *)v1;
}

