__int64 __fastcall sub_BEC550(__int64 a1)
{
  __int64 result; // rax

  **(_BYTE **)(a1 + 24) = 1;
  if ( *(_DWORD *)(a1 + 916) > 2u )
    return 1;
  result = *(unsigned __int8 *)(a1 + 914);
  if ( !(_BYTE)result )
    return *(unsigned __int8 *)(a1 + 915);
  return result;
}

