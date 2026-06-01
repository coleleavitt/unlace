__int64 __fastcall sub_7B0910(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r15
  const char *v6; // rbx
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-50h]
  __int64 v23; // [rsp+0h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-44h]
  __int64 v25; // [rsp+10h] [rbp-40h]

  result = *(unsigned int *)(a1 + 6016);
  if ( (result & 1) == 0 )
  {
    *(_DWORD *)(a1 + 6016) = result | 1;
    v3 = *(_QWORD *)(a1 + 5928);
    v22 = *(_QWORD *)(a1 + 5920);
    v4 = v22;
    result = 24 * v3;
    if ( 24 * v3 )
    {
      v24 = 0;
      v25 = a1 + 5952;
      do
      {
        if ( *(_QWORD *)(v4 + 8) <= 1u )
        {
          v11 = *(_QWORD *)(a1 + 6000);
          v12 = *(_QWORD *)(a1 + 5992);
          if ( *(_QWORD *)(a1 + 6008) < (unsigned __int64)(v11 + 1) )
          {
            v20 = qvector_reserve(a1 + 5992, v12, v11 + 1, 4);
            *(_QWORD *)(a1 + 5992) = v20;
            v12 = v20;
            v11 = *(_QWORD *)(a1 + 6000);
          }
          *(_DWORD *)(v12 + 4 * v11) = v24;
          v13 = *(_QWORD *)(a1 + 5920);
          ++*(_QWORD *)(a1 + 6000);
          v3 = *(_QWORD *)(a1 + 5928);
          v22 = v13;
        }
        else
        {
          v5 = *(_QWORD *)(a1 + 5960);
          v6 = *(const char **)v4;
          v7 = v25;
          if ( !v5 )
            goto LABEL_17;
          do
          {
            while ( 1 )
            {
              v8 = strcmp(*(const char **)(v5 + 32), v6);
              v9 = *(_QWORD *)(v5 + 16);
              v10 = *(_QWORD *)(v5 + 24);
              if ( v8 < 0 )
                break;
              v7 = v5;
              v5 = *(_QWORD *)(v5 + 16);
              if ( !v9 )
                goto LABEL_10;
            }
            v5 = *(_QWORD *)(v5 + 24);
          }
          while ( v10 );
LABEL_10:
          if ( v25 == v7 || strcmp(v6, *(const char **)(v7 + 32)) < 0 )
          {
LABEL_17:
            v14 = operator new(0x30u);
            *(_QWORD *)(v14 + 32) = v6;
            v15 = (void *)v14;
            *(_DWORD *)(v14 + 40) = v24;
            v16 = sub_7AE1F0((_QWORD *)(a1 + 5944), v7, v6);
            if ( v17 )
            {
              if ( v16 || v25 == v17 )
              {
                v18 = 1;
              }
              else
              {
                v23 = v17;
                v21 = strcmp(v6, *(const char **)(v17 + 32));
                v17 = v23;
                v18 = v21 >> 31;
              }
              std::_Rb_tree_insert_and_rebalance(v18, v15, v17, v25);
              v19 = *(_QWORD *)(a1 + 5920);
              ++*(_QWORD *)(a1 + 5984);
              v3 = *(_QWORD *)(a1 + 5928);
              v22 = v19;
            }
            else
            {
              if ( v15 )
                operator delete(v15, 0x30u);
              v3 = *(_QWORD *)(a1 + 5928);
              v22 = *(_QWORD *)(a1 + 5920);
            }
          }
        }
        v4 += 24;
        ++v24;
        result = v22 + 24 * v3;
      }
      while ( v4 != result );
    }
  }
  return result;
}
