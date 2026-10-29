/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C99C
// Address: 0x000000010000C99C

//----- (000000010000C99C) ----------------------------------------------------
bool __fastcall sub_10000C99C(__int64 a1, __int64 a2)
{
  signed __int64 v4; // x8
  __int128 *v5; // x1
  unsigned __int64 v6; // x8
  _QWORD *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  int v10; // w24
  unsigned __int64 v11; // x26
  unsigned __int64 v12; // x27
  __int64 v13; // x28
  __int64 v14; // x21
  __int64 v15; // x25
  __int128 v16; // q0
  void *v17; // x0
  __int64 v18; // x25
  __int128 v19; // q0
  void *v20; // x0
  __int64 v21; // x21
  unsigned __int64 v22; // x8
  _QWORD *v23; // x28
  void *v24; // x0
  void *v25; // x0
  __int128 v27; // [xsp+0h] [xbp-C0h]
  __int64 v28; // [xsp+18h] [xbp-A8h]
  __int128 v29; // [xsp+20h] [xbp-A0h]
  __int64 v30; // [xsp+38h] [xbp-88h]
  __int128 v31; // [xsp+40h] [xbp-80h]
  __int128 v32; // [xsp+40h] [xbp-80h]
  __int64 v33; // [xsp+58h] [xbp-68h]
  __int16 v34; // [xsp+60h] [xbp-60h]

  v4 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - a1) >> 4);
  if ( v4 <= 2 )
  {
    if ( (unsigned __int64)v4 >= 2 )
    {
      if ( v4 == 2 )
      {
        v5 = (__int128 *)(a2 - 80);
        v6 = *(_QWORD *)(a2 - 80);
        if ( v6 <= *(_QWORD *)a1 && (v6 < *(_QWORD *)a1 || *(_QWORD *)(a2 - 72) < *(_QWORD *)(a1 + 8)) )
          sub_10000CCE8((__int128 *)a1, v5);
        return 1;
      }
      goto LABEL_13;
    }
    return 1;
  }
  switch ( v4 )
  {
    case 3LL:
      sub_10000C214(a1, (unsigned __int64 *)(a1 + 80), a2 - 80);
      return 1;
    case 4LL:
      sub_10000CE7C(a1, (unsigned __int64 *)(a1 + 80), a1 + 160, a2 - 80);
      return 1;
    case 5LL:
      sub_10000CF50(a1, (unsigned __int64 *)(a1 + 80), a1 + 160, a1 + 240, a2 - 80);
      return 1;
  }
LABEL_13:
  v7 = (_QWORD *)(a1 + 160);
  sub_10000C214(a1, (unsigned __int64 *)(a1 + 80), a1 + 160);
  v8 = a1 + 240;
  if ( a1 + 240 == a2 )
    return 1;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 <= *v7 )
    {
      v12 = *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)v8 < *v7 || v12 < v7[1] )
      {
        v30 = *(_QWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 16) = 0;
        v29 = *(_OWORD *)(v8 + 24);
        *(_OWORD *)(v8 + 24) = 0u;
        v28 = *(_QWORD *)(v8 + 40);
        *(_QWORD *)(v8 + 40) = 0;
        v27 = *(_OWORD *)(v8 + 48);
        *(_OWORD *)(v8 + 48) = 0u;
        v33 = *(_QWORD *)(v8 + 64);
        v13 = v9;
        v34 = *(_WORD *)(v8 + 72);
        while ( 1 )
        {
          v14 = a1 + v13;
          *(_OWORD *)(v14 + 240) = *(_OWORD *)(a1 + v13 + 160);
          v15 = *(_QWORD *)(a1 + v13 + 176);
          v16 = *(_OWORD *)(a1 + v13 + 184);
          *(_QWORD *)(v14 + 176) = 0;
          *(_QWORD *)(v14 + 184) = 0;
          *(_QWORD *)(v14 + 192) = 0;
          v17 = *(void **)(a1 + v13 + 256);
          if ( v17 )
          {
            *(_QWORD *)(v14 + 264) = 0;
            v31 = v16;
            qfree(v17);
            v16 = v31;
          }
          *(_QWORD *)(v14 + 256) = v15;
          *(_OWORD *)(v14 + 264) = v16;
          v18 = *(_QWORD *)(v14 + 200);
          v19 = *(_OWORD *)(v14 + 208);
          *(_QWORD *)(v14 + 200) = 0;
          *(_QWORD *)(v14 + 208) = 0;
          *(_QWORD *)(v14 + 216) = 0;
          v20 = *(void **)(v14 + 280);
          if ( v20 )
          {
            *(_QWORD *)(a1 + v13 + 288) = 0;
            v32 = v19;
            qfree(v20);
            v19 = v32;
          }
          *(_QWORD *)(v14 + 280) = v18;
          v21 = a1 + v13;
          *(_OWORD *)(v21 + 288) = v19;
          *(_QWORD *)(v21 + 304) = *(_QWORD *)(a1 + v13 + 224);
          *(_WORD *)(v21 + 312) = *(_WORD *)(a1 + v13 + 232);
          if ( v13 == -160 )
            break;
          v22 = *(_QWORD *)(v21 + 80);
          if ( v11 > v22 || v11 >= v22 && v12 >= *(_QWORD *)(a1 + v13 + 88) )
          {
            v23 = (_QWORD *)(a1 + v13 + 160);
            goto LABEL_32;
          }
          v13 -= 80;
        }
        v23 = (_QWORD *)a1;
LABEL_32:
        *v23 = v11;
        v23[1] = v12;
        v24 = (void *)v23[2];
        if ( v24 )
        {
          v23[3] = 0;
          qfree(v24);
        }
        v23[2] = v30;
        *(_OWORD *)(v23 + 3) = v29;
        v25 = (void *)v23[5];
        if ( v25 )
        {
          v23[6] = 0;
          qfree(v25);
        }
        v23[5] = v28;
        *((_OWORD *)v23 + 3) = v27;
        *(_QWORD *)(v21 + 224) = v33;
        *(_WORD *)(v21 + 232) = v34;
        if ( ++v10 == 8 )
          return v8 + 80 == a2;
      }
    }
    v7 = (_QWORD *)v8;
    v9 += 80;
    v8 += 80;
    if ( v8 == a2 )
      return 1;
  }
}
