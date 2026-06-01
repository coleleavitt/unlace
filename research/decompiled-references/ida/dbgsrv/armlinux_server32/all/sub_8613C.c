/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8613C
// Address: 0x0008613C

//----- (0008613C) --------------------------------------------------------
int *__fastcall sub_8613C(_DWORD *a1, int *a2, int a3)
{
  int v3; // r7
  int v4; // r8
  unsigned __int8 *v6; // r1
  char v7; // r10
  int v9; // r9
  unsigned __int8 *v10; // r0
  int *v11; // r5
  int v12; // r11
  int v13; // r1
  int v14; // r3
  int v15; // r11
  int *v16; // r0
  __int64 v17; // r2
  int v18; // r0
  int v19; // r1
  __int64 v20; // r2
  unsigned __int8 *v21; // r0
  char v22; // r10
  int v23; // r3
  int *v24; // r6
  int v25; // r3
  _BYTE *v27; // r2

  v6 = (unsigned __int8 *)a1[3];
  v7 = a3;
  if ( a3 )
    v9 = 30;
  else
    v9 = 27;
  if ( a3 )
    v4 = 29;
  v10 = (unsigned __int8 *)a1[3];
  if ( a3 )
    v3 = 28;
  else
    v4 = 26;
  if ( !a3 )
    v3 = 25;
  v11 = a2;
  v12 = *v6;
  if ( sub_84798(v10) )
  {
    while ( 1 )
    {
      a1[3] = v13 + 1;
      switch ( v12 )
      {
        case 'r':
          v19 = v3;
          HIDWORD(v20) = 0;
          a1[12] += 9;
          goto LABEL_25;
        case 'V':
          v19 = v4;
          HIDWORD(v20) = 0;
          a1[12] += 9;
          goto LABEL_25;
        case 'K':
          v19 = v9;
          HIDWORD(v20) = 0;
          a1[12] += 6;
          goto LABEL_25;
      }
      if ( !*(_BYTE *)(v13 + 1) )
        return nullptr;
      a1[3] = v13 + 2;
      v14 = *(unsigned __int8 *)(v13 + 1);
      if ( v14 == 120 )
        break;
      if ( (v14 & 0xDF) != 0x4F )
      {
        if ( v14 != 119 )
          return nullptr;
        a1[12] += 6;
        HIDWORD(v20) = sub_8609C((int)a1);
        if ( !HIDWORD(v20) )
          return nullptr;
        v27 = (_BYTE *)a1[3];
        if ( *v27 != 69 )
          return nullptr;
        v19 = 79;
        a1[3] = v27 + 1;
        goto LABEL_25;
      }
      a1[12] += 9;
      if ( v14 != 79 )
      {
        HIDWORD(v20) = 0;
        v19 = 78;
LABEL_25:
        LODWORD(v20) = 0;
        v18 = sub_841E0((int)a1, v19, v20);
        *v11 = v18;
        if ( !v18 )
          return nullptr;
        goto LABEL_26;
      }
      v15 = a1[13];
      a1[13] = 1;
      v16 = sub_84F0C((int)a1);
      a1[13] = v15;
      HIDWORD(v17) = v16;
      if ( !v16 )
        return nullptr;
      LODWORD(v17) = a1[3];
      if ( *(_BYTE *)v17 != 69 )
        return nullptr;
      a1[3] = v17 + 1;
      LODWORD(v17) = 0;
      v18 = sub_841E0((int)a1, 78, v17);
      *v11 = v18;
      if ( !v18 )
        return nullptr;
LABEL_26:
      v11 = (int *)(v18 + 8);
      v21 = (unsigned __int8 *)a1[3];
      v12 = *v21;
      if ( !sub_84798(v21) )
        goto LABEL_27;
    }
    HIDWORD(v20) = 0;
    v19 = 76;
    a1[12] += 17;
    goto LABEL_25;
  }
LABEL_27:
  v22 = v7 ^ 1;
  if ( v12 == 70 )
    v23 = v22 & 1;
  else
    v23 = 0;
  if ( v23 && v11 != a2 )
  {
    do
    {
      v24 = (int *)*a2;
      v25 = *v24;
      if ( *v24 == 26 )
      {
        *v24 = 29;
      }
      else if ( v25 == 27 )
      {
        *v24 = 30;
      }
      else if ( v25 == 25 )
      {
        *v24 = 28;
      }
      a2 = v24 + 2;
    }
    while ( v11 != a2 );
  }
  return v11;
}
// 86176: variable 'v13' is possibly undefined
// 861E6: variable 'v3' is possibly undefined
// 86256: variable 'v4' is possibly undefined
