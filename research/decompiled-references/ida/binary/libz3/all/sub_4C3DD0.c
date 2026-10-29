__int64 __fastcall sub_4C3DD0(__int64 a1, int a2)
{
  __int64 v2; // rax
  char *v3; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rcx
  char *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rdi
  char *v10; // rax
  int v11; // ecx
  int v13; // eax

  v2 = *(unsigned int *)(a1 + 88);
  v3 = *(char **)(a1 + 80);
  v5 = v2 - 1;
  v2 *= 24;
  v6 = 3LL * (a2 & v5);
  v7 = &v3[v2];
  v8 = 8 * v6;
  v9 = &v3[v8];
  if ( v8 == v2 )
  {
LABEL_9:
    while ( v9 != v3 )
    {
      v13 = *((_DWORD *)v3 + 1);
      if ( v13 == 2 )
      {
        if ( a2 == *(_DWORD *)v3 && a2 == *((_DWORD *)v3 + 2) )
        {
          v10 = v3;
          return *((_QWORD *)v10 + 2);
        }
      }
      else if ( !v13 )
      {
        break;
      }
      v3 += 24;
    }
LABEL_17:
    sub_1872CE0("");
    sub_1873130(114, 270);
  }
  v10 = &v3[v8];
  while ( 1 )
  {
    v11 = *((_DWORD *)v10 + 1);
    if ( v11 != 2 )
    {
      if ( !v11 )
        goto LABEL_17;
      goto LABEL_4;
    }
    if ( a2 == *(_DWORD *)v10 && a2 == *((_DWORD *)v10 + 2) )
      return *((_QWORD *)v10 + 2);
LABEL_4:
    v10 += 24;
    if ( v7 == v10 )
      goto LABEL_9;
  }
}

