__int64 __fastcall sub_1B9C1F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128 v10; // xmm1
  int v11; // eax
  __int64 v12; // rbx
  __int64 v14; // rax
  int v15; // esi
  __int128 v16; // xmm4
  int v17; // edx
  __int64 v18; // rdi
  int v19; // ebp
  __int16 v20; // ax
  __m128 v21; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-B8h]
  __m128i v24; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-98h]
  __int128 v26; // [rsp+50h] [rbp-88h]
  __int64 v27; // [rsp+60h] [rbp-78h]
  __int128 v28; // [rsp+70h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-58h]
  __int128 v30; // [rsp+90h] [rbp-48h]

  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    v5 = sub_1B979C0(a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
    v7 = v6;
    if ( !v5 )
      return 1;
  }
  else
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(a2 + 32);
  v24 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v25 = v8;
  if ( v9 )
  {
    sub_1B91AC0(&v22, a1, &v24, a3, a4);
    v24 = _mm_loadu_si128(&v22);
    v25 = v23;
    if ( !v22.m128i_i64[0] )
      return 1;
  }
  v21.m128_u64[0] = v7;
  v28 = 0;
  *(_OWORD *)ptr = 0;
  v10 = _mm_loadh_ps((const double *)v21.m128_u64);
  v30 = 0;
  v21 = v10;
  sub_15AB8B0((__int64)&v28, v5, v7);
  v11 = sub_19A47C0(*a1, 0, (int)&v28, &v24);
  if ( v11 == 1 )
  {
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_13;
    goto LABEL_21;
  }
  if ( v11 <= 1 )
  {
    if ( v11 || *(_BYTE *)(a2 + 12) )
      goto LABEL_13;
LABEL_21:
    v19 = *(_DWORD *)(a2 + 8);
    v12 = sub_EEE9A0(8, *(_QWORD **)(*a1 + 248), 8u);
    v20 = *(_WORD *)v12 & 0xFE00;
    LOBYTE(v20) = -18;
    *(_WORD *)v12 = v20;
    if ( unk_2CD7484 )
      sub_EE9B50(238);
    *(_BYTE *)(v12 + 1) &= ~2u;
    *(_DWORD *)(v12 + 4) = v19;
    goto LABEL_9;
  }
  if ( v11 != 2 )
  {
    v12 = 1;
    if ( v11 == 3 )
      goto LABEL_9;
LABEL_13:
    v12 = sub_1B7B360(a1, *(unsigned int **)(a2 + 56), (__m128)0LL, v10);
    if ( v12 == 1 )
      goto LABEL_14;
    goto LABEL_9;
  }
  v14 = sub_1B7B360(a1, *(unsigned int **)(a2 + 56), (__m128)0LL, v10);
  if ( v14 == 1 )
  {
LABEL_14:
    v12 = 1;
    if ( !HIDWORD(ptr[1]) )
      return v12;
LABEL_15:
    free(ptr[0]);
    return v12;
  }
  v15 = *(_DWORD *)(a2 + 8);
  v16 = (__int128)_mm_load_si128(&v24);
  v17 = *(unsigned __int8 *)(a2 + 12);
  v18 = *a1;
  v27 = v25;
  v26 = v16;
  v12 = sub_1C37830(v18, v15, v17, v21.m128_i32[0], v21.m128_i32[2], (unsigned int)v14 & 0xFFFFFFFE, v16, v25);
LABEL_9:
  if ( HIDWORD(ptr[1]) )
    goto LABEL_15;
  return v12;
}
