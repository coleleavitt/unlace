void __fastcall sub_41E3C0(__int64 **a1)
{
  __int64 *v1; // r13
  __int64 v2; // rax
  __int64 *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[6 * v2];
      do
      {
        v5 = v1[4];
        if ( v5 )
        {
          v6 = v1[5];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v6, v5);
        }
        v8 = (__int64 *)v1[3];
        if ( v8 )
        {
          v9 = &v8[*((unsigned int *)v8 - 1)];
          if ( v8 >= v9 )
            goto LABEL_15;
          do
          {
            while ( 1 )
            {
              v10 = *v8;
              if ( *v8 )
              {
                v11 = v1[2];
                v7 = (*(_DWORD *)(v10 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v8 >= v9 )
                goto LABEL_14;
            }
            sub_15D7BC0(v11, v10);
            ++v8;
          }
          while ( v8 < v9 );
LABEL_14:
          v8 = (__int64 *)v1[3];
          if ( v8 )
LABEL_15:
            sub_186B220(v8 - 1);
        }
        v12 = *v1;
        if ( *v1 )
        {
          v13 = v1[1];
          v7 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v13, v12);
        }
        v1 += 6;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
    sub_186B220(v1 - 1);
  }
}

