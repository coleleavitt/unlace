__int64 __fastcall sub_52B550(__int64 *a1, const char *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned int v15; // ebp
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  v5 = qfopen(a2, "rt");
  if ( !v5 )
  {
    if ( a3 )
      sub_169A50(a3, (__int64)"Couldn't open file \"%s\" for reading.", a2);
    return 0;
  }
  v6 = v5;
  qfseek(v5, 0, 2);
  v7 = qftell(v6);
  v8 = v7;
  if ( v7 <= 0 )
  {
    qfclose(v6);
    return 0;
  }
  v9 = a1[1];
  v10 = v7 + 1;
  if ( v9 < v7 + 1 )
  {
    v17 = *a1;
    if ( a1[2] < v10 )
    {
      v20 = qvector_reserve(a1, v17, v7 + 1, 1);
      *a1 = v20;
      v9 = a1[1];
      v17 = v20;
    }
    memset((void *)(v17 + v9), 0, v10 - v9);
    a1[1] = v10;
  }
  else if ( v10 != v9 )
  {
    a1[1] = v10;
  }
  *(_BYTE *)(*a1 + v8) = 0;
  qfseek(v6, 0, 0);
  v11 = qfread(v6, *a1, v8);
  v12 = v11;
  if ( v11 <= 0 )
  {
    sub_169A50(a3, (__int64)"Couldn't read file \"%s\".", a2);
    v15 = 0;
  }
  else
  {
    v13 = a1[1];
    v14 = v11 + 1;
    if ( v13 < v11 + 1 )
    {
      v18 = *a1;
      if ( a1[2] < v14 )
      {
        v19 = qvector_reserve(a1, v18, v11 + 1, 1);
        *a1 = v19;
        v13 = a1[1];
        v18 = v19;
      }
      memset((void *)(v18 + v13), 0, v14 - v13);
      a1[1] = v14;
    }
    else if ( v14 != v13 )
    {
      a1[1] = v14;
    }
    *(_BYTE *)(*a1 + v12) = 0;
    v15 = 1;
  }
  qfclose(v6);
  return v15;
}
