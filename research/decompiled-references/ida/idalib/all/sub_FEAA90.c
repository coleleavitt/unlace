__int64 __fastcall sub_FEAA90(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 52) & 1) == 0 )
    return *(unsigned int *)(a1 + 48);
  result = 300;
  if ( *(_DWORD *)(a1 + 56) == 100 )
    return 200;
  return result;
}
