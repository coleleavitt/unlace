__int64 __fastcall sub_64190(__int64 *a1, int a2)
{
  __int64 v2; // r12
  char v3; // bl
  unsigned int v4; // ecx
  _QWORD *v5; // rsi
  signed int v7; // r13d

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(50313);
    BUG();
  }
  v2 = *a1;
  v3 = a2;
  if ( a2 >= (unsigned __int64)a1[1] )
  {
    v7 = (a2 + 64) & 0xFFFFFFC0;
    v2 = qrealloc_or_throw();
    memset((void *)(v2 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v7 - a1[1]) >> 3);
    *a1 = v2;
    a1[1] = v7;
  }
  v4 = 0;
  v5 = (_QWORD *)(v2 + 8LL * (a2 >> 6));
  if ( ((1LL << v3) & *v5) == 0 )
  {
    v4 = 1;
    *v5 |= 1LL << v3;
  }
  return v4;
}
