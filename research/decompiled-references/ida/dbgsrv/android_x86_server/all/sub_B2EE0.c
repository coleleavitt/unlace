/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B2EE0
// Address: 0x000B2EE0

//----- (000B2EE0) --------------------------------------------------------
int __fastcall sub_B2EE0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax
  int v7; // ecx
  bool v8; // cc
  _DWORD *v9; // edx
  _DWORD *v10; // ebx
  __int64 v11; // xmm0_8
  bool v12; // cc
  __int64 v13; // xmm0_8
  bool v14; // cc
  __int64 v15; // xmm0_8
  bool v16; // cc
  __int64 v17; // xmm0_8
  int result; // eax
  bool v19; // cc
  _QWORD *v20; // edx
  __int64 v21; // xmm0_8
  bool v22; // cc
  __int64 v23; // xmm0_8
  bool v24; // cc
  __int64 v25; // xmm0_8

  v6 = sub_B2E00(a1, a2, a3);
  v7 = v6;
  v8 = *a4 < *a3;
  if ( *a4 == *a3 )
    v8 = a4[1] < a3[1];
  v9 = a4;
  v10 = a5;
  if ( v8 )
  {
    v11 = *(_QWORD *)a3;
    *(_QWORD *)a3 = *(_QWORD *)a4;
    *(_QWORD *)a4 = v11;
    v12 = *a3 < *a2;
    v7 = v6 + 1;
    if ( *a3 == *a2 )
    {
      v12 = a3[1] < a2[1];
      v9 = a4;
    }
    if ( v12 )
    {
      v13 = *(_QWORD *)a2;
      *(_QWORD *)a2 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v13;
      v14 = *a2 < *a1;
      v7 = v6 + 2;
      if ( *a2 == *a1 )
      {
        v14 = a2[1] < a1[1];
        v9 = a4;
      }
      v10 = a5;
      if ( v14 )
      {
        v15 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a2;
        *(_QWORD *)a2 = v15;
        v7 = v6 + 3;
      }
    }
  }
  v16 = *v10 < *v9;
  if ( *v10 == *v9 )
    v16 = v10[1] < v9[1];
  if ( !v16 )
    return v7;
  v17 = *(_QWORD *)v9;
  *(_QWORD *)v9 = *(_QWORD *)v10;
  *(_QWORD *)v10 = v17;
  result = v7 + 1;
  v19 = *a4 < *a3;
  v20 = a4;
  if ( *a4 == *a3 )
  {
    v19 = a4[1] < a3[1];
    v20 = a4;
  }
  if ( v19 )
  {
    v21 = *(_QWORD *)a3;
    *(_QWORD *)a3 = *v20;
    *v20 = v21;
    result = v7 + 2;
    v22 = *a3 < *a2;
    if ( *a3 == *a2 )
      v22 = a3[1] < a2[1];
    if ( v22 )
    {
      v23 = *(_QWORD *)a2;
      *(_QWORD *)a2 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v23;
      result = v7 + 3;
      v24 = *a2 < *a1;
      if ( *a2 == *a1 )
        v24 = a2[1] < a1[1];
      if ( v24 )
      {
        v25 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a2;
        *(_QWORD *)a2 = v25;
        v7 += 4;
        return v7;
      }
    }
  }
  return result;
}
