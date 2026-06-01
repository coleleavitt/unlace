void __fastcall sub_976490(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r12
  void *v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r12
  void *v14; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD **)(a1 + 8);
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[v8];
      do
      {
        while ( *v7 )
        {
          v10 = (void *)(*v7++ - 8LL);
          sub_186B220(v10);
          if ( v9 == v7 )
          {
            v7 = *(_QWORD **)(a1 + 8);
            goto LABEL_17;
          }
        }
        ++v7;
      }
      while ( v7 != v9 );
      v7 = *(_QWORD **)(a1 + 8);
    }
LABEL_17:
    sub_186B220(v7 - 1);
  }
  v11 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = &v11[v12];
      do
      {
        while ( *v11 )
        {
          v14 = (void *)(*v11++ - 8LL);
          sub_186B220(v14);
          if ( v11 == v13 )
          {
            v11 = *(_QWORD **)a1;
            goto LABEL_24;
          }
        }
        ++v11;
      }
      while ( v11 != v13 );
      v11 = *(_QWORD **)a1;
    }
LABEL_24:
    sub_186B220(v11 - 1);
  }
}

