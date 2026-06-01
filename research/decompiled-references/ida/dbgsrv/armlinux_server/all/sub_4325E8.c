/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4325E8
// Address: 0x00000000004325E8

//----- (00000000004325E8) ----------------------------------------------------
__int64 __fastcall sub_4325E8(__int64 *a1, const char *a2)
{
  __int64 v4; // x0
  int v5; // w4
  int v6; // w5
  int v7; // w6
  int v8; // w7
  size_t v9; // x0
  size_t v10; // x23
  unsigned int v11; // w21
  char v13; // [xsp+0h] [xbp-70h]
  __int64 v14; // [xsp+48h] [xbp-28h] BYREF
  void *v15; // [xsp+50h] [xbp-20h] BYREF
  size_t v16; // [xsp+58h] [xbp-18h]
  __int64 v17; // [xsp+60h] [xbp-10h]

  v4 = sub_43E668("exception");
  sub_449F40(a1, v4);
  LOBYTE(v14) = 2;
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  sub_448310(&v14);
  if ( a2 )
  {
    v9 = strlen(a2);
    v15 = nullptr;
    v16 = 0;
    v10 = v9;
    v17 = 0;
    LOBYTE(v14) = 7;
    if ( v9 )
    {
      v15 = sub_491288((__int64)&v15, nullptr, v9 + 1, 1u);
      v16 = v10 + 1;
      memmove(v15, a2, v10);
      *((_BYTE *)v15 + v10) = 0;
    }
  }
  else
  {
    LOBYTE(v14) = 7;
    v15 = nullptr;
    v16 = 0;
    v17 = 0;
  }
  sub_44D010((__int64)a1, "description", &v14, 0, v5, v6, v7, v8, v13);
  v11 = sub_4869C8(90);
  sub_448310(&v14);
  return v11;
}
// 4325E8: could not find valid save-restore pair for x23
// 4326B8: variable 'v5' is possibly undefined
// 4326B8: variable 'v6' is possibly undefined
// 4326B8: variable 'v7' is possibly undefined
// 4326B8: variable 'v8' is possibly undefined
// 4326B8: variable 'v13' is possibly undefined
