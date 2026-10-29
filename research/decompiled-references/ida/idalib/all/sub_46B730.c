unsigned __int64 __fastcall sub_46B730(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  void *v10; // rdi
  __m128i si128; // xmm0
  void *v12; // rdi
  __int64 v13; // r12
  __int64 array_parameters; // rdx
  bool v15; // al
  __int64 i; // r14
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-58h]
  __int64 v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 12) = 0;
  v5 = qword_2CCB598;
  *(_BYTE *)(a1 + 376) = 0;
  *(_DWORD *)a1 = -1;
  v22 = v5;
  v6 = a1 + 4;
  *(_QWORD *)(a1 + 4) = 0;
  v7 = *(void **)(a1 + 16);
  v23 = v6;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v8 = a1 + 40;
  v9 = a1 + 40;
  do
  {
    v10 = *(void **)v9;
    if ( *(_QWORD *)v9 )
    {
      *(_QWORD *)(v9 + 8) = 0;
      qfree(v10);
      *(_QWORD *)v9 = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    v9 += 24;
  }
  while ( a1 + 232 != v9 );
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  v12 = *(void **)(a1 + 336);
  *(_QWORD *)(a1 + 377) = 0;
  *(_BYTE *)(a1 + 385) = 0;
  *(__m128i *)(a1 + 248) = si128;
  *(_QWORD *)(a1 + 232) = -1;
  *(_DWORD *)(a1 + 240) = (_DWORD)&loc_800000;
  *(_WORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  *(_BYTE *)(a1 + 308) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 320) = 2;
  *(_QWORD *)(a1 + 328) = -1;
  *(_OWORD *)(a1 + 264) = -1;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree(v12);
  }
  *(_QWORD *)(a1 + 336) = 0;
  v13 = a3 & 0x600;
  *(_WORD *)(a1 + 386) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  if ( v13 == 1024 && (a3 & 0xF0000000) == 0xB0000000LL )
  {
    v19 = ea2node(a2);
    v20 = netnode_supval(v19, 17, &v24, 4, 65);
    v21 = -1;
    if ( v20 > 0 )
      v21 = v24 - 1;
    *(_DWORD *)a1 = v21;
  }
  array_parameters = get_array_parameters(v23, a2);
  v15 = 0;
  if ( array_parameters != -1 )
  {
    v15 = 1;
    if ( *(_DWORD *)(a1 + 4) == 1 && !*(_DWORD *)(a1 + 8) )
      v15 = *(_DWORD *)(a1 + 12) != -1;
  }
  *(_BYTE *)(a1 + 376) = v15;
  get_arg_addrs(a1 + 16, a2);
  if ( (unsigned __int8)is_manual(a3, 15) )
  {
    for ( i = 0; i != 8; ++i )
    {
      v17 = sub_3C8200(v8, a2, i);
      *(_BYTE *)(a1 + i + 377) = v17 > 0;
      if ( v17 > 0 )
        *(_BYTE *)(a1 + 385) = 1;
      v8 += 24;
    }
  }
  if ( (*(_BYTE *)(v22 + 939) & 2) != 0 )
    *(_QWORD *)(a1 + 232) = get_ind_purged(a2);
  if ( v13 == 1536 && (int)a3 < 0 )
  {
    *(_BYTE *)(a1 + 386) = get_switch_info(a1 + 240, a2) > 0;
    *(_BYTE *)(a1 + 387) = get_jumptable_info(a1 + 360, a2) > 0;
  }
  return v25 - __readfsqword(0x28u);
}
