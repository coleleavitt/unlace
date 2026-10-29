__int64 __fastcall sub_192D20(__int64 a1)
{
  __int64 v1; // rax

  if ( !(_QWORD)xmmword_255948 )
    return 0;
  v1 = 0;
  while ( *(_QWORD *)(*(_QWORD *)(qword_255940 + 8 * v1) + 2520LL) != a1 )
  {
    if ( ++v1 == (_QWORD)xmmword_255948 )
      return 0;
  }
  return *(_QWORD *)(qword_255940 + 8 * v1);
}

