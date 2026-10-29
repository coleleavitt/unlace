/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5070
// Address: 0x00000000000C5070

//----- (00000000000C5070) ----------------------------------------------------
__int64 __fastcall sub_C5070(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ecx
  bool v10; // sf
  bool v11; // of
  int v12; // edx
  __int64 v13; // rcx
  bool v14; // sf
  bool v15; // of
  int v16; // edx
  __int64 v17; // rcx
  bool v18; // sf
  bool v19; // of
  int v20; // edx
  __int64 v21; // rcx
  bool v22; // sf
  bool v23; // of
  int v24; // eax
  __int64 v25; // rax
  __int64 result; // rax
  bool v27; // sf
  bool v28; // of
  int v29; // edx
  __int64 v30; // rax
  bool v31; // sf
  bool v32; // of
  int v33; // edx
  __int64 v34; // rax
  bool v35; // sf
  bool v36; // of
  int v37; // edx
  __int64 v38; // rax

  v8 = sub_C4FC0(a1, a2, a3);
  v9 = v8;
  v11 = __OFSUB__(*a4, *a3);
  v10 = *a4 - *a3 < 0;
  if ( *a4 == *a3 )
  {
    v12 = a4[1];
    v11 = __OFSUB__(v12, a3[1]);
    v10 = v12 - a3[1] < 0;
  }
  if ( v10 != v11 )
  {
    v13 = *(_QWORD *)a3;
    *(_QWORD *)a3 = *(_QWORD *)a4;
    *(_QWORD *)a4 = v13;
    v9 = v8 + 1;
    v15 = __OFSUB__(*a3, *a2);
    v14 = *a3 - *a2 < 0;
    if ( *a3 == *a2 )
    {
      v16 = a3[1];
      v15 = __OFSUB__(v16, a2[1]);
      v14 = v16 - a2[1] < 0;
    }
    if ( v14 != v15 )
    {
      v17 = *(_QWORD *)a2;
      *(_QWORD *)a2 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v17;
      v9 = v8 + 2;
      v19 = __OFSUB__(*a2, *a1);
      v18 = *a2 - *a1 < 0;
      if ( *a2 == *a1 )
      {
        v20 = a2[1];
        v19 = __OFSUB__(v20, a1[1]);
        v18 = v20 - a1[1] < 0;
      }
      if ( v18 != v19 )
      {
        v21 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a2;
        *(_QWORD *)a2 = v21;
        v9 = v8 + 3;
      }
    }
  }
  v23 = __OFSUB__(*a5, *a4);
  v22 = *a5 - *a4 < 0;
  if ( *a5 == *a4 )
  {
    v24 = a5[1];
    v23 = __OFSUB__(v24, a4[1]);
    v22 = v24 - a4[1] < 0;
  }
  if ( v22 == v23 )
    return v9;
  v25 = *(_QWORD *)a4;
  *(_QWORD *)a4 = *(_QWORD *)a5;
  *(_QWORD *)a5 = v25;
  result = v9 + 1;
  v28 = __OFSUB__(*a4, *a3);
  v27 = *a4 - *a3 < 0;
  if ( *a4 == *a3 )
  {
    v29 = a4[1];
    v28 = __OFSUB__(v29, a3[1]);
    v27 = v29 - a3[1] < 0;
  }
  if ( v27 != v28 )
  {
    v30 = *(_QWORD *)a3;
    *(_QWORD *)a3 = *(_QWORD *)a4;
    *(_QWORD *)a4 = v30;
    result = v9 + 2;
    v32 = __OFSUB__(*a3, *a2);
    v31 = *a3 - *a2 < 0;
    if ( *a3 == *a2 )
    {
      v33 = a3[1];
      v32 = __OFSUB__(v33, a2[1]);
      v31 = v33 - a2[1] < 0;
    }
    if ( v31 != v32 )
    {
      v34 = *(_QWORD *)a2;
      *(_QWORD *)a2 = *(_QWORD *)a3;
      *(_QWORD *)a3 = v34;
      result = v9 + 3;
      v36 = __OFSUB__(*a2, *a1);
      v35 = *a2 - *a1 < 0;
      if ( *a2 == *a1 )
      {
        v37 = a2[1];
        v36 = __OFSUB__(v37, a1[1]);
        v35 = v37 - a1[1] < 0;
      }
      if ( v35 != v36 )
      {
        v38 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a2;
        *(_QWORD *)a2 = v38;
        v9 += 4;
        return v9;
      }
    }
  }
  return result;
}
