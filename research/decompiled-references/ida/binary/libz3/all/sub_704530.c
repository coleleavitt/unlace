void __fastcall sub_704530(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v4; // rbp
  void *v5; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[v2];
      do
      {
        while ( *v1 )
        {
          v5 = (void *)(*v1++ - 8LL);
          sub_186B220(v5);
          if ( v1 == v4 )
          {
            v1 = *a1;
            goto LABEL_7;
          }
        }
        ++v1;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
LABEL_7:
    sub_186B220(v1 - 1);
  }
}

