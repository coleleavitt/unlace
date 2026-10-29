__int64 __fastcall sub_3ED360(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 result; // rax
  void (__fastcall ***v7)(void *); // rbx
  bool v8; // zf
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  void *v17; // rdi

  a1[23] = &off_1C62200;
  v2 = (void *)a1[29];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[26];
  if ( v3 )
    sub_186B220(v3);
  v4 = (void *)a1[22];
  a1[16] = &off_1C62200;
  if ( v4 )
    sub_186B220(v4);
  v5 = (void *)a1[19];
  if ( v5 )
    sub_186B220(v5);
  result = sub_14B63F0(a1 + 14);
  v7 = (void (__fastcall ***)(void *))a1[10];
  if ( v7 )
  {
    v8 = (*((_DWORD *)v7 + 4))-- == 1;
    if ( v8 )
    {
      (**v7)(v7);
      result = sub_186B220(v7);
    }
  }
  v9 = (__int64 *)a1[9];
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
          v12 = a1[8];
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
    v9 = (__int64 *)a1[9];
    if ( v9 )
LABEL_20:
      result = sub_186B220(v9 - 1);
  }
  v13 = (__int64 *)a1[7];
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
          v16 = a1[6];
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
    v13 = (__int64 *)a1[7];
    if ( v13 )
LABEL_29:
      result = sub_186B220(v13 - 1);
  }
  v17 = (void *)a1[3];
  if ( v17 )
    return sub_186B220(v17);
  return result;
}

