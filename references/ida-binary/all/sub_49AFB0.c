__int64 __fastcall sub_49AFB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
  if ( *(_DWORD *)(a1 + 2376) == 2 )
    result = *(_DWORD *)(a2 + 4) | 0x80000000;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
