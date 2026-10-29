/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81644
// Address: 0x00081644

//----- (00081644) --------------------------------------------------------
int *__fastcall sub_81644(int *result, _DWORD *a2)
{
  int *v2; // r5
  int *v3; // r6
  int *v4; // r3
  int *v5; // r2
  int *v6; // r4
  int v7; // r3
  int v8; // r5
  int *v9; // r6
  int *v10; // r5
  int v11; // r6
  int *i; // r3
  int *v13; // r5
  int v14; // r7
  int *v15; // r7
  _DWORD *v16; // r7
  int *v17; // r3
  int *v18; // r7
  int *v19; // lr
  int v20; // r5
  int *v21; // r5
  _DWORD *v22; // r5
  int *v23; // r5
  int v24; // r6
  int v25; // r6
  _DWORD *v26; // r6
  int v27; // lr
  int v28; // r3
  int v29; // r3
  int v30; // r4
  int v31; // r4
  _DWORD *v32; // r4
  int v33; // r12
  int v34; // r5
  int v35; // r1

  v3 = (int *)result[3];
  v2 = (int *)result[2];
  if ( !v2 )
    goto LABEL_76;
  v4 = (int *)result[3];
  if ( !v3 )
  {
    v5 = (int *)result[1];
    goto LABEL_4;
  }
  while ( 1 )
  {
    v5 = (int *)v4[2];
    if ( !v5 )
      break;
    v4 = (int *)v4[2];
  }
  v6 = (int *)v4[3];
  if ( v4 == result )
  {
    v3 = (int *)v4[3];
LABEL_76:
    v5 = (int *)result[1];
    v6 = v3;
    if ( !v3 )
      goto LABEL_5;
    v2 = v3;
LABEL_4:
    v6 = v2;
    v2[1] = (int)v5;
LABEL_5:
    if ( (int *)a2[1] == result )
    {
      a2[1] = v6;
    }
    else
    {
      v7 = result[1];
      if ( *(int **)(v7 + 8) == result )
        *(_DWORD *)(v7 + 8) = v6;
      else
        *(_DWORD *)(v7 + 12) = v6;
    }
    if ( (int *)a2[2] == result )
    {
      v23 = v6;
      if ( result[3] )
      {
        while ( v23[2] )
          v23 = (int *)v23[2];
        a2[2] = v23;
      }
      else
      {
        a2[2] = result[1];
      }
    }
    v8 = *result;
    if ( (int *)a2[3] == result )
    {
      v9 = v6;
      if ( result[2] )
      {
        while ( v9[3] )
          v9 = (int *)v9[3];
        a2[3] = v9;
      }
      else
      {
        a2[3] = result[1];
      }
    }
    goto LABEL_31;
  }
  v2[1] = (int)v4;
  if ( v4 == v3 )
    v5 = v4;
  v4[2] = (int)v2;
  if ( v4 != v3 )
  {
    v5 = (int *)v4[1];
    v10 = v5;
    if ( v6 )
    {
      v6[1] = (int)v5;
      v10 = (int *)v4[1];
    }
    v10[2] = (int)v6;
    v4[3] = (int)v3;
    *(_DWORD *)(result[3] + 4) = v4;
  }
  if ( (int *)a2[1] == result )
  {
    a2[1] = v4;
    v11 = result[1];
  }
  else
  {
    v11 = result[1];
    if ( *(int **)(v11 + 8) == result )
      *(_DWORD *)(v11 + 8) = v4;
    else
      *(_DWORD *)(v11 + 12) = v4;
  }
  v8 = *v4;
  *v4 = *result;
  v4[1] = v11;
  *result = v8;
LABEL_31:
  if ( v8 )
  {
    for ( i = (int *)a2[1]; i != v6; i = (int *)a2[1] )
    {
      if ( v6 && *v6 != 1 )
      {
        i = v6;
        goto LABEL_51;
      }
      i = (int *)v5[2];
      if ( i == v6 )
      {
        v18 = (int *)v5[3];
        v19 = (int *)v18[2];
        if ( !*v18 )
        {
          *v18 = 1;
          *v5 = 0;
          v5[3] = (int)v19;
          if ( v19 )
            v19[1] = (int)v5;
          v18[1] = v5[1];
          if ( v5 == (int *)a2[1] )
          {
            a2[1] = v18;
            v21 = (int *)v5[3];
          }
          else
          {
            v20 = v5[1];
            if ( v5 == *(int **)(v20 + 8) )
            {
              *(_DWORD *)(v20 + 8) = v18;
              v21 = v19;
            }
            else
            {
              *(_DWORD *)(v20 + 12) = v18;
              v21 = (int *)v5[3];
            }
          }
          v18[2] = (int)v5;
          v19 = (int *)v21[2];
          v5[1] = (int)v18;
          v18 = v21;
        }
        if ( v19 && *v19 != 1 )
        {
          v22 = (_DWORD *)v18[3];
          if ( !v22 )
            goto LABEL_99;
          if ( *v22 == 1 )
          {
            i = v6;
LABEL_99:
            v30 = v19[3];
            *v19 = 1;
            *v18 = 0;
            v18[2] = v30;
            if ( v30 )
              *(_DWORD *)(v30 + 4) = v18;
            v19[1] = v18[1];
            if ( v18 == (int *)a2[1] )
            {
              a2[1] = v19;
            }
            else
            {
              v31 = v18[1];
              if ( v18 == *(int **)(v31 + 12) )
                *(_DWORD *)(v31 + 12) = v19;
              else
                *(_DWORD *)(v31 + 8) = v19;
            }
            v19[3] = (int)v18;
            v32 = (_DWORD *)v5[3];
            v33 = *v5;
            v18[1] = (int)v19;
            v22 = (_DWORD *)v32[3];
            *v32 = v33;
            *v5 = 1;
            if ( !v22 )
            {
LABEL_107:
              v34 = v32[2];
              v5[3] = v34;
              if ( v34 )
                *(_DWORD *)(v34 + 4) = v5;
              v32[1] = v5[1];
              if ( v5 == (int *)a2[1] )
              {
                a2[1] = v32;
              }
              else
              {
                v35 = v5[1];
                if ( v5 == *(int **)(v35 + 8) )
                  *(_DWORD *)(v35 + 8) = v32;
                else
                  *(_DWORD *)(v35 + 12) = v32;
              }
              v32[2] = v5;
              v5[1] = (int)v32;
              break;
            }
          }
          else
          {
LABEL_117:
            i = v6;
            v32 = (_DWORD *)v5[3];
            *v18 = *v5;
            *v5 = 1;
          }
          *v22 = 1;
          goto LABEL_107;
        }
        v22 = (_DWORD *)v18[3];
        if ( v22 && *v22 != 1 )
          goto LABEL_117;
        *v18 = 0;
        v17 = (int *)v5[1];
      }
      else
      {
        v13 = (int *)i[3];
        if ( !*i )
        {
          *i = 1;
          *v5 = 0;
          v5[2] = (int)v13;
          if ( v13 )
            v13[1] = (int)v5;
          i[1] = v5[1];
          if ( v5 == (int *)a2[1] )
          {
            a2[1] = i;
            v15 = (int *)v5[2];
          }
          else
          {
            v14 = v5[1];
            if ( v5 == *(int **)(v14 + 12) )
            {
              *(_DWORD *)(v14 + 12) = i;
              v15 = v13;
            }
            else
            {
              *(_DWORD *)(v14 + 8) = i;
              v15 = (int *)v5[2];
            }
          }
          i[3] = (int)v5;
          v13 = (int *)v15[3];
          v5[1] = (int)i;
          i = v15;
        }
        if ( v13 && *v13 != 1 )
        {
          v16 = (_DWORD *)i[2];
          if ( v16 && *v16 != 1 )
          {
LABEL_96:
            v26 = (_DWORD *)v5[2];
            *i = *v5;
            *v5 = 1;
            goto LABEL_97;
          }
          v24 = v13[2];
          *v13 = 1;
          *i = 0;
          i[3] = v24;
          if ( v24 )
            *(_DWORD *)(v24 + 4) = i;
          v13[1] = i[1];
          if ( i == (int *)a2[1] )
          {
            a2[1] = v13;
          }
          else
          {
            v25 = i[1];
            if ( i == *(int **)(v25 + 8) )
              *(_DWORD *)(v25 + 8) = v13;
            else
              *(_DWORD *)(v25 + 12) = v13;
          }
          v13[2] = (int)i;
          v26 = (_DWORD *)v5[2];
          v27 = *v5;
          i[1] = (int)v13;
          v16 = (_DWORD *)v26[2];
          *v26 = v27;
          *v5 = 1;
          if ( v16 )
LABEL_97:
            *v16 = 1;
          v28 = v26[3];
          v5[2] = v28;
          if ( v28 )
            *(_DWORD *)(v28 + 4) = v5;
          v26[1] = v5[1];
          if ( v5 == (int *)a2[1] )
          {
            a2[1] = v26;
          }
          else
          {
            v29 = v5[1];
            if ( v5 == *(int **)(v29 + 12) )
              *(_DWORD *)(v29 + 12) = v26;
            else
              *(_DWORD *)(v29 + 8) = v26;
          }
          v26[3] = v5;
          i = v6;
          v5[1] = (int)v26;
          break;
        }
        v16 = (_DWORD *)i[2];
        if ( v16 && *v16 != 1 )
          goto LABEL_96;
        *i = 0;
        v17 = (int *)v5[1];
      }
      v6 = v5;
      v5 = v17;
    }
    if ( i )
LABEL_51:
      *i = 1;
  }
  return result;
}
