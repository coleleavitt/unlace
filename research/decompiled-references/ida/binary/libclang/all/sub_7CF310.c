__int64 __fastcall sub_7CF310(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi

  sub_780190((_QWORD *)a1, a2, a3, a4);
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x28 )
    goto LABEL_11;
  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
    goto LABEL_11;
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 4) == 0 )
    goto LABEL_4;
  if ( !v7 )
  {
LABEL_11:
    v9 = *(_QWORD *)(a1 + 112);
    goto LABEL_12;
  }
  v7 = *(_QWORD *)v7;
LABEL_4:
  v8 = *(_QWORD *)(a1 + 112);
  v9 = v8;
  if ( v7 )
  {
    v10 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v8 & 4) == 0 || !v11 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)v11 + 112LL);
        if ( !v8 )
        {
          v10 = 0;
          return sub_B2C0A0(a2, v7 + 16, *(unsigned int *)(v7 + 8), a3, *(_QWORD *)(v10 + 56));
        }
      }
    }
    return sub_B2C0A0(a2, v7 + 16, *(unsigned int *)(v7 + 8), a3, *(_QWORD *)(v10 + 56));
  }
LABEL_12:
  v13 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v14 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v9 & 4) == 0 || !v14 )
        break;
      v9 = *(_QWORD *)(*(_QWORD *)v14 + 112LL);
      if ( !v9 )
      {
        v13 = 0;
        return sub_B22390(a2, *(_QWORD *)(a1 + 128) + 8LL, **(unsigned int **)(a1 + 128), a3, *(_QWORD *)(v13 + 56));
      }
    }
  }
  return sub_B22390(a2, *(_QWORD *)(a1 + 128) + 8LL, **(unsigned int **)(a1 + 128), a3, *(_QWORD *)(v13 + 56));
}

