unsigned __int64 __fastcall sub_B7BB30(__int64 a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i *v29; // rax
  __m128i *v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax

  v2 = (_QWORD *)sub_B685F0(a1);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v3, v4, v5, v6);
  v11 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v11 + 24) & 1) != 0 )
    v12 = sub_B72C40(v11);
  else
    v12 = *(_QWORD *)(v11 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, v8, v9, v10);
  v17 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
    v18 = sub_B72C40(v17);
  else
    v18 = *(_QWORD *)(v17 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v13, v14, v15, v16);
  v23 = *(_QWORD *)(a1 + 104);
  v24 = (__int64 *)(v23 + 96);
  if ( v12 == v18 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL) )
  {
    sub_6E4DB0(v24, v23, v19, v20, v21, v22);
    v39 = *(_QWORD *)(a1 + 128);
    v30 = (__m128i *)(v39 + 40);
    if ( (*(_BYTE *)(v39 + 56) & 4) != 0 )
      sub_B72B60(v39 + 40, (__int64)v2);
  }
  else
  {
    sub_6E4DB0(v24, v23, v19, v20, v21, v22);
    v29 = *(__m128i **)(a1 + 128);
    v30 = v29 + 4;
    if ( (v29[5].m128i_i8[0] & 4) != 0 )
      sub_B72B60((__int64)v29[4].m128i_i64, (__int64)v2);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v25, v26, v27, v28);
    if ( *(char *)(*(_QWORD *)(a1 + 128) + 10LL) >= 0 )
    {
      sub_B7B5E0(v2, a1, v30, v31, v32, v33);
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v35, v36, v37, v38);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 0x80u;
    }
  }
  return _mm_loadu_si128(v30).m128i_u64[0];
}

