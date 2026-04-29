__int64 __fastcall sub_37BE20(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  char v7; // cl
  __int64 v8; // r12
  __int64 v9; // rax
  signed int v10; // ebx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _BOOL4 v14; // r15d
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-48h]

  if ( a2 == -1 )
    return 0;
  v7 = 1;
  v8 = *(_QWORD *)(a1 + 1136);
  if ( v8 )
  {
    if ( (a4 & 0x2000000) == 0 )
    {
      v12 = sub_364C80(*(_QWORD *)(a1 + 1136), a2, a3, 1, a5);
      v7 = 0;
      if ( v13 )
      {
        v14 = 1;
        if ( !v12 && v13 != v8 + 8 )
          v14 = a2 < *(_QWORD *)(v13 + 32);
        v16 = v13;
        v15 = operator new(0x28u);
        *(_QWORD *)(v15 + 32) = a2;
        std::_Rb_tree_insert_and_rebalance(v14, v15, v16, v8 + 8);
        ++*(_QWORD *)(v8 + 40);
        v7 = 1;
      }
    }
  }
  v9 = sub_37B600(*(_QWORD *)(a1 + 1128), a2, a4, v7);
  if ( !v9 )
    return 0;
  v10 = a4 & 0xF1FFFFFF;
  if ( v10 <= 1 && v10 < *(_DWORD *)(v9 + 56) )
    return 0;
  if ( (*(_BYTE *)(v9 + 48) & 0x3F) == 0x30 )
    return 0;
  if ( a3 )
    copy_tinfo_t(a3, v9 + 48);
  return 1;
}
