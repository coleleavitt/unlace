__int64 __fastcall sub_3DA0(__int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8

  v1 = a1[3];
  result = 0;
  if ( v1 <= 0xFFFFFFFFFFFFFFFBLL )
  {
    v3 = a1[1];
    v4 = v1 + 4;
    if ( v3 >= v1 + 4 )
    {
      v5 = *a1;
      result = *(unsigned int *)(*a1 + v1);
      a1[3] = v4;
      if ( (int)result < 0 )
      {
        v6 = 0;
        if ( v4 <= 0xFFFFFFFFFFFFFFFBLL && v3 >= v1 + 8 )
        {
          v6 = *(unsigned int *)(v5 + v1 + 4);
          a1[3] = v1 + 8;
        }
        return v6 | (result << 32) & 0x7FFFFFFF00000000LL;
      }
    }
  }
  return result;
}

