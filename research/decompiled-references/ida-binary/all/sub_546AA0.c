bool __fastcall sub_546AA0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  bool result; // al

  result = 1;
  if ( *a2 >= *a3 )
  {
    result = 0;
    if ( *a3 >= *a2 )
      return a2[1] < a3[1];
  }
  return result;
}
