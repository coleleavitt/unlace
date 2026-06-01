void __fastcall sub_7956B0(_QWORD *a1)
{
  unsigned int ***v2; // rbx
  unsigned int ***v3; // r12
  __int64 v4; // rdi
  unsigned int **v5; // r13
  __int64 v6; // rax
  void **v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = (unsigned int ***)a1[8];
  *a1 = &off_1C54798;
  if ( !v2 )
    goto LABEL_13;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v2 == v3 )
    goto LABEL_12;
  v4 = a1[7];
  do
  {
    v5 = *v2;
    v6 = ***v2;
    if ( v4 )
    {
      if ( (unsigned int)v6 < *(_DWORD *)(v4 - 4) )
      {
        v7 = (void **)(*(_QWORD *)(v4 + 8 * v6) & 0xFFFFFFFFFFFFFFF8LL);
        if ( *(_QWORD *)(v4 + 8 * v6) > 7u )
        {
          if ( *v7 )
            sub_186B220(*v7);
          sub_186B220(v7);
          v4 = a1[7];
          v6 = **v5;
        }
      }
    }
    ++v2;
    *(_QWORD *)(v4 + 8 * v6) = 0;
  }
  while ( v3 != v2 );
  v3 = (unsigned int ***)a1[8];
  if ( v3 )
  {
LABEL_12:
    sub_186B220(v3 - 1);
LABEL_13:
    v4 = a1[7];
  }
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v8 = a1[5];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[4];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[3];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[2];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[1];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  operator delete(a1, 0x48u);
}

