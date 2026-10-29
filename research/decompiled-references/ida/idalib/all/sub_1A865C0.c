__int64 __fastcall sub_1A865C0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    a2 += 48;
  result = *a1;
  *(_QWORD *)(*a1 + 544) = a2;
  return result;
}
