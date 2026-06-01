bool __fastcall sub_4F9D70(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 20) == *(_DWORD *)(a2 + 20) )
    return *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4);
  return result;
}
