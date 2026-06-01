__int64 __fastcall sub_BFA6D0(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = *(_WORD *)a1 & 0x1FF;
  if ( v1 != 81 )
  {
    if ( v1 <= 0x51u )
    {
      if ( v1 == 79 )
        return a1 + 8LL * *(unsigned int *)(a1 + 4) + 24;
    }
    else if ( v1 == 86 || v1 == 87 )
    {
      return a1 + 8LL * *(unsigned int *)(a1 + 4) + 40;
    }
  }
  return a1 + 8LL * *(unsigned int *)(a1 + 4) + 48;
}
