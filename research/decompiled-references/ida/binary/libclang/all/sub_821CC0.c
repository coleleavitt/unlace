__int64 __fastcall sub_821CC0(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    result = *(unsigned __int8 *)(a1 + 962);
    LOBYTE(result) = *(_BYTE *)(a1 + 963) | result;
  }
  return result;
}

