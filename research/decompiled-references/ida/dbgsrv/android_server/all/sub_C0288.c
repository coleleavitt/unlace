/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0288
// Address: 0x00000000000C0288

//----- (00000000000C0288) ----------------------------------------------------
__int64 __fastcall sub_C0288(int *a1, int *a2, int *a3, int *a4, int *a5)
{
  unsigned int v10; // w0
  bool v11; // cc
  unsigned int v12; // w8
  __int64 v13; // x9
  bool v14; // cc
  __int64 v15; // x9
  bool v16; // cc
  __int64 v17; // x9
  __int64 result; // x0
  __int64 v19; // x10
  bool v20; // cc
  __int64 v21; // x10
  bool v22; // cc
  __int64 v23; // x10
  bool v24; // cc
  __int64 v25; // x10

  v10 = sub_C0174(a1, a2, a3);
  v11 = *a4 < *a3;
  v12 = v10;
  if ( *a4 == *a3 )
    v11 = a4[1] < a3[1];
  if ( v11 )
  {
    v13 = *(_QWORD *)a3;
    *(_QWORD *)a3 = *(_QWORD *)a4;
    *(_QWORD *)a4 = v13;
    v14 = *a3 < *a2;
    v12 = v10 + 1;
    if ( *a3 == *a2 )
      v14 = a3[1] < a2[1];
    if ( v14 )
    {
      v15 = *(_QWORD *)a2;
      *(_QWORD *)a2 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v15;
      v16 = *a2 < *a1;
      v12 = v10 + 2;
      if ( *a2 == *a1 )
        v16 = a2[1] < a1[1];
      if ( v16 )
      {
        v17 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a2;
        v12 = v10 + 3;
        *(_QWORD *)a2 = v17;
      }
    }
  }
  if ( *a5 == *a4 )
  {
    if ( a5[1] >= a4[1] )
      return v12;
  }
  else if ( *a5 >= *a4 )
  {
    return v12;
  }
  v19 = *(_QWORD *)a4;
  result = v12 + 1;
  *(_QWORD *)a4 = *(_QWORD *)a5;
  *(_QWORD *)a5 = v19;
  v20 = *a4 < *a3;
  if ( *a4 == *a3 )
    v20 = a4[1] < a3[1];
  if ( v20 )
  {
    v21 = *(_QWORD *)a3;
    result = v12 + 2;
    *(_QWORD *)a3 = *(_QWORD *)a4;
    *(_QWORD *)a4 = v21;
    v22 = *a3 < *a2;
    if ( *a3 == *a2 )
      v22 = a3[1] < a2[1];
    if ( v22 )
    {
      v23 = *(_QWORD *)a2;
      result = v12 + 3;
      *(_QWORD *)a2 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v23;
      v24 = *a2 < *a1;
      if ( *a2 == *a1 )
        v24 = a2[1] < a1[1];
      if ( v24 )
      {
        v25 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a2;
        *(_QWORD *)a2 = v25;
        return v12 + 4;
      }
    }
  }
  return result;
}
