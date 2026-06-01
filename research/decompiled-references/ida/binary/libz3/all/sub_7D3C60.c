__int64 __fastcall sub_7D3C60(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r12
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void **v12; // rbx
  void **v13; // r12
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r12
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 result; // rax

  v2 = a1[83];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[82];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[81];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = (_QWORD *)a1[79];
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = &v5[v6];
      do
      {
        while ( *v5 )
        {
          v8 = (void *)(*v5++ - 8LL);
          sub_186B220(v8);
          if ( v5 == v7 )
          {
            v5 = (_QWORD *)a1[79];
            goto LABEL_13;
          }
        }
        ++v5;
      }
      while ( v5 != v7 );
      v5 = (_QWORD *)a1[79];
    }
LABEL_13:
    sub_186B220(v5 - 1);
  }
  v9 = a1[78];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[77];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[76];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (void **)a1[8];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 == v13 )
      goto LABEL_26;
    do
    {
      if ( *v12 )
        sub_186B220(*v12);
      ++v12;
    }
    while ( v13 != v12 );
    v13 = (void **)a1[8];
    if ( v13 )
LABEL_26:
      *((_DWORD *)v13 - 1) = 0;
  }
  v14 = a1 + 10;
  do
  {
    if ( *v14 )
      *(_DWORD *)(*v14 - 4LL) = 0;
    ++v14;
  }
  while ( v14 != a1 + 75 );
  a1[7] = 0;
  v15 = a1 + 74;
  v16 = a1 + 9;
  a1[9] = 0;
  do
  {
    while ( *v15 )
    {
      v17 = (void *)(*v15-- - 8LL);
      sub_186B220(v17);
      if ( v16 == v15 )
        goto LABEL_34;
    }
    --v15;
  }
  while ( v16 != v15 );
LABEL_34:
  v18 = a1[8];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = a1[5];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = a1[3];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  result = a1[2];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

