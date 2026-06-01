/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000370D8
// Address: 0x00000001000370D8

//----- (00000001000370D8) ----------------------------------------------------
__int64 __fastcall sub_1000370D8(
        _QWORD *a1,
        int8x16x2_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // x20
  unsigned __int8 *v11; // x1
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x1
  __int64 v17; // x8
  unsigned __int8 *v18; // x21
  int v19; // w8
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 *v22; // x0
  __int64 v23; // x19
  void *v24; // x0
  _QWORD *v25; // x8
  unsigned __int8 *v26; // x20
  void *v28; // [xsp+8h] [xbp-68h] BYREF
  __int64 v29; // [xsp+10h] [xbp-60h]
  __int64 v30; // [xsp+18h] [xbp-58h]
  void **v31; // [xsp+28h] [xbp-48h] BYREF
  void *v32; // [xsp+30h] [xbp-40h]
  __int64 v33; // [xsp+38h] [xbp-38h]
  __int64 v34; // [xsp+40h] [xbp-30h]

  v28 = nullptr;
  v29 = 0;
  v30 = 0;
  v10 = sub_100036064((__int64)a1, (__int64 *)&v28, a4, a5, a6, a7, a8, a9, a2);
  if ( !v10 )
  {
    v15 = a1[4];
    if ( !v15 )
    {
      v16 = (_QWORD *)a1[3];
      if ( a1[5] )
      {
        v17 = 0;
      }
      else
      {
        v16 = qvector_reserve(a1 + 3, v16, 1u, 0x20u);
        a1[3] = v16;
        v17 = a1[4];
      }
      v25 = &v16[4 * v17];
      *(_BYTE *)v25 = 2;
      v25[2] = 0;
      v25[3] = 0;
      v25[1] = 0;
      v15 = a1[4] + 1LL;
      a1[4] = v15;
    }
    v26 = (unsigned __int8 *)(a1[3] + 32 * v15 - 32);
    sub_100035078(v26);
    sub_100034CB4((__int64)a1, (__int64)v26);
    v23 = 0;
    v24 = v28;
    if ( !v28 )
      return v23;
    goto LABEL_22;
  }
  v11 = (unsigned __int8 *)(a1[3] + 32LL * a1[4] - 32);
  LOBYTE(v31) = 2;
  v33 = 0;
  v34 = 0;
  v32 = nullptr;
  copy_idcv((unsigned __int8 *)&v31, v11);
  v12 = a1[4];
  if ( v12 )
  {
    v13 = a1[3];
    v14 = v12 - 1;
    a1[4] = v14;
    sub_100033200((unsigned __int8 *)(v13 + 32 * v14));
  }
  if ( (unsigned __int8)v31 == 5 )
  {
    sub_100031978((__int64)v32, (unsigned __int8 *)&v31);
  }
  else if ( (unsigned __int8)v31 == 7 && v32 )
  {
    v33 = 0;
    qfree(v32);
  }
  v18 = (unsigned __int8 *)(a1[3] + 32LL * a1[4] - 32);
  v19 = *(_DWORD *)(v10 + 28);
  if ( !v19 )
  {
LABEL_15:
    v31 = &v28;
    v22 = sub_10003D200((__int64 **)v10, (__int64)&v28, (__int64)&byte_1000763D7, (__int64 *)&v31);
    copy_idcv((unsigned __int8 *)v22 + 56, v18);
    v23 = 1;
    v24 = v28;
    if ( !v28 )
      return v23;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v20 = sub_10002DDA8(a1[1], v19);
    v21 = *(unsigned int *)(v20 + 60);
    if ( (_DWORD)v21 != -1 )
      break;
    v19 = *(_DWORD *)(v20 + 24);
    if ( !v19 )
      goto LABEL_15;
  }
  v23 = sub_100036294(a1, (_DWORD *)v10, v21, (__int64)&v28, v18, 0);
  v24 = v28;
  if ( v28 )
  {
LABEL_22:
    v29 = 0;
    qfree(v24);
  }
  return v23;
}
// 1000763D7: using guessed type char byte_1000763D7;
