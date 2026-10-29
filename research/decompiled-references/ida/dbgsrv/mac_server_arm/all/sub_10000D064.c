/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D064
// Address: 0x000000010000D064

//----- (000000010000D064) ----------------------------------------------------
void __fastcall sub_10000D064(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // x9
  unsigned __int64 *v5; // x21
  signed __int64 v7; // x22
  signed __int64 v9; // x23
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x11
  unsigned __int64 v12; // x25
  unsigned __int64 v13; // x27
  unsigned __int64 *v14; // x28
  unsigned __int64 v15; // x26
  __int128 v16; // q0
  void *v17; // x0
  unsigned __int64 v18; // x26
  __int128 v19; // q0
  void *v20; // x0
  unsigned __int64 v21; // x8
  __int64 v22; // x9
  signed __int64 v23; // x9
  unsigned __int64 v24; // x11
  void *v25; // x0
  void *v26; // x0
  __int128 v27; // [xsp+0h] [xbp-C0h]
  unsigned __int64 v28; // [xsp+18h] [xbp-A8h]
  __int128 v29; // [xsp+20h] [xbp-A0h]
  unsigned __int64 v30; // [xsp+38h] [xbp-88h]
  __int128 v31; // [xsp+40h] [xbp-80h]
  __int128 v32; // [xsp+40h] [xbp-80h]
  unsigned __int64 v33; // [xsp+58h] [xbp-68h]
  __int16 v34; // [xsp+60h] [xbp-60h]

  v4 = a3 - 2;
  if ( a3 >= 2 )
  {
    v5 = a4;
    v7 = v4 >> 1;
    if ( (__int64)(v4 >> 1) >= (__int64)(0xCCCCCCCCCCCCCCCDLL * (((__int64)a4 - a1) >> 4)) )
    {
      v9 = (0x999999999999999ALL * (((__int64)a4 - a1) >> 4)) | 1;
      v10 = (unsigned __int64 *)(a1 + 80 * v9);
      if ( (__int64)(0x999999999999999ALL * (((__int64)a4 - a1) >> 4) + 2) < a3 )
      {
        v11 = v10[10];
        if ( *v10 <= v11 && (*v10 < v11 || v10[1] < v10[11]) )
        {
          v10 += 10;
          v9 = 0x999999999999999ALL * (((__int64)a4 - a1) >> 4) + 2;
        }
      }
      v12 = *a4;
      if ( *v10 <= *a4 )
      {
        if ( *v10 < *a4 )
          return;
        v13 = a4[1];
        if ( v10[1] < v13 )
          return;
      }
      else
      {
        v13 = a4[1];
      }
      v30 = a4[2];
      a4[2] = 0;
      v29 = *(_OWORD *)(a4 + 3);
      *(_OWORD *)(a4 + 3) = 0u;
      v28 = a4[5];
      a4[5] = 0;
      v27 = *((_OWORD *)a4 + 3);
      *((_OWORD *)a4 + 3) = 0u;
      v33 = a4[8];
      v34 = *((_WORD *)a4 + 36);
      while ( 1 )
      {
        v14 = v10;
        *(_OWORD *)v5 = *(_OWORD *)v10;
        v15 = v10[2];
        v16 = *(_OWORD *)(v10 + 3);
        v10[2] = 0;
        v10[3] = 0;
        v10[4] = 0;
        v17 = (void *)v5[2];
        if ( v17 )
        {
          v5[3] = 0;
          v31 = v16;
          qfree(v17);
          v16 = v31;
        }
        v5[2] = v15;
        *(_OWORD *)(v5 + 3) = v16;
        v18 = v14[5];
        v19 = *((_OWORD *)v14 + 3);
        v14[5] = 0;
        v14[6] = 0;
        v14[7] = 0;
        v20 = (void *)v5[5];
        if ( v20 )
        {
          v5[6] = 0;
          v32 = v19;
          qfree(v20);
          v19 = v32;
        }
        v5[5] = v18;
        *((_OWORD *)v5 + 3) = v19;
        v21 = v14[8];
        *((_WORD *)v5 + 36) = *((_WORD *)v14 + 36);
        v5[8] = v21;
        if ( v7 < v9 )
          break;
        v22 = 2 * v9;
        v9 = (2 * v9) | 1;
        v10 = (unsigned __int64 *)(a1 + 80 * v9);
        v23 = v22 + 2;
        if ( v23 < a3 )
        {
          v24 = v10[10];
          if ( *v10 <= v24 && (*v10 < v24 || v10[1] < v10[11]) )
          {
            v10 += 10;
            v9 = v23;
          }
        }
        v5 = v14;
        if ( *v10 <= v12 )
        {
          if ( *v10 < v12 )
            break;
          v5 = v14;
          if ( v10[1] < v13 )
            break;
        }
      }
      *v14 = v12;
      v14[1] = v13;
      v25 = (void *)v14[2];
      if ( v25 )
      {
        v14[3] = 0;
        qfree(v25);
      }
      v14[2] = v30;
      *(_OWORD *)(v14 + 3) = v29;
      v26 = (void *)v14[5];
      if ( v26 )
      {
        v14[6] = 0;
        qfree(v26);
      }
      v14[5] = v28;
      *((_OWORD *)v14 + 3) = v27;
      v14[8] = v33;
      *((_WORD *)v14 + 36) = v34;
    }
  }
}
