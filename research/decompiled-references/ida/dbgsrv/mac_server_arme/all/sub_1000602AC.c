/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000602AC
// Address: 0x00000001000602AC

//----- (00000001000602AC) ----------------------------------------------------
__int64 __fastcall sub_1000602AC(_DWORD *a1, int a2, __int64 a3)
{
  int v3; // w11
  int v5; // w11
  _DWORD *v6; // x19
  __int64 v7; // x20
  int v8; // w0
  int v9; // w8
  int v10; // w9
  __int64 v11; // x8
  __int64 *v12; // x10
  int v13; // w9
  __int64 v14; // x12
  __int64 v15; // t1
  _DWORD *v17; // x19
  __int64 v18; // x20
  int v19; // w0
  int v20; // w8
  int v21; // w9
  __int64 v22; // x8
  __int64 *v23; // x10
  __int64 v24; // x12
  __int64 v25; // t1

  if ( a2 == 4 )
    return 0;
  if ( a2 == 8 )
  {
    v3 = a1[184];
    if ( v3 < 0 )
    {
      v6 = a1;
      v7 = a3;
      v8 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 616LL))();
      a3 = v7;
      v9 = v8;
      a1 = v6;
      if ( (unsigned int)v9 >= 0x10 )
        v10 = 16;
      else
        v10 = v9;
      if ( v9 >= 0 )
        v3 = v10;
      else
        v3 = 0;
      v6[184] = v3;
      if ( !v3 )
        return 2;
    }
    else if ( !v3 )
    {
      return 2;
    }
    v11 = 0;
    v12 = (__int64 *)(a1 + 188);
    v13 = -1;
    while ( 1 )
    {
      v15 = *v12;
      v12 += 3;
      v14 = v15;
      if ( v15 == a3 )
        break;
      if ( v13 < 0 && v14 == -1 )
        v13 = v11;
      if ( v3 == ++v11 )
        return (v13 >> 31) & 6;
    }
  }
  else
  {
    v5 = a1[185];
    if ( v5 < 0 )
    {
      v17 = a1;
      v18 = a3;
      v19 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 624LL))();
      a3 = v18;
      v20 = v19;
      a1 = v17;
      if ( (unsigned int)v20 >= 0x10 )
        v21 = 16;
      else
        v21 = v20;
      if ( v20 >= 0 )
        v5 = v21;
      else
        v5 = 0;
      v17[185] = v5;
      if ( !v5 )
        return 2;
    }
    else if ( !v5 )
    {
      return 2;
    }
    v22 = 0;
    v23 = (__int64 *)(a1 + 284);
    v13 = -1;
    while ( 1 )
    {
      v25 = *v23;
      v23 += 3;
      v24 = v25;
      if ( v25 == a3 )
        break;
      if ( v13 < 0 && v24 == -1 )
        v13 = v22;
      if ( v5 == ++v22 )
        return (v13 >> 31) & 6;
    }
  }
  return 4;
}
