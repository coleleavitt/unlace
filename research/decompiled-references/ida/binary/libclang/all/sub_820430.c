__int64 __fastcall sub_820430(__int64 a1)
{
  __int64 result; // rax

  **(_BYTE **)(a1 + 24) = 1;
  result = 1;
  if ( *(_DWORD *)(a1 + 964) <= 2u )
  {
    result = *(unsigned __int8 *)(a1 + 962);
    LOBYTE(result) = *(_BYTE *)(a1 + 963) | result;
  }
  return result;
}

