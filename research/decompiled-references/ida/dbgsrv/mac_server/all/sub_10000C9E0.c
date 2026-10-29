/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C9E0
// Address: 0x000000010000C9E0

//----- (000000010000C9E0) ----------------------------------------------------
__int64 *__fastcall sub_10000C9E0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 **v5; // rax
  char v6; // r8
  __int64 **v7; // rax
  __int64 *result; // rax
  char v9; // r9
  _QWORD *v10; // r10
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rsi
  _QWORD *v18; // rsi
  __int64 *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  _QWORD *v24; // rsi
  __int64 **v25; // rcx
  __int64 v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 **v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 **v35; // rdx
  __int64 *v36; // rcx
  __int64 v37; // rdx
  __int64 **v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 **v41; // rdx

  v2 = *a2;
  v3 = a2;
  if ( *a2 )
  {
    v4 = (__int64 *)a2[1];
    v3 = a2;
    if ( !v4 )
      goto LABEL_5;
    do
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
  }
  v2 = v3[1];
  if ( !v2 )
  {
    v5 = (__int64 **)v3[2];
    v6 = 1;
    v2 = 0;
    if ( *v5 != v3 )
      goto LABEL_6;
    goto LABEL_8;
  }
LABEL_5:
  v5 = (__int64 **)v3[2];
  *(_QWORD *)(v2 + 16) = v5;
  v6 = 0;
  if ( *v5 != v3 )
  {
LABEL_6:
    v5[1] = (__int64 *)v2;
    v7 = (__int64 **)v3[2];
    goto LABEL_10;
  }
LABEL_8:
  *v5 = (__int64 *)v2;
  if ( v3 == a1 )
  {
    result = nullptr;
    a1 = (__int64 *)v2;
    goto LABEL_11;
  }
  v7 = (__int64 **)(v3[2] + 8);
LABEL_10:
  result = *v7;
LABEL_11:
  v9 = *((_BYTE *)v3 + 24);
  if ( v3 != a2 )
  {
    v10 = (_QWORD *)a2[2];
    v3[2] = (__int64)v10;
    v10[*v10 != (_QWORD)a2] = v3;
    v11 = *a2;
    *v3 = *a2;
    *(_QWORD *)(v11 + 16) = v3;
    v12 = a2[1];
    v3[1] = v12;
    if ( v12 )
      *(_QWORD *)(v12 + 16) = v3;
    *((_BYTE *)v3 + 24) = *((_BYTE *)a2 + 24);
    if ( a1 == a2 )
      a1 = v3;
  }
  if ( !a1 || !v9 )
    return result;
  if ( !v6 )
  {
    *(_BYTE *)(v2 + 24) = 1;
    return result;
  }
  while ( 1 )
  {
    v13 = result[2];
    v14 = *((_BYTE *)result + 24);
    if ( *(__int64 **)v13 == result )
      break;
    if ( !v14 )
    {
      *((_BYTE *)result + 24) = 1;
      *(_BYTE *)(v13 + 24) = 0;
      v15 = result[2];
      v16 = *(__int64 **)(v15 + 8);
      v17 = *v16;
      *(_QWORD *)(v15 + 8) = *v16;
      if ( v17 )
        *(_QWORD *)(v17 + 16) = v15;
      v18 = *(_QWORD **)(v15 + 16);
      v16[2] = (__int64)v18;
      v18[*v18 != v15] = v16;
      *v16 = v15;
      *(_QWORD *)(v15 + 16) = v16;
      if ( a1 == (__int64 *)*result )
        a1 = result;
      result = *(__int64 **)(*result + 8);
    }
    v19 = (__int64 *)*result;
    if ( *result && *((_BYTE *)v19 + 24) != 1 )
    {
      v20 = result[1];
      if ( !v20 )
        goto LABEL_51;
LABEL_50:
      if ( *(_BYTE *)(v20 + 24) == 1 )
      {
LABEL_51:
        *((_BYTE *)v19 + 24) = 1;
        *((_BYTE *)result + 24) = 0;
        v29 = (__int64 *)*result;
        v30 = *(_QWORD *)(*result + 8);
        *result = v30;
        if ( v30 )
          *(_QWORD *)(v30 + 16) = result;
        v31 = (__int64 **)result[2];
        v29[2] = (__int64)v31;
        v31[*v31 != result] = v29;
        v29[1] = (__int64)result;
        result[2] = (__int64)v29;
      }
      else
      {
        v29 = result;
      }
      v32 = v29[2];
      *((_BYTE *)v29 + 24) = *(_BYTE *)(v32 + 24);
      *(_BYTE *)(v32 + 24) = 1;
      *(_BYTE *)(v29[1] + 24) = 1;
      result = (__int64 *)v29[2];
      v33 = (__int64 *)result[1];
      v34 = *v33;
      result[1] = *v33;
      if ( v34 )
        *(_QWORD *)(v34 + 16) = result;
      v35 = (__int64 **)result[2];
      v33[2] = (__int64)v35;
      v35[*v35 != result] = v33;
      *v33 = (__int64)result;
      goto LABEL_69;
    }
    v20 = result[1];
    if ( v20 && *(_BYTE *)(v20 + 24) != 1 )
      goto LABEL_50;
    *((_BYTE *)result + 24) = 0;
    result = (__int64 *)result[2];
    if ( result == a1 || !*((_BYTE *)result + 24) )
      goto LABEL_47;
LABEL_20:
    result = *(__int64 **)(result[2] + 8LL * (*(_QWORD *)result[2] == (_QWORD)result));
  }
  if ( !v14 )
  {
    *((_BYTE *)result + 24) = 1;
    *(_BYTE *)(v13 + 24) = 0;
    v21 = (_QWORD *)result[2];
    v22 = *v21;
    v23 = *(_QWORD *)(*v21 + 8LL);
    *v21 = v23;
    if ( v23 )
      *(_QWORD *)(v23 + 16) = v21;
    v24 = (_QWORD *)v21[2];
    *(_QWORD *)(v22 + 16) = v24;
    v24[*v24 != (_QWORD)v21] = v22;
    *(_QWORD *)(v22 + 8) = v21;
    v21[2] = v22;
    v25 = (__int64 **)result[1];
    if ( a1 == (__int64 *)v25 )
      a1 = result;
    result = *v25;
  }
  v26 = *result;
  if ( *result )
  {
    v27 = *(_BYTE *)(v26 + 24);
    if ( v27 != 1 )
      goto LABEL_60;
  }
  v28 = result[1];
  if ( !v28 || *(_BYTE *)(v28 + 24) == 1 )
  {
    *((_BYTE *)result + 24) = 0;
    result = (__int64 *)result[2];
    if ( *((_BYTE *)result + 24) != 1 || result == a1 )
    {
LABEL_47:
      *((_BYTE *)result + 24) = 1;
      return result;
    }
    goto LABEL_20;
  }
  if ( !v26 )
    goto LABEL_62;
  v27 = *(_BYTE *)(v26 + 24);
LABEL_60:
  if ( (v27 & 1) != 0 )
  {
    v28 = result[1];
LABEL_62:
    *(_BYTE *)(v28 + 24) = 1;
    *((_BYTE *)result + 24) = 0;
    v36 = (__int64 *)result[1];
    v37 = *v36;
    result[1] = *v36;
    if ( v37 )
      *(_QWORD *)(v37 + 16) = result;
    v38 = (__int64 **)result[2];
    v36[2] = (__int64)v38;
    v38[*v38 != result] = v36;
    *v36 = (__int64)result;
    result[2] = (__int64)v36;
  }
  else
  {
    v36 = result;
  }
  v39 = v36[2];
  *((_BYTE *)v36 + 24) = *(_BYTE *)(v39 + 24);
  *(_BYTE *)(v39 + 24) = 1;
  *(_BYTE *)(*v36 + 24) = 1;
  result = (__int64 *)v36[2];
  v33 = (__int64 *)*result;
  v40 = *(_QWORD *)(*result + 8);
  *result = v40;
  if ( v40 )
    *(_QWORD *)(v40 + 16) = result;
  v41 = (__int64 **)result[2];
  v33[2] = (__int64)v41;
  v41[*v41 != result] = v33;
  v33[1] = (__int64)result;
LABEL_69:
  result[2] = (__int64)v33;
  return result;
}
