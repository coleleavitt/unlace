size_t __fastcall ZSTD_readSkippableFrame(void *dest, size_t a2, _DWORD *a3, int *a4, unsigned __int64 a5)
{
  size_t v5; // rbx
  int v8; // r14d
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  if ( a5 <= 7 )
    return -72;
  v5 = (unsigned int)a4[1];
  v8 = *a4;
  if ( (unsigned int)v5 > 0xFFFFFFF7 )
  {
    v11 = -14;
    v5 = -22;
  }
  else
  {
    if ( a5 >= v5 + 8 )
    {
      if ( (unsigned int)ZSTD_isSkippableFrame(a4, a5) )
        goto LABEL_5;
      return -14;
    }
    v11 = -72;
    v5 = -80;
  }
  if ( !(unsigned int)ZSTD_isSkippableFrame(a4, a5) )
    return -14;
  if ( a5 < v11 )
    return -72;
LABEL_5:
  if ( a2 < v5 )
    return -70;
  if ( v5 && dest )
    memcpy(dest, a4 + 2, v5);
  if ( a3 )
    *a3 = v8 - 407710288;
  return v5;
}

