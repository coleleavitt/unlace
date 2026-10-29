__int64 __fastcall sub_643C0(__int64 *a1, int a2)
{
  unsigned int v2; // edx

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(50315);
    BUG();
  }
  v2 = 0;
  if ( a2 < (unsigned __int64)a1[1] )
  {
    a1[1] = a2;
    if ( (a2 & 0x3F) != 0 )
    {
      *(_QWORD *)(*a1 + 8 * ((unsigned __int64)a2 >> 6)) &= ~(-1LL << (a2 & 0x3F));
      a1[1] = (a1[1] + 63) & 0xFFFFFFFFFFFFFFC0LL;
    }
    sub_64300(a1);
    return 1;
  }
  return v2;
}
