bool __fastcall sub_595D0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdx
  bool result; // al

  v2 = a2[1];
  result = 1;
  if ( a1[1] >= v2 )
  {
    result = 0;
    if ( a1[1] == v2 )
      return *a1 < *a2;
  }
  return result;
}
