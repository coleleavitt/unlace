__int64 __fastcall sub_22A9080(_QWORD *a1, unsigned __int64 a2)
{
  size_t v2; // rbx
  __int64 v3; // rbp
  const char **v4; // rdi
  __int64 v5; // rbp
  unsigned int v6; // r12d
  const char **v7; // rax
  const char *v8; // rbp
  void *s2; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v2 = a2;
  s2 = a1;
  v11 = a2;
  if ( a2 > 0xC && *a1 == 0x656D697265707865LL && *((_DWORD *)a1 + 2) == 1818326126 && *((_BYTE *)a1 + 12) == 45 )
  {
    v2 = a2 - 13;
    v3 = 66;
    s2 = (char *)a1 + 13;
    v4 = (const char **)&off_2BF3DE0;
    v11 = a2 - 13;
  }
  else
  {
    v3 = 402;
    v4 = (const char **)&off_2BF4000;
  }
  v5 = (__int64)&v4[v3];
  v6 = 0;
  v7 = sub_22A8660(v4, v5, (__int64)&s2);
  if ( (const char **)v5 == v7 )
    return v6;
  v8 = *v7;
  if ( *v7 )
  {
    if ( strlen(*v7) == v2 )
    {
      if ( v2 )
        LOBYTE(v6) = memcmp(v8, s2, v2) == 0;
      else
        return 1;
    }
    return v6;
  }
  LOBYTE(v6) = v2 == 0;
  return v6;
}
