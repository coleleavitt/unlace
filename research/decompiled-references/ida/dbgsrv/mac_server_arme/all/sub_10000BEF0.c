/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BEF0
// Address: 0x000000010000BEF0

//----- (000000010000BEF0) ----------------------------------------------------
__int64 *__fastcall sub_10000BEF0(__int64 *result, __int64 *a2)
{
  __int64 v2; // x9
  __int64 *v3; // x10
  __int64 *v4; // x8
  __int64 **v5; // x8
  int v6; // w11
  __int64 **v7; // x8
  __int64 *v8; // x8
  int v9; // w12
  _QWORD *v10; // x13
  __int64 v11; // x13
  __int64 v12; // x13
  __int64 *v13; // x8
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 *v17; // x11
  __int64 v18; // x12
  _QWORD *v19; // x12
  __int64 *v20; // x10
  __int64 v21; // x11
  _QWORD *v22; // x10
  __int64 v23; // x11
  __int64 v24; // x12
  _QWORD *v25; // x12
  __int64 **v26; // x10
  __int64 v27; // x10
  __int64 v28; // x11
  __int64 *v29; // x9
  __int64 v30; // x10
  __int64 **v31; // x10
  __int64 *v32; // x9
  __int64 v33; // x10
  __int64 **v34; // x10
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 *v37; // x9
  __int64 v38; // x10
  _QWORD *v39; // x10
  __int64 v40; // x8
  _QWORD *v41; // x8
  __int64 v42; // x9
  __int64 v43; // x10
  _QWORD *v44; // x10

  v2 = *a2;
  v3 = a2;
  if ( *a2 )
  {
    v4 = (__int64 *)a2[1];
    if ( !v4 )
    {
      v3 = a2;
      goto LABEL_7;
    }
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
    goto LABEL_8;
  }
LABEL_7:
  v6 = 0;
  v5 = (__int64 **)v3[2];
  *(_QWORD *)(v2 + 16) = v5;
LABEL_8:
  if ( *v5 == v3 )
  {
    *v5 = (__int64 *)v2;
    if ( v3 == result )
    {
      v8 = nullptr;
      result = (__int64 *)v2;
      goto LABEL_13;
    }
    v7 = (__int64 **)(v3[2] + 8);
  }
  else
  {
    v5[1] = (__int64 *)v2;
    v7 = (__int64 **)v3[2];
  }
  v8 = *v7;
LABEL_13:
  v9 = *((unsigned __int8 *)v3 + 24);
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
    if ( result == a2 )
      result = v3;
  }
  if ( !result || !v9 )
    return result;
  if ( !v6 )
  {
    *(_BYTE *)(v2 + 24) = 1;
    return result;
  }
  while ( 1 )
  {
    v15 = v8[2];
    if ( *(__int64 **)v15 == v8 )
      break;
    if ( (v8[3] & 1) == 0 )
    {
      *((_BYTE *)v8 + 24) = 1;
      *(_BYTE *)(v15 + 24) = 0;
      v16 = v8[2];
      v17 = *(__int64 **)(v16 + 8);
      v18 = *v17;
      *(_QWORD *)(v16 + 8) = *v17;
      if ( v18 )
        *(_QWORD *)(v18 + 16) = v16;
      v19 = *(_QWORD **)(v16 + 16);
      v17[2] = (__int64)v19;
      v19[*v19 != v16] = v17;
      *v17 = v16;
      *(_QWORD *)(v16 + 16) = v17;
      if ( result == (__int64 *)*v8 )
        result = v8;
      v8 = *(__int64 **)(*v8 + 8);
    }
    v20 = (__int64 *)*v8;
    if ( *v8 && *((_BYTE *)v20 + 24) != 1 )
    {
      v21 = v8[1];
      if ( !v21 )
        goto LABEL_63;
LABEL_62:
      if ( *(_BYTE *)(v21 + 24) == 1 )
      {
LABEL_63:
        *((_BYTE *)v20 + 24) = 1;
        *((_BYTE *)v8 + 24) = 0;
        v32 = (__int64 *)*v8;
        v33 = *(_QWORD *)(*v8 + 8);
        *v8 = v33;
        if ( v33 )
          *(_QWORD *)(v33 + 16) = v8;
        v34 = (__int64 **)v8[2];
        v32[2] = (__int64)v34;
        v34[*v34 != v8] = v32;
        v32[1] = (__int64)v8;
        v8[2] = (__int64)v32;
      }
      else
      {
        v32 = v8;
      }
      v35 = v32[2];
      *((_BYTE *)v32 + 24) = *(_BYTE *)(v35 + 24);
      *(_BYTE *)(v35 + 24) = 1;
      *(_BYTE *)(v32[1] + 24) = 1;
      v36 = v32[2];
      v37 = *(__int64 **)(v36 + 8);
      v38 = *v37;
      *(_QWORD *)(v36 + 8) = *v37;
      if ( v38 )
        *(_QWORD *)(v38 + 16) = v36;
      v39 = *(_QWORD **)(v36 + 16);
      v37[2] = (__int64)v39;
      v39[*v39 != v36] = v37;
      *v37 = v36;
      *(_QWORD *)(v36 + 16) = v37;
      return result;
    }
    v21 = v8[1];
    if ( v21 && *(_BYTE *)(v21 + 24) != 1 )
      goto LABEL_62;
    *((_BYTE *)v8 + 24) = 0;
    v13 = (__int64 *)v8[2];
    if ( v13 == result || (v13[3] & 1) == 0 )
      goto LABEL_60;
LABEL_26:
    v8 = *(__int64 **)(v13[2] + 8LL * (*(_QWORD *)v13[2] == (_QWORD)v13));
  }
  if ( (v8[3] & 1) == 0 )
  {
    *((_BYTE *)v8 + 24) = 1;
    *(_BYTE *)(v15 + 24) = 0;
    v22 = (_QWORD *)v8[2];
    v23 = *v22;
    v24 = *(_QWORD *)(*v22 + 8LL);
    *v22 = v24;
    if ( v24 )
      *(_QWORD *)(v24 + 16) = v22;
    v25 = (_QWORD *)v22[2];
    *(_QWORD *)(v23 + 16) = v25;
    v25[*v25 != (_QWORD)v22] = v23;
    *(_QWORD *)(v23 + 8) = v22;
    v22[2] = v23;
    v26 = (__int64 **)v8[1];
    if ( result == (__int64 *)v26 )
      result = v8;
    v8 = *v26;
  }
  v27 = *v8;
  if ( *v8 && *(_BYTE *)(v27 + 24) != 1 )
    goto LABEL_70;
  v28 = v8[1];
  if ( !v28 || *(_BYTE *)(v28 + 24) == 1 )
  {
    *((_BYTE *)v8 + 24) = 0;
    v13 = (__int64 *)v8[2];
    if ( *((_BYTE *)v13 + 24) != 1 || v13 == result )
    {
LABEL_60:
      *((_BYTE *)v13 + 24) = 1;
      return result;
    }
    goto LABEL_26;
  }
  if ( !v27 )
    goto LABEL_54;
  if ( (*(_BYTE *)(v27 + 24) & 1) != 0 )
  {
    v28 = v8[1];
LABEL_54:
    *(_BYTE *)(v28 + 24) = 1;
    *((_BYTE *)v8 + 24) = 0;
    v29 = (__int64 *)v8[1];
    v30 = *v29;
    v8[1] = *v29;
    if ( v30 )
      *(_QWORD *)(v30 + 16) = v8;
    v31 = (__int64 **)v8[2];
    v29[2] = (__int64)v31;
    v31[*v31 != v8] = v29;
    *v29 = (__int64)v8;
    v8[2] = (__int64)v29;
  }
  else
  {
LABEL_70:
    v29 = v8;
  }
  v40 = v29[2];
  *((_BYTE *)v29 + 24) = *(_BYTE *)(v40 + 24);
  *(_BYTE *)(v40 + 24) = 1;
  *(_BYTE *)(*v29 + 24) = 1;
  v41 = (_QWORD *)v29[2];
  v42 = *v41;
  v43 = *(_QWORD *)(*v41 + 8LL);
  *v41 = v43;
  if ( v43 )
    *(_QWORD *)(v43 + 16) = v41;
  v44 = (_QWORD *)v41[2];
  *(_QWORD *)(v42 + 16) = v44;
  v44[*v44 != (_QWORD)v41] = v42;
  *(_QWORD *)(v42 + 8) = v41;
  v41[2] = v42;
  return result;
}
