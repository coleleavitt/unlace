bool __fastcall sub_11BB80(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al

  result = 0;
  if ( a2 && a2 != a3 )
  {
    while ( a1 != a2 )
    {
      a2 = *(_QWORD *)(a2 + 8);
      result = a2 != 0 && a3 != a2;
      if ( !result )
        return result;
    }
    return 1;
  }
  return result;
}
