__int64 __fastcall sub_153DC0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx

  result = a1;
  v2 = (_QWORD *)qword_253310;
  v3 = (_QWORD *)(qword_253310 + 8 * xmmword_253318);
  if ( (_QWORD *)qword_253310 == v3 )
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

