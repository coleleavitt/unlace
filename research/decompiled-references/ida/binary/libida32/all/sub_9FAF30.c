bool __fastcall sub_9FAF30(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) )
    return *(_BYTE *)a1 == *(_BYTE *)a2;
  return result;
}

