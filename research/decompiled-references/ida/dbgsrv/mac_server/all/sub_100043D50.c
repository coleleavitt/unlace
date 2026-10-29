/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043D50
// Address: 0x0000000100043D50

//----- (0000000100043D50) ----------------------------------------------------
_QWORD *__fastcall sub_100043D50(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, char *a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // r14
  const char *v7; // r15
  const char *v8; // r13
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  _QWORD *v12; // rbx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // rax
  bool v17; // zf
  const char *v18; // r15
  const char *v19; // rdi
  bool v20; // sf
  __int64 v21; // rax
  _QWORD *v22; // r12
  const char *v23; // rbx
  _QWORD *v24; // rax
  const char *v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // r15
  const char *v28; // rbx
  char *__s1; // [rsp+8h] [rbp-38h]

  v5 = a2;
  v6 = a1 + 1;
  if ( a1 + 1 == a2 )
    goto LABEL_7;
  v7 = _s1;
  v8 = _s1;
  if ( *((_QWORD *)a5 + 1) )
    v8 = *(const char **)a5;
  __s1 = a5;
  if ( a2[5] )
    v7 = (const char *)a2[4];
  v9 = strcmp(v8, v7);
  a5 = __s1;
  if ( v9 < 0 )
  {
LABEL_7:
    v10 = (_QWORD *)*a2;
    v11 = a2;
    if ( (_QWORD *)*a1 == a2 )
      goto LABEL_24;
    if ( v10 )
    {
      v12 = (_QWORD *)*a2;
      do
      {
        v11 = v10;
        v10 = (_QWORD *)v10[1];
      }
      while ( v10 );
    }
    else
    {
      v12 = nullptr;
      v16 = a2;
      do
      {
        v11 = (_QWORD *)v16[2];
        v17 = *v11 == (_QWORD)v16;
        v16 = v11;
      }
      while ( v17 );
    }
    v18 = _s1;
    v19 = _s1;
    if ( v11[5] )
      v19 = (const char *)v11[4];
    if ( *((_QWORD *)a5 + 1) )
      v18 = *(const char **)a5;
    v20 = strcmp(v19, v18) < 0;
    v10 = v12;
    if ( v20 )
    {
LABEL_24:
      if ( v10 )
      {
        *a3 = v11;
        return v11 + 1;
      }
      else
      {
        *a3 = a2;
      }
      return v5;
    }
    v21 = *v6;
    if ( *v6 )
    {
      do
      {
        while ( 1 )
        {
          v22 = (_QWORD *)v21;
          v23 = _s1;
          if ( *(_QWORD *)(v21 + 40) )
            v23 = *(const char **)(v21 + 32);
          if ( strcmp(v18, v23) >= 0 )
            break;
          v21 = *v22;
          v6 = v22;
          if ( !*v22 )
            goto LABEL_38;
        }
        if ( strcmp(v23, v18) >= 0 )
          break;
        v6 = v22 + 1;
        v21 = v22[1];
      }
      while ( v21 );
    }
    else
    {
      v22 = v6;
    }
LABEL_38:
    *a3 = v22;
    return v6;
  }
  if ( strcmp(v7, v8) >= 0 )
  {
    *a3 = a2;
    *a4 = a2;
    return a4;
  }
  v13 = a2[1];
  if ( v13 )
  {
    v14 = (_QWORD *)a2[1];
    do
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v14 );
  }
  else
  {
    v24 = a2;
    do
    {
      v15 = (_QWORD *)v24[2];
      v17 = *v15 == (_QWORD)v24;
      v24 = v15;
    }
    while ( !v17 );
  }
  if ( v15 != v6 )
  {
    v25 = v15[5] ? (const char *)v15[4] : _s1;
    if ( strcmp(v8, v25) >= 0 )
    {
      v26 = *v6;
      if ( *v6 )
      {
        do
        {
          while ( 1 )
          {
            v27 = (_QWORD *)v26;
            v28 = _s1;
            if ( *(_QWORD *)(v26 + 40) )
              v28 = *(const char **)(v26 + 32);
            if ( strcmp(v8, v28) >= 0 )
              break;
            v26 = *v27;
            v6 = v27;
            if ( !*v27 )
              goto LABEL_61;
          }
          if ( strcmp(v28, v8) >= 0 )
            break;
          v6 = v27 + 1;
          v26 = v27[1];
        }
        while ( v26 );
      }
      else
      {
        v27 = a1 + 1;
      }
LABEL_61:
      *a3 = v27;
      return v6;
    }
  }
  if ( v13 )
  {
    *a3 = v15;
    return v15;
  }
  else
  {
    *a3 = v5++;
  }
  return v5;
}
