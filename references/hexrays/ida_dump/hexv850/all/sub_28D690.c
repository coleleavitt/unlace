__int64 __fastcall sub_28D690(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  int tinfo_size; // r12d
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 51 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) != 48 )
    return 0;
  v5 = *(_QWORD *)(a2 + 48);
  if ( ((unsigned __int8)v5 & 0xFu) > 8 )
    return 0;
  tinfo_size = get_tinfo_size(0, v5, 0);
  if ( tinfo_size != (unsigned int)get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0) )
    return 0;
  sub_326AD0(v11, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a2 + 48);
  copy_tinfo_t(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL) + 48LL, v11);
  clear_tinfo_t(v11);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
  v8 = *(_DWORD *)(v7 + 56);
  v9 = v8 & 0xFFFFFFDF;
  v10 = v8 | 0x20;
  if ( (*(_BYTE *)(a2 + 56) & 0x20) != 0 )
    v9 = v10;
  *(_DWORD *)(v7 + 56) = v9;
  copy_tinfo_t(*(_QWORD *)(a2 + 24) + 48LL, a2 + 48);
  sub_250490((__int64 *)a2, *(_QWORD *)(a2 + 24));
  return 1;
}
