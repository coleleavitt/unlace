bool __fastcall sub_435890(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 56) )
  {
    result = *(_DWORD *)(a1 + 8) == 64 || (unsigned int)(*(_DWORD *)(a1 + 8) - 67) <= 5;
    if ( result )
      return *(_QWORD *)(a1 + 40) != 0;
  }
  return result;
}
