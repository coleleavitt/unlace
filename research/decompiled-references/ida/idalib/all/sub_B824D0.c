__int64 __fastcall sub_B824D0(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // eax
  char v8; // r14
  __int64 v9; // rax
  unsigned __int8 v10; // al
  char v11; // dl
  char v12; // r14
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
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax

  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 41 > 1 )
  {
    v24 = (__int64 *)sub_B73ED0(a3);
    if ( !v24 )
      goto LABEL_22;
    v7 = ((*v24 >> 1) & 3) + 1;
  }
  else
  {
    v7 = *(_BYTE *)(a3 + 140) & 7;
  }
  if ( v7 <= 1 )
  {
LABEL_22:
    v23 = sub_BBFE00(a3);
    v10 = sub_B72840(a1, *(_QWORD *)(v23 + 56), a4);
LABEL_23:
    v12 = 1;
    v11 = (a4 & 2) == 0;
    goto LABEL_9;
  }
  if ( v7 > 4 )
    goto LABEL_28;
  if ( (*(_BYTE *)(a3 + 140) & 7) == 2 && (a4 & 2) != 0 )
  {
    v12 = 0;
    v25 = sub_BBFE00(a3);
    v10 = sub_B72840(a1, *(_QWORD *)(v25 + 56), a4);
    v11 = 0;
    goto LABEL_9;
  }
  v8 = sub_B71BC0(a3, a4);
  v9 = sub_BBFE00(a3);
  v10 = sub_B72840(a1, *(_QWORD *)(v9 + 56), a4);
  if ( !v8 )
    goto LABEL_23;
  v11 = 0;
  v12 = 0;
LABEL_9:
  sub_B724F0(a2, v10, v11);
  v13 = sub_B822C0(a1, *(_QWORD *)(a3 + 128) + 8LL, **(unsigned int **)(a3 + 128), a4);
  v14 = *a2;
  v15 = v13 & 7;
  v16 = (v13 >> 3) & 3;
  if ( v12 )
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
    goto LABEL_28;
  if ( v15 > 3u )
  {
    if ( v15 <= 6u )
      goto LABEL_16;
LABEL_28:
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
LABEL_16:
  result = *a2 & 0xF8 | v20 & 7u;
  *a2 = result;
  return result;
}
