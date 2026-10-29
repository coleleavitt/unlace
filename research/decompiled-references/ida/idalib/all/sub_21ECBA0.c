__int64 __fastcall sub_21ECBA0(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_BYTE *)(a1 + 140) )
    result = *(unsigned int *)(a1 + 136);
  *(_DWORD *)(a1 + 120) = result;
  return result;
}
