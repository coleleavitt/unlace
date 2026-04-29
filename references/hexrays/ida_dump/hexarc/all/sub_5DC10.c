__int64 __fastcall sub_5DC10(__int64 *a1, int a2)
{
  __int64 v2; // r12
  unsigned int v5; // ecx
  _QWORD *v6; // rsi
  __int64 v8; // rdi
  bool v9; // sf
  signed int v10; // r13d
  int v11; // esi

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_37B760(50313);
    BUG();
  }
  v2 = *a1;
  if ( a2 >= (unsigned __int64)a1[1] )
  {
    v8 = *a1;
    v9 = a2 + 64 < 0;
    v10 = (a2 + 64) & 0xFFFFFFC0;
    v11 = v10 + 7;
    if ( !v9 )
      v11 = v10;
    v2 = qrealloc_or_throw(v8, v11 >> 3);
    memset((void *)(v2 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v10 - a1[1]) >> 3);
    *a1 = v2;
    a1[1] = v10;
  }
  v5 = 0;
  v6 = (_QWORD *)(v2 + 8LL * (a2 >> 6));
  if ( ((1LL << a2) & *v6) == 0 )
  {
    v5 = 1;
    *v6 |= 1LL << a2;
  }
  return v5;
}
