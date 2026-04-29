__int64 __fastcall sub_28BFE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned int tinfo_size; // r13d
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // r14

  if ( *(_DWORD *)(a2 + 8) != 5 )
    return 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v4 + 8) != 61 )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  if ( (*(_BYTE *)(v5 + 13) & 0x19) != 0 )
    return 0;
  v6 = sub_251DB0((__int64 *)v5, (_QWORD *)(v4 + 48));
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0);
  if ( 8 * tinfo_size - 1 != (unsigned int)bitcount(v6) )
    return 0;
  v8 = j__qalloc_or_throw(64);
  v9 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)v8 = -1;
  *(_DWORD *)(v8 + 8) = 50;
  *(_QWORD *)(v8 + 12) = -1;
  *(_QWORD *)(v8 + 24) = v9;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  copy_tinfo_t(v8 + 48, *(_QWORD *)(a2 + 32) + 48LL);
  *(_QWORD *)v8 = **(_QWORD **)(a2 + 32);
  v10 = *(_QWORD **)(*(_QWORD *)(a2 + 32) + 24LL);
  *v10 = sub_326890(~v6, tinfo_size, 0);
  *(_QWORD *)(a2 + 32) = v8;
  return 1;
}
