__int64 __fastcall sub_10BCBD0(__int64 a1, int *a2)
{
  __int64 v2; // rax
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rsi

  v2 = operator new(0x30u);
  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v2;
  *(_DWORD *)(v2 + 32) = *a2;
  *(_QWORD *)(v2 + 40) = *((_QWORD *)a2 + 1);
  if ( v4 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v4 + 32) > v3 )
      {
        v6 = *(_QWORD *)(v4 + 16);
        if ( !v6 )
          break;
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 24);
        if ( !v6 )
          break;
      }
      v4 = v6;
    }
  }
  std::_Rb_tree_insert_and_rebalance();
  ++*(_QWORD *)(a1 + 40);
  return v5;
}

