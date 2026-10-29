__int64 __fastcall sub_DF8BA0(__int64 a1, unsigned __int64 *a2)
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

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 592);
  v4 = *(unsigned int *)(a1 + 600);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v5 = v2 >> 3;
    else
      LODWORD(v5) = *(_DWORD *)(v2 - 8);
  }
  else
  {
    LODWORD(v5) = -1640531495;
  }
  v6 = v4 - 1;
  v7 = 24 * v4;
  v8 = v3 + v7;
  v9 = 24LL * ((unsigned int)v5 & v6);
  v10 = v3 + v9;
  if ( v9 != v7 )
  {
    for ( i = v3 + v9; v8 != i; i += 24 )
    {
      v12 = *(_DWORD *)(i + 4);
      if ( v12 == 2 )
      {
        if ( (_DWORD)v5 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v2 )
          return *(_QWORD *)(i + 16);
      }
      else if ( !v12 )
      {
        return 0;
      }
    }
  }
  for ( ; v10 != v3; v3 += 24 )
  {
    v14 = *(_DWORD *)(v3 + 4);
    if ( v14 == 2 )
    {
      if ( (_DWORD)v5 == *(_DWORD *)v3 && v2 == *(_QWORD *)(v3 + 8) )
      {
        i = v3;
        return *(_QWORD *)(i + 16);
      }
    }
    else if ( !v14 )
    {
      return 0;
    }
  }
  return 0;
}

