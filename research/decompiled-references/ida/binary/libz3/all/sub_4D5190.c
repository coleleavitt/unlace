void __fastcall sub_4D5190(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // r12
  void *v11; // rdi
  void *v12; // rdi

  v2 = a1[23];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[22];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[19];
  if ( v4 )
    sub_186B220(v4);
  v5 = (void *)a1[13];
  if ( v5 )
    sub_186B220(v5);
  v6 = (void *)a1[10];
  if ( v6 )
    sub_186B220(v6);
  v7 = (void *)a1[7];
  if ( v7 )
    sub_186B220(v7);
  v8 = (_QWORD *)a1[6];
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[v9];
      do
      {
        while ( *v8 )
        {
          v11 = (void *)(*v8++ - 8LL);
          sub_186B220(v11);
          if ( v10 == v8 )
          {
            v8 = (_QWORD *)a1[6];
            goto LABEL_19;
          }
        }
        ++v8;
      }
      while ( v10 != v8 );
      v8 = (_QWORD *)a1[6];
    }
LABEL_19:
    sub_186B220(v8 - 1);
  }
  v12 = (void *)a1[3];
  if ( v12 )
    sub_186B220(v12);
}

