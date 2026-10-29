__int64 __fastcall sub_76C1F0(__int64 *a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a1[1] - a2 <= 0 )
    sub_76A940(a1);
  result = *a1;
  *(_BYTE *)(*a1 + a2) = a3;
  return result;
}

