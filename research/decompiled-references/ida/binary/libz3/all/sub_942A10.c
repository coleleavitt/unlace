void __fastcall sub_942A10(__int64 **a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[v2];
      do
      {
        v5 = *v1;
        if ( *v1 )
        {
          v6 = *(unsigned int *)(v5 - 4);
          if ( (_DWORD)v6 )
          {
            v7 = v5 + 16 * v6;
            do
            {
              while ( 1 )
              {
                v8 = *(_QWORD *)(v5 + 8);
                if ( !v8 )
                  break;
                v5 += 16;
                sub_186B220((void *)(v8 - 8));
                if ( v7 == v5 )
                  goto LABEL_9;
              }
              v5 += 16;
            }
            while ( v7 != v5 );
LABEL_9:
            v5 = *v1;
          }
          sub_186B220((void *)(v5 - 8));
        }
        ++v1;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
    sub_186B220(v1 - 1);
  }
}

