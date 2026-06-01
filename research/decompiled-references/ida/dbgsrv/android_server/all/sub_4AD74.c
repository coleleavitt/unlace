/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AD74
// Address: 0x000000000004AD74

//----- (000000000004AD74) ----------------------------------------------------
__int64 *__fastcall sub_4AD74(__int64 *result, __int64 *a2)
{
  __int64 v2; // x9
  __int64 *v3; // x8
  __int64 *v4; // x10
  char v5; // w11
  __int64 ***v6; // x12
  __int64 **v7; // x8
  __int64 **v8; // x8
  __int64 *v9; // x8
  int v10; // w13
  __int64 **v11; // x14
  __int64 v12; // x12
  __int64 v13; // x12
  __int64 v14; // x12
  __int64 v15; // x11
  __int64 v16; // x11
  __int64 v17; // x12
  __int64 *v18; // x11
  __int64 v19; // x11
  __int64 v20; // x12
  __int64 v21; // x11
  __int64 *v22; // x12
  __int64 v23; // x13
  _QWORD *v24; // x13
  __int64 v25; // x14
  _QWORD *v26; // x11
  __int64 v27; // x12
  __int64 v28; // x13
  _QWORD *v29; // x13
  __int64 v30; // x14
  __int64 **v31; // x11
  __int64 *v32; // x9
  __int64 v33; // x10
  _QWORD *v34; // x10
  __int64 **v35; // x11
  __int64 v36; // x12
  __int64 **v37; // x10
  __int64 *v38; // x9
  __int64 **v39; // x9
  __int64 **v40; // x11
  __int64 v41; // x12
  __int64 *v42; // x10
  __int64 *v43; // x8
  __int64 *v44; // x9
  __int64 v45; // x10
  __int64 **v46; // x10
  __int64 v47; // x11
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 *v50; // x9
  __int64 v51; // x10
  _QWORD *v52; // x10
  __int64 v53; // x11

  v2 = *a2;
  if ( *a2 )
  {
    v3 = (__int64 *)a2[1];
    if ( v3 )
    {
      do
      {
        v4 = v3;
        v3 = (__int64 *)*v3;
      }
      while ( v3 );
      v2 = v4[1];
      if ( !v2 )
        goto LABEL_7;
    }
    else
    {
      v4 = a2;
    }
  }
  else
  {
    v4 = a2;
    v2 = a2[1];
    if ( !v2 )
    {
LABEL_7:
      v5 = 0;
      v6 = (__int64 ***)(v4 + 2);
      goto LABEL_10;
    }
  }
  v6 = (__int64 ***)(v4 + 2);
  v5 = 1;
  *(_QWORD *)(v2 + 16) = v4[2];
LABEL_10:
  v7 = (__int64 **)v4[2];
  if ( *v7 == v4 )
  {
    *v7 = (__int64 *)v2;
    if ( v4 == result )
    {
      v9 = nullptr;
      result = (__int64 *)v2;
      goto LABEL_15;
    }
    v8 = *v6 + 1;
  }
  else
  {
    v7[1] = (__int64 *)v2;
    v8 = *v6;
  }
  v9 = *v8;
LABEL_15:
  v10 = *((unsigned __int8 *)v4 + 24);
  if ( v4 != a2 )
  {
    v11 = (__int64 **)a2[2];
    *v6 = v11;
    v12 = *(__int64 **)a2[2] != a2;
    v11[v12] = v4;
    v13 = *a2;
    *v4 = *a2;
    *(_QWORD *)(v13 + 16) = v4;
    v14 = a2[1];
    v4[1] = v14;
    if ( v14 )
      *(_QWORD *)(v14 + 16) = v4;
    if ( result == a2 )
      result = v4;
    *((_BYTE *)v4 + 24) = *((_BYTE *)a2 + 24);
  }
  if ( !v10 || !result )
    return result;
  if ( (v5 & 1) != 0 )
  {
    *(_BYTE *)(v2 + 24) = 1;
    return result;
  }
  while ( 1 )
  {
    v15 = v9[2];
    if ( *(__int64 **)v15 == v9 )
      break;
    if ( *((_BYTE *)v9 + 24) )
    {
      v16 = *v9;
      if ( !*v9 )
        goto LABEL_35;
    }
    else
    {
      *((_BYTE *)v9 + 24) = 1;
      *(_BYTE *)(v15 + 24) = 0;
      v21 = v9[2];
      v22 = *(__int64 **)(v21 + 8);
      v23 = *v22;
      *(_QWORD *)(v21 + 8) = *v22;
      if ( v23 )
        *(_QWORD *)(v23 + 16) = v21;
      v22[2] = *(_QWORD *)(v21 + 16);
      v24 = *(_QWORD **)(v21 + 16);
      v25 = *v24 != v21;
      v24[v25] = v22;
      *v22 = v21;
      *(_QWORD *)(v21 + 16) = v22;
      if ( result == (__int64 *)*v9 )
        result = v9;
      v9 = *(__int64 **)(*v9 + 8);
      v16 = *v9;
      if ( !*v9 )
        goto LABEL_35;
    }
    if ( !*(_BYTE *)(v16 + 24) )
    {
      v17 = v9[1];
      if ( !v17 )
        goto LABEL_69;
LABEL_68:
      if ( *(_BYTE *)(v17 + 24) )
      {
LABEL_69:
        *(_BYTE *)(v16 + 24) = 1;
        v32 = (__int64 *)*v9;
        *((_BYTE *)v9 + 24) = 0;
        v33 = v32[1];
        *v9 = v33;
        if ( v33 )
          *(_QWORD *)(v33 + 16) = v9;
        v32[2] = v9[2];
        v34 = v32 + 2;
        v35 = (__int64 **)v9[2];
        v36 = *v35 != v9;
        v35[v36] = v32;
        v32[1] = (__int64)v9;
        v9[2] = (__int64)v32;
      }
      else
      {
        v34 = v9 + 2;
        v32 = v9;
      }
      v48 = *v34;
      *((_BYTE *)v32 + 24) = *(_BYTE *)(*v34 + 24LL);
      *(_BYTE *)(v48 + 24) = 1;
      *(_BYTE *)(v32[1] + 24) = 1;
      v49 = *v34;
      v50 = *(__int64 **)(*v34 + 8LL);
      v51 = *v50;
      *(_QWORD *)(v49 + 8) = *v50;
      if ( v51 )
        *(_QWORD *)(v51 + 16) = v49;
      v50[2] = *(_QWORD *)(v49 + 16);
      v52 = *(_QWORD **)(v49 + 16);
      v53 = *v52 != v49;
      v52[v53] = v50;
      *v50 = v49;
      *(_QWORD *)(v49 + 16) = v50;
      return result;
    }
LABEL_35:
    v17 = v9[1];
    if ( v17 && !*(_BYTE *)(v17 + 24) )
      goto LABEL_68;
    v18 = (__int64 *)v9[2];
    *((_BYTE *)v9 + 24) = 0;
    if ( v18 == result )
    {
      v18 = result;
LABEL_66:
      *((_BYTE *)v18 + 24) = 1;
      return result;
    }
LABEL_45:
    if ( !*((_BYTE *)v18 + 24) )
      goto LABEL_66;
    v9 = *(__int64 **)(v18[2] + 8LL * (*(_QWORD *)v18[2] == (_QWORD)v18));
  }
  if ( *((_BYTE *)v9 + 24) )
  {
    v19 = *v9;
    if ( *v9 )
    {
LABEL_41:
      if ( !*(_BYTE *)(v19 + 24) )
        goto LABEL_84;
    }
  }
  else
  {
    *((_BYTE *)v9 + 24) = 1;
    *(_BYTE *)(v15 + 24) = 0;
    v26 = (_QWORD *)v9[2];
    v27 = *v26;
    v28 = *(_QWORD *)(*v26 + 8LL);
    *v26 = v28;
    if ( v28 )
      *(_QWORD *)(v28 + 16) = v26;
    *(_QWORD *)(v27 + 16) = v26[2];
    v29 = (_QWORD *)v26[2];
    v30 = (_QWORD *)*v29 != v26;
    v29[v30] = v27;
    *(_QWORD *)(v27 + 8) = v26;
    v26[2] = v27;
    v31 = (__int64 **)v9[1];
    if ( result == (__int64 *)v31 )
      result = v9;
    v9 = *v31;
    v19 = **v31;
    if ( v19 )
      goto LABEL_41;
  }
  v20 = v9[1];
  if ( !v20 || *(_BYTE *)(v20 + 24) )
  {
    v18 = (__int64 *)v9[2];
    *((_BYTE *)v9 + 24) = 0;
    if ( v18 == result )
      goto LABEL_66;
    goto LABEL_45;
  }
  if ( !v19 )
    goto LABEL_78;
  if ( *(_BYTE *)(v19 + 24) )
  {
    v20 = v9[1];
LABEL_78:
    *(_BYTE *)(v20 + 24) = 1;
    v37 = (__int64 **)v9[1];
    *((_BYTE *)v9 + 24) = 0;
    v38 = *v37;
    v9[1] = (__int64)*v37;
    if ( v38 )
      v38[2] = (__int64)v9;
    v37[2] = (__int64 *)v9[2];
    v39 = v37 + 2;
    v40 = (__int64 **)v9[2];
    v41 = *v40 != v9;
    v40[v41] = (__int64 *)v37;
    *v37 = v9;
    v9[2] = (__int64)v37;
    v9 = (__int64 *)v37;
  }
  else
  {
LABEL_84:
    v39 = (__int64 **)(v9 + 2);
  }
  v42 = *v39;
  *((_BYTE *)v9 + 24) = *((_BYTE *)*v39 + 24);
  *((_BYTE *)v42 + 24) = 1;
  *(_BYTE *)(*v9 + 24) = 1;
  v43 = *v39;
  v44 = (__int64 *)**v39;
  v45 = v44[1];
  *v43 = v45;
  if ( v45 )
    *(_QWORD *)(v45 + 16) = v43;
  v44[2] = v43[2];
  v46 = (__int64 **)v43[2];
  v47 = *v46 != v43;
  v46[v47] = v44;
  v44[1] = (__int64)v43;
  v43[2] = (__int64)v44;
  return result;
}
