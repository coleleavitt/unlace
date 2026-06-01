__int64 __fastcall sub_8F3690(__int64 a1, unsigned int **a2, __int64 a3, unsigned int **a4, unsigned int **a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // esi
  __int64 result; // rax
  unsigned int **v10; // rdx
  unsigned int **v11; // rsi
  unsigned int **v12; // rbx
  _BOOL4 v13; // r13d
  __int64 v14; // r15
  __int64 v15; // rax
  char v16; // dl

  v5 = *(_QWORD *)(a1 + 8648);
  if ( v5 == a3 || *(_QWORD *)(a1 + 8640) == a3 )
  {
    v12 = a2;
    v13 = v5 == a3;
    while ( 1 )
    {
      v14 = (unsigned int)(v13 + 2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * **v12));
      result = *(_QWORD *)(a1 + 8848);
      if ( *(_BYTE *)(result + v14) == 1 )
        goto LABEL_10;
      v15 = sub_180C100(a1 + 8400, 24);
      *(_QWORD *)(v15 + 8) = 2;
      *(_QWORD *)(v15 + 16) = v12;
      *(_QWORD *)v15 = off_1C57728;
      result = v15 | 3;
      v16 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v14);
      if ( v16 != -1 )
      {
        if ( !v16 )
          result = (__int64)sub_8F28B0(a1, v14, result, 0);
        goto LABEL_10;
      }
      if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
      {
LABEL_10:
        v12 = (unsigned int **)v12[2];
        if ( a2 == v12 )
          return result;
      }
      else
      {
        *(_QWORD *)(a1 + 8984) = result;
        v12 = (unsigned int **)v12[2];
        *(_DWORD *)(a1 + 8992) = v14 ^ 1;
        if ( a2 == v12 )
          return result;
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 8848);
  v7 = *(_QWORD *)(a1 + 8832);
  v8 = *(char *)(v6 + (unsigned int)(2 * *(_DWORD *)(v7 + 4LL * **a5)));
  result = (unsigned int)*(char *)(v6 + (unsigned int)(2 * *(_DWORD *)(v7 + 4LL * **a4)));
  if ( v8 != (_DWORD)result )
  {
    if ( v8 )
    {
      v10 = a4;
      v11 = a5;
    }
    else
    {
      v10 = a5;
      v11 = a4;
    }
    return sub_8F34F0(a1, v11, v10);
  }
  return result;
}

