/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8132C
// Address: 0x0008132C

//----- (0008132C) --------------------------------------------------------
_DWORD *__fastcall sub_8132C(_DWORD *result, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r2
  _DWORD *v6; // r4
  _DWORD *v7; // r5
  _DWORD *v8; // r4
  int v9; // r4
  int v10; // r0
  _DWORD *v11; // lr
  _DWORD *v12; // r6
  int v13; // r2
  int v14; // r5
  _DWORD *v15; // r5
  int v16; // r6
  int v17; // r4
  int v18; // r4
  _DWORD *v19; // r2

  a2[1] = a3;
  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  if ( result )
  {
    a3[2] = a2;
    if ( a4 == a3 )
    {
      a4[1] = a2;
      a4[3] = a2;
    }
    else
    {
      result = (_DWORD *)a4[2];
      if ( result == a3 )
        a4[2] = a2;
    }
  }
  else
  {
    a3[3] = a2;
    result = (_DWORD *)a4[3];
    if ( result == a3 )
      a4[3] = a2;
  }
  v4 = (_DWORD *)a4[1];
LABEL_6:
  while ( a2 != v4 )
  {
    while ( 1 )
    {
      result = (_DWORD *)a2[1];
      if ( *result )
      {
        *v4 = 1;
        return result;
      }
      v5 = (_DWORD *)result[1];
      v6 = (_DWORD *)v5[2];
      v7 = v5;
      if ( result == v6 )
        break;
      if ( !v6 || *v6 )
      {
        v8 = (_DWORD *)result[2];
        if ( v8 == a2 )
        {
          v14 = a2[3];
          result[2] = v14;
          if ( v14 )
          {
            *(_DWORD *)(v14 + 4) = result;
            v15 = (_DWORD *)result[1];
          }
          else
          {
            v15 = v5;
          }
          a2[1] = v15;
          if ( result == (_DWORD *)a4[1] )
          {
            a4[1] = a2;
          }
          else
          {
            v16 = result[1];
            if ( result == *(_DWORD **)(v16 + 12) )
              *(_DWORD *)(v16 + 12) = a2;
            else
              *(_DWORD *)(v16 + 8) = a2;
          }
          a2[3] = result;
          result[1] = a2;
          a2 = result;
          result = v8;
        }
        v9 = v5[3];
        *result = 1;
        *v5 = 0;
        v10 = *(_DWORD *)(v9 + 8);
        v5[3] = v10;
        if ( v10 )
          *(_DWORD *)(v10 + 4) = v5;
        *(_DWORD *)(v9 + 4) = v5[1];
        result = (_DWORD *)a4[1];
        if ( v5 == result )
        {
          a4[1] = v9;
        }
        else
        {
          result = (_DWORD *)v5[1];
          if ( v5 == (_DWORD *)result[2] )
            result[2] = v9;
          else
            result[3] = v9;
        }
        *(_DWORD *)(v9 + 8) = v5;
        v5[1] = v9;
        v4 = (_DWORD *)a4[1];
        goto LABEL_6;
      }
      a2 = (_DWORD *)result[1];
      *result = 1;
      *v6 = 1;
      *v5 = 0;
      if ( v5 == v4 )
        goto LABEL_12;
    }
    v11 = (_DWORD *)v5[3];
    if ( !v11 || *v11 )
    {
      v12 = (_DWORD *)result[3];
      if ( v12 == a2 )
      {
        v17 = a2[2];
        result[3] = v17;
        if ( v17 )
        {
          *(_DWORD *)(v17 + 4) = result;
          v5 = (_DWORD *)result[1];
        }
        a2[1] = v5;
        if ( result == (_DWORD *)a4[1] )
        {
          a4[1] = a2;
        }
        else
        {
          v18 = result[1];
          if ( result == *(_DWORD **)(v18 + 8) )
            *(_DWORD *)(v18 + 8) = a2;
          else
            *(_DWORD *)(v18 + 12) = a2;
        }
        a2[2] = result;
        v6 = v12;
        v19 = (_DWORD *)v7[2];
        result[1] = a2;
        a2 = result;
        v12 = (_DWORD *)v19[3];
        result = v19;
      }
      *v6 = 1;
      *v7 = 0;
      v7[2] = v12;
      if ( v12 )
        v12[1] = v7;
      result[1] = v7[1];
      if ( v7 == (_DWORD *)a4[1] )
      {
        a4[1] = result;
      }
      else
      {
        v13 = v7[1];
        if ( v7 == *(_DWORD **)(v13 + 12) )
          *(_DWORD *)(v13 + 12) = result;
        else
          *(_DWORD *)(v13 + 8) = result;
      }
      result[3] = v7;
      v7[1] = result;
      v4 = (_DWORD *)a4[1];
    }
    else
    {
      *result = 1;
      a2 = v5;
      *v11 = 1;
      *v5 = 0;
    }
  }
LABEL_12:
  *a2 = 1;
  return result;
}
