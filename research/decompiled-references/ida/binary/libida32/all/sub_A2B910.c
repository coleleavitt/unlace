bool __fastcall sub_A2B910(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( *a1 == *a2 )
  {
    result = (*a1 & 3) == 3 || (*a1 & 3LL) == 2;
    if ( !result )
      return a1[1] == a2[1];
  }
  return result;
}

