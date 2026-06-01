__int64 __fastcall sub_3E36F0(__int128 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r14
  int v8; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // r13d
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-60h]
  int v19; // [rsp+14h] [rbp-54h]
  __int64 v20; // [rsp+18h] [rbp-50h]

  v4 = *(unsigned __int8 *)(a1 + 3800);
  if ( !(_BYTE)v4 )
    return 0;
  if ( *(_BYTE *)a3 != 8 )
  {
    if ( *(_BYTE *)a3 == 1 )
    {
      v10 = *(_DWORD *)(a3 + 8);
      v11 = *(_DWORD *)(a1 + 444);
      if ( v10 == v11 || v10 == v11 + 1 )
      {
        sub_63580(*((__int64 **)&a1 + 1), *(_DWORD *)(a1 + 688), 3);
      }
      else if ( v10 == *(_DWORD *)(a1 + 524) )
      {
        sub_63580(*((__int64 **)&a1 + 1), 0, 5);
      }
    }
    return 0;
  }
  if ( (a4 & 0x800) != 0 )
    return 0;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(_DWORD *)(v7 + 284);
  if ( v8 == 39 )
  {
    v19 = 4;
    v12 = 32;
  }
  else
  {
    if ( v8 != 40 )
      return 0;
    v19 = 8;
    v12 = 64;
  }
  v13 = v12 << 16;
  v18 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 920LL);
  if ( *(_QWORD *)(v7 + 32) != 2 )
  {
    if ( !under_debugger )
      sub_37EA20(52581);
    BUG();
  }
  *(_QWORD *)&a1 = a2;
  sub_1219A0(a1, *(_QWORD *)(v7 + 24), a4, 0xFFFF0000);
  v14 = *(_QWORD *)(v7 + 24);
  v15 = v14 + 80;
  if ( *(_BYTE *)(v14 + 80) == 1 )
  {
    v16 = *(_DWORD *)(v14 + 88) + v19;
    v20 = v14 + 80;
    sub_3E0E40(v18 + 128, v16);
    v15 = v20;
    if ( v17 )
    {
      *(_DWORD *)(operator new(0x28u) + 32) = v16;
      std::_Rb_tree_insert_and_rebalance();
      v15 = v20;
      ++*(_QWORD *)(v18 + 168);
    }
  }
  *(_QWORD *)&a1 = a2;
  sub_1219A0(a1, v15, a4, v13);
  return v4;
}
