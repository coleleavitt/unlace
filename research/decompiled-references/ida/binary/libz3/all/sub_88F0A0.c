void __fastcall sub_88F0A0(char *ptr, int a2)
{
  char *v3; // r14
  char *v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi

  if ( ptr )
  {
    if ( a2 )
    {
      v3 = ptr;
      v4 = &ptr[16 * a2];
      do
      {
        v5 = *((__int64 **)v3 + 1);
        if ( v5 )
        {
          v6 = *((unsigned int *)v5 - 1);
          if ( (_DWORD)v6 )
          {
            v7 = &v5[3 * v6];
            do
            {
              while ( 1 )
              {
                v8 = *v5;
                if ( *v5 )
                {
                  v9 = v5[1];
                  if ( (*(_DWORD *)(v8 + 8))-- == 1 )
                    break;
                }
                v5 += 3;
                if ( v7 == v5 )
                  goto LABEL_11;
              }
              sub_15D7BC0(v9, v8);
              v5 += 3;
            }
            while ( v7 != v5 );
LABEL_11:
            v5 = *((__int64 **)v3 + 1);
          }
          sub_186B220(v5 - 1);
        }
        v3 += 16;
      }
      while ( v3 != v4 );
    }
    sub_186B220(ptr);
  }
}

