__int64 __fastcall sub_816F80(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  if ( *a1 )
  {
    *(_QWORD *)(a1[3] + 8LL * a1[2]) = a2;
    a1[2] = (unsigned __int64)(a1[2] + 1LL) % *a1;
  }
  result = a1[1];
  if ( result )
  {
    v3 = a2 % (result << 8);
    result = a1[4];
    *(_QWORD *)(result + 8 * v3) = a2;
  }
  return result;
}
