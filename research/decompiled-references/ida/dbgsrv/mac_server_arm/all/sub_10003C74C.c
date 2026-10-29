/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C74C
// Address: 0x000000010003C74C

//----- (000000010003C74C) ----------------------------------------------------
_QWORD *__fastcall sub_10003C74C(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v9; // x26
  const char *v11; // x21
  const char *v12; // x25
  __int64 v13; // x22
  _QWORD *v14; // x8
  _QWORD *v15; // x24
  __int64 v16; // x24
  _QWORD *v17; // x8
  _QWORD *v18; // x8
  bool v19; // zf
  const char *v20; // x0
  const char *v21; // x21
  _QWORD *v22; // x8
  _QWORD *v23; // x22
  const char *v24; // x20
  _QWORD *v25; // x8
  const char *v26; // x1
  _QWORD *v27; // x8
  const char *v28; // x20

  v9 = a1 + 1;
  if ( a1 + 1 == a2
    || (*(_QWORD *)(a5 + 8) ? (v11 = *(const char **)a5) : (v11 = &byte_100075A30),
        a2[5] ? (v12 = (const char *)a2[4]) : (v12 = &byte_100075A30),
        strcmp(v11, v12) < 0) )
  {
    v13 = *a2;
    if ( (_QWORD *)*a1 == a2 )
    {
      v15 = a2;
LABEL_29:
      if ( v13 )
      {
        *a3 = v15;
        return v15 + 1;
      }
      else
      {
        *a3 = a2;
        return a2;
      }
    }
    if ( v13 )
    {
      v14 = (_QWORD *)*a2;
      do
      {
        v15 = v14;
        v14 = (_QWORD *)v14[1];
      }
      while ( v14 );
    }
    else
    {
      v18 = a2;
      do
      {
        v15 = (_QWORD *)v18[2];
        v19 = *v15 == (_QWORD)v18;
        v18 = v15;
      }
      while ( v19 );
    }
    if ( v15[5] )
      v20 = (const char *)v15[4];
    else
      v20 = &byte_100075A30;
    if ( *(_QWORD *)(a5 + 8) )
      v21 = *(const char **)a5;
    else
      v21 = &byte_100075A30;
    if ( strcmp(v20, v21) < 0 )
      goto LABEL_29;
    v22 = (_QWORD *)*v9;
    if ( *v9 )
    {
      do
      {
        while ( 1 )
        {
          v23 = v22;
          v24 = v22[5] ? (const char *)v22[4] : &byte_100075A30;
          if ( (strcmp(v21, v24) & 0x80000000) == 0 )
            break;
          v22 = (_QWORD *)*v23;
          v9 = v23;
          if ( !*v23 )
            goto LABEL_40;
        }
        if ( (strcmp(v24, v21) & 0x80000000) == 0 )
          break;
        v9 = v23 + 1;
        v22 = (_QWORD *)v23[1];
      }
      while ( v22 );
      goto LABEL_40;
    }
LABEL_32:
    v23 = v9;
LABEL_40:
    *a3 = v23;
    return v9;
  }
  if ( (strcmp(v12, v11) & 0x80000000) == 0 )
  {
    *a3 = a2;
    *a4 = a2;
    return a4;
  }
  v16 = a2[1];
  if ( v16 )
  {
    v17 = (_QWORD *)a2[1];
    do
    {
      a4 = v17;
      v17 = (_QWORD *)*v17;
    }
    while ( v17 );
  }
  else
  {
    v25 = a2;
    do
    {
      a4 = (_QWORD *)v25[2];
      v19 = *a4 == (_QWORD)v25;
      v25 = a4;
    }
    while ( !v19 );
  }
  if ( a4 != v9 )
  {
    v26 = a4[5] ? (const char *)a4[4] : &byte_100075A30;
    if ( (strcmp(v11, v26) & 0x80000000) == 0 )
    {
      v27 = (_QWORD *)*v9;
      if ( *v9 )
      {
        do
        {
          while ( 1 )
          {
            v23 = v27;
            v28 = v27[5] ? (const char *)v27[4] : &byte_100075A30;
            if ( (strcmp(v11, v28) & 0x80000000) == 0 )
              break;
            v27 = (_QWORD *)*v23;
            v9 = v23;
            if ( !*v23 )
              goto LABEL_40;
          }
          if ( (strcmp(v28, v11) & 0x80000000) == 0 )
            break;
          v9 = v23 + 1;
          v27 = (_QWORD *)v23[1];
        }
        while ( v27 );
        goto LABEL_40;
      }
      goto LABEL_32;
    }
  }
  if ( v16 )
  {
    *a3 = a4;
  }
  else
  {
    *a3 = a2;
    return a2 + 1;
  }
  return a4;
}
// 100075A30: using guessed type char byte_100075A30;
