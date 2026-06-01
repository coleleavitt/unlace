__int64 __fastcall sub_1216AC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v4; // rbx
  const char *v5; // rdi
  const char *v6; // [rsp+0h] [rbp-28h] BYREF
  size_t v7; // [rsp+8h] [rbp-20h]

  result = sub_10DCD30(a1, 0x913u);
  if ( result )
  {
    v4 = 0;
    v5 = **(const char ***)(result + 48);
    v6 = v5;
    if ( v5 )
      v4 = j__strlen(v5);
    v7 = v4;
    if ( j__strlen("krait") == v4 )
    {
      if ( !(unsigned int)sub_22462B0(&v6, "krait", v4) )
        return sub_10DC5D0(a2, (__int64)"-mcpu=cortex-a15");
      v4 = v7;
    }
    if ( j__strlen("kryo") != v4 || (unsigned int)sub_22462B0(&v6, "kryo", v4) )
    {
      result = sub_10DCD30(a1, 0x913u);
      if ( result )
        return sub_21B5A40(result, a1, a2);
    }
    else
    {
      return sub_10DC5D0(a2, (__int64)"-mcpu=cortex-a57");
    }
  }
  return result;
}
