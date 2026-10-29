__int64 __fastcall sub_1543C10(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 result; // rax

  v2 = *(_WORD *)(a2 + 16);
  result = 1;
  if ( v2 != 109 )
  {
    result = 2;
    if ( v2 != 157 )
      return 4 * (unsigned int)(v2 == 90);
  }
  return result;
}
