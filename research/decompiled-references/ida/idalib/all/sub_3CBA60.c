void __fastcall sub_3CBA60(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r8
  unsigned __int128 v5; // rax
  _QWORD *v6; // r13
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // al
  _QWORD *v10; // rsi
  _QWORD *i; // rcx
  void **v12; // rbp
  void **v13; // r12
  void *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  bool v17; // zf

  v3 = a1 + 8;
  v4 = (_QWORD *)a1[9];
  if ( v4 )
  {
    *((_QWORD *)&v5 + 1) = *a2;
    v6 = a1 + 8;
    v7 = (_QWORD *)a1[9];
    while ( 1 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v5 = v7[4];
        if ( (unsigned __int64)v5 < *((_QWORD *)&v5 + 1) )
          goto LABEL_8;
        if ( *((_QWORD *)&v5 + 1) >= (unsigned __int64)v5 )
          break;
LABEL_6:
        v6 = v7;
        v7 = (_QWORD *)v7[2];
        if ( !v7 )
          goto LABEL_9;
      }
      v8 = v7[5];
      *(_QWORD *)&v5 = a2[1];
      if ( v8 >= (unsigned __int64)v5 )
      {
        if ( (unsigned __int64)v5 >= v8 )
        {
          v10 = (_QWORD *)v7[2];
          for ( i = (_QWORD *)v7[3]; i; i = (_QWORD *)i[2] )
          {
            while ( v5 >= __PAIR128__(i[4], i[5]) )
            {
              i = (_QWORD *)i[3];
              if ( !i )
                goto LABEL_18;
            }
            v6 = i;
          }
LABEL_18:
          while ( v10 )
          {
            while ( __PAIR128__(v10[4], v10[5]) >= v5 )
            {
              v7 = v10;
              v10 = (_QWORD *)v10[2];
              if ( !v10 )
                goto LABEL_21;
            }
            v10 = (_QWORD *)v10[3];
          }
LABEL_21:
          if ( (_QWORD *)a1[10] == v7 && v3 == v6 )
            goto LABEL_12;
          while ( v7 != v6 )
          {
            v15 = v7;
            v7 = (_QWORD *)std::_Rb_tree_increment(v7);
            v16 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v15, v3);
            *v16 = a1[3];
            v17 = a1[6]-- == 1;
            a1[3] = v16;
            if ( v17 )
            {
              v12 = (void **)*a1;
              v13 = (void **)(*a1 + 8LL * a1[1]);
              if ( (void **)*a1 != v13 )
              {
                do
                {
                  v14 = *v12++;
                  qfree(v14);
                }
                while ( v13 != v12 );
                v13 = (void **)*a1;
              }
              if ( v13 )
              {
                a1[1] = 0;
                qfree(v13);
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
      v7 = (_QWORD *)v7[3];
      if ( !v7 )
      {
LABEL_9:
        v9 = v3 == v6;
        goto LABEL_10;
      }
    }
  }
  v6 = a1 + 8;
  v9 = 1;
LABEL_10:
  if ( (_QWORD *)a1[10] == v6 && v9 )
  {
LABEL_12:
    sub_3CB990((__int64)a1, v4);
    a1[9] = 0;
    a1[10] = v3;
    a1[11] = v3;
    a1[12] = 0;
  }
}
