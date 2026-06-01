bool __fastcall sub_15D2A60(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  bool result; // al
  __int64 v4; // rcx

  v2 = *(unsigned int *)(a2 + 248);
  result = 0;
  if ( (unsigned int)v2 <= 0x26 )
  {
    v4 = 0x680000000ALL;
    if ( _bittest64(&v4, v2) )
      return *(_DWORD *)(a2 + 340) == 10;
  }
  return result;
}
