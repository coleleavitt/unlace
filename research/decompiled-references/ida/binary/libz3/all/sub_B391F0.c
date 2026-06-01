void __fastcall sub_B391F0(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  void *v10; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[6 * v2];
      do
      {
        while ( 1 )
        {
          v5 = v1[4];
          if ( v5 )
            sub_186B220((void *)(v5 - 8));
          v6 = v1[3];
          if ( v6 )
            sub_186B220((void *)(v6 - 8));
          v7 = v1[1];
          if ( v7 )
          {
            v8 = v1[2];
            if ( (*(_DWORD *)(v7 + 8))-- == 1 )
              sub_15D7BC0(v8, v7);
          }
          if ( !*v1 )
            break;
          v10 = (void *)(*v1 - 8LL);
          v1 += 6;
          sub_186B220(v10);
          if ( v1 == v4 )
          {
            v1 = *a1;
            goto LABEL_14;
          }
        }
        v1 += 6;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
LABEL_14:
    sub_186B220(v1 - 1);
  }
}

