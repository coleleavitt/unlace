__int64 __fastcall sub_76C210(__int64 *a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  if ( a1[1] - a2 <= 1 )
    sub_76A940(a1);
  *(_BYTE *)(*a1 + a2) = a3;
  result = *a1;
  *(_BYTE *)(*a1 + a2 + 1) = HIBYTE(a3);
  return result;
}

