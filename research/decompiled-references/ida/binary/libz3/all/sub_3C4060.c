void __fastcall sub_3C4060(void ***a1)
{
  void **v1; // rbp
  __int64 v2; // rax
  void **v4; // r12
  _DWORD *v5; // r14
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[v2];
      do
      {
        while ( 1 )
        {
          v5 = *v1;
          if ( *v1 )
          {
            v6 = v5[19]-- == 1;
            if ( v6 )
              break;
          }
          if ( ++v1 == v4 )
            goto LABEL_23;
        }
        v7 = *((_QWORD *)v5 + 4);
        if ( v7 )
        {
          v8 = *((_QWORD *)v5 + 5);
          v6 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v8, v7);
        }
        v9 = *((__int64 **)v5 + 3);
        if ( v9 )
        {
          v10 = &v9[*((unsigned int *)v9 - 1)];
          if ( v9 >= v10 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v11 = *v9;
              if ( *v9 )
              {
                v12 = *((_QWORD *)v5 + 2);
                v6 = (*(_DWORD *)(v11 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v9 >= v10 )
                goto LABEL_17;
            }
            sub_15D7BC0(v12, v11);
            ++v9;
          }
          while ( v9 < v10 );
LABEL_17:
          v9 = *((__int64 **)v5 + 3);
          if ( v9 )
LABEL_18:
            sub_186B220(v9 - 1);
        }
        v13 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 )
        {
          v14 = *((_QWORD *)v5 + 1);
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v14, v13);
        }
        ++v1;
        sub_186B220(v5);
      }
      while ( v1 != v4 );
LABEL_23:
      v1 = *a1;
    }
    sub_186B220(v1 - 1);
  }
}

