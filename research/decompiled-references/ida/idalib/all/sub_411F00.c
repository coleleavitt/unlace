__int64 __fastcall sub_411F00(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  bool v12; // al
  _QWORD *i; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // rdi
  void *v17; // rax
  _QWORD *v18; // [rsp+8h] [rbp-40h]

  result = sub_3792E0(0x42u);
  if ( result >= 0 )
  {
    if ( a1[276] != a2 )
      return sub_411DE0((__int64)a1, a2, a3, 1);
    v7 = (_QWORD *)a1[286];
    v18 = a1 + 285;
    if ( v7 )
    {
      v8 = a1 + 285;
      v9 = (_QWORD *)a1[286];
      while ( 1 )
      {
        v10 = v9[4];
        if ( v10 < a3 )
        {
          v9 = (_QWORD *)v9[3];
        }
        else
        {
          v11 = (_QWORD *)v9[2];
          if ( a3 >= v10 )
          {
            for ( i = (_QWORD *)v9[3]; i; i = (_QWORD *)i[2] )
            {
              while ( 1 )
              {
                v14 = i[3];
                if ( a3 < i[4] )
                  break;
                i = (_QWORD *)i[3];
                if ( !v14 )
                  goto LABEL_20;
              }
              v8 = i;
            }
LABEL_20:
            while ( v11 )
            {
              while ( 1 )
              {
                v15 = v11[3];
                if ( v11[4] >= a3 )
                  break;
                v11 = (_QWORD *)v11[3];
                if ( !v15 )
                  goto LABEL_23;
              }
              v9 = v11;
              v11 = (_QWORD *)v11[2];
            }
LABEL_23:
            if ( (_QWORD *)a1[287] == v9 && v8 == v18 )
              goto LABEL_15;
            while ( v8 != v9 )
            {
              v16 = v9;
              v9 = (_QWORD *)std::_Rb_tree_increment(v9);
              v17 = (void *)std::_Rb_tree_rebalance_for_erase(v16, v18);
              operator delete(v17, 0x30u);
              --a1[289];
            }
            return sub_411DE0((__int64)a1, a2, a3, 1);
          }
          v8 = v9;
          v9 = (_QWORD *)v9[2];
        }
        if ( !v9 )
        {
          v12 = v18 == v8;
          goto LABEL_13;
        }
      }
    }
    v8 = a1 + 285;
    v12 = 1;
LABEL_13:
    if ( (_QWORD *)a1[287] == v8 && v12 )
    {
LABEL_15:
      sub_40D0D0(v7);
      a1[286] = 0;
      a1[289] = 0;
      a1[287] = v18;
      a1[288] = v18;
    }
    return sub_411DE0((__int64)a1, a2, a3, 1);
  }
  return result;
}
