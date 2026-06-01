__int64 __fastcall sub_55C610(unsigned __int8 *a1, int a2, int *a3)
{
  int v4; // esi
  unsigned int v7; // edi
  int v8; // edx
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  int v12; // edx
  int v13; // r9d
  unsigned int v14; // edx
  int v15; // esi
  unsigned __int8 v16; // si

  v4 = *a1;
  v7 = 1;
  *a3 = v4;
  if ( (v4 & 0x80u) == 0 )
    return v7;
  if ( a2 == 1 )
    goto LABEL_11;
  if ( v4 > 223 )
  {
    if ( v4 > 239 )
    {
      v14 = v4 - 240;
      *a3 = v4 - 240;
      if ( v4 - 240 > 4 )
        goto LABEL_11;
      v15 = byte_6D56E0[(a1[1] >> 4) & 0xF];
      if ( !_bittest(&v15, v14) )
        goto LABEL_11;
      v12 = a1[1] & 0x3F | (v14 << 6);
      *a3 = v12;
      if ( a2 == 2 || (v16 = a1[2] + 0x80, v16 > 0x3Fu) )
      {
        v7 = 2;
        goto LABEL_12;
      }
      v9 = 3;
      v7 = 3;
    }
    else
    {
      v12 = v4 & 0xF;
      *a3 = v12;
      v13 = byte_5C329C[v4 & 0xF];
      if ( !_bittest(&v13, a1[1] >> 5) )
        goto LABEL_11;
      v16 = a1[1] & 0x3F;
      v9 = 2;
      v7 = 2;
    }
    v8 = v16 | (v12 << 6);
    *a3 = v8;
    if ( a2 == v7 )
      goto LABEL_12;
    goto LABEL_6;
  }
  if ( v4 <= 193 )
  {
LABEL_11:
    v7 = 1;
    goto LABEL_12;
  }
  v8 = v4 & 0x1F;
  v9 = 1;
  *a3 = v8;
LABEL_6:
  v10 = a1[v9] + 0x80;
  if ( v10 <= 0x3Fu )
  {
    ++v7;
    *a3 = v10 | (v8 << 6);
    return v7;
  }
LABEL_12:
  *a3 = -1;
  return v7;
}
