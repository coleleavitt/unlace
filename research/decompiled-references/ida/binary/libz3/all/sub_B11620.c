__int64 __fastcall sub_B11620(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v5; // esi
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 v8; // r13
  char v9; // dl
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // r13
  char v14; // dl

  v3 = *(_QWORD *)(a1 + 704);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16);
  if ( v6 )
  {
    v7 = 0;
    if ( !a3 )
    {
      while ( 1 )
      {
        if ( v7 >= *(_DWORD *)(v6 - 4) )
          return a1 + 704;
        v8 = *(unsigned int *)(v6 + 40LL * v7);
        v9 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v8);
        if ( v9 == -1 )
          break;
        if ( v9 == 1 )
        {
          if ( !v3 )
            goto LABEL_10;
          v10 = *(unsigned int *)(v3 - 4);
          if ( (_DWORD)v10 == *(_DWORD *)(v3 - 8) )
            goto LABEL_10;
          goto LABEL_11;
        }
LABEL_12:
        ++v7;
        v6 = *(_QWORD *)(a2 + 40LL * (v5 & 1) + 16);
        if ( !v6 )
          return a1 + 704;
      }
      LODWORD(v8) = v8 ^ 1;
      if ( !v3 || (v10 = *(unsigned int *)(v3 - 4), *(_DWORD *)(v3 - 8) == (_DWORD)v10) )
      {
LABEL_10:
        sub_692C60((unsigned int **)(a1 + 704));
        v3 = *(_QWORD *)(a1 + 704);
        v10 = *(unsigned int *)(v3 - 4);
      }
LABEL_11:
      *(_DWORD *)(v3 + 4 * v10) = v8;
      ++*(_DWORD *)(v3 - 4);
      v5 = *(_DWORD *)(a2 + 8);
      goto LABEL_12;
    }
    do
    {
      if ( v7 >= *(_DWORD *)(v6 - 4) )
        return a1 + 704;
      v13 = *(unsigned int *)(v6 + 40LL * v7);
      v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v13);
      if ( v14 == -1 )
      {
        if ( !v3 )
          goto LABEL_22;
      }
      else
      {
        if ( v14 != 1 )
          goto LABEL_17;
        LODWORD(v13) = v13 ^ 1;
        if ( !v3 )
        {
LABEL_22:
          sub_692C60((unsigned int **)(a1 + 704));
          v3 = *(_QWORD *)(a1 + 704);
          v12 = *(unsigned int *)(v3 - 4);
          goto LABEL_16;
        }
      }
      v12 = *(unsigned int *)(v3 - 4);
      if ( (_DWORD)v12 == *(_DWORD *)(v3 - 8) )
        goto LABEL_22;
LABEL_16:
      *(_DWORD *)(v3 + 4 * v12) = v13;
      ++*(_DWORD *)(v3 - 4);
      v5 = *(_DWORD *)(a2 + 8);
LABEL_17:
      ++v7;
      v6 = *(_QWORD *)(a2 + 40LL * (v5 & 1) + 16);
    }
    while ( v6 );
  }
  return a1 + 704;
}

