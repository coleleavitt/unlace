__int64 __fastcall sub_BADB20(_QWORD *a1)
{
  __int64 result; // rax
  void ***v3; // rbx
  void ***v4; // r13
  void **v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // rdi

  result = (__int64)qword_1C6A598;
  v3 = (void ***)a1[10];
  *a1 = qword_1C6A598;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 == v4 )
      goto LABEL_9;
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        if ( *v5 )
          sub_186B220(*v5);
        result = sub_186B220(v5);
      }
      ++v3;
    }
    while ( v4 != v3 );
    v4 = (void ***)a1[10];
    if ( v4 )
LABEL_9:
      result = sub_186B220(v4 - 1);
  }
  v6 = (__int64 *)a1[9];
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v7 = &v6[result];
    if ( v6 >= v7 )
      goto LABEL_18;
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
          goto LABEL_17;
      }
      result = sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_17:
    v6 = (__int64 *)a1[9];
    if ( v6 )
LABEL_18:
      result = sub_186B220(v6 - 1);
  }
  v11 = (__int64 *)a1[7];
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    v12 = &v11[result];
    if ( v11 >= v12 )
      goto LABEL_27;
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
          goto LABEL_26;
      }
      result = sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_26:
    v11 = (__int64 *)a1[7];
    if ( v11 )
LABEL_27:
      result = sub_186B220(v11 - 1);
  }
  v15 = (void *)a1[3];
  if ( v15 )
    return sub_186B220(v15);
  return result;
}

