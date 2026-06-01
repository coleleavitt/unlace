__int64 __fastcall sub_1147D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = a1[3736];
  if ( result != a2 )
  {
    if ( a3 )
    {
      a1[3739] = result;
      result -= a1[3737];
      a1[3737] = a2;
      a1[3738] = a2 - result;
      a1[3736] = a2;
    }
  }
  return result;
}

