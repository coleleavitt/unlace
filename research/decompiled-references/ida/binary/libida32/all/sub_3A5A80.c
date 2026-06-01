__int64 __fastcall sub_3A5A80(__int64 a1, _QWORD *a2, unsigned int a3, int a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // rbx
  __int64 *i; // r12
  unsigned __int64 v13; // rbp
  int v14; // esi
  __int64 v15; // rdx
  _DWORD *j; // rax
  _QWORD *v17; // r15
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rax
  char v20; // di
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  unsigned int v23; // [rsp+1Ch] [rbp-3Ch]

  result = *(_QWORD *)(a1 + 16);
  v23 = a3 + a4;
  v22 = a1 + 8;
  v21 = a1 + 8;
  if ( result )
  {
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(result + 16);
        v10 = *(_QWORD *)(result + 24);
        if ( *(_DWORD *)(result + 32) >= a3 )
          break;
        result = *(_QWORD *)(result + 24);
        if ( !v10 )
          goto LABEL_6;
      }
      v21 = result;
      result = *(_QWORD *)(result + 16);
    }
    while ( v9 );
LABEL_6:
    if ( v21 != v22 )
    {
      do
      {
        result = v21;
        if ( *(_DWORD *)(v21 + 32) >= v23 )
          break;
        v11 = *(unsigned __int64 **)(v21 + 40);
        for ( i = (__int64 *)&v11[*(_QWORD *)(v21 + 48)]; i != (__int64 *)v11; ++v11 )
        {
          v13 = *v11;
          if ( a5 )
          {
            v14 = *(_DWORD *)(v13 + 52);
            v15 = *a5 + 4LL * a5[1];
            for ( j = (_DWORD *)*a5; *a5 != v15; v14 = *(_DWORD *)(*v11 + 52) )
            {
              while ( v14 != *j )
              {
                if ( (_DWORD *)v15 == ++j )
                  goto LABEL_17;
              }
              if ( (_DWORD *)v15 == j )
                break;
              if ( i == (__int64 *)++v11 )
                goto LABEL_27;
              v13 = *v11;
              j = (_DWORD *)*a5;
            }
          }
LABEL_17:
          v17 = (_QWORD *)a2[2];
          if ( v17 )
          {
            while ( 1 )
            {
              v18 = v17[4];
              v19 = (_QWORD *)v17[2];
              v20 = 1;
              if ( v13 >= v18 )
              {
                v19 = (_QWORD *)v17[3];
                v20 = 0;
              }
              if ( !v19 )
                break;
              v17 = v19;
            }
            if ( !v20 )
              goto LABEL_24;
          }
          else
          {
            v17 = a2 + 1;
          }
          if ( v17 == (_QWORD *)a2[3] )
          {
LABEL_25:
            *(_QWORD *)(operator new(0x28u) + 32) = v13;
            std::_Rb_tree_insert_and_rebalance();
            ++a2[5];
            continue;
          }
          v18 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_24:
          if ( v18 < v13 )
            goto LABEL_25;
        }
LABEL_27:
        result = std::_Rb_tree_increment();
        v21 = result;
      }
      while ( v22 != result );
    }
  }
  return result;
}

