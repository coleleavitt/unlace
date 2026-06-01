__int64 __fastcall sub_164C00(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = qword_253100;
  result = a1;
  while ( a1 != *v1 )
  {
    if ( ++v1 == &qword_253100[26] )
      return 0;
  }
  return result;
}

