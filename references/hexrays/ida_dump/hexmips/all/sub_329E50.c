__int64 __fastcall sub_329E50(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  bool v3; // cf
  unsigned int v4; // r12d
  unsigned __int64 v7; // rdx
  int v8; // r13d
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // r13d
  __int64 v13; // rdi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  int v27; // r8d
  __int64 v28; // rsi
  unsigned __int8 v29; // di
  unsigned __int8 v30; // si
  __int64 v31; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a1 + 20) < v2;
  if ( *(_DWORD *)(a1 + 20) != v2 )
    goto LABEL_2;
  if ( *(_QWORD *)a1 < *(_QWORD *)a2 )
    return (unsigned int)-1;
  if ( *(_QWORD *)a2 < *(_QWORD *)a1 )
    return 1;
  v7 = *(_QWORD *)(a1 + 32);
  v3 = v7 < *(_QWORD *)(a2 + 32);
  if ( v7 != *(_QWORD *)(a2 + 32) )
  {
LABEL_2:
    if ( v3 )
      return (unsigned int)-1;
    return 1;
  }
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    do
    {
      v4 = sub_119840(
             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 80 * v9),
             (unsigned __int8 *)(80 * v9 + *(_QWORD *)(a2 + 24)));
      if ( v4 )
        return v4;
      v9 = ++v8;
    }
    while ( (unsigned __int64)v8 < *(_QWORD *)(a1 + 32) );
  }
  v10 = *(_QWORD *)(a1 + 56);
  v11 = *(_QWORD *)(a2 + 56);
  if ( v10 != v11 )
  {
    if ( v11 >= v10 )
      return (unsigned int)-1;
    return 1;
  }
  v12 = 0;
  v13 = 0;
  if ( v10 )
  {
    do
    {
      v4 = sub_119840(
             (unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 16 * v13),
             (unsigned __int8 *)(16 * v13 + *(_QWORD *)(a2 + 48)));
      if ( v4 )
        return v4;
      v13 = ++v12;
    }
    while ( (unsigned __int64)v12 < *(_QWORD *)(a1 + 56) );
  }
  v4 = lexcompare_tinfo(*(_QWORD *)(a1 + 72), *(_QWORD *)(a2 + 72), 0);
  if ( !v4 )
  {
    v4 = sub_11EA30(a1 + 96, a2 + 96);
    if ( !v4 )
    {
      v4 = sub_11EA30(a1 + 136, a2 + 136);
      if ( !v4 )
      {
        v14 = *(_QWORD *)(a1 + 296);
        v15 = *(_QWORD *)(a2 + 296);
        if ( v14 != v15 )
        {
          if ( v15 >= v14 )
            return (unsigned int)-1;
          return 1;
        }
        if ( !v14 )
          return v4;
        v16 = *(_QWORD *)(a2 + 288);
        v17 = 0;
        v31 = *(_QWORD *)(a1 + 288);
        v18 = 0;
        do
        {
          v19 = v16 + 48 * v18;
          v20 = v31 + 48 * v18;
          v21 = *(_QWORD *)(v20 + 8);
          if ( *(_QWORD *)(v19 + 8) )
          {
            v22 = *(const char **)v19;
            v23 = s1;
            if ( !v21 )
              goto LABEL_31;
          }
          else
          {
            v22 = s1;
            if ( !v21 )
              goto LABEL_33;
          }
          v23 = *(const char **)v20;
LABEL_31:
          v24 = strcmp(v23, v22);
          if ( v24 < 0 )
            return (unsigned int)-1;
          if ( v24 )
            return 1;
LABEL_33:
          v25 = *(_QWORD *)(v20 + 32);
          v26 = *(_QWORD *)(v19 + 32);
          if ( v25 != v26 )
          {
            if ( v26 < v25 )
              return 1;
            return (unsigned int)-1;
          }
          if ( v25 )
          {
            v27 = 0;
            v28 = 0;
            do
            {
              v29 = *(_BYTE *)(*(_QWORD *)(v20 + 24) + v28);
              v30 = *(_BYTE *)(*(_QWORD *)(v19 + 24) + v28);
              if ( v29 < v30 )
                return (unsigned int)-1;
              if ( v30 < v29 )
                return 1;
              v28 = ++v27;
            }
            while ( v27 < v25 );
          }
          v18 = ++v17;
        }
        while ( v17 < v14 );
      }
    }
  }
  return v4;
}
