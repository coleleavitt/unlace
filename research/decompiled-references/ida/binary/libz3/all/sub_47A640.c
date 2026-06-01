void __fastcall sub_47A640(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r12
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  *a1 = &off_1C4EBE8;
  v2 = a1[26];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[25];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (_QWORD *)a1[24];
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = &v4[v5];
      do
      {
        while ( *v4 )
        {
          v7 = (void *)(*v4++ - 8LL);
          sub_186B220(v7);
          if ( v6 == v4 )
          {
            v4 = (_QWORD *)a1[24];
            goto LABEL_11;
          }
        }
        ++v4;
      }
      while ( v6 != v4 );
      v4 = (_QWORD *)a1[24];
    }
LABEL_11:
    sub_186B220(v4 - 1);
  }
  v8 = (void *)a1[23];
  a1[17] = &off_1C62200;
  if ( v8 )
    sub_186B220(v8);
  v9 = (void *)a1[20];
  if ( v9 )
    sub_186B220(v9);
  v10 = a1[16];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (void *)a1[13];
  if ( v11 )
    sub_186B220(v11);
  v12 = (void *)a1[10];
  if ( v12 )
    sub_186B220(v12);
  v13 = (void *)a1[9];
  a1[3] = &off_1C62200;
  if ( v13 )
    sub_186B220(v13);
  v14 = (void *)a1[6];
  if ( v14 )
    sub_186B220(v14);
  operator delete(a1, 0xD8u);
}

