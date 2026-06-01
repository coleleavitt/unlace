/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E110
// Address: 0x000000010000E110

//----- (000000010000E110) ----------------------------------------------------
void __fastcall sub_10000E110(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x26
  unsigned __int64 v10; // x24
  __int64 v11; // x23
  __int128 v12; // q2
  __int64 v13; // x21
  __int64 v14; // x25
  __int64 v15; // x28
  __int128 v16; // q0
  void *v17; // x0
  __int64 v18; // x28
  __int128 v19; // q0
  void *v20; // x0
  __int64 v21; // x8
  void *v22; // x0
  void *v23; // x0
  __int128 v24; // [xsp+0h] [xbp-A0h]
  __int128 v25; // [xsp+10h] [xbp-90h]
  __int128 v26; // [xsp+20h] [xbp-80h]
  __int128 v27; // [xsp+20h] [xbp-80h]
  __int64 v28; // [xsp+38h] [xbp-68h]
  __int16 v29; // [xsp+40h] [xbp-60h]

  v4 = a4 - 2;
  if ( a4 >= 2 )
  {
    v6 = v4 >> 1;
    v7 = a1 + 80 * (v4 >> 1);
    v9 = a2 - 80;
    v8 = *(_QWORD *)(a2 - 80);
    if ( *(_QWORD *)v7 <= v8 )
    {
      if ( *(_QWORD *)v7 >= v8 )
      {
        v10 = *(_QWORD *)(a2 - 72);
        if ( *(_QWORD *)(v7 + 8) >= v10 )
          return;
      }
      else
      {
        v10 = *(_QWORD *)(a2 - 72);
      }
      v11 = *(_QWORD *)(a2 - 64);
      *(_QWORD *)(a2 - 64) = 0;
      v12 = *(_OWORD *)(a2 - 56);
      *(_OWORD *)(a2 - 56) = 0u;
      v13 = *(_QWORD *)(a2 - 40);
      *(_QWORD *)(a2 - 40) = 0;
      v24 = *(_OWORD *)(a2 - 32);
      v25 = v12;
      *(_OWORD *)(a2 - 32) = 0u;
      v28 = *(_QWORD *)(a2 - 16);
      v29 = *(_WORD *)(a2 - 8);
      while ( 1 )
      {
        v14 = v7;
        *(_OWORD *)v9 = *(_OWORD *)v7;
        v15 = *(_QWORD *)(v7 + 16);
        v16 = *(_OWORD *)(v7 + 24);
        *(_QWORD *)(v7 + 16) = 0;
        *(_QWORD *)(v7 + 24) = 0;
        *(_QWORD *)(v7 + 32) = 0;
        v17 = *(void **)(v9 + 16);
        if ( v17 )
        {
          *(_QWORD *)(v9 + 24) = 0;
          v26 = v16;
          qfree(v17);
          v16 = v26;
        }
        *(_QWORD *)(v9 + 16) = v15;
        *(_OWORD *)(v9 + 24) = v16;
        v18 = *(_QWORD *)(v14 + 40);
        v19 = *(_OWORD *)(v14 + 48);
        *(_QWORD *)(v14 + 40) = 0;
        *(_QWORD *)(v14 + 48) = 0;
        *(_QWORD *)(v14 + 56) = 0;
        v20 = *(void **)(v9 + 40);
        if ( v20 )
        {
          *(_QWORD *)(v9 + 48) = 0;
          v27 = v19;
          qfree(v20);
          v19 = v27;
        }
        *(_QWORD *)(v9 + 40) = v18;
        *(_OWORD *)(v9 + 48) = v19;
        v21 = *(_QWORD *)(v14 + 64);
        *(_WORD *)(v9 + 72) = *(_WORD *)(v14 + 72);
        *(_QWORD *)(v9 + 64) = v21;
        if ( !v6 )
          break;
        v6 = (v6 - 1) >> 1;
        v7 = a1 + 80 * v6;
        if ( *(_QWORD *)v7 > v8 )
          break;
        v9 = v14;
        if ( *(_QWORD *)v7 >= v8 )
        {
          v9 = v14;
          if ( *(_QWORD *)(v7 + 8) >= v10 )
            break;
        }
      }
      *(_QWORD *)v14 = v8;
      *(_QWORD *)(v14 + 8) = v10;
      v22 = *(void **)(v14 + 16);
      if ( v22 )
      {
        *(_QWORD *)(v14 + 24) = 0;
        qfree(v22);
      }
      *(_QWORD *)(v14 + 16) = v11;
      *(_OWORD *)(v14 + 24) = v25;
      v23 = *(void **)(v14 + 40);
      if ( v23 )
      {
        *(_QWORD *)(v14 + 48) = 0;
        qfree(v23);
      }
      *(_QWORD *)(v14 + 40) = v13;
      *(_OWORD *)(v14 + 48) = v24;
      *(_QWORD *)(v14 + 64) = v28;
      *(_WORD *)(v14 + 72) = v29;
    }
  }
}
