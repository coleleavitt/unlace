/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0174
// Address: 0x00000000000C0174

//----- (00000000000C0174) ----------------------------------------------------
__int64 __fastcall sub_C0174(int *a1, int *a2, int *a3)
{
  int v3; // w9
  bool v4; // cc
  int v5; // w10
  char v6; // w8
  bool v7; // cc
  int v8; // w9
  __int64 v9; // x8
  __int64 v11; // x9
  __int64 v12; // x9

  v3 = *a2;
  v4 = *a2 < *a1;
  if ( *a2 == *a1 )
    v4 = a2[1] < a1[1];
  v5 = *a3;
  v6 = v4;
  v7 = v5 < v3;
  if ( v5 == v3 )
    v7 = a3[1] < a2[1];
  v8 = v7;
  if ( (v6 & 1) != 0 )
  {
    v9 = *(_QWORD *)a1;
    if ( v8 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v9;
      return 1;
    }
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v9;
    if ( *a3 == (_DWORD)v9 )
    {
      if ( a3[1] >= SHIDWORD(v9) )
        return 1;
    }
    else if ( *a3 >= (int)v9 )
    {
      return 1;
    }
    *(_QWORD *)a2 = *(_QWORD *)a3;
    *(_QWORD *)a3 = v9;
    return 2;
  }
  else
  {
    if ( !v8 )
      return 0;
    v11 = *(_QWORD *)a2;
    *(_QWORD *)a2 = *(_QWORD *)a3;
    *(_QWORD *)a3 = v11;
    if ( *a2 == *a1 )
    {
      if ( a2[1] >= a1[1] )
        return 1;
    }
    else if ( *a2 >= *a1 )
    {
      return 1;
    }
    v12 = *(_QWORD *)a1;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v12;
    return 2;
  }
}
