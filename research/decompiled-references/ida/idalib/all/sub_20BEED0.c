__int64 __fastcall sub_20BEED0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  if ( *(_BYTE *)a2 == 18 && *(_WORD *)(a2 + 2) == 34 )
  {
    sub_2051DB0(a1, a2);
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
  }
  return result;
}
