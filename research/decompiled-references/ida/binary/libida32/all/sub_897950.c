const char *__fastcall sub_897950(_QWORD *a1)
{
  int *v2; // r9
  __int64 v3; // rax
  int *v4; // r8
  int *v5; // rax
  int i; // edx
  unsigned int v7; // ecx
  bool v8; // zf
  unsigned int v9; // esi
  int *v10; // rdi
  const char *v12; // rdx
  int *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // cf
  __int64 v18; // rax
  __int64 v19; // rbp
  int v20; // eax

  v2 = (int *)a1[2];
  v3 = 4LL * a1[3];
  v4 = &v2[v3];
  if ( v3 * 4 )
  {
    v5 = (int *)a1[2];
    for ( i = 0; ; ++i )
    {
      v9 = *v5;
      if ( *v5 >= (unsigned int)v5[1] )
        return "bad vaptr addresses";
      if ( i > 0 )
      {
        v10 = v5 - 4;
        if ( v2 == v5 )
        {
          v10 = (int *)a1[10];
          v7 = v10[1];
          v8 = v9 == v7;
          if ( v9 < v7 )
            return "ea sort order is bad";
        }
        else
        {
          v7 = v10[1];
          v8 = v9 == v7;
          if ( v9 < v7 )
            return "ea sort order is bad";
        }
        if ( v8 )
          return "ea sort order is bad (after split?)";
        if ( *((_QWORD *)v5 + 1) != *((_QWORD *)v10 + 1) + 4LL * (v7 - *v10) )
          return "offset sort order is bad";
      }
      v5 += 4;
      if ( v5 == v4 )
        break;
    }
    v13 = v5 - 4;
    if ( v2 == v5 )
      v13 = (int *)a1[10];
    v14 = 1;
    if ( i >= 0 )
    {
      v15 = *((_QWORD *)v13 + 1) + 4LL * (unsigned int)(v13[1] - *v13);
      v16 = *(_QWORD *)*a1 - 1LL;
      v17 = __CFADD__(v16, v15);
      v18 = v16 + v15;
      if ( v17 )
        v14 = 0xFFFFFFFFLL;
      else
        v14 = (unsigned int)(v18 >> *(_DWORD *)(*a1 + 8LL));
    }
  }
  else
  {
    v14 = 1;
  }
  v12 = "eof marker is wrong";
  if ( *((_DWORD *)a1 + 10) == v14 )
  {
    v19 = sub_898D20(*a1, 0, 1);
    v20 = strcmp((const char *)v19, "VA*");
    v12 = "header is bad";
    if ( !v20
      && *(_WORD *)(v19 + 4) == 3
      && *(_DWORD *)(v19 + 8) == a1[3]
      && *(_DWORD *)(v19 + 12) == (unsigned int)(*(_QWORD *)*a1 >> 2)
      && *(_DWORD *)(v19 + 16) == *((_DWORD *)a1 + 10) )
    {
      return nullptr;
    }
  }
  return v12;
}

