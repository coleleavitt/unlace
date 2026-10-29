__int64 __fastcall ClpDisasterHandler::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != a2 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  return result;
}

