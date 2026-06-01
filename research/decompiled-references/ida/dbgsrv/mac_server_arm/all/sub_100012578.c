/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012578
// Address: 0x0000000100012578

//----- (0000000100012578) ----------------------------------------------------
void __fastcall sub_100012578(_QWORD *a1, __int128 *a2)
{
  _QWORD *v3; // x1
  __int64 v4; // x8
  _QWORD *v5; // x8
  __int128 v6; // q0
  __int128 v7; // q1
  __int128 v8; // q0
  _OWORD v9[2]; // [xsp+0h] [xbp-C0h] BYREF
  int v10; // [xsp+20h] [xbp-A0h]
  void *v11; // [xsp+28h] [xbp-98h]
  __int64 v12; // [xsp+30h] [xbp-90h]
  __int64 v13; // [xsp+38h] [xbp-88h]
  int v14; // [xsp+40h] [xbp-80h]
  void *v15; // [xsp+48h] [xbp-78h]
  __int64 v16; // [xsp+50h] [xbp-70h]
  __int64 v17; // [xsp+58h] [xbp-68h]
  void *v18; // [xsp+60h] [xbp-60h]
  __int64 v19; // [xsp+68h] [xbp-58h]
  __int64 v20; // [xsp+70h] [xbp-50h]
  void *v21; // [xsp+78h] [xbp-48h]
  __int64 v22; // [xsp+80h] [xbp-40h]
  __int64 v23; // [xsp+88h] [xbp-38h]
  __int128 v24; // [xsp+90h] [xbp-30h]
  __int64 v25; // [xsp+A0h] [xbp-20h]

  sub_10001A8D8((__int64)v9, a2);
  v3 = (_QWORD *)*a1;
  v4 = a1[1];
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(a1, v3, v4 + 1, 0xA8u);
    *a1 = v3;
    v4 = a1[1];
  }
  v5 = &v3[21 * v4];
  v6 = v9[0];
  v7 = v9[1];
  *((_DWORD *)v5 + 8) = v10;
  *(_OWORD *)v5 = v6;
  *((_OWORD *)v5 + 1) = v7;
  v5[5] = v11;
  v11 = nullptr;
  v5[6] = v12;
  v12 = 0;
  v5[7] = v13;
  v13 = 0;
  *((_DWORD *)v5 + 16) = v14;
  v5[9] = v15;
  v15 = nullptr;
  v5[10] = v16;
  v16 = 0;
  v5[11] = v17;
  v17 = 0;
  v5[12] = v18;
  v18 = nullptr;
  v5[13] = v19;
  v19 = 0;
  v5[14] = v20;
  v20 = 0;
  v5[15] = v21;
  v21 = nullptr;
  v5[16] = v22;
  v22 = 0;
  v5[17] = v23;
  v23 = 0;
  v8 = v24;
  v5[20] = v25;
  *((_OWORD *)v5 + 9) = v8;
  ++a1[1];
  if ( v21 )
  {
    v22 = 0;
    qfree(v21);
    v21 = nullptr;
    v23 = 0;
  }
  if ( v18 )
  {
    v19 = 0;
    qfree(v18);
    v18 = nullptr;
    v20 = 0;
  }
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
    v15 = nullptr;
    v17 = 0;
  }
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
  }
}
