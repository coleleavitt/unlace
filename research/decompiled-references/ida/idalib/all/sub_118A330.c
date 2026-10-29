char __fastcall sub_118A330(__int64 a1)
{
  char *v1; // rax
  char result; // al
  char v3; // [rsp+Fh] [rbp-E9h]
  _BYTE v4[32]; // [rsp+10h] [rbp-E8h] BYREF
  __int16 v5; // [rsp+30h] [rbp-C8h]
  _BYTE v6[32]; // [rsp+40h] [rbp-B8h] BYREF
  __int16 v7; // [rsp+60h] [rbp-98h]
  _BYTE v8[32]; // [rsp+70h] [rbp-88h] BYREF
  __int16 v9; // [rsp+90h] [rbp-68h]
  char *s[4]; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v11; // [rsp+C0h] [rbp-38h]

  v1 = getenv("CLANG_MODULE_CACHE_PATH");
  if ( v1 )
  {
    v11 = 257;
    if ( *v1 )
    {
      s[0] = v1;
      LOBYTE(v11) = 3;
    }
    sub_22538C0(s, a1);
    switch ( (char)v11 )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        result = s[1] != nullptr;
        break;
      case 1:
        result = 0;
        break;
      case 3:
        result = 0;
        if ( s[0] )
          result = j__strlen(s[0]) != 0;
        break;
      case 4:
        result = *((_QWORD *)s[0] + 1) != 0;
        break;
    }
  }
  else
  {
    result = sub_228D6F0(a1);
    if ( result )
    {
      v3 = result;
      v5 = 257;
      v7 = 257;
      v9 = 257;
      v11 = 259;
      s[0] = "clang";
      sub_228A3B0(a1, s, v8, v6, v4);
      v5 = 257;
      v7 = 257;
      s[0] = "ModuleCache";
      v9 = 257;
      v11 = 259;
      sub_228A3B0(a1, s, v8, v6, v4);
      return v3;
    }
  }
  return result;
}
