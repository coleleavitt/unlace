/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3248
// Address: 0x00000000000D3248

//----- (00000000000D3248) ----------------------------------------------------
__int64 __fastcall sub_D3248(__int64 a1, char *s, unsigned int a3)
{
  __int64 result; // x0
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x27
  __int64 v10; // x8
  char *v11; // x8
  char *v12; // x9
  int v13; // w10
  int v14; // w11
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  __int128 v18; // [xsp+10h] [xbp-200h]
  __int128 v19; // [xsp+20h] [xbp-1F0h]
  __int128 v20; // [xsp+30h] [xbp-1E0h]
  __int128 v21; // [xsp+40h] [xbp-1D0h]
  __int128 v22; // [xsp+50h] [xbp-1C0h]
  __int128 v23; // [xsp+60h] [xbp-1B0h]
  __int128 v24; // [xsp+70h] [xbp-1A0h]
  __int128 v25; // [xsp+80h] [xbp-190h]
  __int64 v26; // [xsp+90h] [xbp-180h]
  char s1[260]; // [xsp+A4h] [xbp-16Ch] BYREF
  __int64 v28; // [xsp+1A8h] [xbp-68h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 || strlen(s) > 0xFF )
    return 4294967194LL;
  if ( !*(_QWORD *)(a1 + 144) )
    return 4294967196LL;
  v8 = *(_QWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 136);
  v18 = *(_OWORD *)(a1 + 176);
  v19 = *(_OWORD *)(a1 + 192);
  v21 = *(_OWORD *)(a1 + 224);
  v22 = *(_OWORD *)(a1 + 240);
  v20 = *(_OWORD *)(a1 + 208);
  v9 = *(_QWORD *)(a1 + 312);
  v24 = *(_OWORD *)(a1 + 272);
  v25 = *(_OWORD *)(a1 + 288);
  v26 = *(_QWORD *)(a1 + 304);
  v23 = *(_OWORD *)(a1 + 256);
  v10 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = v10;
  result = sub_D2548(a1, (int32x2_t *)(a1 + 176), (unsigned __int64 *)(a1 + 312), 0, 0, 0, 0, 0, 0);
  *(_QWORD *)(a1 + 144) = (_DWORD)result == 0;
  while ( !(_DWORD)result )
  {
    result = sub_D2548(a1, nullptr, nullptr, (__int64)s1, 0x100u, 0, 0, 0, 0);
    if ( (_DWORD)result )
      break;
    if ( a3 >= 2 )
    {
      v11 = s1;
      v12 = s;
      while ( 1 )
      {
        v13 = (unsigned __int8)*v11;
        v14 = (unsigned __int8)*v12;
        if ( (unsigned int)(v13 - 97) < 0x1A )
          LOBYTE(v13) = v13 - 32;
        if ( (unsigned int)(v14 - 97) < 0x1A )
          LOBYTE(v14) = v14 - 32;
        if ( !(_BYTE)v13 )
          break;
        if ( (unsigned __int8)v13 <= (unsigned int)(unsigned __int8)v14 )
        {
          ++v12;
          ++v11;
          if ( (unsigned __int8)(v14 - 1) < (unsigned int)(unsigned __int8)v13 )
            continue;
        }
        goto LABEL_26;
      }
      if ( (_BYTE)v14 )
        result = 0xFFFFFFFFLL;
      else
        result = 0;
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      result = strcmp(s1, s);
      if ( !(_DWORD)result )
        return result;
    }
LABEL_26:
    if ( !*(_QWORD *)(a1 + 144)
      || (v15 = *(_QWORD *)(a1 + 104), v16 = *(_QWORD *)(a1 + 128) + 1LL, v15 != 0xFFFF) && v16 == v15 )
    {
      result = 4294967196LL;
      break;
    }
    v17 = *(_QWORD *)(a1 + 240) + *(_QWORD *)(a1 + 248) + *(_QWORD *)(a1 + 256) + *(_QWORD *)(a1 + 136) + 46LL;
    *(_QWORD *)(a1 + 128) = v16;
    *(_QWORD *)(a1 + 136) = v17;
    result = sub_D2548(a1, (int32x2_t *)(a1 + 176), (unsigned __int64 *)(a1 + 312), 0, 0, 0, 0, 0, 0);
    *(_QWORD *)(a1 + 144) = (_DWORD)result == 0;
  }
  *(_QWORD *)(a1 + 128) = v8;
  *(_QWORD *)(a1 + 136) = v7;
  *(_OWORD *)(a1 + 176) = v18;
  *(_OWORD *)(a1 + 192) = v19;
  *(_OWORD *)(a1 + 224) = v21;
  *(_OWORD *)(a1 + 240) = v22;
  *(_OWORD *)(a1 + 208) = v20;
  *(_QWORD *)(a1 + 304) = v26;
  *(_OWORD *)(a1 + 272) = v24;
  *(_OWORD *)(a1 + 288) = v25;
  *(_OWORD *)(a1 + 256) = v23;
  *(_QWORD *)(a1 + 312) = v9;
  return result;
}
