/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AD1C
// Address: 0x000000010000AD1C

//----- (000000010000AD1C) ----------------------------------------------------
void __fastcall sub_10000AD1C(_QWORD *a1, __int128 *a2)
{
  size_t v4; // x21
  size_t v5; // x21
  _QWORD *v6; // x1
  __int64 v7; // x8
  _QWORD *v8; // x8
  __int128 v9; // [xsp+0h] [xbp-80h]
  void *v10; // [xsp+10h] [xbp-70h]
  size_t v11; // [xsp+18h] [xbp-68h]
  size_t v12; // [xsp+20h] [xbp-60h]
  void *v13; // [xsp+28h] [xbp-58h]
  size_t v14; // [xsp+30h] [xbp-50h]
  size_t v15; // [xsp+38h] [xbp-48h]
  __int64 v16; // [xsp+40h] [xbp-40h]
  __int16 v17; // [xsp+48h] [xbp-38h]

  v9 = *a2;
  v11 = 0;
  v12 = 0;
  v10 = nullptr;
  v4 = *((_QWORD *)a2 + 3);
  if ( v4 )
  {
    v10 = qalloc_or_throw(*((_QWORD *)a2 + 3));
    v12 = v4;
    memcpy(v10, *((const void **)a2 + 2), v4);
    v11 = v4;
  }
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  v5 = *((_QWORD *)a2 + 6);
  if ( v5 )
  {
    v13 = qalloc_or_throw(*((_QWORD *)a2 + 6));
    v15 = v5;
    memcpy(v13, *((const void **)a2 + 5), v5);
    v14 = v5;
  }
  v16 = *((_QWORD *)a2 + 8);
  v17 = *((_WORD *)a2 + 36);
  v6 = (_QWORD *)*a1;
  v7 = a1[1];
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(a1, v6, v7 + 1, 0x50u);
    *a1 = v6;
    v7 = a1[1];
  }
  v8 = &v6[10 * v7];
  *(_OWORD *)v8 = v9;
  v8[2] = v10;
  v8[3] = v11;
  v8[4] = v12;
  v8[5] = v13;
  v8[6] = v14;
  v8[7] = v15;
  *((_WORD *)v8 + 36) = v17;
  v8[8] = v16;
  ++a1[1];
}
// 10000AE84: conditional instruction was optimized away because %var_70.8==0
