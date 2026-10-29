bool __fastcall sub_CCE850(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v4; // rax
  int v5; // edi
  char *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  char *v9; // rsi
  __int64 v10; // rdx
  char *v11; // r9
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  result = 0;
  if ( *(_DWORD *)(a2 + 8) > 1u )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a2 + 12);
    v6 = *(char **)(v4 + 16);
    v7 = *(unsigned int *)(v4 + 24);
    v8 = v7 - 1;
    v7 *= 16;
    v9 = &v6[v7];
    v10 = 16LL * (v5 & v8);
    v11 = &v6[v10];
    if ( v10 == v7 )
    {
LABEL_13:
      while ( v11 != v6 )
      {
        v14 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 > 1u )
        {
          if ( *(_DWORD *)(v14 + 12) == v5 && a2 == v14 )
          {
            v12 = v6;
            return *((_DWORD *)v12 + 2) > 1u;
          }
        }
        else if ( !v14 )
        {
          return 0;
        }
        v6 += 16;
      }
      return 0;
    }
    v12 = &v6[v10];
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 > 1u )
      {
        if ( *(_DWORD *)(v13 + 12) == v5 && a2 == v13 )
          return *((_DWORD *)v12 + 2) > 1u;
      }
      else if ( !v13 )
      {
        return 0;
      }
      v12 += 16;
      if ( v9 == v12 )
        goto LABEL_13;
    }
  }
  return result;
}

