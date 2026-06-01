/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100039A58
// Address: 0x0000000100039A58

//----- (0000000100039A58) ----------------------------------------------------
__int64 __fastcall sub_100039A58(int16x4_t *a1, int16x4_t *a2)
{
  int v4; // w8
  __int64 result; // x0
  const void *v6; // x0
  int16x4_t v7; // x8
  bool v8; // cf
  size_t v9; // x8
  size_t v10; // x20
  const void *v11; // x1
  int16x4_t v12; // x8
  size_t v13; // x8
  size_t v14; // x19
  size_t v15; // x2
  unsigned int v16; // w8
  bool v17; // cc
  unsigned int v18; // w8
  int16x4_t v19; // x8
  int16x4_t v20; // x9
  bool v21; // cc
  unsigned int v22; // w8

  v4 = sub_100039890(a1, a2);
  result = 1;
  if ( v4 <= 5 )
  {
    switch ( v4 )
    {
      case 2:
LABEL_25:
        v17 = *(_QWORD *)&a1[1] < *(_QWORD *)&a2[1];
LABEL_27:
        if ( v17 )
          v18 = -1;
        else
          v18 = 0;
        if ( v17 )
          return v18;
        else
          return 1;
      case 3:
        return ecmp((unsigned __int16 *)&a1[1], (unsigned __int16 *)&a2[1]);
      case 5:
        return *(_QWORD *)&a1[1] != *(_QWORD *)&a2[1];
    }
  }
  else
  {
    if ( v4 <= 7 )
    {
      if ( v4 != 6 )
      {
        v6 = (const void *)a1[1];
        v7 = a1[2];
        v8 = *(_QWORD *)&v7 != 0;
        v9 = *(_QWORD *)&v7 - 1LL;
        if ( v8 )
          v10 = v9;
        else
          v10 = 0;
        v11 = (const void *)a2[1];
        v12 = a2[2];
        v8 = *(_QWORD *)&v12 != 0;
        v13 = *(_QWORD *)&v12 - 1LL;
        if ( v8 )
          v14 = v13;
        else
          v14 = 0;
        if ( v10 >= v14 )
          v15 = v14;
        else
          v15 = v10;
        LODWORD(result) = memcmp(v6, v11, v15);
        if ( v10 >= v14 )
          v16 = v10 > v14;
        else
          v16 = -1;
        if ( (_DWORD)result )
          return (unsigned int)result;
        else
          return v16;
      }
      v17 = a1[1].i32[0] < a2[1].i32[0];
      goto LABEL_27;
    }
    if ( v4 != 8 )
    {
      if ( v4 != 9 )
        return result;
      goto LABEL_25;
    }
    v19 = a1[1];
    v20 = a2[1];
    v21 = *(_QWORD *)&v19 > *(_QWORD *)&v20;
    if ( *(_QWORD *)&v19 >= *(_QWORD *)&v20 )
      v22 = 0;
    else
      v22 = -1;
    if ( v21 )
      return 1;
    else
      return v22;
  }
  return result;
}
// 100039A94: conditional instruction was optimized away because w8.4==7
