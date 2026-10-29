void *__fastcall sub_821DE0(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edx
  void *result; // rax
  unsigned __int64 v4; // rsi

  v2 = a1[2];
  result = a1;
  if ( v2 > 0x40 )
  {
    **(_QWORD **)a1 = a2;
    return memset(
             (void *)(*(_QWORD *)a1 + 8LL),
             0,
             8 * (unsigned int)(((unsigned __int64)(unsigned int)a1[2] + 63) >> 6) - 8);
  }
  else
  {
    v4 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v2) & a2;
    if ( !v2 )
      v4 = 0;
    *(_QWORD *)a1 = v4;
  }
  return result;
}

