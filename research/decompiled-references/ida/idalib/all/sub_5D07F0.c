__int64 __fastcall sub_5D07F0(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r8
  __int64 v6; // rdi
  char *v7; // r10
  __int64 v8; // rax
  char *v9; // rsi
  char *v10; // r11
  __int64 i; // rax
  unsigned __int64 *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rsi
  char *v15; // r10
  __int64 v16; // rdx

  result = 0;
  if ( a2 )
  {
    v4 = *a2;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
    v7 = *(char **)(v6 + 24);
    v8 = 16LL * *(_QWORD *)(v6 + 32);
    v9 = v7;
    v10 = &v7[v8];
    for ( i = v8 >> 4; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v12 = (unsigned __int64 *)&v9[16 * (i >> 1)];
        if ( *v12 >= v4 )
          break;
        v9 = (char *)(v12 + 2);
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_6;
      }
    }
LABEL_6:
    if ( v10 == v9 || v4 != *(_QWORD *)v9 )
    {
      return 0;
    }
    else
    {
      result = 0;
      v13 = (v9 - v7) >> 4;
      if ( (_DWORD)v13 != -1 )
      {
        v14 = 16LL * (int)v13;
        v15 = &v7[v14];
        v16 = *((unsigned int *)v15 + 2);
        *((_DWORD *)v15 + 2) = v16 | a3;
        sub_5D0480(v6, v4, v16, *(_DWORD *)(*(_QWORD *)(v6 + 24) + v14 + 8));
        return 1;
      }
    }
  }
  return result;
}
