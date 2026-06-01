__int64 __fastcall sub_110FC10(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r12
  unsigned int v4; // r14d
  int v5; // eax
  const void *v6; // rcx
  size_t v7; // rbp
  unsigned int v8; // r15d
  bool v9; // r8
  int i; // r9d
  __int64 v11; // rbx
  const void *v12; // rsi
  int v13; // eax
  bool v14; // al
  int j; // edx
  unsigned int v17; // r15d
  unsigned int v18; // r15d
  const void *v19; // [rsp+0h] [rbp-48h]
  bool v20; // [rsp+Bh] [rbp-3Dh]
  int v21; // [rsp+Ch] [rbp-3Ch]

  v2 = *((_DWORD *)a1 + 4);
  v3 = *a1;
  if ( v2 )
  {
    v4 = v2 - 1;
    v5 = sub_2224B50(*a2, a2[1]);
    v6 = (const void *)*a2;
    v7 = a2[1];
    v8 = v4 & v5;
    v9 = *a2 == -2;
    if ( v7 )
    {
      for ( i = 1; ; ++i )
      {
        v11 = v3 + 16LL * v8;
        v12 = *(const void **)v11;
        if ( *(_QWORD *)v11 == -1 )
          goto LABEL_15;
        if ( v12 == (const void *)-2LL )
        {
          v14 = v9;
        }
        else
        {
          if ( *(_QWORD *)(v11 + 8) != v7 )
            goto LABEL_21;
          v21 = i;
          v20 = v9;
          v19 = v6;
          v13 = memcmp(v6, v12, v7);
          v6 = v19;
          v9 = v20;
          i = v21;
          v14 = v13 == 0;
        }
        if ( v14 )
          return v11;
LABEL_21:
        v18 = i + v8;
        v8 = v4 & v18;
      }
    }
    for ( j = 1; ; ++j )
    {
      v11 = v3 + 16LL * v8;
      if ( *(_QWORD *)v11 == -1 )
        break;
      if ( *(_QWORD *)v11 == -2 )
      {
        if ( v6 == (const void *)-2LL )
          return v11;
      }
      else if ( !*(_QWORD *)(v11 + 8) )
      {
        return v11;
      }
      v17 = j + v8;
      v8 = v4 & v17;
    }
LABEL_15:
    if ( v6 == (const void *)-1LL )
      return v11;
    v3 = *a1;
    v2 = *((_DWORD *)a1 + 4);
  }
  return v3 + 16LL * v2;
}

