__int64 __fastcall sub_F6B10(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  _QWORD *v3; // rcx

  v1 = (_QWORD *)qword_252810;
  result = a1;
  v3 = (_QWORD *)(qword_252810 + 8 * xmmword_252818);
  if ( (_QWORD *)qword_252810 == v3 )
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

