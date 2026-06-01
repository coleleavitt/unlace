void __fastcall sub_3BCC50(void **a1)
{
  void **v1; // r13
  __int64 v2; // rax
  void **v3; // r12
  _DWORD *v4; // rbp
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi

  if ( a1 )
  {
    v1 = a1;
    v2 = *((unsigned int *)a1 - 1);
    if ( (_DWORD)v2 )
    {
      v3 = &a1[v2];
      do
      {
        while ( 1 )
        {
          v4 = *v1;
          if ( *v1 )
          {
            v5 = v4[19]-- == 1;
            if ( v5 )
              break;
          }
          if ( ++v1 == v3 )
            return;
        }
        v6 = *((_QWORD *)v4 + 4);
        if ( v6 )
        {
          v7 = *((_QWORD *)v4 + 5);
          v5 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v5 )
            sub_15D7BC0(v7, v6);
        }
        v8 = *((__int64 **)v4 + 3);
        if ( v8 )
        {
          v9 = &v8[*((unsigned int *)v8 - 1)];
          if ( v8 >= v9 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v10 = *v8;
              if ( *v8 )
              {
                v11 = *((_QWORD *)v4 + 2);
                v5 = (*(_DWORD *)(v10 + 8))-- == 1;
                if ( v5 )
                  break;
              }
              if ( ++v8 >= v9 )
                goto LABEL_17;
            }
            sub_15D7BC0(v11, v10);
            ++v8;
          }
          while ( v8 < v9 );
LABEL_17:
          v8 = *((__int64 **)v4 + 3);
          if ( v8 )
LABEL_18:
            sub_186B220(v8 - 1);
        }
        v12 = *(_QWORD *)v4;
        if ( *(_QWORD *)v4 )
        {
          v13 = *((_QWORD *)v4 + 1);
          v5 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v5 )
            sub_15D7BC0(v13, v12);
        }
        ++v1;
        sub_186B220(v4);
      }
      while ( v1 != v3 );
    }
  }
}

