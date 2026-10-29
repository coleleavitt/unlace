const char *__fastcall sub_8BB610(_QWORD *a1)
{
  unsigned __int64 *v2; // r9
  unsigned __int64 *v3; // r8
  unsigned __int64 *v4; // rax
  int i; // edx
  unsigned __int64 v6; // rcx
  bool v7; // zf
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // rdi
  const char *v11; // rdx
  unsigned __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // cf
  __int64 v17; // rax
  __int64 v18; // rbp
  int v19; // eax

  v2 = (unsigned __int64 *)a1[2];
  v3 = &v2[3 * a1[3]];
  if ( 24LL * a1[3] )
  {
    v4 = (unsigned __int64 *)a1[2];
    for ( i = 0; ; ++i )
    {
      v8 = *v4;
      if ( *v4 >= v4[1] )
        return "bad vaptr addresses";
      if ( i > 0 )
      {
        v9 = v4 - 3;
        if ( v2 == v4 )
        {
          v9 = (unsigned __int64 *)a1[11];
          v6 = v9[1];
          v7 = v8 == v6;
          if ( v8 < v6 )
            return "ea sort order is bad";
        }
        else
        {
          v6 = v9[1];
          v7 = v8 == v6;
          if ( v8 < v6 )
            return "ea sort order is bad";
        }
        if ( v7 )
          return "ea sort order is bad (after split?)";
        if ( v4[2] != v9[2] + 4 * (v6 - *v9) )
          return "offset sort order is bad";
      }
      v4 += 3;
      if ( v4 == v3 )
        break;
    }
    v12 = v4 - 3;
    if ( v2 == v4 )
      v12 = (unsigned __int64 *)a1[11];
    v13 = 1;
    if ( i >= 0 )
    {
      v14 = v12[2] + 4 * (v12[1] - *v12);
      v15 = *(_QWORD *)*a1 - 1LL;
      v16 = __CFADD__(v15, v14);
      v17 = v15 + v14;
      if ( v16 )
        v13 = 0xFFFFFFFFLL;
      else
        v13 = (unsigned int)(v17 >> *(_DWORD *)(*a1 + 8LL));
    }
  }
  else
  {
    v13 = 1;
  }
  v11 = "eof marker is wrong";
  if ( *((_DWORD *)a1 + 10) == v13 )
  {
    v18 = sub_8BCA60(*a1, 0, 1);
    v19 = strcmp((const char *)v18, "VA*");
    v11 = "header is bad";
    if ( !v19
      && *(_WORD *)(v18 + 4) == 3
      && *(_DWORD *)(v18 + 8) == a1[3]
      && *(_DWORD *)(v18 + 12) == *(_QWORD *)*a1 >> 2
      && *(_DWORD *)(v18 + 16) == *((_DWORD *)a1 + 10) )
    {
      return nullptr;
    }
  }
  return v11;
}
