/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CC60
// Address: 0x000000000040CC60

//----- (000000000040CC60) ----------------------------------------------------
__int64 __fastcall sub_40CC60(__int64 a1, char *a2, __int64 *a3)
{
  char *v6; // x0
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x2
  __int64 v10; // x3
  _QWORD *v11; // t2
  int v12; // w0
  unsigned __int64 v13; // x21
  const char *v14; // x0
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v18; // [xsp+30h] [xbp-50h] BYREF
  __int64 v19; // [xsp+38h] [xbp-48h]
  __int64 v20; // [xsp+40h] [xbp-40h]
  __int64 v21; // [xsp+48h] [xbp-38h]
  __int64 v22; // [xsp+58h] [xbp-28h]
  __int64 v23; // [xsp+60h] [xbp-20h]
  __int64 v24; // [xsp+68h] [xbp-18h]
  __int64 v25; // [xsp+70h] [xbp-10h]

  v6 = *(char **)a1;
  v7 = *a3;
  v8 = a3[1];
  v11 = a3 + 2;
  v9 = a3[2];
  v10 = v11[1];
  v22 = v7;
  v23 = v8;
  v24 = v9;
  v25 = v10;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v6);
    *(_QWORD *)a1 = 0;
    v7 = *a3;
    v8 = a3[1];
    *(_QWORD *)(a1 + 16) = 0;
    v9 = a3[2];
    v10 = a3[3];
  }
  v18 = v7;
  v19 = v8;
  v20 = v9;
  v21 = v10;
  v12 = sub_49B318(nullptr, 0, a2, &v18);
  if ( v12 )
  {
    v13 = v12 + 1LL;
    v14 = *(const char **)a1;
    if ( v13 > *(_QWORD *)(a1 + 16) )
    {
      v14 = (const char *)sub_491288(a1, *(void **)a1, v13, 1u);
      *(_QWORD *)a1 = v14;
    }
    v15 = v22;
    v16 = v23;
    *(_QWORD *)(a1 + 8) = v13;
    v18 = v15;
    v19 = v16;
    v20 = v24;
    v21 = v25;
    sub_49B318(v14, v13, a2, &v18);
  }
  return a1;
}
