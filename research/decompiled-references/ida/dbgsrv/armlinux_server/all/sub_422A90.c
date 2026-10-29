/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422A90
// Address: 0x0000000000422A90

//----- (0000000000422A90) ----------------------------------------------------
bool __fastcall sub_422A90(__int64 *a1, void *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x23
  __int64 v8; // x0
  __int64 v9; // x3
  size_t v10; // x0
  _BOOL4 v11; // w22
  int v13; // w0
  int v14; // [xsp+40h] [xbp-10h] BYREF

  v4 = a1[61] - a1[60];
  v5 = sub_48C428(a1[59], 0, 1);
  v6 = a1[60];
  v7 = v5 - v6;
  v8 = sub_48C428(a1[59], v6 - 4 + v4, 0);
  v9 = a1[59];
  if ( v8 == -1 )
  {
    v11 = 0;
  }
  else
  {
    v10 = sub_48C160(a1[59], &v14, 4u);
    v11 = 0;
    v9 = a1[59];
    if ( v10 == 4 && v14 == 541413968 )
    {
      if ( sub_48C428(v9, v4 - 8, 0) == -1 )
      {
        v9 = a1[59];
      }
      else
      {
        v13 = sub_420C98((__int64)a1, a2, 4u, 1u);
        v9 = a1[59];
        v11 = v13 >= 0;
      }
    }
  }
  sub_48C428(v9, v7 + a1[60], 0);
  return v11;
}
