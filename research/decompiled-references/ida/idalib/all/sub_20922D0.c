__int64 __fastcall sub_20922D0(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *(_QWORD *)(*a1 + 3080) >= a2 )
    a2 = *(_QWORD *)(result + 3080);
  *(_QWORD *)(result + 3080) = a2;
  return result;
}
