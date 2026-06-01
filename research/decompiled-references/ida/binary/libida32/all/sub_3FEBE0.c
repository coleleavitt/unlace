__int64 __fastcall sub_3FEBE0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  _QWORD *v7; // r8
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdx
  bool v12; // al
  __int64 i; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  void *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-40h]

  result = sub_375980(0x42u);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 2120) != a2 )
      return sub_3FEAD0(a1, a2, a3, 1);
    v7 = *(_QWORD **)(a1 + 2200);
    v17 = a1 + 2192;
    if ( v7 )
    {
      v8 = a1 + 2192;
      v9 = *(_QWORD *)(a1 + 2200);
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 32);
        if ( v10 < a3 )
        {
          v9 = *(_QWORD *)(v9 + 24);
        }
        else
        {
          v11 = *(_QWORD *)(v9 + 16);
          if ( a3 >= v10 )
          {
            for ( i = *(_QWORD *)(v9 + 24); i; i = *(_QWORD *)(i + 16) )
            {
              while ( 1 )
              {
                v14 = *(_QWORD *)(i + 24);
                if ( a3 < *(_DWORD *)(i + 32) )
                  break;
                i = *(_QWORD *)(i + 24);
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
                v15 = *(_QWORD *)(v11 + 24);
                if ( *(_DWORD *)(v11 + 32) >= a3 )
                  break;
                v11 = *(_QWORD *)(v11 + 24);
                if ( !v15 )
                  goto LABEL_23;
              }
              v9 = v11;
              v11 = *(_QWORD *)(v11 + 16);
            }
LABEL_23:
            if ( *(_QWORD *)(a1 + 2208) == v9 && v8 == v17 )
              goto LABEL_15;
            while ( v8 != v9 )
            {
              v9 = std::_Rb_tree_increment();
              v16 = (void *)std::_Rb_tree_rebalance_for_erase();
              operator delete(v16, 0x28u);
              --*(_QWORD *)(a1 + 2224);
            }
            return sub_3FEAD0(a1, a2, a3, 1);
          }
          v8 = v9;
          v9 = *(_QWORD *)(v9 + 16);
        }
        if ( !v9 )
        {
          v12 = v17 == v8;
          goto LABEL_13;
        }
      }
    }
    v8 = a1 + 2192;
    v12 = 1;
LABEL_13:
    if ( *(_QWORD *)(a1 + 2208) == v8 && v12 )
    {
LABEL_15:
      sub_3F9F90(v7);
      *(_QWORD *)(a1 + 2200) = 0;
      *(_QWORD *)(a1 + 2224) = 0;
      *(_QWORD *)(a1 + 2208) = v17;
      *(_QWORD *)(a1 + 2216) = v17;
    }
    return sub_3FEAD0(a1, a2, a3, 1);
  }
  return result;
}

