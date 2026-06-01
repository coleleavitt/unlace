unsigned __int64 __fastcall sub_FFBFE0(__int64 a1, int a2)
{
  unsigned __int64 v3; // rax
  int v4; // ebp
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // [rsp+24h] [rbp-34h]

  if ( a2 < 0 )
  {
    v3 = sub_FFBF10(a1, a2);
    v4 = v3;
    for ( i = HIDWORD(v3); v4 < 0; v4 = sub_FFBF10(a1, v4) )
      ;
    if ( (i & 0x80000000) != 0LL )
    {
      do
      {
        v6 = sub_FFBF10(a1, i);
        i = HIDWORD(v6);
      }
      while ( (v6 & 0x8000000000000000LL) != 0LL );
    }
    return __PAIR64__(i, v4);
  }
  else
  {
    LODWORD(v7) = a2;
    HIDWORD(v7) = a2;
  }
  return v7;
}

