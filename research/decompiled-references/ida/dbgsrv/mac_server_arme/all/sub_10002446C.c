/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002446C
// Address: 0x000000010002446C

//----- (000000010002446C) ----------------------------------------------------
void __fastcall sub_10002446C(_QWORD **a1, unsigned __int64 a2)
{
  _QWORD *v3; // x8
  unsigned __int64 v4; // x10
  _QWORD *v6; // x9
  unsigned __int64 v7; // x20
  _QWORD *v8; // x0
  _QWORD *v9; // x20
  _QWORD *v10; // x1
  _QWORD *v11; // x8
  _QWORD *v12; // x20
  void *v13; // [xsp+0h] [xbp-60h]
  __int128 v14; // [xsp+8h] [xbp-58h]
  unsigned __int8 v15[8]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v16; // [xsp+20h] [xbp-40h]
  __int128 v17; // [xsp+28h] [xbp-38h]

  v3 = *a1;
  v4 = (unsigned __int64)a1[2];
  if ( (unsigned __int64)*a1 <= a2 && (unsigned __int64)&(*a1)[7 * v4] > a2 )
  {
    v13 = *(void **)a2;
    *(_QWORD *)a2 = 0;
    v14 = *(_OWORD *)(a2 + 8);
    *(_OWORD *)(a2 + 8) = 0u;
    v15[0] = 2;
    v16 = 0;
    v17 = 0u;
    copy_idcv(v15, (unsigned __int8 *)(a2 + 24));
    v10 = *a1;
    v11 = a1[1];
    if ( a1[2] < (_QWORD *)((char *)v11 + 1) )
    {
      v10 = qvector_reserve(a1, v10, (unsigned __int64)v11 + 1, 0x38u);
      *a1 = v10;
      v11 = a1[1];
    }
    v12 = &v10[7 * (_QWORD)v11];
    *v12 = v13;
    *(_OWORD *)(v12 + 1) = v14;
    *((_BYTE *)v12 + 24) = 2;
    v12[5] = 0;
    v12[6] = 0;
    v12[4] = 0;
    copy_idcv((unsigned __int8 *)v12 + 24, v15);
    free_idcv(v15);
  }
  else
  {
    v6 = a1[1];
    if ( v4 < (unsigned __int64)v6 + 1 )
    {
      v7 = a2;
      v8 = qvector_reserve(a1, *a1, (unsigned __int64)v6 + 1, 0x38u);
      a2 = v7;
      v3 = v8;
      *a1 = v8;
      v6 = a1[1];
    }
    v9 = &v3[7 * (_QWORD)v6];
    *v9 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    v9[1] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    v9[2] = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    *((_BYTE *)v9 + 24) = 2;
    v9[5] = 0;
    v9[6] = 0;
    v9[4] = 0;
    copy_idcv((unsigned __int8 *)v9 + 24, (unsigned __int8 *)(a2 + 24));
  }
  a1[1] = (_QWORD *)((char *)a1[1] + 1);
}
// 1000245F0: conditional instruction was optimized away because %var_60.8==0
