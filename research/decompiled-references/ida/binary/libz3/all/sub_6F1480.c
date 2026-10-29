__int64 __fastcall sub_6F1480(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rdi
  void *v19; // rdi

  result = (__int64)&off_1C53478;
  v3 = (__int64 *)a1[17];
  *a1 = &off_1C53478;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[16];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = (__int64 *)a1[17];
    if ( v3 )
LABEL_9:
      result = sub_186B220(v3 - 1);
  }
  v8 = (__int64 *)a1[15];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[14];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_17;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_17:
    v8 = (__int64 *)a1[15];
    if ( v8 )
LABEL_18:
      result = sub_186B220(v8 - 1);
  }
  v12 = (__int64 *)a1[13];
  if ( v12 )
  {
    result = *((unsigned int *)v12 - 1);
    v13 = &v12[result];
    if ( v12 >= v13 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[12];
          v7 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_26;
      }
      result = sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_26:
    v12 = (__int64 *)a1[13];
    if ( v12 )
LABEL_27:
      result = sub_186B220(v12 - 1);
  }
  v16 = (void *)a1[11];
  if ( v16 )
    result = sub_186B220(v16);
  v17 = (void *)a1[8];
  if ( v17 )
    result = sub_186B220(v17);
  v18 = a1[5];
  if ( v18 )
    result = sub_186B220((void *)(v18 - 8));
  v19 = (void *)a1[4];
  if ( v19 )
    return sub_186B220(v19);
  return result;
}

