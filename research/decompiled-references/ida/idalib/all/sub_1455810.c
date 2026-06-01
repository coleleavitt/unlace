void __fastcall sub_1455810(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  char v7; // al
  char v8; // r14
  __int16 v9; // ax
  __m128i si128; // xmm0
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  int *v13; // r13
  _BYTE *v14; // rbx
  size_t v15; // r14
  _DWORD *v16; // rdi
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // r13
  int v21; // r14d
  __int64 v22; // rbx
  __int64 v23; // rbx
  unsigned int *v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // r9
  void *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned __int32 v30; // ebx
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-158h] BYREF
  unsigned __int32 v33; // [rsp+1Ch] [rbp-13Ch]
  void *v34[2]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v35; // [rsp+30h] [rbp-128h] BYREF
  __m128i v36[5]; // [rsp+40h] [rbp-118h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+98h] [rbp-C0h]
  _BYTE v39[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v33 = *(_DWORD *)a4;
  v38 = 0x800000000LL;
  v6 = 0;
  ptr = v39;
  while ( 1 )
  {
    v36[0].m128i_i32[0] = 0;
    v36[0].m128i_i64[1] = 0;
    if ( (unsigned __int8)sub_1453A80(a2, a4, (__int64)v36, v6 == 0) )
      goto LABEL_20;
    si128 = _mm_load_si128(v36);
    v11 = (unsigned int)v38 + 1LL;
    if ( v11 > HIDWORD(v38) )
    {
      v32 = si128;
      sub_2237220(&ptr, v39, v11, 16);
      si128 = _mm_load_si128(&v32);
    }
    *((__m128i *)ptr + (unsigned int)v38) = si128;
    v7 = *(_BYTE *)(a2 + 544);
    LODWORD(v38) = v38 + 1;
    *(_BYTE *)(a2 + 544) = v7 | 0x20;
    v8 = 32 * ((v7 & 0x20) != 0);
    sub_14634E0(a2, a4);
    *(_BYTE *)(a2 + 544) = v8 | *(_BYTE *)(a2 + 544) & 0xDF;
    v9 = *(_WORD *)(a4 + 16);
    if ( v9 != 26 )
      break;
    v6 = v38;
  }
  if ( v9 != 2 )
  {
    sub_FC70B0((__int64)v36, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1239);
    sub_AE9DF0((unsigned __int8 **)v36, (__int64)"pragma", 1u);
    sub_AEA040((__int64)v36);
  }
  v12 = *(_QWORD *)(a2 + 56);
  v13 = (int *)ptr;
  v14 = *(_BYTE **)(v12 + 488);
  v15 = *(_QWORD *)(v12 + 496);
  v16 = *(_DWORD **)(*((_QWORD *)ptr + 1) + 16LL);
  if ( v15 != *v16 || v15 && memcmp(v16 + 4, v14, v15) )
  {
    sub_FC70B0((__int64)v36, *(_QWORD *)(a2 + 48), *v13, 1161);
    sub_AE9DF0((unsigned __int8 **)v36, *((_QWORD *)ptr + 1), 5u);
    sub_AE9DF0((unsigned __int8 **)v36, (unsigned int)v38 > 1, 2u);
    sub_AE9DF0((unsigned __int8 **)v36, v15 == 0, 2u);
LABEL_24:
    sub_AEC220((unsigned __int8 **)v36, v14, v15);
    sub_AEA040((__int64)v36);
LABEL_20:
    v27 = ptr;
    if ( ptr == v39 )
      return;
    goto LABEL_21;
  }
  v17 = *(__int64 **)(a2 + 104);
  v18 = (unsigned int)*v13;
  v32.m128i_i64[0] = (__int64)(v17 + 79);
  v19 = sub_13C9950(v17, (__int64)v14, v15, v18, 1, 0);
  v20 = (__int64 *)v19;
  if ( !v19 )
  {
    sub_FC70B0((__int64)v36, *(_QWORD *)(a2 + 48), *(_DWORD *)ptr, 1158);
    goto LABEL_24;
  }
  if ( (_DWORD)v38 != 1 )
  {
    v21 = 1;
    v22 = 1;
    while ( 1 )
    {
      v23 = 16 * v22;
      v24 = *(unsigned int **)(*(_QWORD *)((char *)ptr + v23 + 8) + 16LL);
      v25 = sub_13FC130(v32.m128i_i64[0], (__int64)v20, (_BYTE *)v24 + 16, *v24);
      v26 = (__int64 *)v25;
      if ( !v25 )
        break;
      v22 = (unsigned int)(v21 + 1);
      v20 = (__int64 *)v25;
      v21 = v22;
      if ( (_DWORD)v22 == (_DWORD)v38 )
        goto LABEL_26;
    }
    sub_FC70B0((__int64)v36, *(_QWORD *)(a2 + 48), *(_DWORD *)((char *)ptr + v23), 1159);
    sub_FEEE60((__int64)v34, v20, 0);
    sub_AEC220((unsigned __int8 **)v36, (_BYTE *)v34[0], (signed __int64)v34[1]);
    sub_AE9DF0((unsigned __int8 **)v36, *(_QWORD *)((char *)ptr + v23 + 8), 5u);
    if ( v34[0] != &v35 )
      operator delete(v34[0]);
    goto LABEL_19;
  }
  v26 = (__int64 *)v19;
LABEL_26:
  v28 = *(_QWORD *)(a2 + 48);
  v29 = *(_QWORD *)(a2 + 64);
  v32.m128i_i64[0] = (__int64)v26;
  if ( (unsigned __int8)sub_141AE90(*(unsigned __int8 **)(a2 + 56), v29, v26, v28) )
  {
    sub_FC70B0((__int64)v36, *(_QWORD *)(a2 + 48), v33, 1277);
    v31 = sub_FEEE40(v32.m128i_i64[0]);
    sub_AEC220((unsigned __int8 **)v36, *(_BYTE **)v31, *(_QWORD *)(v31 + 8));
LABEL_19:
    sub_AEA040((__int64)v36);
    goto LABEL_20;
  }
  v30 = v33;
  sub_143A500(a2, v32.m128i_u64[0], v33, 1u);
  sub_141AE30(
    a2,
    ((unsigned __int64)*((unsigned int *)ptr + 4 * (unsigned int)v38 - 4) << 32) | v30,
    457,
    v32.m128i_i64[0]);
  v27 = ptr;
  if ( ptr != v39 )
LABEL_21:
    free(v27);
}
