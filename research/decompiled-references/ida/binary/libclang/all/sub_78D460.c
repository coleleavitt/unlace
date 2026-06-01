__int64 __fastcall sub_78D460(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v7; // bp
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int8 v11; // al
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // si
  char v15; // dl
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // dl
  char v18; // al
  __int64 result; // rax
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // si
  char v23; // dl
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // dl
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx

  v7 = 1;
  v9 = *(_QWORD *)(a4 + 16);
  if ( ((unsigned int)(v9 >> 1) & 3) - 1 <= 2 )
  {
    v7 = *(_BYTE *)(a3 + 29) & 1;
    if ( v7 )
    {
      v26 = sub_79A2B0(a3);
      v27 = *(_QWORD *)v26;
      v28 = *(_QWORD *)v26 + 8LL * *(unsigned int *)(v26 + 8);
      if ( v27 < v28 )
      {
        while ( *(_WORD *)(*(_QWORD *)v27 + 32LL) != 386 )
        {
          v27 += 8LL;
          if ( v28 == v27 )
            goto LABEL_37;
        }
        v7 = v27 == v28;
      }
      else if ( v27 != v28 )
      {
        while ( *(_WORD *)(*(_QWORD *)v28 + 32LL) != 386 )
        {
          v28 += 8LL;
          if ( v27 == v28 )
            goto LABEL_37;
        }
        v7 = v28 == v27;
      }
LABEL_37:
      v9 = *(_QWORD *)(a4 + 16);
    }
    else
    {
      v7 = 1;
    }
  }
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  *a2 = sub_78C840(a1, v9 & 0xFFFFFFFFFFFFFFF8LL, a5) & 7 | *a2 & 0xF8;
  v11 = sub_77A180(a1, *(_QWORD *)(v10 + 56), a5);
  v12 = v11 & 7;
  v13 = *a2 & 7;
  v14 = (v11 >> 3) & 3;
  if ( (v11 & 7) == 4 )
  {
    v12 = v13;
  }
  else if ( v13 != 4 )
  {
    goto LABEL_6;
  }
  v15 = 1;
  if ( (unsigned __int8)(v12 - 2) <= 1u )
    goto LABEL_9;
  v13 = 4;
LABEL_6:
  if ( v12 <= v13 )
    v13 = v12;
  v15 = v13 & 7;
LABEL_9:
  v16 = *a2 & 0xF8 | v15 & 7;
  *a2 = v16;
  if ( v7 )
  {
    v17 = (v16 >> 3) & 3;
    if ( v17 >= v14 )
    {
      v18 = v11 & 0x20;
      if ( v14 != v17 || v18 )
        *a2 = (8 * (v14 & 3)) | *a2 & 0xC7 | v18;
    }
  }
  result = sub_78CC60(a1, *(_QWORD *)(a4 + 24) + 8LL, **(unsigned int **)(a4 + 24), a5);
  v20 = result & 7;
  v21 = *a2 & 7;
  v22 = ((unsigned __int8)result >> 3) & 3;
  if ( (result & 7) == 4 )
  {
    v20 = *a2 & 7;
  }
  else if ( v21 != 4 )
  {
    goto LABEL_15;
  }
  v23 = 1;
  if ( (unsigned __int8)(v20 - 2) <= 1u )
    goto LABEL_18;
  v21 = 4;
LABEL_15:
  if ( v20 <= v21 )
    v21 = v20;
  v23 = v21 & 7;
LABEL_18:
  v24 = *a2 & 0xF8 | v23 & 7;
  *a2 = v24;
  if ( v7 )
  {
    v25 = (v24 >> 3) & 3;
    if ( v25 >= v22 )
    {
      result &= 0x20u;
      if ( v25 != v22 || (_BYTE)result )
      {
        result = (8 * (v22 & 3)) | *a2 & 0xC7 | (unsigned int)result;
        *a2 = result;
      }
    }
  }
  return result;
}

