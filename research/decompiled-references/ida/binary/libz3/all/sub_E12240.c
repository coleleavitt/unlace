char __fastcall sub_E12240(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 i; // rax
  int v12; // ecx
  int v14; // eax
  __int64 v15; // rdi

  v15 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(v15 + 536);
  v4 = *(unsigned int *)(v15 + 544);
  if ( v2 )
  {
    if ( (*(_QWORD *)(a2 + 16) & 7LL) == 1 )
      v5 = v2 >> 3;
    else
      LODWORD(v5) = *(_DWORD *)(v2 - 8);
  }
  else
  {
    LODWORD(v5) = -1640531495;
  }
  v6 = v4 - 1;
  v7 = 32 * v4;
  v8 = v3 + v7;
  v9 = 32LL * ((unsigned int)v5 & v6);
  v10 = v3 + v9;
  if ( v9 != v7 )
  {
    for ( i = v3 + v9; v8 != i; i += 32 )
    {
      v12 = *(_DWORD *)(i + 4);
      if ( v12 == 2 )
      {
        if ( (_DWORD)v5 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v2 )
          return 1;
      }
      else if ( !v12 )
      {
        return sub_DF7F99();
      }
    }
  }
  if ( v3 != v10 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v3 + 4);
      if ( v14 != 2 )
        break;
      if ( (_DWORD)v5 == *(_DWORD *)v3 )
      {
        if ( v2 == *(_QWORD *)(v3 + 8) )
          return 1;
        v3 += 32;
        if ( v10 == v3 )
          return sub_DF7F99();
      }
      else
      {
LABEL_16:
        v3 += 32;
        if ( v10 == v3 )
          return sub_DF7F99();
      }
    }
    if ( !v14 )
      return sub_DF7F99();
    goto LABEL_16;
  }
  return sub_DF7F99();
}

