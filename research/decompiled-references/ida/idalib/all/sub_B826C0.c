__int64 __fastcall sub_B826C0(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // eax
  char v8; // r14
  __int64 v9; // r15
  unsigned __int8 v10; // al
  char v11; // dl
  unsigned __int8 v12; // si
  unsigned __int8 v13; // al
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // di
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // r8
  char v18; // al
  char v19; // si
  char v20; // al
  __int64 result; // rax
  unsigned __int8 v22; // al
  __int64 v23; // r14
  __int64 v24; // rsi
  unsigned __int8 v25; // al

  v7 = sub_B97260(a3);
  if ( v7 > 1 )
  {
    if ( v7 > 4 )
      goto LABEL_24;
    if ( (*(_BYTE *)(a3 + 180) & 7) == 2 && (a4 & 2) != 0 )
    {
      v23 = sub_BBF290(a3);
      *a2 = *a2 & 0xF8 | sub_B816E0(a1, v23, a4) & 7;
      v24 = *(_QWORD *)(v23 + 56);
      v8 = 0;
      v25 = sub_B72840(a1, v24, a4);
      v11 = 0;
      v12 = v25;
      goto LABEL_5;
    }
    v8 = sub_B71BC0(a3, a4) ^ 1;
  }
  else
  {
    v8 = 1;
  }
  v9 = sub_BBF290(a3);
  *a2 = sub_B816E0(a1, v9, a4) & 7 | *a2 & 0xF8;
  v10 = sub_B72840(a1, *(_QWORD *)(v9 + 56), a4);
  v11 = 0;
  v12 = v10;
  if ( v8 )
    v11 = (a4 & 2) == 0;
LABEL_5:
  sub_B724F0(a2, v12, v11);
  v13 = sub_B822C0(a1, *(_QWORD *)(a3 + 168) + 8LL, **(unsigned int **)(a3 + 168), a4);
  v14 = *a2;
  v15 = v13 & 7;
  v16 = (v13 >> 3) & 3;
  if ( v8 )
  {
    v17 = (v14 >> 3) & 3;
    if ( v17 >= v16 )
    {
      v18 = v13 & 0x20;
      v19 = v18;
      if ( v17 != v16 || v18 )
      {
        v22 = v18 | (8 * v16) | *a2 & 0xC7;
        *a2 = v19 | (8 * v16) | *a2 & 0xC7;
        v14 = v22;
      }
    }
  }
  v20 = v14 & 7;
  if ( !v15 )
    goto LABEL_24;
  if ( v15 > 3u )
  {
    if ( v15 <= 6u )
      goto LABEL_12;
LABEL_24:
    BUG();
  }
  if ( v20 == 4 )
  {
    v20 = 1;
  }
  else if ( v20 == 6 )
  {
    v20 = 3;
  }
LABEL_12:
  result = *a2 & 0xF8 | v20 & 7u;
  *a2 = result;
  return result;
}
