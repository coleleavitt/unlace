__int64 __fastcall sub_2053F70(_QWORD *a1, __int16 a2)
{
  __int64 result; // rax

  result = a1[1];
  if ( (unsigned __int64)(result + 1) > a1[2] )
  {
    sub_2236E10(a1, a1 + 3, result + 1, 2);
    result = a1[1];
  }
  *(_WORD *)(*a1 + 2 * result) = a2;
  ++a1[1];
  return result;
}
