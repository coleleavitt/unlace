/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C004
// Address: 0x000000010001C004

//----- (000000010001C004) ----------------------------------------------------
_QWORD **__fastcall sub_10001C004(_QWORD **result, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x10
  _QWORD *v6; // x19
  unsigned __int64 v7; // x20
  unsigned __int64 v8; // x21
  void *v9; // x0
  void *v10; // x8
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  char *v13; // x10
  __int128 v14; // q0
  _QWORD *v15; // x19
  unsigned __int64 v16; // x20
  void *v17; // x0
  void *v18; // x8
  unsigned __int64 v19; // x8
  __int64 v20; // x9
  char *v21; // x10
  __int128 v22; // [xsp+0h] [xbp-40h]
  int v23; // [xsp+10h] [xbp-30h]

  v3 = (unsigned __int64)result[1];
  if ( v3 > a2 )
  {
LABEL_2:
    result[1] = (_QWORD *)a2;
    return result;
  }
  if ( v3 < a2 )
  {
    v4 = (unsigned __int64)result[2];
    if ( (unsigned __int64)*result <= a3 && (unsigned __int64)*result + 20 * v4 > a3 )
    {
      v22 = *(_OWORD *)a3;
      v23 = *(_DWORD *)(a3 + 16);
      if ( v4 < a2 )
      {
        v15 = result;
        v16 = a2;
        v17 = qvector_reserve(result, *result, a2, 0x14u);
        a2 = v16;
        v18 = v17;
        result = (_QWORD **)v15;
        *v15 = v18;
        v3 = v15[1];
      }
      v19 = a2 - v3;
      if ( a2 > v3 )
      {
        v20 = 20 * v3;
        do
        {
          v21 = (char *)*result + v20;
          *(_OWORD *)v21 = v22;
          *((_DWORD *)v21 + 4) = v23;
          v20 += 20;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v6 = result;
        v7 = a2;
        v8 = a3;
        v9 = qvector_reserve(result, *result, a2, 0x14u);
        a3 = v8;
        a2 = v7;
        v10 = v9;
        result = (_QWORD **)v6;
        *v6 = v10;
        v3 = v6[1];
      }
      v11 = a2 - v3;
      if ( a2 > v3 )
      {
        v12 = 20 * v3;
        do
        {
          v13 = (char *)*result + v12;
          v14 = *(_OWORD *)a3;
          *((_DWORD *)v13 + 4) = *(_DWORD *)(a3 + 16);
          *(_OWORD *)v13 = v14;
          v12 += 20;
          --v11;
        }
        while ( v11 );
      }
    }
    goto LABEL_2;
  }
  return result;
}
