bool __fastcall sub_BEC880(__int64 a1)
{
  bool result; // al

  result = 1;
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    if ( *(_DWORD *)(a1 + 32) != 1 || (result = 0, (*(_BYTE *)a1 & 4) == 0) )
    {
      result = 0;
      if ( (*(_BYTE *)a1 & 8) != 0 )
        return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * ((*(_DWORD *)a1 >> 4) - 1)) == *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}

