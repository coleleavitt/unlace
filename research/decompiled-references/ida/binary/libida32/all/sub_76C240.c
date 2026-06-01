__int64 __fastcall sub_76C240(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a1[1] - a2 <= 3 )
    sub_76A940(a1);
  result = *a1;
  *(_DWORD *)(*a1 + a2) = a3;
  return result;
}

