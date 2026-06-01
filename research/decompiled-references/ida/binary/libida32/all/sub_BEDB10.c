__int64 __fastcall sub_BEDB10(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 48) && (result = *(unsigned __int8 *)(a1 + 914), !(_BYTE)result) )
  {
    result = *(unsigned __int8 *)(a1 + 915);
    **(_BYTE **)(a1 + 24) |= result;
  }
  else
  {
    **(_BYTE **)(a1 + 24) |= result;
  }
  return result;
}

