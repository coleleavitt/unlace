__int64 __fastcall sub_F5C30(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  _QWORD *v3; // rcx

  v1 = (_QWORD *)qword_251670;
  result = a1;
  v3 = (_QWORD *)(qword_251670 + 8 * xmmword_251678);
  if ( (_QWORD *)qword_251670 == v3 )
    return 0;
  while ( a1 != *v1 )
  {
    if ( v3 == ++v1 )
      return 0;
  }
  if ( v3 == v1 )
    return 0;
  return result;
}

