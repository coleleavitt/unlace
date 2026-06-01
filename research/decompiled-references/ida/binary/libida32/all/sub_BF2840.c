_DWORD *__fastcall sub_BF2840(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rsi

  v2 = a1[2];
  if ( v2 > 0x40 )
  {
    **(_QWORD **)a1 = a2;
    memset((void *)(*(_QWORD *)a1 + 8LL), 0, 8 * ((unsigned int)(((unsigned __int64)v2 + 63) >> 6) + 0x1FFFFFFF));
    return a1;
  }
  else
  {
    v3 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v2) & a2;
    if ( !v2 )
      v3 = 0;
    *(_QWORD *)a1 = v3;
    return a1;
  }
}

