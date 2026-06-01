__int64 __fastcall sub_4B3E80(_QWORD *a1, unsigned int a2, int a3, __int64 a4, char a5)
{
  __int64 *v7; // rbx
  _QWORD *v8; // r8
  unsigned int v9; // r15d
  __int64 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rdx
  char v14; // dl
  char v15; // al
  __int64 *v16; // r13
  __int64 ***v17; // rsi
  __int64 v18; // rax
  __int64 ***v19; // rdx
  __int64 **v20; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // [rsp+0h] [rbp-48h]
  int v25; // [rsp+Ch] [rbp-3Ch]

  if ( a2 > 8 )
  {
    if ( !under_debugger )
      interr(1402);
    goto LABEL_45;
  }
  if ( a5 )
  {
    v7 = (__int64 *)a1[a2 + 9];
    v8 = &a1[a2 + 9];
  }
  else
  {
    v7 = (__int64 *)a1[a2];
    v8 = &a1[a2];
  }
  v9 = 0;
  if ( !v7 )
    return v9;
  v10 = nullptr;
  do
  {
    while ( 1 )
    {
      v14 = *((_BYTE *)v7 + 28);
      v15 = *(_BYTE *)(a4 + 28);
      if ( v14 == v15 )
        break;
LABEL_12:
      v10 = v7;
      v7 = (__int64 *)*v7;
      if ( !v7 )
        return v9;
    }
    if ( a3 == 1 )
    {
      while ( !v14 )
      {
        if ( v7[2] == *(_QWORD *)(a4 + 16) )
          goto LABEL_17;
        if ( !*v7 )
          return v9;
        v10 = v7;
        v14 = *(_BYTE *)(*v7 + 28);
        v7 = (__int64 *)*v7;
        if ( *(_BYTE *)(a4 + 28) != v14 )
          goto LABEL_12;
      }
      if ( !under_debugger )
        interr(1821);
LABEL_45:
      BUG();
    }
    v11 = *(_QWORD *)(a4 + 8);
    while ( 1 )
    {
      v12 = v7[1];
      if ( !v15 )
      {
        if ( v11 == v12 )
          break;
        v13 = (__int64 *)*v7;
        if ( !*v7 )
          return v9;
        if ( *((_BYTE *)v13 + 28) )
          goto LABEL_11;
        goto LABEL_33;
      }
      if ( v11 == v12 )
      {
        v23 = *(_QWORD *)(a4 + 16);
        if ( !v23 || v23 == v7[2] )
          break;
      }
      v13 = (__int64 *)*v7;
      if ( !*v7 )
        return v9;
      if ( *((_BYTE *)v13 + 28) != v15 )
      {
LABEL_11:
        v7 = v13;
        goto LABEL_12;
      }
LABEL_33:
      v10 = v7;
      v7 = v13;
    }
LABEL_17:
    v16 = (__int64 *)*v7;
    if ( v10 )
      *v10 = (__int64)v16;
    else
      *v8 = v16;
    v17 = (__int64 ***)a1[18];
    v18 = a1[19];
    v19 = &v17[v18];
    if ( v19 != v17 )
    {
      do
      {
        while ( 1 )
        {
          v20 = *v17;
          if ( **v17 == v7 )
            break;
          if ( v19 == ++v17 )
            goto LABEL_24;
        }
        ++v17;
        *v20 = v16;
      }
      while ( v19 != v17 );
LABEL_24:
      v18 = a1[19];
      v17 = (__int64 ***)a1[18];
    }
    if ( a1[20] < (unsigned __int64)(v18 + 1) )
    {
      v25 = a3;
      v24 = v8;
      v22 = qvector_reserve(a1 + 18, v17, v18 + 1, 8);
      a3 = v25;
      v8 = v24;
      a1[18] = v22;
      v17 = (__int64 ***)v22;
      v18 = a1[19];
    }
    v17[v18] = (__int64 **)v7;
    v7 = v16;
    ++v9;
    ++a1[19];
  }
  while ( v16 );
  return v9;
}
