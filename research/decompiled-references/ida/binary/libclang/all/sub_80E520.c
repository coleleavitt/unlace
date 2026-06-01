__int64 __fastcall sub_80E520(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rcx
  signed __int64 v6; // rbp
  __int64 result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  bool v10; // cf
  __int64 v11; // r12
  __int64 v12; // rax
  char *v13; // rcx
  const void *v14; // rsi
  __int64 v15; // rax

  v5 = a1[2];
  v6 = a1[3] - v5;
  result = v6 >> 3;
  if ( v6 >> 3 < (unsigned __int64)a3 )
  {
    result = (__int64)((a1[4] & 0xFFFFFFFFFFFFFFF8LL) - v5) >> 3;
    if ( (unsigned int)result < a3 )
    {
      v8 = 2 * result;
      if ( v8 < a3 )
        v8 = a3;
      v9 = -1;
      v10 = v8 > 0xFFFFFFFFFFFFFFFLL;
      v11 = 8 * v8;
      v12 = a2[274];
      if ( !v10 )
        v9 = v11;
      a2[284] += v9;
      v13 = (char *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( a2[275] >= (unsigned __int64)&v13[v9] && v12 )
        a2[274] = &v13[v9];
      else
        v13 = (char *)sub_804090((__int64)(a2 + 274), v9, 3);
      v14 = (const void *)a1[2];
      if ( v14 != (const void *)a1[3] )
        v13 = (char *)memcpy(v13, v14, v6);
      v15 = a1[4];
      a1[2] = v13;
      a1[3] = &v13[v6];
      result = (unsigned __int64)&v13[v11] | v15 & 7;
      a1[4] = result;
    }
  }
  return result;
}

