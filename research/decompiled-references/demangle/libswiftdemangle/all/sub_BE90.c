__int64 __fastcall sub_BE90(void *s1, size_t a2)
{
  const char **v3; // rbx
  const char *v4; // rsi
  size_t v5; // rbp
  _QWORD v7[12]; // [rsp+0h] [rbp-98h] BYREF
  char v8; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v3 = (const char **)v7;
  v7[2] = "$S";
  v4 = "_T0";
  v5 = 3;
  v7[4] = "_$S";
  v7[6] = "$s";
  v7[8] = "_$s";
  v7[0] = "_T0";
  v7[1] = 3;
  v7[3] = 2;
  v7[5] = 3;
  v7[7] = 2;
  v7[9] = 3;
  v7[10] = "@__swiftmacro_";
  v7[11] = 14;
  while ( 1 )
  {
    if ( a2 >= v5 )
    {
      if ( !v5 )
        return 0;
      if ( !memcmp(s1, v4, v5) )
        break;
    }
    v3 += 2;
    if ( &v8 == (char *)v3 )
      return 0;
    v5 = (size_t)v3[1];
    v4 = *v3;
  }
  return (unsigned int)v5;
}
