char __fastcall sub_15D6360(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !a3 )
    return *(_DWORD *)(a2 + 340) <= 9u;
  result = 0;
  if ( a3 == 1 )
  {
    v4 = *(unsigned int *)(a2 + 248);
    if ( (unsigned int)v4 <= 0x33 )
    {
      v5 = 0xE06680400000ALL;
      if ( _bittest64(&v5, v4) )
        return *(_BYTE *)(a2 + 472);
    }
  }
  return result;
}
