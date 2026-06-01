__int64 __fastcall sub_2123330(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v3; // r13d
  const char **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  const char **v8; // rax
  const char *v9; // rbx
  size_t v10; // rax
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 0;
  v5 = *(const char ***)(a1 + 160);
  v12[1] = a3;
  v6 = *(_QWORD *)(a1 + 168);
  v12[0] = a2;
  v7 = (__int64)&v5[14 * v6];
  v8 = sub_2123250(v5, v7, (__int64)v12);
  if ( (const char **)v7 == v8 )
    return v3;
  v9 = *v8;
  if ( *v8 )
  {
    v10 = strlen(*v8);
    if ( v10 == a3 )
    {
      if ( v10 )
        LOBYTE(v3) = memcmp(v9, a2, v10) == 0;
      else
        return 1;
    }
    return v3;
  }
  LOBYTE(v3) = a3 == 0;
  return v3;
}
