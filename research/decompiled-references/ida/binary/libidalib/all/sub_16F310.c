__int64 __fastcall sub_16F310(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 result; // rax

  if ( *a2 >= a3 )
    return 0;
  *(_DWORD *)(a1 + 8) = unpack_dd();
  result = 0;
  if ( *a2 < a3 )
  {
    *(_DWORD *)(a1 + 12) = unpack_dd();
    return 1;
  }
  return result;
}

