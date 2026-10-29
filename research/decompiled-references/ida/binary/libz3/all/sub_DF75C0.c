__int64 __fastcall sub_DF75C0(__int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 i; // rax
  int v17; // ecx
  int v19; // eax
  unsigned __int64 v20; // [rsp+8h] [rbp-10h] BYREF

  v7 = *a2;
  v8 = *(unsigned int *)(a1 + 632);
  v9 = *(_QWORD *)(a1 + 624);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v10 = v7 >> 3;
    else
      LODWORD(v10) = *(_DWORD *)(v7 - 8);
  }
  else
  {
    LODWORD(v10) = -1640531495;
  }
  v11 = v8 - 1;
  v12 = 24 * v8;
  v13 = v9 + v12;
  v14 = 24LL * ((unsigned int)v10 & v11);
  v15 = v9 + v14;
  if ( v14 != v12 )
  {
    for ( i = v9 + v14; v13 != i; i += 24 )
    {
      v17 = *(_DWORD *)(i + 4);
      if ( v17 == 2 )
      {
        if ( (_DWORD)v10 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v7 )
        {
LABEL_11:
          v20 = *(_QWORD *)(i + 16);
          return sub_DF69D0(&v20, a3, a4, a5);
        }
      }
      else if ( !v17 )
      {
        return 0;
      }
    }
  }
  for ( ; v15 != v9; v9 += 24 )
  {
    v19 = *(_DWORD *)(v9 + 4);
    if ( v19 == 2 )
    {
      if ( (_DWORD)v10 == *(_DWORD *)v9 && v7 == *(_QWORD *)(v9 + 8) )
      {
        i = v9;
        goto LABEL_11;
      }
    }
    else if ( !v19 )
    {
      return 0;
    }
  }
  return 0;
}

