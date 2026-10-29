/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000DD68
// Address: 0x000000010000DD68

//----- (000000010000DD68) ----------------------------------------------------
void __fastcall sub_10000DD68(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x26
  __int64 v6; // x27
  __int64 v7; // x22
  __int64 v8; // x28
  __int64 v9; // x23
  __int64 v10; // x24
  _QWORD *v11; // x0
  _QWORD *v12; // x20
  _OWORD *v13; // x21
  __int64 v14; // x22
  __int128 v15; // q0
  void *v16; // x0
  __int64 v17; // x22
  __int128 v18; // q0
  void *v19; // x0
  __int64 v20; // x8
  void *v21; // x0
  void *v22; // x0
  void *v23; // x0
  void *v24; // x0
  __int128 v25; // [xsp+0h] [xbp-E0h]
  __int128 v26; // [xsp+0h] [xbp-E0h]
  __int64 v27; // [xsp+18h] [xbp-C8h]
  __int128 v30; // [xsp+30h] [xbp-B0h]
  __int64 v31; // [xsp+70h] [xbp-70h]
  __int16 v32; // [xsp+78h] [xbp-68h]

  if ( a4 >= 2 )
  {
    v30 = *(_OWORD *)a1;
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = 0;
    v8 = *(_QWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 40);
    *(_OWORD *)(a1 + 24) = 0u;
    *(_QWORD *)(a1 + 40) = 0;
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *(_QWORD *)(a1 + 56);
    *(_OWORD *)(a1 + 48) = 0u;
    v32 = *(_WORD *)(a1 + 72);
    v31 = *(_QWORD *)(a1 + 64);
    v11 = sub_10000DFCC((_QWORD *)a1, a3, a4);
    v12 = v11;
    v13 = (_OWORD *)(a2 - 80);
    if ( v11 == (_QWORD *)(a2 - 80) )
    {
      *(_OWORD *)v11 = v30;
      v23 = (void *)v11[2];
      if ( v23 )
      {
        v12[3] = 0;
        qfree(v23);
      }
      v12[2] = v5;
      v12[3] = v6;
      v12[4] = v8;
      v24 = (void *)v12[5];
      if ( v24 )
      {
        v12[6] = 0;
        qfree(v24);
      }
      v12[5] = v7;
      v12[6] = v9;
      v12[7] = v10;
      *((_WORD *)v12 + 36) = v32;
      v12[8] = v31;
    }
    else
    {
      v27 = v7;
      *(_OWORD *)v11 = *v13;
      v14 = *(_QWORD *)(a2 - 64);
      v15 = *(_OWORD *)(a2 - 56);
      *(_QWORD *)(a2 - 64) = 0;
      *(_QWORD *)(a2 - 56) = 0;
      *(_QWORD *)(a2 - 48) = 0;
      v16 = (void *)v11[2];
      if ( v16 )
      {
        v12[3] = 0;
        v25 = v15;
        qfree(v16);
        v15 = v25;
      }
      v12[2] = v14;
      *(_OWORD *)(v12 + 3) = v15;
      v17 = *(_QWORD *)(a2 - 40);
      v18 = *(_OWORD *)(a2 - 32);
      *(_QWORD *)(a2 - 40) = 0;
      *(_QWORD *)(a2 - 32) = 0;
      *(_QWORD *)(a2 - 24) = 0;
      v19 = (void *)v12[5];
      if ( v19 )
      {
        v12[6] = 0;
        v26 = v18;
        qfree(v19);
        v18 = v26;
      }
      v12[5] = v17;
      *((_OWORD *)v12 + 3) = v18;
      v20 = *(_QWORD *)(a2 - 16);
      *((_WORD *)v12 + 36) = *(_WORD *)(a2 - 8);
      v12[8] = v20;
      *v13 = v30;
      v21 = *(void **)(a2 - 64);
      if ( v21 )
      {
        *(_QWORD *)(a2 - 56) = 0;
        qfree(v21);
      }
      *(_QWORD *)(a2 - 64) = v5;
      *(_QWORD *)(a2 - 56) = v6;
      *(_QWORD *)(a2 - 48) = v8;
      v22 = *(void **)(a2 - 40);
      if ( v22 )
      {
        *(_QWORD *)(a2 - 32) = 0;
        qfree(v22);
      }
      *(_QWORD *)(a2 - 40) = v27;
      *(_QWORD *)(a2 - 32) = v9;
      *(_QWORD *)(a2 - 24) = v10;
      *(_QWORD *)(a2 - 16) = v31;
      *(_WORD *)(a2 - 8) = v32;
      sub_10000E110(a1, (__int64)(v12 + 10), a3, 0xCCCCCCCCCCCCCCCDLL * (((__int64)v12 - a1 + 80) >> 4));
    }
  }
}
