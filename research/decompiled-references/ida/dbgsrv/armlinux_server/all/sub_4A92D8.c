/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A92D8
// Address: 0x00000000004A92D8

//----- (00000000004A92D8) ----------------------------------------------------
__int64 __fastcall sub_4A92D8(__int64 a1)
{
  _BYTE *v1; // x2
  _BYTE *v2; // x1
  int v4; // w3
  __int64 result; // x0
  int v7; // w2
  __int64 v8; // x0
  unsigned __int8 *v9; // x5
  int v10; // w1
  int v11; // w3
  unsigned __int8 *i; // x3
  int v13; // w4
  int v14; // w4
  int v15; // w2
  int v16; // w7
  __int64 v17; // x6
  __int64 v18; // x2
  bool v19; // zf
  __int64 v20; // x3
  __int64 v21; // x1

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 == 76 )
  {
    v2 = v1 + 1;
    *(_QWORD *)(a1 + 24) = v1 + 1;
    v4 = (unsigned __int8)v1[1];
    if ( v4 == 95 || v4 == 90 )
    {
      if ( v4 != 95 || (v2 = v1 + 2, *(_QWORD *)(a1 + 24) = v1 + 2, result = 0, v7 = (unsigned __int8)v1[2], v7 == 90) )
      {
        *(_QWORD *)(a1 + 24) = v2 + 1;
        result = sub_4A8CC0(a1, 0);
        v2 = *(_BYTE **)(a1 + 24);
        v7 = (unsigned __int8)*v2;
      }
      if ( v7 != 69 )
        return 0;
      goto LABEL_10;
    }
    v8 = sub_4A7538(a1);
    if ( v8 )
    {
      if ( *(_DWORD *)v8 == 39 )
      {
        v21 = *(_QWORD *)(v8 + 8);
        if ( *(_DWORD *)(v21 + 28) )
          *(_DWORD *)(a1 + 80) -= *(_DWORD *)(v21 + 8);
      }
      v9 = *(unsigned __int8 **)(a1 + 24);
      v10 = 60;
      v11 = *v9;
      if ( v11 == 110 )
      {
        *(_QWORD *)(a1 + 24) = v9 + 1;
        v10 = 61;
        v11 = *++v9;
      }
      if ( v11 == 69 )
      {
        v14 = 0;
        goto LABEL_21;
      }
      if ( v11 )
      {
        for ( i = v9 + 1; ; ++i )
        {
          *(_QWORD *)(a1 + 24) = i;
          v13 = *i;
          if ( v13 == 69 )
            break;
          if ( !v13 )
            return 0;
        }
        v14 = (_DWORD)i - (_DWORD)v9;
LABEL_21:
        v15 = *(_DWORD *)(a1 + 40);
        if ( v15 >= *(_DWORD *)(a1 + 44)
          || ((v16 = v15 + 1, v17 = *(_QWORD *)(a1 + 32), v18 = 24LL * v15, v9) ? (v19 = v14 == 0) : (v19 = 1),
              v20 = v17 + v18,
              *(_DWORD *)(v17 + v18 + 4) = 0,
              *(_DWORD *)(a1 + 40) = v16,
              v19) )
        {
          v20 = 0;
        }
        else
        {
          *(_DWORD *)(v20 + 4) = 0;
          *(_DWORD *)(v17 + v18) = 0;
          *(_QWORD *)(v20 + 8) = v9;
          *(_DWORD *)(v20 + 16) = v14;
        }
        result = sub_4A5090(a1, v10, v8, v20);
        v2 = *(_BYTE **)(a1 + 24);
        if ( *v2 != 69 )
          return 0;
LABEL_10:
        *(_QWORD *)(a1 + 24) = v2 + 1;
        return result;
      }
    }
    return 0;
  }
  return 0;
}
