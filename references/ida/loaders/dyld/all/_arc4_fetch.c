__int64 arc4_fetch()
{
  __int64 result; // x0
  int v1; // w0
  int v2; // w19
  unsigned __int64 v3; // x0
  char *v4; // x20
  size_t v5; // x21
  bool v6; // cc
  __int64 _38; // [xsp+38h] [xbp+8h]

  result = getentropy(&rdat, 0x80u);
  if ( (_DWORD)result )
  {
    v1 = open("/dev/random", 0, 0);
    if ( v1 == -1 || (v2 = v1, v3 = read(v1, &rdat, 0x80u), v3 == -1) )
LABEL_8:
      abort();
    v4 = (char *)&rdat;
    v5 = 128;
    while ( 1 )
    {
      v6 = v5 > v3;
      v5 -= v3;
      if ( !v6 )
        break;
      v4 += v3;
      v3 = read(v2, v4, v5);
      if ( v3 == -1 )
        goto LABEL_8;
    }
    if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return close(v2);
  }
  return result;
}
