void __fastcall sub_A5D960(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi

  v2 = *a1;
  if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v3 = v2 | a2 & 7;
    if ( (a2 & 0xFFFFFE00) != 0 )
      v3 = (unsigned int)a2 & 0xFFFFFE00 | v2 & 0xFFFFFFFF000001FFLL | a2 & 7;
    *a1 = v3;
    if ( (a2 & 0x30) != 0 )
    {
      v3 = a2 & 0x30 | v3 & 0xFFFFFFFFFFFFFFCFLL;
      *a1 = v3;
    }
    if ( (a2 & 0x1C0) != 0 )
    {
      v3 |= a2 & 0x1C0;
      *a1 = v3;
    }
    v4 = a2 & 0xFFFFFFFF00000000LL;
    if ( v4 )
      *a1 = (unsigned int)v3 | v4;
  }
  else
  {
    *a1 = v2 | a2;
  }
}
