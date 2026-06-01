void __fastcall sub_534B10(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rcx
  bool v11; // al
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 i; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rax

  if ( a3 )
  {
    v3 = *(_QWORD **)(a1 + 56);
    v4 = &v3[10 * *(_QWORD *)(a1 + 64)];
    if ( v4 != v3 )
    {
      while ( a2 != *v3 )
      {
        v3 += 10;
        if ( v4 == v3 )
          return;
      }
      if ( v3 )
      {
        if ( (unsigned __int64)a3 < v3[2] )
        {
          v5 = (_QWORD *)(v3[1] + 8LL * a3);
          if ( *v5 == -1 )
          {
            if ( !under_debugger )
              interr(1078);
            goto LABEL_43;
          }
          *v5 = -1;
          return;
        }
        v6 = v3 + 5;
        v7 = v3 + 5;
        if ( v3[6] )
        {
          v8 = v3[6];
          do
          {
            v9 = *(_DWORD *)(v8 + 32);
            if ( v9 < a3 )
            {
              v8 = *(_QWORD *)(v8 + 24);
            }
            else
            {
              v10 = *(_QWORD *)(v8 + 16);
              if ( a3 >= v9 )
              {
                for ( i = *(_QWORD *)(v8 + 24); i; i = *(_QWORD *)(i + 16) )
                {
                  while ( 1 )
                  {
                    v15 = *(_QWORD *)(i + 24);
                    if ( a3 < *(_DWORD *)(i + 32) )
                      break;
                    i = *(_QWORD *)(i + 24);
                    if ( !v15 )
                      goto LABEL_30;
                  }
                  v7 = (_QWORD *)i;
                }
LABEL_30:
                while ( v10 )
                {
                  while ( 1 )
                  {
                    v16 = *(_QWORD *)(v10 + 24);
                    if ( *(_DWORD *)(v10 + 32) >= a3 )
                      break;
                    v10 = *(_QWORD *)(v10 + 24);
                    if ( !v16 )
                      goto LABEL_33;
                  }
                  v8 = v10;
                  v10 = *(_QWORD *)(v10 + 16);
                }
LABEL_33:
                v12 = v3[9];
                if ( v3[7] != v8 || v6 != v7 )
                {
                  if ( (_QWORD *)v8 == v7 )
                    goto LABEL_24;
                  do
                  {
                    v17 = v8;
                    v8 = std::_Rb_tree_increment(v8);
                    v18 = (void *)std::_Rb_tree_rebalance_for_erase(v17, v3 + 5);
                    operator delete(v18, 0x30u);
                    v13 = v3[9] - 1LL;
                    v3[9] = v13;
                  }
                  while ( (_QWORD *)v8 != v7 );
LABEL_23:
                  if ( v13 == v12 )
                  {
LABEL_24:
                    if ( !under_debugger )
                      interr(1079);
LABEL_43:
                    BUG();
                  }
                  return;
                }
LABEL_22:
                sub_533530((_QWORD *)v3[6]);
                v3[6] = 0;
                v13 = 0;
                v3[7] = v6;
                v3[8] = v6;
                v3[9] = 0;
                goto LABEL_23;
              }
              v7 = (_QWORD *)v8;
              v8 = *(_QWORD *)(v8 + 16);
            }
          }
          while ( v8 );
          v11 = v6 == v7;
        }
        else
        {
          v11 = 1;
        }
        v12 = v3[9];
        if ( (_QWORD *)v3[7] != v7 || !v11 )
          goto LABEL_24;
        goto LABEL_22;
      }
    }
  }
}
