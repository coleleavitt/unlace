__int64 __fastcall sub_40DAE0(_BYTE *src, _BYTE *dest, size_t n, int a4, int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 result; // rax

  v6 = n;
  result = sub_40DA70(a4, (int)dest, n, a4, a5, a6);
  if ( (_DWORD)result == 1 )
  {
    if ( v6 == 4 )
    {
      *dest = src[3];
      dest[1] = src[2];
      dest[2] = src[1];
      result = (unsigned __int8)*src;
      dest[3] = result;
    }
    else if ( v6 == 8 )
    {
      *dest = src[7];
      dest[1] = src[6];
      dest[2] = src[5];
      dest[3] = src[4];
      dest[4] = src[3];
      dest[5] = src[2];
      dest[6] = src[1];
      result = (unsigned __int8)*src;
      dest[7] = result;
    }
  }
  else if ( (int)result <= 1 )
  {
    if ( !(_DWORD)result )
      return (__int64)memcpy(dest, src, v6);
  }
  else if ( (_DWORD)result == 2 )
  {
    *dest = src[4];
    dest[1] = src[5];
    dest[2] = src[6];
    dest[3] = src[7];
    dest[4] = *src;
    dest[5] = src[1];
    dest[6] = src[2];
    result = (unsigned __int8)src[3];
    dest[7] = result;
  }
  else if ( (_DWORD)result == 3 )
  {
    *dest = src[3];
    dest[1] = src[2];
    dest[2] = src[1];
    dest[3] = *src;
    dest[4] = src[7];
    dest[5] = src[6];
    dest[6] = src[5];
    result = (unsigned __int8)src[4];
    dest[7] = result;
  }
  return result;
}

