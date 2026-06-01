char *__fastcall sub_22B6320(_BYTE *s1, size_t n)
{
  size_t v2; // rbp
  __int64 v4; // rdx
  int v5; // esi
  int v6; // edx
  char v7; // di
  int v8; // eax
  int v9; // r8d
  __int128 v11; // [rsp+0h] [rbp-28h] BYREF

  v2 = n;
  if ( n <= 0xA )
  {
    v4 = 0;
  }
  else
  {
    v4 = n - 11;
    n = 11;
  }
  v11 = 0;
  sub_22578D0((__int64)&v11, &s1[n], v4);
  if ( v11 < 0 )
  {
    v9 = 0;
    v5 = v11;
    v7 = 1;
    v8 = DWORD2(v11) & 0x7FFFFFFF;
    v6 = DWORD1(v11) & 0x7FFFFFFF;
  }
  else
  {
    v5 = v11;
    v6 = DWORD1(v11) & 0x7FFFFFFF;
    v7 = BYTE7(v11) >> 7;
    v8 = DWORD2(v11) & 0x7FFFFFFF;
    v9 = HIDWORD(v11) & 0x7FFFFFFF;
  }
  if ( v5 )
  {
    if ( v5 == 6 && (v7 & 1) != 0 )
    {
      switch ( v6 )
      {
        case 0:
          return sub_22B5FC0(11, 49);
        case 1:
          return sub_22B5FC0(11, 50);
        case 2:
          return sub_22B5FC0(11, 51);
        case 3:
          return sub_22B5FC0(11, 52);
        case 4:
          return sub_22B5FC0(11, 53);
        case 5:
          return sub_22B5FC0(11, 54);
        case 6:
          return sub_22B5FC0(11, 55);
        case 7:
          return sub_22B5FC0(11, 56);
        case 8:
          return sub_22B5FC0(11, 57);
        default:
          sub_2221C70("Unsupported Shader Model version", 0);
      }
    }
  }
  else if ( (v6 & 0x7FFFFFFF) == 0
         && (v8 & 0x7FFFFFFF) == 0
         && (v9 & 0x7FFFFFFF) == 0
         && j__strlen("shadermodel6.x") == v2
         && (!v2 || !memcmp(s1, "shadermodel6.x", v2)) )
  {
    return sub_22B5FC0(11, 57);
  }
  return sub_22B5FC0(11, 49);
}
