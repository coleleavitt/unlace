/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B2E00
// Address: 0x000B2E00

//----- (000B2E00) --------------------------------------------------------
int __fastcall sub_B2E00(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  bool v4; // sf
  bool v5; // of
  int v6; // eax
  char v7; // al
  bool v8; // sf
  bool v9; // of
  _DWORD *v10; // edi
  int v11; // esi
  char v12; // bl
  int v13; // esi
  int v14; // eax
  int result; // eax
  __int64 v16; // xmm0_8
  int v17; // ebx
  int v18; // ecx
  __int64 v19; // xmm0_8

  v3 = *a2;
  v5 = __OFSUB__(*a2, *a1);
  v4 = *a2 - *a1 < 0;
  if ( *a2 == *a1 )
  {
    v6 = a2[1];
    v5 = __OFSUB__(v6, a1[1]);
    v4 = v6 - a1[1] < 0;
  }
  v7 = v4 ^ v5;
  v9 = __OFSUB__(*a3, v3);
  v8 = *a3 - v3 < 0;
  if ( *a3 == v3 )
  {
    v10 = a3;
    v11 = a3[1];
    v9 = __OFSUB__(v11, a2[1]);
    v8 = v11 - a2[1] < 0;
  }
  else
  {
    v10 = a3;
  }
  v12 = v8 ^ v9;
  if ( !v7 )
  {
    result = 0;
    if ( !v12 )
      return result;
    v16 = *(_QWORD *)a2;
    *(_QWORD *)a2 = *(_QWORD *)v10;
    *(_QWORD *)v10 = v16;
    if ( *a2 == *a1 )
    {
      result = 1;
      if ( a2[1] >= a1[1] )
        return result;
    }
    else
    {
      result = 1;
      if ( *a2 >= *a1 )
        return result;
    }
    v19 = *(_QWORD *)a1;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v19;
    return 2;
  }
  v13 = *a1;
  v14 = a1[1];
  if ( v12 )
  {
    *(_QWORD *)a1 = *(_QWORD *)v10;
    v10[1] = v14;
    *v10 = v13;
    return 1;
  }
  *(_QWORD *)a1 = *(_QWORD *)a2;
  a2[1] = v14;
  *a2 = v13;
  v17 = v14;
  if ( *v10 != v13 )
  {
    v18 = v14;
    result = 1;
    if ( *v10 >= v13 )
      return result;
    goto LABEL_19;
  }
  result = 1;
  v18 = v17;
  if ( v10[1] < v17 )
  {
LABEL_19:
    *(_QWORD *)a2 = *(_QWORD *)v10;
    v10[1] = v18;
    *v10 = v13;
    return 2;
  }
  return result;
}
