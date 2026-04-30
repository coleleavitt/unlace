unsigned __int64 __fastcall sub_383E90(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rbx
  unsigned __int64 result; // rax
  _QWORD **v4; // rbp

  v2 = (_QWORD **)qword_8CF2A0;
  result = xmmword_8CF2A8;
  v4 = (_QWORD **)(qword_8CF2A0 + 8 * xmmword_8CF2A8);
  if ( v4 != (_QWORD **)qword_8CF2A0 )
  {
    do
    {
      if ( *v2 )
        result = sub_383B60(*v2, a2);
      ++v2;
    }
    while ( v4 != v2 );
  }
  return result;
}
