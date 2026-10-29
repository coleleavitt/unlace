__int64 __fastcall sub_C11E40(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v2; // r12
  __int64 v3; // r13
  _QWORD *v4; // r15
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // eax
  bool v9; // cc
  __int64 v10; // r14
  __int64 i; // rdx
  __int64 v13; // r13
  __int64 v14; // rax
  void *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx

  v2 = a1 + 1;
  v3 = a1[2];
  if ( v3 )
  {
    v4 = a1 + 1;
    v5 = a1[2];
    v6 = *a2 - 1;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v5 + 32) - 1;
      v9 = v8 <= v6;
      if ( v8 < v6 )
      {
        v7 = *(_QWORD *)(v5 + 24);
        if ( !v7 )
          goto LABEL_8;
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 16);
        if ( v9 )
        {
          for ( i = *(_QWORD *)(v5 + 24); i; i = *(_QWORD *)(i + 24) )
          {
            while ( v6 < *(_DWORD *)(i + 32) - 1 )
            {
              v4 = (_QWORD *)i;
              i = *(_QWORD *)(i + 16);
              if ( !i )
                goto LABEL_17;
            }
          }
LABEL_17:
          while ( v7 )
          {
            while ( v6 <= *(_DWORD *)(v7 + 32) - 1 )
            {
              v5 = v7;
              v7 = *(_QWORD *)(v7 + 16);
              if ( !v7 )
                goto LABEL_20;
            }
            v7 = *(_QWORD *)(v7 + 24);
          }
LABEL_20:
          v10 = a1[5];
          if ( a1[3] == v5 && v4 == v2 )
          {
            while ( 1 )
            {
LABEL_30:
              sub_C11150((__int64)a1, *(_QWORD *)(v3 + 24));
              v17 = *(_QWORD *)(v3 + 16);
              if ( *(_DWORD *)(v3 + 40) > 1u )
              {
                sub_A4F8E0((int *)(v3 + 40));
                operator delete((void *)v3);
                if ( !v17 )
                  goto LABEL_34;
              }
              else
              {
                operator delete((void *)v3);
                if ( !v17 )
                  goto LABEL_34;
              }
              v3 = v17;
            }
          }
          if ( v4 != (_QWORD *)v5 )
          {
            while ( 1 )
            {
              v13 = std::_Rb_tree_increment(v5);
              v14 = std::_Rb_tree_rebalance_for_erase(v5, v2);
              v15 = (void *)v14;
              if ( *(_DWORD *)(v14 + 40) > 1u )
                sub_A4F8E0((int *)(v14 + 40));
              operator delete(v15);
              v16 = a1[5] - 1LL;
              a1[5] = v16;
              if ( v4 == (_QWORD *)v13 )
                break;
              v5 = v13;
            }
            v10 -= v16;
            return v10;
          }
          return 0;
        }
        v4 = (_QWORD *)v5;
        if ( !v7 )
        {
LABEL_8:
          v10 = a1[5];
          if ( (_QWORD *)a1[3] == v4 && v2 == v4 )
            goto LABEL_30;
          return 0;
        }
      }
      v5 = v7;
    }
  }
  v10 = a1[5];
  if ( (_QWORD *)a1[3] != v2 )
    return 0;
LABEL_34:
  a1[2] = 0;
  a1[3] = v2;
  a1[4] = v2;
  a1[5] = 0;
  return v10;
}
