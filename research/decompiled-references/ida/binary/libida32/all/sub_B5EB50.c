__int64 __fastcall sub_B5EB50(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v8; // bp
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax

  v8 = 1;
  v9 = *(_QWORD *)(a4 + 16);
  if ( ((unsigned int)(v9 >> 1) & 3) - 1 > 2 || (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_3;
  v14 = sub_B68690(a3);
  v15 = *(_QWORD *)v14;
  v16 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
  if ( *(_QWORD *)v14 < v16 )
  {
    v17 = *(_QWORD *)v14;
    while ( 1 )
    {
      v15 = v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 396 )
        break;
      v17 += 8;
      if ( v16 == v17 )
      {
        v9 = *(_QWORD *)(a4 + 16);
        v8 = 1;
        goto LABEL_3;
      }
    }
    v9 = *(_QWORD *)(a4 + 16);
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(a4 + 16);
  if ( v15 == v16 )
    goto LABEL_3;
  if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 396 )
  {
LABEL_16:
    v8 = v15 == v16;
    goto LABEL_3;
  }
  v18 = v16 + 8;
  while ( 1 )
  {
    v16 = v18;
    if ( v15 == v18 )
      break;
    v18 += 8LL;
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 396 )
      goto LABEL_16;
  }
  v8 = 1;
LABEL_3:
  v10 = sub_B5D9A0(a1, v9 & 0xFFFFFFFFFFFFFFF8LL, a5);
  sub_B4E7B0(a2, v10, v8);
  v11 = sub_B4EB00(a1, *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 56), a5);
  sub_B4E7B0(a2, v11, v8);
  v12 = sub_B5E580(a1, *(_QWORD *)(a4 + 24) + 8LL, **(unsigned int **)(a4 + 24), a5);
  return sub_B4E7B0(a2, v12, v8);
}

