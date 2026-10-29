/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F988
// Address: 0x000000000040F988

//----- (000000000040F988) ----------------------------------------------------
void __fastcall sub_40F988(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v3; // x0
  __int64 v6; // x1
  __int64 *v7; // x21
  __int64 v8; // x19
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x19
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x19
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x20
  __int64 v18; // x0

  v3 = a3[3];
  v6 = a2[3];
  v7 = (__int64 *)(v6 + 8);
  if ( v6 + 8 < v3 )
  {
    do
    {
      v8 = *v7;
      v9 = *v7 + 504;
      do
      {
        v10 = v8;
        v8 += 72;
        sub_482ED0(v10);
      }
      while ( v9 != v8 );
      v3 = a3[3];
      ++v7;
    }
    while ( v3 > (unsigned __int64)v7 );
    v6 = a2[3];
  }
  v11 = *a2;
  if ( v6 == v3 )
  {
    v17 = *a3;
    while ( v17 != v11 )
    {
      v18 = v11;
      v11 += 72;
      sub_482ED0(v18);
    }
  }
  else
  {
    v12 = a2[2];
    while ( v12 != v11 )
    {
      v13 = v11;
      v11 += 72;
      sub_482ED0(v13);
    }
    v15 = *a3;
    v14 = a3[1];
    if ( v14 != *a3 )
    {
      do
      {
        v16 = v14;
        v14 += 72;
        sub_482ED0(v16);
      }
      while ( v15 != v14 );
    }
  }
}
