__int64 __fastcall sub_7F4960(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  __int64 *v9; // rax
  unsigned int v10; // r12d
  unsigned __int32 v12; // ebp
  const __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // r13
  __int64 v18; // r9
  __m128i v19; // [rsp+0h] [rbp-48h]
  __int64 v20[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a2 + 120);
  if ( (v6 & 4) != 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v12 >= v13[1].m128i_i32[0] )
        break;
      v14 = v12++;
      sub_7ECC20(a1, *(_QWORD *)(v13[1].m128i_i64[1] + 8 * v14));
      v6 = *(_QWORD *)(a2 + 120);
      if ( (v6 & 4) == 0 )
        goto LABEL_2;
    }
    v19 = _mm_loadu_si128(v13);
    v7 = sub_7EF1F0((__int64)a1, v19.m128i_i64[0], v19.m128i_i64[1], a4, a5, a6);
  }
  else
  {
LABEL_2:
    v7 = sub_7EF1F0((__int64)a1, 0, 0, a4, a5, a6);
  }
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a2 + 128);
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
    {
      v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v9 )
      {
        if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v9, (__int64)(v9 + 1)) )
          return 0;
      }
    }
  }
  v10 = sub_7E1600(a1, a2 + 64);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v15 = nullptr;
    v16 = sub_79A2B0(a2);
    v17 = *v16 + 8LL * *((unsigned int *)v16 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v15 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v17 != v15 )
    {
      while ( 1 )
      {
        v18 = *a1;
        v20[0] = *v15;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v20[0], v20[0], v20, a1, v18) )
          break;
        if ( (__int64 *)v17 == ++v15 )
          return v10;
      }
      return 0;
    }
  }
  return v10;
}

