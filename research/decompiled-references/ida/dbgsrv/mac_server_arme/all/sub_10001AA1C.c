/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001AA1C
// Address: 0x000000010001AA1C

//----- (000000010001AA1C) ----------------------------------------------------
__int64 __fastcall sub_10001AA1C(__int64 a1, int *a2)
{
  int v4; // w8
  int v5; // w22
  __int64 v6; // x21
  unsigned int v7; // w23
  _QWORD *v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x8
  __int64 v11; // x21
  unsigned int v12; // w20
  _QWORD *v13; // x1
  __int64 v14; // x8
  _QWORD *v15; // x8

  v4 = *a2;
  if ( *a2 > 46 )
  {
    if ( v4 == 47 )
    {
      v5 = 3;
    }
    else
    {
      if ( v4 != 48 )
        return 0;
      v5 = 4;
    }
  }
  else if ( v4 == 36 )
  {
    v5 = 1;
  }
  else
  {
    if ( v4 != 37 )
      return 0;
    v5 = 2;
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a2[3];
  v8 = *(_QWORD **)v6;
  v9 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v9 + 1) )
  {
    v8 = qvector_reserve(*(_QWORD **)(a1 + 16), v8, v9 + 1, 0x10u);
    *(_QWORD *)v6 = v8;
    v9 = *(_QWORD *)(v6 + 8);
  }
  v10 = &v8[2 * v9];
  *v10 = 0;
  v10[1] = 0;
  ++*(_QWORD *)(v6 + 8);
  *(_DWORD *)v10 = v5;
  *((_DWORD *)v10 + 1) = HIWORD(v7);
  *((_DWORD *)v10 + 2) = BYTE1(v7);
  *((_DWORD *)v10 + 3) = (unsigned __int8)v7;
  v11 = *(_QWORD *)(a1 + 16);
  v12 = a2[2];
  v13 = *(_QWORD **)v11;
  v14 = *(_QWORD *)(v11 + 8);
  if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v14 + 1) )
  {
    v13 = qvector_reserve(*(_QWORD **)(a1 + 16), v13, v14 + 1, 0x10u);
    *(_QWORD *)v11 = v13;
    v14 = *(_QWORD *)(v11 + 8);
  }
  v15 = &v13[2 * v14];
  *v15 = 0;
  v15[1] = 0;
  ++*(_QWORD *)(v11 + 8);
  *(_DWORD *)v15 = v5;
  *((_DWORD *)v15 + 1) = HIWORD(v12);
  *((_DWORD *)v15 + 2) = BYTE1(v12);
  *((_DWORD *)v15 + 3) = (unsigned __int8)v12;
  *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
