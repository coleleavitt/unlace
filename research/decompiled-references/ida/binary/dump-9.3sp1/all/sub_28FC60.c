__int64 __fastcall sub_28FC60(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  unsigned int tinfo_size; // r13d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // r14

  if ( *(_DWORD *)(a2 + 8) != 5 )
    return 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v4 + 8) != 61 )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  if ( (*(_BYTE *)(v5 + 13) & 0x19) != 0 )
    return 0;
  v6 = sub_255A30((__int64 *)v5);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL);
  tinfo_size = get_tinfo_size();
  v9 = bitcount();
  v11 = 8 * tinfo_size - 1;
  if ( (_DWORD)v11 != v9 )
    return 0;
  v12 = j__qalloc_or_throw(64, v7, v11, v10);
  v13 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)v12 = -1;
  *(_DWORD *)(v12 + 8) = 50;
  *(_QWORD *)(v12 + 12) = -1;
  *(_QWORD *)(v12 + 24) = v13;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  copy_tinfo_t();
  *(_QWORD *)v12 = **(_QWORD **)(a2 + 32);
  v14 = *(_QWORD **)(*(_QWORD *)(a2 + 32) + 24LL);
  *v14 = sub_32ABC0(~v6, tinfo_size, 0);
  *(_QWORD *)(a2 + 32) = v12;
  return 1;
}
