__int64 __fastcall sub_1A2C730(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  return result;
}
