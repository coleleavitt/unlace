/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48D08
// Address: 0x0000000000048D08

//----- (0000000000048D08) ----------------------------------------------------
_QWORD *__fastcall sub_48D08(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned __int64 *a5)
{
  _QWORD **v5; // x8
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x10
  __int64 v8; // x10
  _QWORD *v9; // x11
  _QWORD *v10; // x9
  _QWORD *v11; // x11
  _QWORD *v12; // x10
  _QWORD *v13; // x9
  unsigned __int64 v14; // x9
  _QWORD *v16; // x3
  unsigned __int64 v17; // x8
  _QWORD *v18; // x8
  __int64 v19; // x11
  __int64 v20; // x12
  _QWORD *v21; // t1
  _QWORD *v22; // x3
  unsigned __int64 v23; // x8
  _QWORD *v24; // x8

  v5 = (_QWORD **)(a1 + 1);
  if ( a1 + 1 == a2 || (v6 = *a5, v7 = a2[4], *a5 < v7) )
  {
    v8 = *a2;
    v9 = a2;
    if ( (_QWORD *)*a1 == a2 )
      goto LABEL_15;
    if ( v8 )
    {
      v10 = (_QWORD *)*a2;
      do
      {
        v9 = v10;
        v10 = (_QWORD *)v10[1];
      }
      while ( v10 );
    }
    else
    {
      v9 = a2;
      do
      {
        v13 = v9;
        v9 = (_QWORD *)v9[2];
      }
      while ( (_QWORD *)*v9 == v13 );
    }
    v14 = *a5;
    if ( v9[4] < *a5 )
    {
LABEL_15:
      if ( v8 )
      {
        *a3 = v9;
        return v9 + 1;
      }
      else
      {
        *a3 = a2;
        return a2;
      }
    }
    v12 = *v5;
    if ( *v5 )
    {
      v16 = a1 + 1;
      while ( 1 )
      {
        v17 = v12[4];
        if ( v14 >= v17 )
        {
          if ( v17 >= v14 || (v16 = v12 + 1, (v18 = (_QWORD *)v12[1]) == nullptr) )
          {
            *a3 = v12;
            return v16;
          }
        }
        else
        {
          v18 = (_QWORD *)*v12;
          if ( !*v12 )
            goto LABEL_33;
          v16 = v12;
        }
        v12 = v18;
      }
    }
LABEL_43:
    *a3 = v5;
    return a1 + 1;
  }
  if ( v7 >= v6 )
  {
    *a3 = a2;
    *a4 = a2;
    return a4;
  }
  v11 = (_QWORD *)a2[1];
  if ( v11 )
  {
    do
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 );
  }
  else
  {
    v19 = (__int64)(a2 + 2);
    v12 = (_QWORD *)a2[2];
    if ( (_QWORD *)*v12 != a2 )
    {
      do
      {
        v20 = *(_QWORD *)v19;
        v21 = *(_QWORD **)(*(_QWORD *)v19 + 16LL);
        v19 = *(_QWORD *)v19 + 16LL;
        v12 = v21;
      }
      while ( *v21 != v20 );
    }
  }
  if ( v12 != v5 && v6 >= v12[4] )
  {
    v12 = *v5;
    if ( *v5 )
    {
      v22 = a1 + 1;
      while ( 1 )
      {
        v23 = v12[4];
        if ( v6 >= v23 )
        {
          if ( v23 >= v6 || (v22 = v12 + 1, (v24 = (_QWORD *)v12[1]) == nullptr) )
          {
            *a3 = v12;
            return v22;
          }
        }
        else
        {
          v24 = (_QWORD *)*v12;
          if ( !*v12 )
            goto LABEL_33;
          v22 = v12;
        }
        v12 = v24;
      }
    }
    goto LABEL_43;
  }
  if ( a2[1] )
  {
LABEL_33:
    *a3 = v12;
    return v12;
  }
  else
  {
    *a3 = a2;
    return a2 + 1;
  }
}
