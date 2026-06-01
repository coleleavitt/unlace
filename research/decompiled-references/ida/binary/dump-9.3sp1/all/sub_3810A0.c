__int64 __fastcall sub_3810A0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  char v6; // cl
  __int64 v7; // r12
  __int64 v8; // rax
  signed int v9; // ebx
  __int64 v11; // rdx

  if ( a2 == -1 )
    return 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 1136);
  if ( v7 )
  {
    if ( (a4 & 0x2000000) == 0 )
    {
      sub_369F00(*(_QWORD *)(a1 + 1136), a2);
      v6 = 0;
      if ( v11 )
      {
        *(_QWORD *)(operator new(0x28u) + 32) = a2;
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(v7 + 40);
        v6 = 1;
      }
    }
  }
  v8 = sub_380880(*(_QWORD *)(a1 + 1128), a2, a4, v6);
  if ( !v8 )
    return 0;
  v9 = a4 & 0xF1FFFFFF;
  if ( v9 <= 1 && v9 < *(_DWORD *)(v8 + 56) )
    return 0;
  if ( (*(_BYTE *)(v8 + 48) & 0x3F) == 0x30 )
    return 0;
  if ( a3 )
    copy_tinfo_t();
  return 1;
}
