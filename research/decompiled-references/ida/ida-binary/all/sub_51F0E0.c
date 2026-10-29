bool __fastcall sub_51F0E0(__int64 a1, __int64 a2, int a3)
{
  bool result; // al

  result = 0;
  if ( a3 == (a3 & *(_DWORD *)(a1 + 2208)) )
  {
    result = 1;
    if ( a3 != 2 )
      return *(_QWORD *)(a2 + 8) != 0;
  }
  return result;
}
