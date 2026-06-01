__int64 __fastcall sub_78CF40(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned int a4)
{
  char v8; // r12
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  char v11; // r12
  bool v12; // di
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // si
  unsigned __int8 v15; // al
  char v16; // al
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  char v19; // cl
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // al
  unsigned __int8 v22; // di
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // si
  char v25; // dl
  int v26; // eax
  __int64 result; // rax
  _BYTE *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 39 <= 1 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 7u) > 1 )
    {
      if ( (*(_BYTE *)(a3 + 140) & 7) == 2 )
        goto LABEL_4;
      goto LABEL_5;
    }
LABEL_30:
    v29 = sub_7D8D10(a3);
    v10 = sub_77A180(a1, *(_QWORD *)(v29 + 56), a4);
    goto LABEL_31;
  }
  v28 = (_BYTE *)sub_77D020(a3);
  if ( !v28 || (*v28 & 6) == 0 )
    goto LABEL_30;
  if ( (*(_BYTE *)(a3 + 140) & 7) == 2 )
  {
LABEL_4:
    if ( (a4 & 2) != 0 )
    {
      v30 = sub_7D8D10(a3);
      v10 = sub_77A180(a1, *(_QWORD *)(v30 + 56), a4);
      goto LABEL_6;
    }
  }
LABEL_5:
  v8 = sub_777E60(a3, a4);
  v9 = sub_7D8D10(a3);
  v10 = sub_77A180(a1, *(_QWORD *)(v9 + 56), a4);
  if ( v8 )
  {
LABEL_6:
    v11 = 0;
    v12 = 0;
    goto LABEL_7;
  }
LABEL_31:
  v11 = 1;
  v12 = (a4 & 2) == 0;
LABEL_7:
  v13 = v10 & 7;
  v14 = (v10 >> 3) & 3;
  v15 = *a2 & 7;
  if ( (v10 & 7) == 4 )
  {
    v13 = *a2 & 7;
  }
  else if ( v15 != 4 )
  {
    goto LABEL_9;
  }
  v16 = 1;
  if ( (unsigned __int8)(v13 - 2) <= 1u )
    goto LABEL_12;
  v15 = 4;
LABEL_9:
  if ( v13 <= v15 )
    v15 = v13;
  v16 = v15 & 7;
LABEL_12:
  v17 = *a2 & 0xF8 | v16 & 7;
  *a2 = v17;
  if ( v12 )
  {
    v18 = (v17 >> 3) & 3;
    if ( v18 >= v14 )
    {
      v19 = v10 & 0x20;
      if ( v14 != v18 || v19 )
        *a2 = (8 * (v14 & 3)) | *a2 & 0xC7 | v19;
    }
  }
  v20 = sub_78CC60(a1, *(_QWORD *)(a3 + 128) + 8LL, **(unsigned int **)(a3 + 128), a4);
  v21 = *a2;
  v22 = v20 & 7;
  v23 = (v20 >> 3) & 3;
  if ( v11 )
  {
    v24 = (v21 >> 3) & 3;
    if ( v24 >= v23 )
    {
      v25 = v20 & 0x20;
      if ( v24 != v23 || v25 )
      {
        v21 = v25 | (8 * (v23 & 3)) | *a2 & 0xC7;
        *a2 = v21;
      }
    }
  }
  v26 = v21 & 7;
  if ( v22 <= 3u )
  {
    if ( (_BYTE)v26 == 4 )
    {
      v26 = 1;
    }
    else if ( (_BYTE)v26 == 6 )
    {
      v26 = 3;
    }
  }
  result = *a2 & 0xF8 | (unsigned int)v26;
  *a2 = result;
  return result;
}

