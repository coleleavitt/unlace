__int64 __fastcall sub_78D1C0(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned int a4)
{
  char v8; // r15
  __int64 v9; // r14
  unsigned __int8 v10; // cl
  char v11; // r14
  bool v12; // di
  __int64 v13; // r14
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // si
  unsigned __int8 v16; // al
  char v17; // al
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  char v20; // cl
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // al
  unsigned __int8 v23; // di
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // si
  char v26; // dl
  int v27; // eax
  __int64 result; // rax
  __int64 v29; // r14

  if ( (unsigned int)sub_7A47D0(a3) <= 1 )
  {
    v13 = sub_7D65F0(a3);
    *a2 = sub_78C840(a1, v13, a4) & 7 | *a2 & 0xF8;
    v10 = sub_77A180(a1, *(_QWORD *)(v13 + 56), a4);
  }
  else
  {
    if ( (*(_BYTE *)(a3 + 180) & 7) == 2 && (a4 & 2) != 0 )
    {
      v29 = sub_7D65F0(a3);
      *a2 = sub_78C840(a1, v29, a4) & 7 | *a2 & 0xF8;
      v10 = sub_77A180(a1, *(_QWORD *)(v29 + 56), a4);
      goto LABEL_5;
    }
    v8 = sub_777E60(a3, a4);
    v9 = sub_7D65F0(a3);
    *a2 = sub_78C840(a1, v9, a4) & 7 | *a2 & 0xF8;
    v10 = sub_77A180(a1, *(_QWORD *)(v9 + 56), a4);
    if ( v8 )
    {
LABEL_5:
      v11 = 0;
      v12 = 0;
      goto LABEL_8;
    }
  }
  v11 = 1;
  v12 = (a4 & 2) == 0;
LABEL_8:
  v14 = v10 & 7;
  v15 = (v10 >> 3) & 3;
  v16 = *a2 & 7;
  if ( (v10 & 7) == 4 )
  {
    v14 = *a2 & 7;
  }
  else if ( v16 != 4 )
  {
    goto LABEL_10;
  }
  v17 = 1;
  if ( (unsigned __int8)(v14 - 2) <= 1u )
    goto LABEL_13;
  v16 = 4;
LABEL_10:
  if ( v14 <= v16 )
    v16 = v14;
  v17 = v16 & 7;
LABEL_13:
  v18 = *a2 & 0xF8 | v17 & 7;
  *a2 = v18;
  if ( v12 )
  {
    v19 = (v18 >> 3) & 3;
    if ( v19 >= v15 )
    {
      v20 = v10 & 0x20;
      if ( v19 != v15 || v20 )
        *a2 = (8 * (v15 & 3)) | *a2 & 0xC7 | v20;
    }
  }
  v21 = sub_78CC60(a1, *(_QWORD *)(a3 + 168) + 8LL, **(unsigned int **)(a3 + 168), a4);
  v22 = *a2;
  v23 = v21 & 7;
  v24 = (v21 >> 3) & 3;
  if ( v11 )
  {
    v25 = (v22 >> 3) & 3;
    if ( v25 >= v24 )
    {
      v26 = v21 & 0x20;
      if ( v25 != v24 || v26 )
      {
        v22 = v26 | (8 * (v24 & 3)) | *a2 & 0xC7;
        *a2 = v22;
      }
    }
  }
  v27 = v22 & 7;
  if ( v23 <= 3u )
  {
    if ( (_BYTE)v27 == 4 )
    {
      v27 = 1;
    }
    else if ( (_BYTE)v27 == 6 )
    {
      v27 = 3;
    }
  }
  result = *a2 & 0xF8 | (unsigned int)v27;
  *a2 = result;
  return result;
}

