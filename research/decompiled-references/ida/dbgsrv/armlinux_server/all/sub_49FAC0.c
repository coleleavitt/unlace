/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49FAC0
// Address: 0x000000000049FAC0

//----- (000000000049FAC0) ----------------------------------------------------
int *__fastcall sub_49FAC0(int *result, _QWORD *a2)
{
  int *v2; // x5
  int *v3; // x6
  int *v4; // x3
  int *v5; // x2
  int *v6; // x4
  __int64 v7; // x3
  int v8; // w5
  int *v9; // x6
  int *v10; // x5
  __int64 v11; // x6
  int *v12; // x3
  int *v13; // x5
  __int64 v14; // x6
  _DWORD *v15; // x6
  int *v16; // x3
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  _DWORD *v20; // x7
  int *v21; // x5
  __int64 v22; // x6
  __int64 v23; // x6
  int v24; // w7
  __int64 v25; // x5
  __int64 v26; // x3
  __int64 v27; // x1
  __int64 v28; // x4
  __int64 v29; // x4
  int v30; // w8
  __int64 v31; // x6
  __int64 v32; // x4
  __int64 v33; // x1

  v2 = *((int **)result + 2);
  v3 = *((int **)result + 3);
  if ( v2 )
  {
    v4 = *((int **)result + 3);
    if ( !v3 )
    {
      v5 = *((int **)result + 1);
      goto LABEL_4;
    }
    while ( *((_QWORD *)v4 + 2) )
      v4 = *((int **)v4 + 2);
    v6 = *((int **)v4 + 3);
    if ( v4 != result )
    {
      *((_QWORD *)v2 + 1) = v4;
      v5 = v4;
      *((_QWORD *)v4 + 2) = v2;
      if ( v4 != v3 )
      {
        v5 = *((int **)v4 + 1);
        v10 = v5;
        if ( v6 )
        {
          *((_QWORD *)v6 + 1) = v5;
          v10 = *((int **)v4 + 1);
        }
        *((_QWORD *)v10 + 2) = v6;
        *((_QWORD *)v4 + 3) = v3;
        *(_QWORD *)(*((_QWORD *)result + 3) + 8LL) = v4;
      }
      if ( (int *)a2[1] == result )
      {
        a2[1] = v4;
        v11 = *((_QWORD *)result + 1);
      }
      else
      {
        v11 = *((_QWORD *)result + 1);
        if ( *(int **)(v11 + 16) == result )
          *(_QWORD *)(v11 + 16) = v4;
        else
          *(_QWORD *)(v11 + 24) = v4;
      }
      v8 = *v4;
      *v4 = *result;
      *((_QWORD *)v4 + 1) = v11;
      *result = v8;
      goto LABEL_26;
    }
    v3 = *((int **)v4 + 3);
  }
  v6 = nullptr;
  v5 = *((int **)result + 1);
  if ( !v3 )
    goto LABEL_5;
  v2 = v3;
LABEL_4:
  v6 = v2;
  *((_QWORD *)v2 + 1) = v5;
LABEL_5:
  if ( (int *)a2[1] == result )
  {
    a2[1] = v6;
  }
  else
  {
    v7 = *((_QWORD *)result + 1);
    if ( *(int **)(v7 + 16) == result )
      *(_QWORD *)(v7 + 16) = v6;
    else
      *(_QWORD *)(v7 + 24) = v6;
  }
  if ( (int *)a2[2] == result )
  {
    v21 = v6;
    if ( *((_QWORD *)result + 3) )
    {
      while ( *((_QWORD *)v21 + 2) )
        v21 = *((int **)v21 + 2);
      a2[2] = v21;
    }
    else
    {
      a2[2] = *((_QWORD *)result + 1);
    }
  }
  v8 = *result;
  if ( (int *)a2[3] == result )
  {
    v9 = v6;
    if ( *((_QWORD *)result + 2) )
    {
      while ( *((_QWORD *)v9 + 3) )
        v9 = *((int **)v9 + 3);
      a2[3] = v9;
    }
    else
    {
      a2[3] = *((_QWORD *)result + 1);
    }
  }
LABEL_26:
  if ( !v8 )
    return result;
  v12 = (int *)a2[1];
  if ( v12 == v6 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( v6 && *v6 != 1 )
    {
      v12 = v6;
      goto LABEL_45;
    }
    v12 = *((int **)v5 + 2);
    if ( v12 != v6 )
    {
      v13 = *((int **)v12 + 3);
      if ( !*v12 )
      {
        *v12 = 1;
        *v5 = 0;
        *((_QWORD *)v5 + 2) = v13;
        if ( v13 )
          *((_QWORD *)v13 + 1) = v5;
        *((_QWORD *)v12 + 1) = *((_QWORD *)v5 + 1);
        if ( v5 == (int *)a2[1] )
        {
          a2[1] = v12;
          v13 = *((int **)v5 + 2);
        }
        else
        {
          v14 = *((_QWORD *)v5 + 1);
          if ( v5 == *(int **)(v14 + 24) )
          {
            *(_QWORD *)(v14 + 24) = v12;
          }
          else
          {
            *(_QWORD *)(v14 + 16) = v12;
            v13 = *((int **)v5 + 2);
          }
        }
        *((_QWORD *)v12 + 3) = v5;
        *((_QWORD *)v5 + 1) = v12;
        v12 = v13;
        v13 = *((int **)v13 + 3);
      }
      if ( !v13 || *v13 == 1 )
      {
        v15 = *((_DWORD **)v12 + 2);
        if ( v15 && *v15 != 1 )
          goto LABEL_85;
        *v12 = 0;
        v16 = *((int **)v5 + 1);
        goto LABEL_43;
      }
      v15 = *((_DWORD **)v12 + 2);
      if ( !v15 || *v15 == 1 )
      {
        v22 = *((_QWORD *)v13 + 2);
        *v13 = 1;
        *v12 = 0;
        *((_QWORD *)v12 + 3) = v22;
        if ( v22 )
          *(_QWORD *)(v22 + 8) = v12;
        *((_QWORD *)v13 + 1) = *((_QWORD *)v12 + 1);
        if ( v12 == (int *)a2[1] )
        {
          a2[1] = v13;
        }
        else
        {
          v23 = *((_QWORD *)v12 + 1);
          if ( v12 == *(int **)(v23 + 16) )
            *(_QWORD *)(v23 + 16) = v13;
          else
            *(_QWORD *)(v23 + 24) = v13;
        }
        v24 = *v5;
        *((_QWORD *)v13 + 2) = v12;
        *((_QWORD *)v12 + 1) = v13;
        v25 = *((_QWORD *)v5 + 2);
        v15 = *(_DWORD **)(v25 + 16);
        *(_DWORD *)v25 = v24;
        *v5 = 1;
        if ( !v15 )
          goto LABEL_87;
      }
      else
      {
LABEL_85:
        v25 = *((_QWORD *)v5 + 2);
        *v12 = *v5;
        *v5 = 1;
      }
      *v15 = 1;
LABEL_87:
      v26 = *(_QWORD *)(v25 + 24);
      *((_QWORD *)v5 + 2) = v26;
      if ( v26 )
        *(_QWORD *)(v26 + 8) = v5;
      *(_QWORD *)(v25 + 8) = *((_QWORD *)v5 + 1);
      if ( v5 == (int *)a2[1] )
      {
        a2[1] = v25;
      }
      else
      {
        v27 = *((_QWORD *)v5 + 1);
        if ( v5 == *(int **)(v27 + 24) )
          *(_QWORD *)(v27 + 24) = v25;
        else
          *(_QWORD *)(v27 + 16) = v25;
      }
      *(_QWORD *)(v25 + 24) = v5;
      v12 = v6;
      *((_QWORD *)v5 + 1) = v25;
      goto LABEL_44;
    }
    v17 = *((_QWORD *)v5 + 3);
    v18 = *(_QWORD *)(v17 + 16);
    if ( !*(_DWORD *)v17 )
    {
      *(_DWORD *)v17 = 1;
      *v5 = 0;
      *((_QWORD *)v5 + 3) = v18;
      if ( v18 )
        *(_QWORD *)(v18 + 8) = v5;
      *(_QWORD *)(v17 + 8) = *((_QWORD *)v5 + 1);
      if ( v5 == (int *)a2[1] )
      {
        a2[1] = v17;
        v18 = *((_QWORD *)v5 + 3);
      }
      else
      {
        v19 = *((_QWORD *)v5 + 1);
        if ( v5 == *(int **)(v19 + 16) )
        {
          *(_QWORD *)(v19 + 16) = v17;
        }
        else
        {
          *(_QWORD *)(v19 + 24) = v17;
          v18 = *((_QWORD *)v5 + 3);
        }
      }
      *(_QWORD *)(v17 + 16) = v5;
      *((_QWORD *)v5 + 1) = v17;
      v17 = v18;
      v18 = *(_QWORD *)(v18 + 16);
    }
    if ( v18 && *(_DWORD *)v18 != 1 )
      break;
    v20 = *(_DWORD **)(v17 + 24);
    if ( v20 && *v20 != 1 )
      goto LABEL_109;
    v16 = *((int **)v5 + 1);
    *(_DWORD *)v17 = 0;
LABEL_43:
    v6 = v5;
    v5 = v16;
    v12 = (int *)a2[1];
    if ( v12 == v6 )
      goto LABEL_44;
  }
  v20 = *(_DWORD **)(v17 + 24);
  if ( v20 )
  {
    v12 = v6;
    if ( *v20 != 1 )
    {
LABEL_109:
      v31 = *((_QWORD *)v5 + 3);
      *(_DWORD *)v17 = *v5;
      v12 = v6;
      *v5 = 1;
      goto LABEL_110;
    }
  }
  v28 = *(_QWORD *)(v18 + 24);
  *(_DWORD *)v18 = 1;
  *(_DWORD *)v17 = 0;
  *(_QWORD *)(v17 + 16) = v28;
  if ( v28 )
    *(_QWORD *)(v28 + 8) = v17;
  *(_QWORD *)(v18 + 8) = *(_QWORD *)(v17 + 8);
  if ( v17 == a2[1] )
  {
    a2[1] = v18;
  }
  else
  {
    v29 = *(_QWORD *)(v17 + 8);
    if ( v17 == *(_QWORD *)(v29 + 24) )
      *(_QWORD *)(v29 + 24) = v18;
    else
      *(_QWORD *)(v29 + 16) = v18;
  }
  v30 = *v5;
  *(_QWORD *)(v18 + 24) = v17;
  *(_QWORD *)(v17 + 8) = v18;
  v31 = *((_QWORD *)v5 + 3);
  v20 = *(_DWORD **)(v31 + 24);
  *(_DWORD *)v31 = v30;
  *v5 = 1;
  if ( v20 )
LABEL_110:
    *v20 = 1;
  v32 = *(_QWORD *)(v31 + 16);
  *((_QWORD *)v5 + 3) = v32;
  if ( v32 )
    *(_QWORD *)(v32 + 8) = v5;
  *(_QWORD *)(v31 + 8) = *((_QWORD *)v5 + 1);
  if ( v5 == (int *)a2[1] )
  {
    a2[1] = v31;
  }
  else
  {
    v33 = *((_QWORD *)v5 + 1);
    if ( v5 == *(int **)(v33 + 16) )
      *(_QWORD *)(v33 + 16) = v31;
    else
      *(_QWORD *)(v33 + 24) = v31;
  }
  *(_QWORD *)(v31 + 16) = v5;
  *((_QWORD *)v5 + 1) = v31;
LABEL_44:
  if ( v12 )
LABEL_45:
    *v12 = 1;
  return result;
}
