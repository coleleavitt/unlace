__int64 __fastcall sub_3ACAB0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  void *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // r12
  void *v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r12
  void *v14; // rdi
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // r12
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi

  v2 = (_QWORD *)a1[77];
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[v3];
      do
      {
        while ( *v2 )
        {
          v5 = (void *)(*v2++ - 8LL);
          sub_186B220(v5);
          if ( v4 == v2 )
          {
            v2 = (_QWORD *)a1[77];
            goto LABEL_7;
          }
        }
        ++v2;
      }
      while ( v4 != v2 );
      v2 = (_QWORD *)a1[77];
    }
LABEL_7:
    sub_186B220(v2 - 1);
  }
  v6 = (_QWORD *)a1[75];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[v7];
      do
      {
        while ( *v6 )
        {
          v9 = (void *)(*v6++ - 8LL);
          sub_186B220(v9);
          if ( v8 == v6 )
          {
            v6 = (_QWORD *)a1[75];
            goto LABEL_14;
          }
        }
        ++v6;
      }
      while ( v8 != v6 );
      v6 = (_QWORD *)a1[75];
    }
LABEL_14:
    sub_186B220(v6 - 1);
  }
  v10 = a1[74];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (_QWORD *)a1[69];
  if ( v11 )
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
            v11 = (_QWORD *)a1[69];
            goto LABEL_23;
          }
        }
        ++v11;
      }
      while ( v13 != v11 );
      v11 = (_QWORD *)a1[69];
    }
LABEL_23:
    sub_186B220(v11 - 1);
  }
  sub_2334C0(a1 + 67);
  v15 = (_QWORD *)a1[65];
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = &v15[v16];
      do
      {
        while ( *v15 )
        {
          v18 = (void *)(*v15++ - 8LL);
          sub_186B220(v18);
          if ( v17 == v15 )
          {
            v15 = (_QWORD *)a1[65];
            goto LABEL_30;
          }
        }
        ++v15;
      }
      while ( v15 != v17 );
      v15 = (_QWORD *)a1[65];
    }
LABEL_30:
    sub_186B220(v15 - 1);
  }
  v19 = a1[64];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = a1[63];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  sub_2334C0(a1 + 61);
  v21 = a1[60];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = a1[57];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  return sub_5C8660(a1 + 3);
}

