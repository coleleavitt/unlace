__int64 __fastcall sub_DDF7E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 i; // rax
  int v14; // ecx
  int v15; // eax
  int v17; // eax

  if ( *(_DWORD *)(a1 + 32) != 2 )
    return 1;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *a2;
  v6 = *((unsigned int *)a2 + 2);
  if ( v4 )
  {
    if ( (*(_QWORD *)(a1 + 48) & 7LL) == 1 )
      v7 = v4 >> 3;
    else
      LODWORD(v7) = *(_DWORD *)(v4 - 8);
  }
  else
  {
    LODWORD(v7) = -1640531495;
  }
  v8 = v6 - 1;
  v9 = 24 * v6;
  v10 = v5 + v9;
  v11 = 24LL * ((unsigned int)v7 & v8);
  v12 = v5 + v11;
  if ( v11 != v9 )
  {
    for ( i = v5 + v11; v10 != i; i += 24 )
    {
      v14 = *(_DWORD *)(i + 4);
      if ( v14 == 2 )
      {
        if ( (_DWORD)v7 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v4 )
        {
LABEL_12:
          v15 = *(_DWORD *)(i + 16);
          *(_DWORD *)(a1 + 32) = 1;
          *(_QWORD *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 40) = v15;
          return 1;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_24;
      }
    }
  }
  for ( ; v12 != v5; v5 += 24 )
  {
    v17 = *(_DWORD *)(v5 + 4);
    if ( v17 == 2 )
    {
      if ( (_DWORD)v7 == *(_DWORD *)v5 && v4 == *(_QWORD *)(v5 + 8) )
      {
        i = v5;
        goto LABEL_12;
      }
    }
    else if ( !v17 )
    {
      break;
    }
  }
LABEL_24:
  *a3 = *(_QWORD *)(a1 + 48);
  return 0;
}

