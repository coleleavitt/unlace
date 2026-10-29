__int64 __fastcall sub_277BB0(__int64 a1)
{
  int v1; // esi
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  result = 0;
  if ( *(_DWORD *)(a1 + 12) - v1 > 0 )
    return (unsigned int)((v1 + *(_DWORD *)(a1 + 12)) / 2 / (*(_DWORD *)(a1 + 12) - v1));
  return result;
}
