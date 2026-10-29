__int64 __fastcall sub_148FBE0(
        const __m128i *a1,
        __int64 *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __m128i a6,
        __m128 a7)
{
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 *v12; // r13
  __int64 *v13; // rdi
  unsigned int v14; // r10d
  __int64 v16; // rax
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int32 v26; // eax
  _WORD *v27; // rax
  __int64 v28; // rdx
  unsigned int v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  unsigned int v33; // [rsp+10h] [rbp-88h]
  unsigned int v34; // [rsp+18h] [rbp-80h]
  char v35; // [rsp+3Fh] [rbp-59h] BYREF
  _BYTE v36[80]; // [rsp+40h] [rbp-58h] BYREF

  v10 = a1[2].m128i_u16[0];
  v11 = v10;
  LOBYTE(v11) = sub_141A630(v10) | ((_WORD)v10 == 1);
  if ( (_BYTE)v11 )
    return v11;
  v12 = (__int64 *)a1[1].m128i_i64[1];
  if ( !v12 )
    return 1;
  v13 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v13, a1[1].m128i_i32);
  v14 = a1[2].m128i_u32[2];
  if ( a1[2].m128i_i16[0] != 22 )
  {
    v16 = sub_1479050((__int64)(a2 + 5), (__int64)v12, ((unsigned __int64)v14 << 32) | v14, 0, 0, 241, 0);
    sub_147F4B0((__int64)(a2 + 1), v16);
    return v11;
  }
  if ( !a4 )
    goto LABEL_7;
  if ( !*(_BYTE *)(a4 + 33) )
  {
    v34 = a1[2].m128i_u32[2];
    v18 = sub_14793D0((__int64)v12);
    v14 = v34;
    if ( v18 )
      goto LABEL_14;
    v27 = sub_1479360((_WORD *)(v12[2] + 16), *(unsigned int *)v12[2]);
    v36[17] = 0;
    *(_QWORD *)v36 = v27;
    *(_QWORD *)&v36[8] = v28;
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "acquire_capability", 18);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "acquire_shared_capability", 25);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "exclusive_lock_function", 23);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "shared_lock_function", 20);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "assert_capability", 17);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "assert_shared_capability", 24);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "assert_exclusive_lock", 21);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "assert_shared_lock", 18);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "diagnose_if", 11);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "lock_returned", 13);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "locks_excluded", 14);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "release_capability", 18);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "release_shared_capability", 25);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "release_generic_capability", 26);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "unlock_function", 15);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "requires_capability", 19);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "exclusive_locks_required", 24);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "requires_shared_capability", 26);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "shared_locks_required", 21);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "try_acquire_capability", 22);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "try_acquire_shared_capability", 29);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "exclusive_trylock_function", 26);
    v35 = 1;
    sub_B7E0A0((__int64)v36, &v35, "shared_trylock_function", 23);
    v14 = v34;
    if ( v36[17] )
    {
      if ( v36[16] )
        goto LABEL_14;
    }
LABEL_7:
    sub_148F5D0((__int64)a1, v12, v14, a2, a3, 0, a6, a7, 0, 241, a5);
    return v11;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 20LL) & 2) == 0 )
    goto LABEL_7;
  v33 = a1[2].m128i_u32[2];
  v17 = sub_14793D0((__int64)v12);
  v14 = v33;
  if ( !v17 )
    goto LABEL_7;
LABEL_14:
  v30 = v14;
  v19 = operator new(0xB8u);
  *(_QWORD *)(v19 + 24) = 0x400000000LL;
  v20 = *(unsigned int *)(a4 + 12);
  *(_QWORD *)(v19 + 160) = 0x200000000LL;
  v21 = *(unsigned int *)(a4 + 8);
  *(_QWORD *)v19 = &off_2BB3358;
  *(_QWORD *)(v19 + 16) = v19 + 32;
  *(_QWORD *)(v19 + 152) = v19 + 168;
  *(_QWORD *)(v19 + 8) = a1;
  *(_QWORD *)(v19 + 128) = v12;
  *(_QWORD *)(v19 + 136) = 0;
  *(_DWORD *)(v19 + 144) = v30;
  if ( v21 + 1 > v20 )
  {
    v32 = v19;
    sub_2237220(a4, a4 + 16, v21 + 1, 8);
    v21 = *(unsigned int *)(a4 + 8);
    v19 = v32;
  }
  *(_QWORD *)(*(_QWORD *)a4 + 8 * v21) = v19;
  v22 = a1[120].m128i_i64[0];
  ++*(_DWORD *)(a4 + 8);
  if ( v22 != a1[118].m128i_i64[0] && !*(_BYTE *)(a4 + 32) )
  {
    if ( v22 == a1[120].m128i_i64[1] )
      v22 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
    v23 = *(_QWORD *)(v22 - 8);
    v24 = *(unsigned int *)(v23 + 24);
    if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 28) )
    {
      v31 = v19;
      sub_2237220(v23 + 16, v23 + 32, v24 + 1, 8);
      v24 = *(unsigned int *)(v23 + 24);
      v19 = v31;
    }
    *(_QWORD *)(*(_QWORD *)(v23 + 16) + 8 * v24) = v19;
    ++*(_DWORD *)(v23 + 24);
  }
  v25 = v19 + 16;
  sub_141B840(v19 + 16, a1 + 1);
  sub_146A990((__int64)a1);
  sub_146E570((__int64)a1, 23, 23, v25, 1, 1);
  v26 = a1[1].m128i_i32[0];
  *(_QWORD *)&v36[4] = 0;
  *(_QWORD *)&v36[12] = 0;
  *(_DWORD *)v36 = v26;
  sub_141B840(v25, (const __m128i *)v36);
  return v11;
}
