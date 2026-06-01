bool __fastcall sub_1A0B7F0(_DWORD *a1)
{
  bool result; // al
  __int64 v2; // rcx

  result = 0;
  if ( !*a1 )
  {
    v2 = 0x1FF1FFFDFFFLL;
    if ( !_bittest64(&v2, (unsigned int)a1[46]) )
      return a1[47] == 2;
  }
  return result;
}
