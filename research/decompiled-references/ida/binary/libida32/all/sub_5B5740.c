__int64 __fastcall sub_5B5740(__int64 a1, unsigned int *a2, int a3)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v6; // rdi
  char *v7; // r9
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // r11
  __int64 i; // rax
  char *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // r9
  __int64 v16; // rdx

  result = 0;
  if ( a2 )
  {
    v4 = *a2;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 1424LL);
    v7 = *(char **)(v6 + 16);
    v8 = 8LL * *(_QWORD *)(v6 + 24);
    v9 = v7;
    v10 = &v7[v8];
    for ( i = v8 >> 3; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v12 = &v9[8 * (i >> 1)];
        if ( *(_DWORD *)v12 >= v4 )
          break;
        v9 = v12 + 8;
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_6;
      }
    }
LABEL_6:
    if ( v10 == v9 || v4 != *(_DWORD *)v9 )
    {
      return 0;
    }
    else
    {
      result = 0;
      v13 = (v9 - v7) >> 3;
      if ( (_DWORD)v13 != -1 )
      {
        v14 = 8LL * (int)v13;
        v15 = &v7[v14];
        v16 = *((unsigned int *)v15 + 1);
        *((_DWORD *)v15 + 1) = v16 | a3;
        sub_5B53D0(v6, v4, v16, *(_DWORD *)(*(_QWORD *)(v6 + 16) + v14 + 4));
        return 1;
      }
    }
  }
  return result;
}

