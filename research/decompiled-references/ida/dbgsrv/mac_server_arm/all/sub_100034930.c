/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034930
// Address: 0x0000000100034930

//----- (0000000100034930) ----------------------------------------------------
__int64 __fastcall sub_100034930(_QWORD *a1, _DWORD *a2, __int64 a3, unsigned __int8 **a4)
{
  int v6; // w24
  unsigned __int8 *v9; // x22
  int v10; // w8
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  char *v19; // x8
  __int64 v21; // x8
  _QWORD *v22; // x1
  __int64 v23; // x8
  _QWORD *v24; // x8
  unsigned __int8 *v25; // x20
  void *v26; // [xsp+10h] [xbp-50h] BYREF
  __int64 v27; // [xsp+18h] [xbp-48h]
  __int64 v28; // [xsp+20h] [xbp-40h]

  v6 = a2[7];
  if ( v6 )
  {
    v9 = *a4;
    v10 = a2[7];
    while ( 1 )
    {
      v11 = sub_10002DDA8(a1[1], v10);
      if ( *(_DWORD *)(v11 + 56) != -1 )
        break;
      v10 = *(_DWORD *)(v11 + 24);
      if ( !v10 )
        goto LABEL_5;
    }
    *a4 = nullptr;
    return sub_100036294(a1, a2, *(unsigned int *)(v11 + 56), a3, v9, 1);
  }
  else
  {
LABEL_5:
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    v12 = sub_10002DDA8(a1[1], v6);
    if ( *(_QWORD *)(v12 + 40) )
      v19 = *(char **)(v12 + 32);
    else
      v19 = &byte_100075A30;
    sub_10000273C((char **)&v26, "%s.%s", v13, v14, v15, v16, v17, v18, (char)v19);
    set_error_string(0);
    set_qerrno();
    v21 = a1[4];
    if ( !v21 )
    {
      v22 = (_QWORD *)a1[3];
      if ( a1[5] )
      {
        v23 = 0;
      }
      else
      {
        v22 = qvector_reserve(a1 + 3, v22, 1u, 0x20u);
        a1[3] = v22;
        v23 = a1[4];
      }
      v24 = &v22[4 * v23];
      *(_BYTE *)v24 = 2;
      v24[2] = 0;
      v24[3] = 0;
      v24[1] = 0;
      v21 = a1[4] + 1LL;
      a1[4] = v21;
    }
    v25 = (unsigned __int8 *)(a1[3] + 32 * v21 - 32);
    sub_100035078(v25);
    sub_100034CB4((__int64)a1, (__int64)v25);
    if ( v26 )
    {
      v27 = 0;
      qfree(v26);
    }
    return 0;
  }
}
// 100034A30: variable 'v13' is possibly undefined
// 100034A30: variable 'v14' is possibly undefined
// 100034A30: variable 'v15' is possibly undefined
// 100034A30: variable 'v16' is possibly undefined
// 100034A30: variable 'v17' is possibly undefined
// 100034A30: variable 'v18' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
