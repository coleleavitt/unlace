/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005BA90
// Address: 0x000000010005BA90

//----- (000000010005BA90) ----------------------------------------------------
__int64 __fastcall sub_10005BA90(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x8
  __int64 v12; // x22
  unsigned int v13; // w10
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  char v17; // w21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  __int64 v25; // x19
  bool v26; // w20
  unsigned int qerrno; // w21
  const char *error_data; // x22
  const char *error_string; // x0
  char v31[32]; // [xsp+8h] [xbp-68h] BYREF
  unsigned __int8 v32[8]; // [xsp+28h] [xbp-48h] BYREF
  __int64 v33; // [xsp+30h] [xbp-40h]
  __int64 v34; // [xsp+38h] [xbp-38h]
  __int64 v35; // [xsp+40h] [xbp-30h]
  int8x16x2_t v36; // 0:q0.32

  v8 = *(_QWORD *)(a1 + 336);
  if ( !v8 )
    return 0;
  v12 = a1 + 336;
  do
  {
    if ( *(_QWORD *)(v8 + 32) < a3 )
    {
      v13 = 1;
    }
    else
    {
      v12 = v8;
      v13 = 0;
    }
    v8 = *(_QWORD *)(v8 + 8LL * v13);
  }
  while ( v8 );
  if ( v12 == a1 + 336 || *(_QWORD *)(v12 + 32) > a3 )
    return 0;
  v32[0] = 2;
  v34 = 0;
  v35 = 0;
  v33 = 0;
  qsnprintf(v31, 0x20u, "__lc%a", a4, a5, a6, a7, a8, a3);
  sub_10005D17C();
  sub_10005D194(a1, a2);
  if ( (*(_BYTE *)(v12 + 464) & 1) != 0 )
    goto LABEL_12;
  if ( (unsigned int)compile_idc_snippet((char)v31, *(const char **)(v12 + 48), 0, 0, 1, v14, v15, v16) )
  {
    *(_BYTE *)(v12 + 464) = 1;
LABEL_12:
    v17 = call_idc_func(v32, v31, nullptr, 0, nullptr, 0);
    goto LABEL_14;
  }
  v17 = 0;
LABEL_14:
  sub_10005D188();
  if ( (v17 & 1) != 0 )
  {
    idcv_int64(v32, v36, v18, v19, v20, v21, v22, v23, v24);
    v25 = v12 + 40;
    v26 = v33 != 0;
  }
  else
  {
    qerrno = get_qerrno();
    error_data = (const char *)get_error_data(0);
    error_string = (const char *)get_error_string(0);
    sub_10004D620(*(_QWORD *)(a1 + 400), a3, qerrno, error_data, error_string);
    v25 = 0;
    v26 = 0;
  }
  free_idcv(v32);
  if ( v26 )
    return 0;
  return v25;
}
// 10005BB54: variable 'v14' is possibly undefined
// 10005BB54: variable 'v15' is possibly undefined
// 10005BB54: variable 'v16' is possibly undefined
// 10005BB98: variable 'v36' is possibly undefined
// 10005BB98: variable 'v18' is possibly undefined
// 10005BB98: variable 'v19' is possibly undefined
// 10005BB98: variable 'v20' is possibly undefined
// 10005BB98: variable 'v21' is possibly undefined
// 10005BB98: variable 'v22' is possibly undefined
// 10005BB98: variable 'v23' is possibly undefined
// 10005BB98: variable 'v24' is possibly undefined
