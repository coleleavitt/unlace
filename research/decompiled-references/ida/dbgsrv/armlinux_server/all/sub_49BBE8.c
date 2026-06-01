/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49BBE8
// Address: 0x000000000049BBE8

//----- (000000000049BBE8) ----------------------------------------------------
unsigned __int64 __fastcall sub_49BBE8(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int64 v3; // x22
  char v4; // w26
  int v6; // w23
  unsigned __int64 v7; // x24
  int v8; // w27
  unsigned __int8 *v9; // x25
  unsigned __int8 v10; // w19
  const unsigned __int16 *v11; // x1
  unsigned __int64 v12; // x20
  bool v13; // zf
  unsigned __int64 result; // x0
  char *v16; // x1
  __int64 v17; // x23
  __int64 v18; // x19
  bool v19; // zf
  size_t v21; // x19
  _BYTE *v22; // x0
  unsigned __int8 *v23; // x0
  char *v24; // x0
  __int64 v25; // x19
  unsigned __int64 v26; // x23
  unsigned __int8 *v27; // x0

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= 1 )
    goto LABEL_39;
  v4 = a3;
  v6 = a2;
  v7 = ((unsigned __int64)a3 >> 1) & 1;
  if ( a2 )
    v8 = 1;
  else
    v8 = (a3 >> 1) & 1;
  if ( !v8 )
  {
    v12 = 0;
    goto LABEL_11;
  }
  v9 = *(unsigned __int8 **)a1;
  v10 = **(_BYTE **)a1;
  if ( (v10 & 0x80) == 0 )
  {
    v11 = *__ctype_b_loc();
    v12 = 0;
    do
    {
      if ( (v11[v10] & 0x2000) == 0 )
      {
        if ( !v6 )
          goto LABEL_43;
        goto LABEL_10;
      }
      v10 = v9[++v12];
    }
    while ( (v10 & 0x80) == 0 );
    if ( !v6 )
      goto LABEL_43;
LABEL_10:
    if ( v3 - 1 > v12 )
      goto LABEL_49;
    goto LABEL_11;
  }
  v12 = 0;
  if ( a2 )
  {
LABEL_49:
    if ( v9[v12] != v6 )
    {
      if ( (v4 & 4) == 0 )
        goto LABEL_43;
      v24 = strchr((const char *)&v9[v12], v6);
      if ( !v24 )
        goto LABEL_43;
      v25 = v24 - (char *)v9;
      if ( v24 - (char *)v9 == -1 )
        goto LABEL_43;
      if ( v25 )
      {
        v26 = v25 + 1;
        if ( v3 < v25 + 1 )
        {
          if ( v26 > *(_QWORD *)(a1 + 16) )
          {
            v27 = (unsigned __int8 *)sub_491288(a1, v9, v25 + 1, 1u);
            v3 = *(_QWORD *)(a1 + 8);
            v9 = v27;
            *(_QWORD *)a1 = v27;
          }
          memset(&v9[v3], 0, v26 - v3);
          v9 = *(unsigned __int8 **)a1;
          *(_QWORD *)(a1 + 8) = v26;
        }
        else if ( v3 > v25 + 1 )
        {
          *(_QWORD *)(a1 + 8) = v26;
        }
        v9[v25] = 0;
LABEL_58:
        v3 = *(_QWORD *)(a1 + 8);
        if ( v3 <= 1 )
          goto LABEL_39;
        goto LABEL_43;
      }
    }
    if ( v9 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      j__free(v9);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
      goto LABEL_58;
    }
  }
LABEL_43:
  v8 = v12 != 0;
LABEL_11:
  if ( (v4 & 1) == 0 )
  {
LABEL_12:
    if ( v8 )
      v13 = (_DWORD)v7 == 0;
    else
      v13 = 1;
    if ( v13 || v3 <= 1 )
      return v3 - 1;
LABEL_34:
    if ( v12 >= v3 - 1 )
    {
      v21 = 0;
    }
    else
    {
      v21 = v3 - 1 - v12;
      memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + v12), v21);
    }
    v22 = *(_BYTE **)a1;
    if ( v21 + 1 > *(_QWORD *)(a1 + 16) )
    {
      v22 = sub_491288(a1, *(void **)a1, v21 + 1, 1u);
      *(_QWORD *)a1 = v22;
    }
    *(_QWORD *)(a1 + 8) = v21 + 1;
    v22[v21] = 0;
    v3 = *(_QWORD *)(a1 + 8);
    goto LABEL_39;
  }
LABEL_24:
  v17 = 0;
  if ( v3 > 1 )
    goto LABEL_46;
  while ( 1 )
  {
    v18 = v3 - 1;
    if ( ((*__ctype_b_loc())[v17] & 0x2000) == 0 )
      break;
    v16 = *(char **)a1;
    if ( v18 > 1 )
    {
      if ( (unsigned __int64)v18 > *(_QWORD *)(a1 + 16) )
      {
        v16 = (char *)sub_491288(a1, v16, v3 - 1, 1u);
        *(_QWORD *)a1 = v16;
      }
      *(_QWORD *)(a1 + 8) = v18;
      v16[v18 - 1] = 0;
      v3 = *(_QWORD *)(a1 + 8);
      goto LABEL_24;
    }
    v23 = *(unsigned __int8 **)a1;
    if ( !v16 )
      goto LABEL_24;
    *(_QWORD *)(a1 + 8) = 0;
    v17 = 0;
    j__free(v23);
    v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    if ( v3 > 1 )
    {
LABEL_46:
      if ( (*(_BYTE *)(*(_QWORD *)a1 + v3 - 2) & 0x80) != 0 )
        goto LABEL_12;
      v17 = *(unsigned __int8 *)(*(_QWORD *)a1 + v3 - 2);
    }
  }
  if ( v8 )
    v19 = (_DWORD)v7 == 0;
  else
    v19 = 1;
  if ( !v19 && v3 > 1 )
    goto LABEL_34;
LABEL_39:
  result = 0;
  if ( v3 )
    return v3 - 1;
  return result;
}
