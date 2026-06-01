/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437EF0
// Address: 0x00437EF0

//----- (00437EF0) --------------------------------------------------------
char __userpurge sub_437EF0@<al>(int a1@<ecx>, __m128i a2@<xmm0>, int a3)
{
  const char *v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  char v8; // al
  const CHAR *v9; // eax
  int v10; // eax
  _BYTE *v11; // ecx
  char *v12; // ecx
  char v13; // al
  char *v14; // eax
  char v15; // cl
  const CHAR *v16; // eax
  char *v17; // eax
  char v18; // bh
  char *v19; // edx
  int v20; // esi
  char v21; // bl
  char *v22; // ecx
  int v23; // esi
  int v24; // eax
  char v25; // cl
  int v26; // esi
  char v27; // al
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // [esp+18h] [ebp-20h] BYREF
  int v30; // [esp+1Ch] [ebp-1Ch]
  unsigned int v31; // [esp+20h] [ebp-18h]
  int v32; // [esp+24h] [ebp-14h]
  char v33; // [esp+2Bh] [ebp-Dh]
  int v34; // [esp+34h] [ebp-4h]
  __int8 v35[260]; // [esp+38h] [ebp+0h] BYREF
  char v36[4]; // [esp+13Ch] [ebp+104h] BYREF
  char v37[7]; // [esp+140h] [ebp+108h] BYREF
  char v38[9]; // [esp+147h] [ebp+10Fh] BYREF
  char v39[20]; // [esp+150h] [ebp+118h] BYREF

  v4 = (const char *)&word_4B69CE;
  v5 = *(_DWORD *)(a3 + 4);
  if ( v5 )
    v4 = *(const char **)a3;
  if ( *v4 == 95 && *(_BYTE *)(*(_DWORD *)a3 + 1) == 95 )
  {
    if ( sub_40B530((const char **)a3, "__LINE__") )
    {
      *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 160);
      *(_WORD *)(a3 + 12) = 3;
      return 1;
    }
    if ( sub_40B530((const char **)a3, "__FILE__") )
    {
      if ( *(_DWORD *)(a1 + 156) )
      {
        sub_401590(a3, *(const char **)(a1 + 156));
        *(_BYTE *)(a3 + 20) = 0;
        *(_WORD *)(a3 + 12) = 4;
      }
      else
      {
        *(_DWORD *)(a3 + 4) = 0;
        *(_WORD *)(a3 + 12) = 4;
        *(_BYTE *)(a3 + 20) = 0;
      }
      return 1;
    }
    if ( sub_40B530((const char **)a3, "__DATE__") || sub_40B530((const char **)a3, "__TIME__") )
    {
      v7 = sub_469314(nullptr);
      sub_453540(v5, v36, 0x28u, v7);
      v8 = *(_BYTE *)(*(_DWORD *)a3 + 2);
      *(_DWORD *)(a3 + 4) = 0;
      if ( v8 == 68 )
      {
        sub_4043A0(a3, (unsigned int)v37, 7u);
        sub_4043A0(a3, (unsigned int)v39, 4u);
      }
      else
      {
        sub_4043A0(a3, (unsigned int)v38, 8u);
      }
      *(_BYTE *)(a3 + 20) = 0;
      *(_WORD *)(a3 + 12) = 4;
      return 1;
    }
  }
  if ( !*(_BYTE *)(a1 + 44) )
    return 0;
  v9 = MultiByteStr;
  v33 = 0;
  if ( v5 )
    v9 = *(const CHAR **)a3;
  v10 = strcmp(v9, "defined");
  if ( v10 )
    v10 = v10 < 0 ? -1 : 1;
  v32 = v10;
  if ( v10 )
  {
    if ( !sub_40B530((const char **)a3, "__has_include") )
      return 0;
  }
  while ( 1 )
  {
    v11 = *(_BYTE **)(a1 + 4);
    LOBYTE(v5) = *v11;
    if ( *v11 != 32 && (_BYTE)v5 != 9 && (_BYTE)v5 != 10 && (_BYTE)v5 != 13 && (_BYTE)v5 != 11 && (_BYTE)v5 != 12 )
      break;
    *(_DWORD *)(a1 + 4) = v11 + 1;
  }
  v12 = v11 + 1;
  *(_DWORD *)(a1 + 4) = v12;
  if ( (_BYTE)v5 == 40 )
  {
    do
    {
      do
      {
        v13 = *v12++;
        *(_DWORD *)(a1 + 4) = v12;
      }
      while ( v13 == 32 );
    }
    while ( v13 == 9 || v13 == 10 || v13 == 13 || v13 == 11 || v13 == 12 );
    LOBYTE(v5) = 1;
    v33 = 1;
  }
  else
  {
    if ( ((v5 & 0x80u) != 0 || !sub_46B6D0(v5, (unsigned __int8)v5)) && (_BYTE)v5 != 95 && (_BYTE)v5 != 36 )
      return 0;
    LOBYTE(v5) = v33;
  }
  if ( !v32 )
  {
    sub_4338A0((_DWORD *)a1, a3);
    if ( !(_BYTE)v5 )
      goto LABEL_55;
    while ( 1 )
    {
      v14 = *(char **)(a1 + 4);
      v15 = *v14;
      if ( *v14 != 32 && v15 != 9 && v15 != 10 && v15 != 13 && v15 != 11 && v15 != 12 )
        break;
      *(_DWORD *)(a1 + 4) = v14 + 1;
    }
    *(_DWORD *)(a1 + 4) = v14 + 1;
    if ( v15 == 41 )
    {
LABEL_55:
      v16 = MultiByteStr;
      if ( *(_DWORD *)(a3 + 4) )
        v16 = *(const CHAR **)a3;
      *(_DWORD *)(a3 + 16) = sub_4341B0(a1, v5, v16) != nullptr;
      *(_WORD *)(a3 + 12) = 3;
      return 1;
    }
    return 0;
  }
  v17 = *(char **)(a1 + 4);
  v18 = *(v17 - 1);
  LOBYTE(v32) = v18;
  if ( v18 == 60 )
  {
    v18 = 62;
    LOBYTE(v32) = 62;
  }
  else if ( v18 != 34 )
  {
    return 0;
  }
  v19 = nullptr;
  v20 = 0;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  v21 = *v17;
  v34 = 0;
  if ( v21 )
  {
    v22 = v17;
    do
    {
      v17 = v22;
      if ( v21 == 41 )
        break;
      *(_DWORD *)(a1 + 4) = v22 + 1;
      v23 = v20 != 0 ? v20 - 1 : 0;
      v24 = v23 + 2;
      if ( v23 + 2 > v31 )
      {
        v19 = (char *)sub_453B00((int)&v29, v19, v23 + 2, 1u);
        v24 = v23 + 2;
        v29 = (unsigned __int8 *)v19;
      }
      v30 = v24;
      v19[v23] = v21;
      v29[v23 + 1] = 0;
      v17 = *(char **)(a1 + 4);
      v22 = v17;
      v20 = v30;
      v19 = (char *)v29;
      v21 = *v17;
    }
    while ( *v17 );
  }
  if ( !v33
    || (v25 = *v17, *(_DWORD *)(a1 + 4) = v17 + 1, v25 != 41)
    || ((v26 = v20 != 0 ? v20 - 1 : 0) != 0 ? (v27 = v19[v26 - 1]) : (v27 = 0), v27 != v18) )
  {
    v34 = 2;
    if ( v19 )
    {
      v30 = 0;
      sub_453A20(v19);
    }
    return 0;
  }
  sub_437840((int)&v29, 1);
  v28 = (unsigned __int8 *)MultiByteStr;
  if ( v30 )
    v28 = v29;
  *(_DWORD *)(a3 + 16) = sub_433FC0(a1, a2, v35, 260, v28, v32, 0) != 0;
  v34 = 3;
  if ( v29 )
  {
    v30 = 0;
    sub_453A20(v29);
  }
  *(_WORD *)(a3 + 12) = 3;
  return 1;
}
// 4B69CE: using guessed type __int16 word_4B69CE;
