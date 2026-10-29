__int64 __fastcall sub_78C6A0(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a1[1] - a2 <= 3 )
    sub_78AD90(a1);
  result = *a1;
  *(_DWORD *)(*a1 + a2) = a3;
  return result;
}
