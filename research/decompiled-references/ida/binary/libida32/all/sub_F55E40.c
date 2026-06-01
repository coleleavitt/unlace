bool __fastcall sub_F55E40(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rdx

  result = 1;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a1 + 16) >= v3 )
  {
    result = 0;
    if ( *(_QWORD *)(a1 + 16) == v3 )
      return *(_QWORD *)(a1 + 24) < *(_QWORD *)(a2 + 24);
  }
  return result;
}

