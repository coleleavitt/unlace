bool __fastcall sub_E24350(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)(a1 + 24) && !*(_DWORD *)(a2 + 24) )
    return *(_QWORD *)(a2 + 32) == *(_QWORD *)(a1 + 32);
  return result;
}
