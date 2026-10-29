__int64 __fastcall sub_1545C0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx

  result = a1;
  v2 = (_QWORD *)qword_2544E0;
  v3 = (_QWORD *)(qword_2544E0 + 8 * xmmword_2544E8);
  if ( (_QWORD *)qword_2544E0 == v3 )
    return 0;
  while ( a1 != *v2 )
  {
    if ( v3 == ++v2 )
      return 0;
  }
  if ( v3 == v2 )
    return 0;
  return result;
}

