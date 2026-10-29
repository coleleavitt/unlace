/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A80C8
// Address: 0x00000000004A80C8

//----- (00000000004A80C8) ----------------------------------------------------
__int64 __fastcall sub_4A80C8(__int64 a1)
{
  unsigned __int8 *v2; // x1
  unsigned int v3; // w6
  unsigned int v4; // w10
  int v5; // w3
  int v6; // w1
  int v7; // w0
  char **v8; // x8
  unsigned int v9; // w5
  bool v10; // cc
  __int64 result; // x0
  unsigned int v12; // w2
  int v13; // w0
  int v14; // w1
  __int64 v16; // x2
  int v17; // w8
  __int64 v18; // x9
  int v19; // w1
  int v20; // w4
  __int64 v21; // x3
  __int64 v22; // x1
  int v24; // w20
  __int64 v25; // x2

  v2 = *(unsigned __int8 **)(a1 + 24);
  if ( !*v2 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 24) = v2 + 1;
  v3 = *v2;
  if ( !v2[1] )
  {
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  *(_QWORD *)(a1 + 24) = v2 + 2;
  v4 = v2[1];
  if ( v3 == 118 )
  {
    if ( (unsigned __int8)(v4 - 48) <= 9u )
    {
      v16 = sub_4A5530(a1);
      v19 = *(_DWORD *)(v18 + 40);
      if ( v19 < *(_DWORD *)(v18 + 44) )
      {
        v20 = v19 + 1;
        v21 = *(_QWORD *)(v18 + 32);
        v22 = 24LL * v19;
        result = v21 + v22;
        *(_DWORD *)(v21 + v22 + 4) = 0;
        *(_DWORD *)(v18 + 40) = v20;
        if ( v16 )
        {
          *(_DWORD *)(result + 4) = 0;
          *(_DWORD *)(v21 + v22) = 50;
          *(_DWORD *)(result + 8) = v17;
          *(_QWORD *)(result + 16) = v16;
          return result;
        }
      }
      return 0;
    }
LABEL_4:
    v5 = 67;
    v6 = 0;
    while ( 1 )
    {
      v7 = v6 + (v5 - v6) / 2;
      v8 = &off_51D038[3 * v7];
      v9 = (unsigned __int8)**v8;
      v10 = v9 > v3;
      if ( v9 == v3 )
      {
        v12 = (unsigned __int8)(*v8)[1];
        v10 = v12 > v4;
        if ( v12 == v4 )
          break;
      }
      if ( v10 )
        v5 = v6 + (v5 - v6) / 2;
      else
        v6 = v7 + 1;
      if ( v6 == v5 )
        return 0;
    }
    v13 = *(_DWORD *)(a1 + 40);
    if ( v13 < *(_DWORD *)(a1 + 44) )
    {
      v14 = v13 + 1;
      result = *(_QWORD *)(a1 + 32) + 24LL * v13;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(a1 + 40) = v14;
      *(_DWORD *)result = 49;
      *(_QWORD *)(result + 8) = v8;
      return result;
    }
    return 0;
  }
  if ( v3 != 99 || v4 != 118 )
    goto LABEL_4;
  v24 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 84) == 0;
  v25 = sub_4A7538(a1);
  if ( *(_DWORD *)(a1 + 88) )
    result = sub_4A5090(a1, 52, v25, 0);
  else
    result = sub_4A5090(a1, 51, v25, 0);
  *(_DWORD *)(a1 + 88) = v24;
  return result;
}
// 4A81D8: variable 'v18' is possibly undefined
// 4A8214: variable 'v17' is possibly undefined
// 51D038: using guessed type char *off_51D038[2];
