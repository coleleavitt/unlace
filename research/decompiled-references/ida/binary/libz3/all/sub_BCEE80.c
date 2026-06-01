__int64 __fastcall sub_BCEE80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v2 = a1[12];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[11];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[10];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = (__int64 *)a1[9];
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v7 = &v6[result];
    if ( v6 >= v7 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[8];
          v10 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_14;
      }
      result = sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_14:
    v6 = (__int64 *)a1[9];
    if ( v6 )
LABEL_15:
      result = sub_186B220(v6 - 1);
  }
  v11 = (__int64 *)a1[7];
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    v12 = &v11[result];
    if ( v11 >= v12 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[6];
          v10 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_23;
      }
      result = sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_23:
    v11 = (__int64 *)a1[7];
    if ( v11 )
LABEL_24:
      result = sub_186B220(v11 - 1);
  }
  v15 = (__int64 *)a1[5];
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    v16 = &v15[result];
    if ( v15 >= v16 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[4];
          v10 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_32;
      }
      result = sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_32:
    v15 = (__int64 *)a1[5];
    if ( v15 )
LABEL_33:
      result = sub_186B220(v15 - 1);
  }
  v19 = a1[3];
  if ( v19 )
    result = sub_186B220((void *)(v19 - 8));
  v20 = a1[2];
  if ( v20 )
    return sub_186B220((void *)(v20 - 8));
  return result;
}

