/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BB80
// Address: 0x000000000007BB80

//----- (000000000007BB80) ----------------------------------------------------
_QWORD *__fastcall sub_7BB80(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, const char **a5)
{
  _QWORD **v5; // x26
  const char *v10; // x23
  const char *v11; // x25
  __int64 v13; // x20
  _QWORD *v14; // x25
  _QWORD *v15; // x8
  _QWORD *v16; // x8
  _QWORD *v17; // x24
  _QWORD *v18; // x8
  const char *v19; // x0
  const char *v20; // x23
  _QWORD *v21; // x25
  const char *v22; // x21
  _QWORD *v23; // x8
  __int64 v24; // x8
  __int64 v25; // x9
  _QWORD *v26; // t1
  const char *v27; // x1
  const char *v28; // x21
  _QWORD *v29; // x8

  v5 = (_QWORD **)(a1 + 1);
  if ( a1 + 1 == a2
    || (a5[1] ? (v10 = *a5) : (v10 = &byte_F154B),
        a2[5] ? (v11 = (const char *)a2[4]) : (v11 = &byte_F154B),
        strcmp(v10, v11) < 0) )
  {
    v13 = *a2;
    v14 = a2;
    if ( (_QWORD *)*a1 == a2 )
      goto LABEL_27;
    if ( v13 )
    {
      v15 = (_QWORD *)*a2;
      do
      {
        v14 = v15;
        v15 = (_QWORD *)v15[1];
      }
      while ( v15 );
    }
    else
    {
      v14 = a2;
      do
      {
        v18 = v14;
        v14 = (_QWORD *)v14[2];
      }
      while ( (_QWORD *)*v14 == v18 );
    }
    v19 = v14[5] ? (const char *)v14[4] : &byte_F154B;
    v20 = a5[1] ? *a5 : &byte_F154B;
    if ( strcmp(v19, v20) < 0 )
    {
LABEL_27:
      if ( v13 )
      {
        *a3 = v14;
        return v14 + 1;
      }
      else
      {
        *a3 = a2;
        return a2;
      }
    }
    v21 = *v5;
    if ( *v5 )
    {
      a4 = a1 + 1;
      while ( 1 )
      {
        if ( v21[5] )
          v22 = (const char *)v21[4];
        else
          v22 = &byte_F154B;
        if ( strcmp(v20, v22) < 0 )
        {
          v23 = (_QWORD *)*v21;
          if ( !*v21 )
          {
            *a3 = v21;
            return v21;
          }
          a4 = v21;
        }
        else if ( (strcmp(v22, v20) & 0x80000000) == 0 || (a4 = v21 + 1, (v23 = (_QWORD *)v21[1]) == nullptr) )
        {
          *a3 = v21;
          return a4;
        }
        v21 = v23;
      }
    }
LABEL_64:
    *a3 = v5;
    return v5;
  }
  if ( (strcmp(v11, v10) & 0x80000000) == 0 )
  {
    *a3 = a2;
    *a4 = a2;
    return a4;
  }
  a4 = a2 + 1;
  v16 = (_QWORD *)a2[1];
  if ( v16 )
  {
    do
    {
      v17 = v16;
      v16 = (_QWORD *)*v16;
    }
    while ( v16 );
  }
  else
  {
    v24 = (__int64)(a2 + 2);
    v17 = (_QWORD *)a2[2];
    if ( (_QWORD *)*v17 != a2 )
    {
      do
      {
        v25 = *(_QWORD *)v24;
        v26 = *(_QWORD **)(*(_QWORD *)v24 + 16LL);
        v24 = *(_QWORD *)v24 + 16LL;
        v17 = v26;
      }
      while ( *v26 != v25 );
    }
  }
  if ( v17 != v5 )
  {
    v27 = v17[5] ? (const char *)v17[4] : &byte_F154B;
    if ( (strcmp(v10, v27) & 0x80000000) == 0 )
    {
      v17 = *v5;
      if ( *v5 )
      {
        a4 = a1 + 1;
        while ( 1 )
        {
          if ( v17[5] )
            v28 = (const char *)v17[4];
          else
            v28 = &byte_F154B;
          if ( strcmp(v10, v28) < 0 )
          {
            v29 = (_QWORD *)*v17;
            if ( !*v17 )
              goto LABEL_51;
            a4 = v17;
          }
          else if ( (strcmp(v28, v10) & 0x80000000) == 0 || (a4 = v17 + 1, (v29 = (_QWORD *)v17[1]) == nullptr) )
          {
            *a3 = v17;
            return a4;
          }
          v17 = v29;
        }
      }
      goto LABEL_64;
    }
  }
  if ( !a2[1] )
  {
    *a3 = a2;
    return a4;
  }
LABEL_51:
  *a3 = v17;
  return v17;
}
// F154B: using guessed type char byte_F154B;
