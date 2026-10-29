/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D038
// Address: 0x000000000042D038

//----- (000000000042D038) ----------------------------------------------------
__int64 __fastcall sub_42D038(__int64 a1, char *a2, __int64 *a3)
{
  __int64 v5; // x5
  __int64 v6; // x1
  int v7; // w0
  unsigned __int64 v8; // x22
  const char *v9; // x0
  __int64 v10; // x21
  bool v11; // zf
  __int64 v12; // x21
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v16; // [xsp+40h] [xbp-50h] BYREF
  __int64 v17; // [xsp+48h] [xbp-48h]
  __int64 v18; // [xsp+50h] [xbp-40h]
  __int64 v19; // [xsp+58h] [xbp-38h]
  __int64 v20; // [xsp+68h] [xbp-28h]
  __int64 v21; // [xsp+70h] [xbp-20h]
  __int64 v22; // [xsp+78h] [xbp-18h]
  __int64 v23; // [xsp+80h] [xbp-10h]

  v5 = a3[1];
  v20 = *a3;
  v21 = v5;
  v6 = a3[3];
  v22 = a3[2];
  v23 = v6;
  v16 = v20;
  v17 = v5;
  v18 = v22;
  v19 = v6;
  v7 = sub_49B318(nullptr, 0, a2, &v16);
  if ( v7 )
  {
    v8 = v7 + 1LL;
    v9 = *(const char **)a1;
    v10 = *(_QWORD *)(a1 + 8);
    v11 = v10 == 0;
    v12 = v10 - 1;
    if ( v11 )
      v12 = 0;
    if ( v12 + v8 > *(_QWORD *)(a1 + 16) )
    {
      v9 = (const char *)sub_491288(a1, *(void **)a1, v12 + v8, 1u);
      *(_QWORD *)a1 = v9;
    }
    v13 = v20;
    v14 = v21;
    *(_QWORD *)(a1 + 8) = v12 + v8;
    v18 = v22;
    v19 = v23;
    v16 = v13;
    v17 = v14;
    sub_49B318(&v9[v12], v8, a2, &v16);
  }
  return a1;
}
// 42D038: could not find valid save-restore pair for x25
