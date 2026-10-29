/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F420
// Address: 0x0002F420

//----- (0002F420) --------------------------------------------------------
int **__cdecl sub_2F420(int **a1, int **a2)
{
  int *v2; // edx
  int **v3; // esi
  int *v4; // eax
  char v5; // bl
  int **v6; // edi
  int ***v7; // eax
  int ***v8; // eax
  int **v9; // ebx
  int **result; // eax
  int ***v11; // edi
  int *v12; // ecx
  int *v13; // edi
  char v14; // bl
  int *v15; // edx
  char v16; // bl
  int *v17; // edx
  int *v18; // esi
  int v19; // edi
  int *v20; // edx
  int *v21; // esi
  int *v22; // edx
  int v23; // esi
  int v24; // edi
  int ***v25; // ecx
  int *v26; // edx
  int *v27; // esi
  int *v28; // ecx
  int *v29; // edx
  int ***v30; // edx
  int ***v31; // edx
  int *v32; // ecx
  int ***v33; // ecx
  int **v34; // edx
  int *v35; // ecx
  int *v36; // edx
  int **v37; // eax
  int v38; // edx
  char v39; // [esp+Bh] [ebp-1Dh]
  int **v40; // [esp+Ch] [ebp-1Ch]
  int **v41; // [esp+Ch] [ebp-1Ch]
  int **v42; // [esp+Ch] [ebp-1Ch]
  int ****v43; // [esp+10h] [ebp-18h]
  char v44; // [esp+14h] [ebp-14h]

  v2 = *a2;
  v3 = (int **)a2;
  if ( *a2 )
  {
    v4 = (_DWORD *)a2[1];
    if ( !v4 )
    {
      v3 = (int **)a2;
      goto LABEL_7;
    }
    do
    {
      v3 = (int **)v4;
      v4 = (_DWORD *)*v4;
    }
    while ( v4 );
  }
  v2 = (int)v3[1];
  if ( !v2 )
  {
    v43 = (int ****)(v3 + 2);
    v5 = 0;
    v2 = 0;
    goto LABEL_8;
  }
LABEL_7:
  *(_DWORD *)(v2 + 8) = v3[2];
  v5 = 1;
  v43 = (int ****)(v3 + 2);
LABEL_8:
  v6 = a1;
  v7 = v3[2];
  v44 = v5;
  if ( (int **)*v7 == v3 )
  {
    *v7 = v2;
    if ( v3 == a1 )
    {
      v9 = (int **)a2;
      result = nullptr;
      v6 = (int **)v2;
      goto LABEL_13;
    }
    v8 = *v43 + 1;
  }
  else
  {
    v7[1] = v2;
    v8 = *v43;
  }
  v9 = (int **)a2;
  result = *v8;
LABEL_13:
  v39 = *((_BYTE *)v3 + 12);
  if ( v3 == v9 )
  {
    v14 = v44;
    if ( !v39 )
      return result;
  }
  else
  {
    v40 = v6;
    v11 = (int ***)v9[2];
    *v43 = v11;
    v11[*v9[2] != (_DWORD)v9] = v3;
    v12 = (int)*v9;
    *v3 = *v9;
    *(_DWORD *)(v12 + 8) = v3;
    v13 = (int)v9[1];
    v3[1] = (int *)v13;
    if ( v13 )
      *(_DWORD *)(v13 + 8) = v3;
    *((_BYTE *)v3 + 12) = *((_BYTE *)v9 + 12);
    v6 = v40;
    if ( v40 == v9 )
      v6 = v3;
    v14 = v44;
    if ( !v39 )
      return result;
  }
  if ( !v6 )
    return result;
  if ( v14 )
  {
    *(_BYTE *)(v2 + 12) = 1;
    return result;
  }
  while ( 1 )
  {
    v15 = result[2];
    v16 = *((_BYTE *)result + 12);
    if ( (int **)*v15 == result )
      break;
    if ( !v16 )
    {
      v41 = v6;
      *((_BYTE *)result + 12) = 1;
      *((_BYTE *)v15 + 12) = 0;
      v17 = result[2];
      v18 = (int *)v17[1];
      v19 = *v18;
      v17[1] = *v18;
      if ( v19 )
        *(_DWORD *)(v19 + 8) = v17;
      v18[2] = v17[2];
      *(_DWORD *)(v17[2] + 4 * (*(_DWORD *)v17[2] != (_DWORD)v17)) = v18;
      *v18 = (int)v17;
      v17[2] = (int)v18;
      v6 = v41;
      if ( v41 == (int **)*result )
        v6 = result;
      result = (int **)(*result)[1];
    }
    v20 = *result;
    if ( *result && !*((_BYTE *)v20 + 12) )
    {
      v21 = result[1];
      if ( !v21 )
        goto LABEL_56;
LABEL_55:
      if ( *((_BYTE *)v21 + 12) )
      {
LABEL_56:
        *((_BYTE *)v20 + 12) = 1;
        *((_BYTE *)result + 12) = 0;
        v28 = *result;
        v29 = (int *)(*result)[1];
        *result = v29;
        if ( v29 )
          v29[2] = (int)result;
        v30 = (int ***)(v28 + 2);
        v28[2] = (int)result[2];
        result[2][*result[2] != (_DWORD)result] = (int)v28;
        v28[1] = (int)result;
        result[2] = v28;
      }
      else
      {
        v30 = (int ***)(result + 2);
        v28 = (int *)result;
      }
      v37 = *v30;
      *((_BYTE *)v28 + 12) = *((_BYTE *)*v30 + 12);
      *((_BYTE *)v37 + 12) = 1;
      *(_BYTE *)(v28[1] + 12) = 1;
      result = *v30;
      v35 = (*v30)[1];
      v38 = *v35;
      result[1] = (int *)*v35;
      if ( v38 )
        *(_DWORD *)(v38 + 8) = result;
      v35[2] = (int)result[2];
      result[2][*result[2] != (_DWORD)result] = (int)v35;
      *v35 = (int)result;
      goto LABEL_73;
    }
    v21 = result[1];
    if ( v21 && !*((_BYTE *)v21 + 12) )
      goto LABEL_55;
    *((_BYTE *)result + 12) = 0;
    result = (int **)result[2];
    if ( result == v6 )
    {
      *((_BYTE *)v6 + 12) = 1;
      return v6;
    }
    if ( !*((_BYTE *)result + 12) )
      goto LABEL_49;
LABEL_22:
    result = (int **)result[2][*result[2] == (_DWORD)result];
  }
  if ( !v16 )
  {
    v42 = v6;
    *((_BYTE *)result + 12) = 1;
    *((_BYTE *)v15 + 12) = 0;
    v22 = result[2];
    v23 = *v22;
    v24 = *(_DWORD *)(*v22 + 4);
    *v22 = v24;
    if ( v24 )
      *(_DWORD *)(v24 + 8) = v22;
    *(_DWORD *)(v23 + 8) = v22[2];
    *(_DWORD *)(v22[2] + 4 * (*(_DWORD *)v22[2] != (_DWORD)v22)) = v23;
    *(_DWORD *)(v23 + 4) = v22;
    v22[2] = v23;
    v25 = (int ***)result[1];
    v6 = v42;
    if ( v42 == (int **)v25 )
      v6 = result;
    result = *v25;
  }
  v26 = *result;
  if ( *result && !*((_BYTE *)v26 + 12) )
    goto LABEL_65;
  v27 = result[1];
  if ( !v27 || *((_BYTE *)v27 + 12) )
  {
    *((_BYTE *)result + 12) = 0;
    result = (int **)result[2];
    if ( result == v6 || !*((_BYTE *)result + 12) )
    {
LABEL_49:
      *((_BYTE *)result + 12) = 1;
      return result;
    }
    goto LABEL_22;
  }
  if ( !v26 )
    goto LABEL_62;
  if ( *((_BYTE *)v26 + 12) )
  {
    v27 = result[1];
LABEL_62:
    *((_BYTE *)v27 + 12) = 1;
    *((_BYTE *)result + 12) = 0;
    v31 = (int ***)result[1];
    v32 = (int *)*v31;
    result[1] = (int *)*v31;
    if ( v32 )
      v32[2] = (int)result;
    v33 = v31 + 2;
    v31[2] = (int **)result[2];
    result[2][*result[2] != (_DWORD)result] = (int)v31;
    *v31 = result;
    result[2] = (int *)v31;
    result = (int **)v31;
  }
  else
  {
LABEL_65:
    v33 = (int ***)(result + 2);
  }
  v34 = *v33;
  *((_BYTE *)result + 12) = *((_BYTE *)*v33 + 12);
  *((_BYTE *)v34 + 12) = 1;
  *((_BYTE *)*result + 12) = 1;
  result = *v33;
  v35 = **v33;
  v36 = (int *)v35[1];
  *result = v36;
  if ( v36 )
    v36[2] = (int)result;
  v35[2] = (int)result[2];
  result[2][*result[2] != (_DWORD)result] = (int)v35;
  v35[1] = (int)result;
LABEL_73:
  result[2] = v35;
  return result;
}
// 2F420: too many cbuild loops
