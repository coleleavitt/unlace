__int64 __fastcall sub_7957E0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void ***v4; // rbx
  __int64 result; // rax
  void ***v6; // r13
  void **v7; // r12
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  void *v17; // rdi

  *a1 = &off_1C611F0;
  v2 = (void *)a1[14];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[11];
  if ( v3 )
    sub_186B220(v3);
  v4 = (void ***)a1[10];
  result = (__int64)qword_1C6A598;
  *a1 = qword_1C6A598;
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    v6 = &v4[result];
    if ( v4 == v6 )
      goto LABEL_13;
    do
    {
      v7 = *v4;
      if ( *v4 )
      {
        if ( *v7 )
          sub_186B220(*v7);
        result = sub_186B220(v7);
      }
      ++v4;
    }
    while ( v6 != v4 );
    v6 = (void ***)a1[10];
    if ( v6 )
LABEL_13:
      result = sub_186B220(v6 - 1);
  }
  v8 = (__int64 *)a1[9];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[8];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_21;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_21:
    v8 = (__int64 *)a1[9];
    if ( v8 )
LABEL_22:
      result = sub_186B220(v8 - 1);
  }
  v13 = (__int64 *)a1[7];
  if ( v13 )
  {
    result = *((unsigned int *)v13 - 1);
    v14 = &v13[result];
    if ( v13 >= v14 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[6];
          v12 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_30;
      }
      result = sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_30:
    v13 = (__int64 *)a1[7];
    if ( v13 )
LABEL_31:
      result = sub_186B220(v13 - 1);
  }
  v17 = (void *)a1[3];
  if ( v17 )
    return sub_186B220(v17);
  return result;
}

