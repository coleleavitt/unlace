__int64 __fastcall sub_1A88B90(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[2];
  if ( !result )
  {
    result = sub_6F3470(*(_QWORD *)(*a1 + 240LL) + 552LL, "NSError", 7u);
    a1[2] = result;
  }
  return result;
}
