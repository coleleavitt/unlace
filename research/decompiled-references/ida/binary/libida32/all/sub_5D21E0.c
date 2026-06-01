__int64 __fastcall sub_5D21E0(_QWORD *a1)
{
  __int64 v1; // rbp
  char *v2; // rsi
  unsigned __int64 v3; // r12
  const char *v4; // rsi
  __int64 v6; // rax

  v1 = a1[64];
  v2 = (char *)a1[63];
  v3 = v1 - 1;
  if ( v1 - 1 <= 1 )
  {
    if ( v2 )
    {
      a1[64] = 0;
      qfree(v2);
      v1 = a1[64];
      a1[63] = 0;
      a1[65] = 0;
    }
  }
  else
  {
    if ( a1[65] < v3 )
    {
      v6 = qvector_reserve(a1 + 63, v2, v1 - 1, 1);
      a1[63] = v6;
      v2 = (char *)v6;
    }
    a1[64] = v3;
    v2[v1 - 2] = 0;
    v1 = a1[64];
  }
  v4 = haystack;
  if ( v1 )
    v4 = (const char *)a1[63];
  return sub_5D1B80((__int64)a1, v4 + 1);
}

