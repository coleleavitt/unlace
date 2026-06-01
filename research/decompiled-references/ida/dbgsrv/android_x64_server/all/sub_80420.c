/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80420
// Address: 0x0000000000080420

//----- (0000000000080420) ----------------------------------------------------
_QWORD *__fastcall sub_80420(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v6; // r15
  _QWORD **v8; // r13
  const char *v9; // r12
  const char *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  const char *v13; // r12
  __int64 v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rbp
  _QWORD *v17; // rax
  const char *v18; // r12
  const char *v19; // rdi
  _QWORD *v20; // rbx
  const char *v21; // rbp
  _QWORD *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  const char *v26; // rsi
  const char *v27; // rbx
  _QWORD *v28; // rax
  __int64 v32; // [rsp+10h] [rbp-38h]

  v6 = a2;
  v8 = (_QWORD **)(a1 + 1);
  if ( a1 + 1 != a2 )
  {
    v9 = s1;
    v10 = s1;
    if ( *(_QWORD *)(a5 + 8) )
      v10 = *(const char **)a5;
    if ( a2[5] )
      v9 = (const char *)a2[4];
    if ( strcmp(v10, v9) >= 0 )
    {
      if ( strcmp(v9, v10) >= 0 )
      {
        *a3 = a2;
        v8 = (_QWORD **)a4;
        *a4 = a2;
        return v8;
      }
      v13 = v10;
      v14 = a2[1];
      if ( v14 )
      {
        v15 = (_QWORD *)a2[1];
        do
        {
          v16 = v15;
          v15 = (_QWORD *)*v15;
        }
        while ( v15 );
      }
      else
      {
        v16 = (_QWORD *)a2[2];
        if ( (_QWORD *)*v16 != a2 )
        {
          v23 = a2 + 2;
          do
          {
            v24 = *v23;
            v16 = *(_QWORD **)(v24 + 16);
            v25 = *v16 == v24;
            v23 = (__int64 *)(v24 + 16);
          }
          while ( !v25 );
        }
      }
      if ( v16 == v8 || (!v16[5] ? (v26 = s1) : (v26 = (const char *)v16[4]), strcmp(v13, v26) < 0) )
      {
        if ( v14 )
        {
LABEL_49:
          *a3 = v16;
          return v16;
        }
        *a3 = v6++;
        return v6;
      }
      v16 = *v8;
      if ( *v8 )
      {
        while ( 1 )
        {
          v27 = s1;
          if ( v16[5] )
            v27 = (const char *)v16[4];
          if ( strcmp(v13, v27) >= 0 )
          {
            if ( strcmp(v27, v13) >= 0 || (v8 = (_QWORD **)(v16 + 1), (v28 = (_QWORD *)v16[1]) == nullptr) )
            {
              *a3 = v16;
              return v8;
            }
          }
          else
          {
            v28 = (_QWORD *)*v16;
            v8 = (_QWORD **)v16;
            if ( !*v16 )
              goto LABEL_49;
          }
          v16 = v28;
        }
      }
LABEL_61:
      *a3 = v8;
      return v8;
    }
  }
  v11 = (_QWORD *)*a2;
  if ( (_QWORD *)*a1 == a2 )
  {
    v12 = a2;
    if ( v11 )
    {
LABEL_27:
      *a3 = v12;
      return v12 + 1;
    }
    goto LABEL_17;
  }
  v32 = *a2;
  if ( v11 )
  {
    do
    {
      v12 = v11;
      v11 = (_QWORD *)v11[1];
    }
    while ( v11 );
  }
  else
  {
    v12 = a2;
    do
    {
      v17 = v12;
      v12 = (_QWORD *)v12[2];
    }
    while ( (_QWORD *)*v12 == v17 );
  }
  v18 = s1;
  v19 = s1;
  if ( v12[5] )
    v19 = (const char *)v12[4];
  if ( *(_QWORD *)(a5 + 8) )
    v18 = *(const char **)a5;
  if ( strcmp(v19, v18) >= 0 )
  {
    v20 = *v8;
    if ( *v8 )
    {
      v8 = (_QWORD **)(a1 + 1);
      while ( 1 )
      {
        v21 = s1;
        if ( v20[5] )
          v21 = (const char *)v20[4];
        if ( strcmp(v18, v21) >= 0 )
        {
          if ( strcmp(v21, v18) >= 0 || (v8 = (_QWORD **)(v20 + 1), (v22 = (_QWORD *)v20[1]) == nullptr) )
          {
            *a3 = v20;
            return v8;
          }
        }
        else
        {
          v22 = (_QWORD *)*v20;
          v8 = (_QWORD **)v20;
          if ( !*v20 )
          {
            *a3 = v20;
            return v20;
          }
        }
        v20 = v22;
      }
    }
    goto LABEL_61;
  }
  if ( v32 )
    goto LABEL_27;
LABEL_17:
  *a3 = a2;
  return v6;
}
