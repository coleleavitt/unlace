void __fastcall sub_3C6720(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r8
  unsigned int v5; // edx
  _QWORD *v6; // r13
  __int64 v7; // rbx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  bool v11; // al
  __int64 v12; // rsi
  __int64 i; // rcx
  unsigned int v14; // edi
  unsigned int v15; // ecx
  void **v16; // rbp
  void **v17; // r12
  void *v18; // rdi
  _QWORD *v19; // rax
  bool v20; // zf

  v3 = a1 + 8;
  v4 = (_QWORD *)a1[9];
  if ( v4 )
  {
    v5 = *a2;
    v6 = a1 + 8;
    v7 = a1[9];
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v7 + 32);
        if ( v10 < v5 )
          goto LABEL_8;
        if ( v5 >= v10 )
          break;
LABEL_6:
        v6 = (_QWORD *)v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_9;
      }
      v8 = *(_DWORD *)(v7 + 36);
      v9 = a2[1];
      if ( v8 >= v9 )
      {
        if ( v9 >= v8 )
        {
          v12 = *(_QWORD *)(v7 + 16);
          for ( i = *(_QWORD *)(v7 + 24); i; i = *(_QWORD *)(i + 16) )
          {
            while ( 1 )
            {
              v14 = *(_DWORD *)(i + 32);
              if ( v5 < v14 || v14 >= v5 && v9 < *(_DWORD *)(i + 36) )
                break;
              i = *(_QWORD *)(i + 24);
              if ( !i )
                goto LABEL_20;
            }
            v6 = (_QWORD *)i;
          }
LABEL_20:
          while ( v12 )
          {
            while ( 1 )
            {
              v15 = *(_DWORD *)(v12 + 32);
              if ( v15 < v5 || v5 >= v15 && *(_DWORD *)(v12 + 36) < v9 )
                break;
              v7 = v12;
              v12 = *(_QWORD *)(v12 + 16);
              if ( !v12 )
                goto LABEL_25;
            }
            v12 = *(_QWORD *)(v12 + 24);
          }
LABEL_25:
          if ( a1[10] == v7 && v3 == v6 )
            goto LABEL_12;
          while ( (_QWORD *)v7 != v6 )
          {
            v7 = std::_Rb_tree_increment();
            v19 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
            *v19 = a1[3];
            v20 = a1[6]-- == 1;
            a1[3] = v19;
            if ( v20 )
            {
              v16 = (void **)*a1;
              v17 = (void **)(*a1 + 8LL * a1[1]);
              if ( (void **)*a1 != v17 )
              {
                do
                {
                  v18 = *v16++;
                  qfree(v18);
                }
                while ( v17 != v16 );
                v17 = (void **)*a1;
              }
              if ( v17 )
              {
                a1[1] = 0;
                qfree(v17);
                *a1 = 0;
                a1[2] = 0;
              }
              a1[5] = 0;
              *(_OWORD *)(a1 + 3) = 0;
            }
            --a1[12];
          }
          return;
        }
        goto LABEL_6;
      }
LABEL_8:
      v7 = *(_QWORD *)(v7 + 24);
      if ( !v7 )
      {
LABEL_9:
        v11 = v3 == v6;
        goto LABEL_10;
      }
    }
  }
  v6 = a1 + 8;
  v11 = 1;
LABEL_10:
  if ( (_QWORD *)a1[10] == v6 && v11 )
  {
LABEL_12:
    sub_3C6650((__int64)a1, v4);
    a1[9] = 0;
    a1[10] = v3;
    a1[11] = v3;
    a1[12] = 0;
  }
}

