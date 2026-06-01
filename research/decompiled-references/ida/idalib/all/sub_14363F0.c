char __fastcall sub_14363F0(_QWORD *a1)
{
  __int64 v1; // rax
  char v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  char result; // al
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rax
  char v22; // si

  v1 = a1[139];
  if ( v1 )
    v2 = *(_BYTE *)(v1 + 145) ^ 1;
  else
    v2 = a1[140] != 0;
  v3 = (_QWORD *)a1[147];
  v4 = (_QWORD *)a1[146];
  if ( v2 )
    return v3 == v4;
  v6 = v4 + 7;
  v7 = 0x6DB6DB6DB6DB6DB7LL * (v3 - (v4 + 7));
  if ( v7 >> 2 > 0 )
  {
    v8 = (__int64)&v4[28 * (v7 >> 2) + 7];
    while ( 1 )
    {
      v16 = v6[2];
      v9 = v16 ? *(_BYTE *)(v16 + 145) ^ 1 : v6[3] != 0;
      if ( v9 )
        return v3 == v6;
      v10 = v6[9];
      if ( v10 )
        v11 = *(_BYTE *)(v10 + 145) ^ 1;
      else
        v11 = v6[10] != 0;
      if ( v11 )
        return v3 == v6 + 7;
      v12 = v6[16];
      if ( v12 )
        v13 = *(_BYTE *)(v12 + 145) ^ 1;
      else
        v13 = v6[17] != 0;
      if ( v13 )
        return v3 == v6 + 14;
      v14 = v6[23];
      if ( v14 )
        v15 = *(_BYTE *)(v14 + 145) ^ 1;
      else
        v15 = v6[24] != 0;
      if ( v15 )
        return v3 == v6 + 21;
      v6 += 28;
      if ( (_QWORD *)v8 == v6 )
      {
        v7 = 0x6DB6DB6DB6DB6DB7LL * (v3 - v6);
        break;
      }
    }
  }
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      if ( v7 != 1 )
        return 1;
      goto LABEL_36;
    }
    v17 = v6[2];
    if ( v17 )
      v18 = *(_BYTE *)(v17 + 145) ^ 1;
    else
      v18 = v6[3] != 0;
    if ( v18 )
      return v3 == v6;
    v6 += 7;
  }
  v19 = v6[2];
  if ( v19 )
    v20 = *(_BYTE *)(v19 + 145) ^ 1;
  else
    v20 = v6[3] != 0;
  if ( v20 )
    return v3 == v6;
  v6 += 7;
LABEL_36:
  v21 = v6[2];
  if ( v21 )
    v22 = *(_BYTE *)(v21 + 145) ^ 1;
  else
    v22 = v6[3] != 0;
  result = 1;
  if ( v22 )
    return v3 == v6;
  return result;
}
