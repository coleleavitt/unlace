__int64 __fastcall sub_61E2A0(__int64 *a1, __int64 a2, int a3)
{
  __int64 *v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i v26; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+30h] [rbp-48h] BYREF
  __m128i v28; // [rsp+40h] [rbp-38h] BYREF
  __m128i v29[2]; // [rsp+50h] [rbp-28h] BYREF

  v5 = *(__int64 **)(a2 + 64);
  if ( v5 && (unsigned __int8)sub_61B330(a1, *v5, (__int64)(v5 + 1)) )
    return 1;
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    v6 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 0x15 )
      return 0;
  }
  else if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 0x15 )
  {
    return 0;
  }
  v7 = *(_QWORD *)(v6 - 8);
  if ( (v7 & 7) == 0 && v7 > 7 )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  if ( !v8 )
    return 0;
  v9 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v9 = 0;
  LOBYTE(a3) = (*(_BYTE *)(a2 + 73) & 0x40) != 0;
  v10 = sub_7BDED0(v8 + 48, v9, (unsigned int)(a3 + 1));
  v12 = v10;
  if ( !v10 )
    return 0;
  v13 = *(_QWORD *)(v10 + 104);
  if ( v13 && (*(_BYTE *)(v13 + 58) & 8) != 0 )
  {
    v14 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
      v14 = *(_QWORD *)(v14 + 8);
    if ( v14 == v6 )
    {
      sub_639160(&v26, v13, *a1, *(__int64 *)((char *)a1 + 84), 1, v11);
      if ( (unsigned __int8)sub_619180(
                              (__int64)a1,
                              v13,
                              v18,
                              v19,
                              v20,
                              v21,
                              (__int128)_mm_load_si128(&v26),
                              (__int128)_mm_load_si128(&v27)) )
        return 1;
    }
  }
  v15 = *(_QWORD *)(v12 + 112);
  if ( !v15 || (*(_BYTE *)(v15 + 58) & 8) == 0 )
    return 0;
  v16 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v15 + 16) & 4) != 0 )
    v16 = *(_QWORD *)(v16 + 8);
  if ( v16 != v6 )
    return 0;
  sub_639160(&v28, v15, *a1, *(__int64 *)((char *)a1 + 84), 1, v11);
  return sub_619180((__int64)a1, v15, v22, v23, v24, v25, (__int128)_mm_load_si128(&v28), (__int128)_mm_load_si128(v29));
}

