/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C430
// Address: 0x000000000004C430

//----- (000000000004C430) ----------------------------------------------------
__int64 *__fastcall sub_4C430(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r11
  __int64 *v3; // rax
  __int64 *v4; // rdx
  __int64 ***v5; // r9
  char v6; // r8
  __int64 **v7; // rax
  __int64 **v8; // rax
  __int64 *result; // rax
  char v10; // r10
  __int64 **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // dl
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 **v29; // rdx
  __int64 **v30; // rdx
  __int64 *v31; // rcx
  __int64 ***v32; // rcx
  __int64 **v33; // rdx
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 v37; // rdx

  v2 = *a2;
  if ( *a2 )
  {
    v3 = (__int64 *)a2[1];
    if ( !v3 )
    {
      v4 = a2;
      goto LABEL_9;
    }
    do
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
    }
    while ( v3 );
  }
  else
  {
    v4 = a2;
  }
  v2 = v4[1];
  if ( !v2 )
  {
    v5 = (__int64 ***)(v4 + 2);
    v6 = 0;
    v2 = 0;
    goto LABEL_10;
  }
LABEL_9:
  *(_QWORD *)(v2 + 16) = v4[2];
  v6 = 1;
  v5 = (__int64 ***)(v4 + 2);
LABEL_10:
  v7 = (__int64 **)v4[2];
  if ( *v7 == v4 )
  {
    *v7 = (__int64 *)v2;
    if ( v4 == a1 )
    {
      result = nullptr;
      a1 = (__int64 *)v2;
      goto LABEL_15;
    }
    v8 = *v5 + 1;
  }
  else
  {
    v7[1] = (__int64 *)v2;
    v8 = *v5;
  }
  result = *v8;
LABEL_15:
  v10 = *((_BYTE *)v4 + 24);
  if ( v4 != a2 )
  {
    v11 = (__int64 **)a2[2];
    *v5 = v11;
    v11[*(_QWORD *)a2[2] != (_QWORD)a2] = v4;
    v12 = *a2;
    *v4 = *a2;
    *(_QWORD *)(v12 + 16) = v4;
    v13 = a2[1];
    v4[1] = v13;
    if ( v13 )
      *(_QWORD *)(v13 + 16) = v4;
    *((_BYTE *)v4 + 24) = *((_BYTE *)a2 + 24);
    if ( a1 == a2 )
      a1 = v4;
  }
  if ( !v10 || !a1 )
    return result;
  if ( v6 )
  {
    *(_BYTE *)(v2 + 24) = 1;
    return result;
  }
  while ( 1 )
  {
    v14 = result[2];
    v15 = *((_BYTE *)result + 24);
    if ( *(__int64 **)v14 == result )
      break;
    if ( !v15 )
    {
      *((_BYTE *)result + 24) = 1;
      *(_BYTE *)(v14 + 24) = 0;
      v16 = result[2];
      v17 = *(__int64 **)(v16 + 8);
      v18 = *v17;
      *(_QWORD *)(v16 + 8) = *v17;
      if ( v18 )
        *(_QWORD *)(v18 + 16) = v16;
      v17[2] = *(_QWORD *)(v16 + 16);
      *(_QWORD *)(*(_QWORD *)(v16 + 16) + 8LL * (**(_QWORD **)(v16 + 16) != v16)) = v17;
      *v17 = v16;
      *(_QWORD *)(v16 + 16) = v17;
      if ( a1 == (__int64 *)*result )
        a1 = result;
      result = *(__int64 **)(*result + 8);
    }
    v19 = *result;
    if ( *result && !*(_BYTE *)(v19 + 24) )
    {
      v20 = result[1];
      if ( !v20 )
        goto LABEL_56;
LABEL_55:
      if ( *(_BYTE *)(v20 + 24) )
      {
LABEL_56:
        *(_BYTE *)(v19 + 24) = 1;
        *((_BYTE *)result + 24) = 0;
        v27 = (_QWORD *)*result;
        v28 = *(_QWORD *)(*result + 8);
        *result = v28;
        if ( v28 )
          *(_QWORD *)(v28 + 16) = result;
        v29 = (__int64 **)(v27 + 2);
        v27[2] = result[2];
        *(_QWORD *)(result[2] + 8LL * (*(_QWORD *)result[2] != (_QWORD)result)) = v27;
        v27[1] = result;
        result[2] = (__int64)v27;
      }
      else
      {
        v29 = (__int64 **)(result + 2);
        v27 = result;
      }
      v36 = *v29;
      *((_BYTE *)v27 + 24) = *((_BYTE *)*v29 + 24);
      *((_BYTE *)v36 + 24) = 1;
      *(_BYTE *)(v27[1] + 24LL) = 1;
      result = *v29;
      v34 = (__int64 *)(*v29)[1];
      v37 = *v34;
      result[1] = *v34;
      if ( v37 )
        *(_QWORD *)(v37 + 16) = result;
      v34[2] = result[2];
      *(_QWORD *)(result[2] + 8LL * (*(_QWORD *)result[2] != (_QWORD)result)) = v34;
      *v34 = (__int64)result;
      goto LABEL_73;
    }
    v20 = result[1];
    if ( v20 && !*(_BYTE *)(v20 + 24) )
      goto LABEL_55;
    *((_BYTE *)result + 24) = 0;
    result = (__int64 *)result[2];
    if ( result == a1 )
    {
      *((_BYTE *)a1 + 24) = 1;
      return result;
    }
    if ( !*((_BYTE *)result + 24) )
    {
      *((_BYTE *)result + 24) = 1;
      return result;
    }
LABEL_24:
    result = *(__int64 **)(result[2] + 8LL * (*(_QWORD *)result[2] == (_QWORD)result));
  }
  if ( !v15 )
  {
    *((_BYTE *)result + 24) = 1;
    *(_BYTE *)(v14 + 24) = 0;
    v21 = (_QWORD *)result[2];
    v22 = *v21;
    v23 = *(_QWORD *)(*v21 + 8LL);
    *v21 = v23;
    if ( v23 )
      *(_QWORD *)(v23 + 16) = v21;
    *(_QWORD *)(v22 + 16) = v21[2];
    *(_QWORD *)(v21[2] + 8LL * (*(_QWORD *)v21[2] != (_QWORD)v21)) = v22;
    *(_QWORD *)(v22 + 8) = v21;
    v21[2] = v22;
    v24 = (__int64 *)result[1];
    if ( a1 == v24 )
      a1 = result;
    result = (__int64 *)*v24;
  }
  v25 = *result;
  if ( *result && !*(_BYTE *)(v25 + 24) )
    goto LABEL_65;
  v26 = result[1];
  if ( !v26 || *(_BYTE *)(v26 + 24) )
  {
    *((_BYTE *)result + 24) = 0;
    result = (__int64 *)result[2];
    if ( result == a1 || !*((_BYTE *)result + 24) )
    {
      *((_BYTE *)result + 24) = 1;
      return result;
    }
    goto LABEL_24;
  }
  if ( !v25 )
    goto LABEL_62;
  if ( *(_BYTE *)(v25 + 24) )
  {
    v26 = result[1];
LABEL_62:
    *(_BYTE *)(v26 + 24) = 1;
    *((_BYTE *)result + 24) = 0;
    v30 = (__int64 **)result[1];
    v31 = *v30;
    result[1] = (__int64)*v30;
    if ( v31 )
      v31[2] = (__int64)result;
    v32 = (__int64 ***)(v30 + 2);
    v30[2] = (__int64 *)result[2];
    *(_QWORD *)(result[2] + 8LL * (*(_QWORD *)result[2] != (_QWORD)result)) = v30;
    *v30 = result;
    result[2] = (__int64)v30;
    result = (__int64 *)v30;
  }
  else
  {
LABEL_65:
    v32 = (__int64 ***)(result + 2);
  }
  v33 = *v32;
  *((_BYTE *)result + 24) = *((_BYTE *)*v32 + 24);
  *((_BYTE *)v33 + 24) = 1;
  *(_BYTE *)(*result + 24) = 1;
  result = (__int64 *)*v32;
  v34 = **v32;
  v35 = v34[1];
  *result = v35;
  if ( v35 )
    *(_QWORD *)(v35 + 16) = result;
  v34[2] = result[2];
  *(_QWORD *)(result[2] + 8LL * (*(_QWORD *)result[2] != (_QWORD)result)) = v34;
  v34[1] = (__int64)result;
LABEL_73:
  result[2] = (__int64)v34;
  return result;
}
