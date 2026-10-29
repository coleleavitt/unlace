char __fastcall sub_69F8C0(_QWORD *a1, __int64 a2, unsigned int a3, int a4, int a5, char a6)
{
  char result; // al
  int v11; // eax
  __int64 v12; // rcx
  char v13; // r8
  char data; // al
  char v15; // r8
  __int64 v16; // r12
  unsigned int v17; // edx
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // [rsp+Fh] [rbp-39h]
  char v23; // [rsp+Fh] [rbp-39h]

  result = sub_3B8910((__int64)a1, a3);
  if ( result )
  {
    v22 = result;
    v11 = sub_3B9AA0((__int64)a1, a3, 4);
    if ( (v11 & 0x600) != 0x400 || (v11 & 0xF0000000) != 0x60000000 )
      return sub_3A1A90(a1, a3, a3 + 1, 0x28u);
    if ( a5 == a4 )
    {
      if ( (get_merge_state(a1, a3) & 3) != 0 )
        return sub_3A1A90(a1, a3, a3 + 1, 0x28u);
      get_item_end(a3, a3, v20, v21);
      v13 = v22;
      if ( !a6 )
        return sub_3A1A90(a1, a3, a3 + 1, 0x28u);
    }
    else
    {
      get_item_end(a3, a3, 1024, v12);
      v13 = v22;
      if ( !a6 )
      {
        data = create_data(a3);
        v15 = v22;
        goto LABEL_8;
      }
    }
    v23 = v13;
    data = create_data(a3);
    v15 = v23;
LABEL_8:
    if ( !data )
    {
      v16 = a1[92];
      if ( !v16 )
      {
        if ( a1 + 91 != (_QWORD *)a1[93] && *(_DWORD *)(std::_Rb_tree_decrement() + 32) >= a3 )
          return sub_3A1A90(a1, a3, a3 + 1, 0x28u);
        goto LABEL_17;
      }
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 32);
        v18 = *(_QWORD *)(v16 + 16);
        v19 = v15;
        if ( a3 >= v17 )
        {
          v18 = *(_QWORD *)(v16 + 24);
          v19 = 0;
        }
        if ( !v18 )
          break;
        v16 = v18;
      }
      if ( v19 )
      {
        if ( a1[93] == v16 )
          goto LABEL_17;
        v17 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
      }
      if ( v17 < a3 )
      {
LABEL_17:
        *(_DWORD *)(operator new(0x28u) + 32) = a3;
        std::_Rb_tree_insert_and_rebalance();
        ++a1[95];
      }
    }
    return sub_3A1A90(a1, a3, a3 + 1, 0x28u);
  }
  return result;
}

