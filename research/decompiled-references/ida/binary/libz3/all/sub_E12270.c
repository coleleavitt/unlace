__int64 __fastcall sub_E12270(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // rax
  int v13; // ecx
  int v15; // eax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(v2 + 672);
  v5 = *(unsigned int *)(v2 + 680);
  if ( v3 )
  {
    if ( (*(_QWORD *)(a2 + 16) & 7LL) == 1 )
      v6 = v3 >> 3;
    else
      LODWORD(v6) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v6) = -1640531495;
  }
  v7 = v5 - 1;
  v8 = 24 * v5;
  v9 = v4 + v8;
  v10 = 24LL * ((unsigned int)v6 & v7);
  v11 = v4 + v10;
  if ( v10 != v8 )
  {
    for ( i = v4 + v10; v9 != i; i += 24 )
    {
      v13 = *(_DWORD *)(i + 4);
      if ( v13 == 2 )
      {
        if ( (_DWORD)v6 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v3 )
          return 1;
      }
      else if ( !v13 )
      {
        return 0;
      }
    }
  }
  for ( ; v11 != v4; v4 += 24 )
  {
    v15 = *(_DWORD *)(v4 + 4);
    if ( v15 == 2 )
    {
      if ( (_DWORD)v6 == *(_DWORD *)v4 && v3 == *(_QWORD *)(v4 + 8) )
        return 1;
    }
    else if ( !v15 )
    {
      return 0;
    }
  }
  return 0;
}

