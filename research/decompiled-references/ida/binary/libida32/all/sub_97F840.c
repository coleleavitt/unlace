__int64 __fastcall sub_97F840(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  unsigned __int64 *v20; // r12
  __int64 v22; // r13
  unsigned __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rsi
  __int64 v28; // rax
  unsigned __int64 *v29; // rax
  _QWORD v30[7]; // [rsp+0h] [rbp-38h] BYREF

  a1[1].m128i_i64[0] = sub_975DE0((__int64)a1, a2, a3, a4, a5, a6);
  sub_976710(a1, a1[8].m128i_i64[0], a1[8].m128i_u64[1], 0, 0, a2);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x8B )
  {
    v9 = a1->m128i_i64[1];
    v10 = *(_QWORD *)(a2 + 8);
    v30[0] = a2;
    v30[1] = 2;
    v11 = sub_985780(v9 + 32, v30, 0);
    sub_978C10((__int64)a1, v11, v10, v12, v13, v14);
  }
  v15 = a1[1].m128i_i64[0];
  if ( (*(_BYTE *)(v15 + 104) & 1) == 0 )
  {
    sub_975B20(
      v15,
      *(_QWORD *)(a1->m128i_i64[1] + 8),
      2LL * (*(_QWORD *)(a1->m128i_i64[1] + 8) == 0),
      (_QWORD *)(a1->m128i_i64[1] + 32),
      v7,
      v8);
    v15 = a1[1].m128i_i64[0];
  }
  sub_9784E0(a1, v15, a2);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x8B )
  {
    v22 = a1[1].m128i_i64[0];
    v23 = sub_97E030(a1, *(_QWORD **)(a2 + 24), 0, v16, v17, v18);
    v27 = *(_QWORD **)(a2 + 16);
    v20 = v23;
    if ( !v23 )
      v20 = (unsigned __int64 *)v22;
    if ( v27 )
    {
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v28 + 16) == 13
        && ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) == 0x1B3
        && (*(_WORD *)v27 & 0x1FF) != 0x35 )
      {
        v29 = sub_97E030(a1, v27, 0, v24, v25, v26);
        if ( v29 )
          return (__int64)v29;
      }
    }
    return (__int64)v20;
  }
  v19 = *(_QWORD *)(a2 + 8);
  if ( v19 )
    return sub_979740((__int64)a1, v19, 1, 1, v17, v18);
  return a1[1].m128i_i64[0];
}

