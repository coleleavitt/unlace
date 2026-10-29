__int64 __fastcall sub_EB2520(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *src,
        __int64 a10)
{
  __int64 result; // rax
  size_t v11; // rbp
  char *v13; // rdi

  *a1 = a3;
  a1[1] = a8;
  a1[2] = a4;
  a1[5] = a7;
  result = a10;
  a1[3] = a5;
  v11 = 8 * a10;
  a1[4] = a6;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  if ( (8 * a10) >> 3 )
  {
    result = sub_EB2040((__int64)(a1 + 6), a2, (8 * a10) >> 3, a4, a5, a6);
    v13 = (char *)a1[7];
    if ( v11 )
    {
      result = (__int64)memmove(v13, src, v11);
      v13 = (char *)a1[7];
    }
    a1[7] = &v13[v11];
  }
  return result;
}

