__int64 __fastcall sub_C11830(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    result = *(unsigned __int8 *)(a1 + 914);
    if ( !(_BYTE)result )
      return *(unsigned __int8 *)(a1 + 915);
  }
  return result;
}
