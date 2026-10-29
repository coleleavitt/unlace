/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059814
// Address: 0x0000000100059814

//----- (0000000100059814) ----------------------------------------------------
void __fastcall sub_100059814(_QWORD *a1, __int64 *a2)
{
  size_t v4; // x21
  size_t v5; // x21
  _QWORD *v6; // x1
  __int64 v7; // x8
  _QWORD *v8; // x8
  __int64 v9; // [xsp+0h] [xbp-60h]
  void *v10; // [xsp+8h] [xbp-58h]
  size_t v11; // [xsp+10h] [xbp-50h]
  size_t v12; // [xsp+18h] [xbp-48h]
  void *v13; // [xsp+20h] [xbp-40h]
  size_t v14; // [xsp+28h] [xbp-38h]
  size_t v15; // [xsp+30h] [xbp-30h]

  v9 = *a2;
  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  v4 = a2[2];
  if ( v4 )
  {
    v10 = qalloc_or_throw(a2[2]);
    v12 = v4;
    memcpy(v10, (const void *)a2[1], v4);
    v11 = v4;
  }
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  v5 = a2[5];
  if ( v5 )
  {
    v13 = qalloc_or_throw(a2[5]);
    v15 = v5;
    memcpy(v13, (const void *)a2[4], v5);
    v14 = v5;
  }
  v6 = (_QWORD *)*a1;
  v7 = a1[1];
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(a1, v6, v7 + 1, 0x38u);
    *a1 = v6;
    v7 = a1[1];
  }
  v8 = &v6[7 * v7];
  *v8 = v9;
  v8[1] = v10;
  v8[2] = v11;
  v8[3] = v12;
  v8[4] = v13;
  v8[5] = v14;
  v8[6] = v15;
  ++a1[1];
}
// 100059958: conditional instruction was optimized away because %var_58.8==0
