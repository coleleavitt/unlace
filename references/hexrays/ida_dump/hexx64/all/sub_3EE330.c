__int64 __fastcall sub_3EE330(__int128 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r14
  int v9; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // r13d
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r10
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-60h]
  int v25; // [rsp+14h] [rbp-54h]
  _BOOL4 v26; // [rsp+14h] [rbp-54h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  __int64 v28; // [rsp+20h] [rbp-48h]

  v5 = *(unsigned __int8 *)(a1 + 3800);
  if ( !(_BYTE)v5 )
    return 0;
  if ( *(_BYTE *)a3 != 8 )
  {
    if ( *(_BYTE *)a3 == 1 )
    {
      v11 = *(_DWORD *)(a3 + 8);
      v12 = *(_DWORD *)(a1 + 444);
      if ( v11 == v12 || v11 == v12 + 1 )
      {
        sub_63E80(*((__int64 **)&a1 + 1), *(_DWORD *)(a1 + 688), 3);
      }
      else if ( v11 == *(_DWORD *)(a1 + 524) )
      {
        sub_63E80(*((__int64 **)&a1 + 1), 0, 5);
      }
    }
    return 0;
  }
  if ( (a4 & 0x800) != 0 )
    return 0;
  v8 = *(_QWORD *)(a3 + 8);
  v9 = *(_DWORD *)(v8 + 284);
  if ( v9 == 39 )
  {
    v25 = 4;
    v13 = 32;
  }
  else
  {
    if ( v9 != 40 )
      return 0;
    v25 = 8;
    v13 = 64;
  }
  v14 = v13 << 16;
  v24 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 920LL);
  if ( *(_QWORD *)(v8 + 32) != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xCD65u, *((__int64 *)&a1 + 1), a5);
    BUG();
  }
  *(_QWORD *)&a1 = a2;
  sub_123EA0(a1, *(_QWORD *)(v8 + 24), a4, 0xFFFF0000);
  v18 = *(_QWORD *)(v8 + 24);
  v19 = v18 + 80;
  if ( *(_BYTE *)(v18 + 80) == 1 )
  {
    v20 = *(_DWORD *)(v18 + 88) + v25;
    v27 = v18 + 80;
    v21 = sub_3EBA80(v24 + 128, (unsigned int)v20, v15, v16, v17);
    v19 = v27;
    if ( v22 )
    {
      v26 = 1;
      if ( !v21 && v22 != v24 + 136 )
        v26 = v20 < *(_DWORD *)(v22 + 32);
      v28 = v22;
      v23 = operator new(0x28u);
      *(_DWORD *)(v23 + 32) = v20;
      std::_Rb_tree_insert_and_rebalance(v26, v23, v28, v24 + 136);
      v19 = v27;
      ++*(_QWORD *)(v24 + 168);
    }
  }
  *(_QWORD *)&a1 = a2;
  sub_123EA0(a1, v19, a4, v14);
  return v5;
}
