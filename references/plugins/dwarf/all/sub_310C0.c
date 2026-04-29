__int64 __fastcall sub_310C0(__int64 a1, __int64 a2)
{
  char *v2; // rcx
  __int64 v3; // rdi
  char *v4; // rdx
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( !*(_QWORD *)(a2 + 160) )
    return 0;
  v2 = *(char **)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = &v2[8 * v3];
  if ( v2 == v4 )
    goto LABEL_13;
  v5 = v2;
  while ( a2 != *(_QWORD *)v5 )
  {
    v5 += 8;
    if ( v4 == v5 )
      goto LABEL_13;
  }
  v6 = v5 - v2;
  v7 = v6 >> 3;
  if ( v6 < 0 )
  {
LABEL_13:
    if ( under_debugger )
      BUG();
    interr(30764);
    return sub_31170();
  }
  else
  {
    v8 = v7 + 1;
    if ( v7 + 1 < v3 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)&v2[8 * v8];
        if ( !*(_QWORD *)(v9 + 160) || *(_QWORD *)(a2 + 168) != *(_QWORD *)(v9 + 168) )
          break;
        if ( v3 <= ++v8 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
}
