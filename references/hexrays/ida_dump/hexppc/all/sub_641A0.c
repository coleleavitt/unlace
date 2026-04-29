__int64 __fastcall sub_641A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( a3 )
  {
    result = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 16) = result;
    if ( result )
      *(_QWORD *)(result + 8) = a2;
    *(_QWORD *)(a3 + 16) = a2;
  }
  else
  {
    result = *(_QWORD *)(a1 + 520);
    v4 = 0;
    if ( result )
    {
      do
      {
        v4 = result;
        result = *(_QWORD *)(result + 8);
      }
      while ( result );
      *(_QWORD *)(v4 + 8) = a2;
    }
    *(_QWORD *)(a2 + 16) = v4;
  }
  *(_QWORD *)(a2 + 8) = a3;
  if ( *(_QWORD *)(a1 + 520) == a3 )
    *(_QWORD *)(a1 + 520) = a2;
  return result;
}
