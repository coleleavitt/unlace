__int64 __fastcall sub_78FBC0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // r15
  const char *v5; // rbx
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-50h]
  int v20; // [rsp+Ch] [rbp-44h]
  __int64 v21; // [rsp+10h] [rbp-40h]

  result = *(unsigned int *)(a1 + 5984);
  if ( (result & 1) == 0 )
  {
    *(_DWORD *)(a1 + 5984) = result | 1;
    v2 = *(_QWORD *)(a1 + 5896);
    v19 = *(_QWORD *)(a1 + 5888);
    v3 = v19;
    result = 24 * v2;
    if ( 24 * v2 )
    {
      v20 = 0;
      v21 = a1 + 5920;
      do
      {
        if ( *(_QWORD *)(v3 + 8) <= 1u )
        {
          v10 = *(_QWORD *)(a1 + 5968);
          v11 = *(_QWORD *)(a1 + 5960);
          if ( *(_QWORD *)(a1 + 5976) < (unsigned __int64)(v10 + 1) )
          {
            v18 = qvector_reserve(a1 + 5960, v11, v10 + 1, 4);
            *(_QWORD *)(a1 + 5960) = v18;
            v11 = v18;
            v10 = *(_QWORD *)(a1 + 5968);
          }
          *(_DWORD *)(v11 + 4 * v10) = v20;
          v12 = *(_QWORD *)(a1 + 5888);
          ++*(_QWORD *)(a1 + 5968);
          v2 = *(_QWORD *)(a1 + 5896);
          v19 = v12;
        }
        else
        {
          v4 = *(_QWORD *)(a1 + 5928);
          v5 = *(const char **)v3;
          v6 = a1 + 5920;
          if ( !v4 )
            goto LABEL_17;
          do
          {
            while ( 1 )
            {
              v7 = strcmp(*(const char **)(v4 + 32), v5);
              v8 = *(_QWORD *)(v4 + 16);
              v9 = *(_QWORD *)(v4 + 24);
              if ( v7 < 0 )
                break;
              v6 = v4;
              v4 = *(_QWORD *)(v4 + 16);
              if ( !v8 )
                goto LABEL_10;
            }
            v4 = *(_QWORD *)(v4 + 24);
          }
          while ( v9 );
LABEL_10:
          if ( v21 == v6 || strcmp(v5, *(const char **)(v6 + 32)) < 0 )
          {
LABEL_17:
            v13 = operator new(0x30u);
            *(_QWORD *)(v13 + 32) = v5;
            v14 = (void *)v13;
            *(_DWORD *)(v13 + 40) = v20;
            v15 = sub_78DB50((_QWORD *)(a1 + 5912), v6, v5);
            if ( v16 )
            {
              if ( !v15 && v21 != v16 )
                strcmp(v5, *(const char **)(v16 + 32));
              std::_Rb_tree_insert_and_rebalance();
              v17 = *(_QWORD *)(a1 + 5888);
              ++*(_QWORD *)(a1 + 5952);
              v2 = *(_QWORD *)(a1 + 5896);
              v19 = v17;
            }
            else
            {
              if ( v14 )
                operator delete(v14, 0x30u);
              v2 = *(_QWORD *)(a1 + 5896);
              v19 = *(_QWORD *)(a1 + 5888);
            }
          }
        }
        v3 += 24;
        ++v20;
        result = v19 + 24 * v2;
      }
      while ( v3 != result );
    }
  }
  return result;
}

