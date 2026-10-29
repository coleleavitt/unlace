__int64 __fastcall sub_608500(_QWORD *a1)
{
  void *v2; // rdi
  __int64 result; // rax
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi

  v2 = (void *)a1[17];
  if ( v2 )
    result = sub_186B220(v2);
  v4 = (__int64 *)a1[14];
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    v5 = &v4[result];
    if ( v4 >= v5 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[13];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_10;
      }
      result = sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_10:
    v4 = (__int64 *)a1[14];
    if ( v4 )
LABEL_11:
      result = sub_186B220(v4 - 1);
  }
  v9 = (__int64 *)a1[12];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[11];
          v8 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_19;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_19:
    v9 = (__int64 *)a1[12];
    if ( v9 )
LABEL_20:
      result = sub_186B220(v9 - 1);
  }
  v13 = (__int64 *)a1[10];
  if ( v13 )
  {
    result = *((unsigned int *)v13 - 1);
    v14 = &v13[result];
    if ( v13 >= v14 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[9];
          v8 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_28;
      }
      result = sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_28:
    v13 = (__int64 *)a1[10];
    if ( v13 )
LABEL_29:
      result = sub_186B220(v13 - 1);
  }
  v17 = (__int64 *)a1[8];
  if ( v17 )
  {
    result = *((unsigned int *)v17 - 1);
    v18 = &v17[result];
    if ( v17 >= v18 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[7];
          v8 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_37;
      }
      result = sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_37:
    v17 = (__int64 *)a1[8];
    if ( v17 )
LABEL_38:
      result = sub_186B220(v17 - 1);
  }
  v21 = (__int64 *)a1[6];
  if ( v21 )
  {
    result = *((unsigned int *)v21 - 1);
    v22 = &v21[result];
    if ( v21 >= v22 )
      return sub_186B220(v21 - 1);
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[5];
          v8 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_46;
      }
      result = sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_46:
    v21 = (__int64 *)a1[6];
    if ( v21 )
      return sub_186B220(v21 - 1);
  }
  return result;
}

