void __fastcall sub_4D55E0(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v4 = v1 + 24 * v2;
      do
      {
        v5 = *(__int64 **)(v1 + 16);
        if ( v5 )
        {
          v6 = &v5[*((unsigned int *)v5 - 1)];
          if ( v5 >= v6 )
            goto LABEL_12;
          do
          {
            while ( 1 )
            {
              v7 = *v5;
              if ( *v5 )
              {
                v8 = *(_QWORD *)(v1 + 8);
                if ( (*(_DWORD *)(v7 + 8))-- == 1 )
                  break;
              }
              if ( ++v5 >= v6 )
                goto LABEL_11;
            }
            sub_15D7BC0(v8, v7);
            ++v5;
          }
          while ( v5 < v6 );
LABEL_11:
          v5 = *(__int64 **)(v1 + 16);
          if ( v5 )
LABEL_12:
            sub_186B220(v5 - 1);
        }
        v1 += 24;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
    sub_186B220((void *)(v1 - 8));
  }
}

