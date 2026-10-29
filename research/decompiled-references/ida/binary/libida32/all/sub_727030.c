bool __fastcall sub_727030(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  bool result; // al

  v2 = *(_WORD *)(a2 + 24);
  result = 1;
  if ( v2 != 59 )
  {
    result = 0;
    if ( v2 == 1 )
      return *(_QWORD *)(sub_780220(a1) + 8) > 1u;
  }
  return result;
}

