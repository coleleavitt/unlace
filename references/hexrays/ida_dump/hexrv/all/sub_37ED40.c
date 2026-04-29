bool __fastcall sub_37ED40(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) && *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 24) )
    return *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12);
  return result;
}
