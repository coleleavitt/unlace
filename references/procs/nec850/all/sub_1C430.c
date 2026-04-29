__int64 __fastcall sub_1C430(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // r13
  __int64 v6; // r8
  __m128i *v7; // rbx
  __m128i *v9; // rax
  __int64 v10; // r9
  __m128i *v11; // r14
  unsigned __int64 v12; // rdx
  __m128i *v13; // r15
  const __m128i *v14; // rdi
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // [rsp+8h] [rbp-40h]

  if ( !*(_QWORD *)(a1 + 80) || (v2 = *(_QWORD *)(a1 + 72), *(_DWORD *)v2 != 3) || *(_DWORD *)(v2 + 4) != 3 )
  {
    if ( under_debugger )
      BUG();
    interr(10521);
    return sub_1C680();
  }
  v4 = *(_QWORD *)(v2 + 8);
  if ( v4 >= 0 )
    return 1;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(__m128i **)(a1 + 16);
  v9 = v7;
  v10 = 32 * v6;
  v11 = &v7[2 * v6];
  if ( v11 != v7 )
  {
    if ( v10 >> 5 )
    {
      _BitScanReverse64(&v12, v10 >> 5);
      v24 = 32LL * *(_QWORD *)(a1 + 24);
      sub_1C100(
        *(__m128i **)(a1 + 16),
        &v7[(unsigned __int64)v10 / 0x10],
        2LL * (int)v12,
        (__int64 (__fastcall *)(__int64, __int64))sub_1A550,
        v6,
        v10);
      if ( v24 > 512 )
      {
        v13 = v7 + 32;
        sub_1BCD0(v7, v7 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_1A550);
        do
        {
          v14 = v13;
          v13 += 2;
          sub_1BC40(v14, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_1A550);
        }
        while ( v11 != v13 );
        goto LABEL_11;
      }
    }
    else
    {
      sub_1C100(
        *(__m128i **)(a1 + 16),
        &v7[(unsigned __int64)v10 / 0x10],
        -2,
        (__int64 (__fastcall *)(__int64, __int64))sub_1A550,
        v6,
        v10);
    }
    sub_1BCD0(v7, v11, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_1A550);
LABEL_11:
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(__m128i **)(a1 + 16);
    v9 = &v7[2 * v6];
  }
  v15 = 9;
  v16 = 0;
  while ( 1 )
  {
    v17 = v16;
    if ( v7 == v9 )
      break;
    if ( v7[1].m128i_i32[2] != v15 )
      goto LABEL_18;
    v18 = v7[1].m128i_i64[0];
    if ( v18 + v7->m128i_i64[1] != v16 )
      goto LABEL_18;
    v16 -= v18;
    --v15;
    v7 += 2;
    v17 = v16;
    if ( v15 == 5 )
    {
      if ( v7 == v9 )
        break;
LABEL_18:
      v19 = v7[1].m128i_u32[2];
      if ( v19 > 0x1F )
        goto LABEL_23;
LABEL_19:
      if ( (*(_QWORD *)(a1 + 120) & (1LL << v19)) != 0 )
      {
        while ( 1 )
        {
          v20 = v7[1].m128i_i64[0];
          v17 = v16;
          if ( v20 + v7->m128i_i64[1] != v16 )
            break;
          v16 -= v20;
          v7 += 2;
          v17 = v16;
          if ( v7 == v9 )
            goto LABEL_25;
          v19 = v7[1].m128i_u32[2];
          if ( v19 <= 0x1F )
            goto LABEL_19;
LABEL_23:
          if ( v19 - 48 > 1 )
            goto LABEL_24;
        }
        v6 -= ((char *)v9 - (char *)v7) >> 5;
      }
      else
      {
LABEL_24:
        v17 = v16;
        v6 -= ((char *)v9 - (char *)v7) >> 5;
      }
      break;
    }
  }
LABEL_25:
  *(_QWORD *)(a1 + 24) = v6;
  v21 = *(_QWORD *)(a1 + 8);
  v22 = -v16;
  v23 = v17 - v4;
  if ( a2 && *(unsigned __int16 *)(v21 + 40) == v22 && v23 < *(_QWORD *)(v21 + 32) )
    v23 = *(_QWORD *)(v21 + 32);
  return set_frame_size(v21, v23, (unsigned __int16)v22, 0);
}
