__int64 __fastcall sub_11BC5C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  const char **v4; // rax
  size_t v5; // rsi
  const char *v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  v2 = sub_10DCD30(a2, 0x90Du);
  v3 = 6;
  if ( v2 )
  {
    v4 = *(const char ***)(v2 + 48);
    v5 = 0;
    v6 = *v4;
    if ( *v4 )
      v5 = strlen(*v4);
    if ( (unsigned __int8)sub_2247970(v6, v5, 0, &v8) )
      return 6;
    v3 = v8;
    if ( v8 != (unsigned int)v8 )
      return 6;
  }
  return v3;
}
