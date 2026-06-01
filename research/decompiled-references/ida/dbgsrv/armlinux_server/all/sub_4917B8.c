/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4917B8
// Address: 0x00000000004917B8

//----- (00000000004917B8) ----------------------------------------------------
__int64 __fastcall sub_4917B8(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x9
  __int64 v5; // x7
  __int64 v6; // x5
  __int64 v7; // x4
  __int64 v8; // x6
  _DWORD *v9; // x14
  int v10; // w10
  bool v11; // cc
  __int64 v13; // x5
  _DWORD *v14; // x9
  bool v15; // cc
  _BOOL4 v16; // w8
  __int64 v17; // x4
  __int64 v18; // x2

  v4 = (a3 - 1) / 2;
  if ( a2 >= v4 )
  {
    v8 = result + 8 * a2;
    v7 = a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_24;
    goto LABEL_12;
  }
  v5 = a2;
  do
  {
    v6 = 16 * (v5 + 1);
    v7 = 2 * (v5 + 1);
    v8 = result + v6;
    v9 = (_DWORD *)(result + v6 - 8);
    v10 = *(_DWORD *)(result + v6);
    v11 = v10 < *v9;
    if ( v10 == *v9 )
      v11 = *(_DWORD *)(v8 + 4) < v9[1];
    if ( v11 )
    {
      --v7;
      v8 = result + 8 * v7;
    }
    *(_QWORD *)(result + 8 * v5) = *(_QWORD *)v8;
    v5 = v7;
  }
  while ( v7 < v4 );
  if ( (a3 & 1) == 0 )
  {
LABEL_12:
    if ( v7 == (a3 - 2) / 2 )
    {
      v17 = v7 + 1;
      v18 = result + 16 * v17;
      v7 = 2 * v17 - 1;
      *(_QWORD *)v8 = *(_QWORD *)(v18 - 8);
      v8 = result + 8 * v7;
    }
  }
  v13 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v14 = (_DWORD *)(result + 8 * v13);
      v15 = *v14 < (int)a4;
      if ( *v14 == (_DWORD)a4 )
        v15 = v14[1] < SHIDWORD(a4);
      v16 = v15;
      v8 = result + 8 * v7;
      if ( !v16 )
        break;
      *(_QWORD *)(result + 8 * v7) = *(_QWORD *)(result + 8 * v13);
      v11 = a2 < v13;
      v7 = v13;
      v13 = (v13 - 1) / 2;
      if ( !v11 )
      {
        *(_QWORD *)v14 = a4;
        return result;
      }
    }
  }
LABEL_24:
  *(_QWORD *)v8 = a4;
  return result;
}
