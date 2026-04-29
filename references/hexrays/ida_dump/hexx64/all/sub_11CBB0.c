bool __fastcall sub_11CBB0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a2 > 0x43 )
    return 0;
  if ( a2 <= 4 )
  {
    if ( a2 <= 2 )
      return a2 != 0;
    else
      return a2 == 4;
  }
  else
  {
    v2 = 1LL << ((unsigned __int8)a2 - 5);
    if ( (v2 & 0x4000000000043F85LL) != 0 )
      return *(_DWORD *)(a1 + 92) <= 16;
    else
      return (v2 & 0x100000000000060LL) != 0;
  }
}
