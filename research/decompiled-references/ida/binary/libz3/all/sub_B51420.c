void __fastcall sub_B51420(_QWORD *a1)
{
  void *v2; // rdi
  void **v3; // rbx
  __int64 v4; // rax
  void **v5; // r12
  void **v6; // rbx
  __int64 v7; // rax
  void **v8; // r12
  __int64 v9; // rdi

  v2 = (void *)a1[6];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void **)a1[5];
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[3 * v4];
      do
      {
        while ( *v3 )
        {
          sub_186B220(*v3);
          v3 += 3;
          if ( v5 == v3 )
          {
            v3 = (void **)a1[5];
            goto LABEL_9;
          }
        }
        v3 += 3;
      }
      while ( v5 != v3 );
      v3 = (void **)a1[5];
    }
LABEL_9:
    sub_186B220(v3 - 1);
  }
  v6 = (void **)a1[4];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[3 * v7];
      do
      {
        while ( *v6 )
        {
          sub_186B220(*v6);
          v6 += 3;
          if ( v6 == v8 )
          {
            v6 = (void **)a1[4];
            goto LABEL_16;
          }
        }
        v6 += 3;
      }
      while ( v8 != v6 );
      v6 = (void **)a1[4];
    }
LABEL_16:
    sub_186B220(v6 - 1);
  }
  v9 = a1[3];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
}

