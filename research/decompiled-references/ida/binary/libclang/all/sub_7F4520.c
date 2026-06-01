__int64 __fastcall sub_7F4520(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  char v7; // al
  unsigned int v8; // r12d
  unsigned __int32 v10; // ebp
  const __m128i *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // r13
  __int64 v16; // r9
  __m128i v17; // [rsp+0h] [rbp-48h]
  __int64 v18[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a2 + 120);
  if ( (v6 & 4) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v10 >= v11[1].m128i_i32[0] )
        break;
      v12 = v10++;
      sub_7ECC20(a1, *(_QWORD *)(v11[1].m128i_i64[1] + 8 * v12));
      v6 = *(_QWORD *)(a2 + 120);
      if ( (v6 & 4) == 0 )
        goto LABEL_2;
    }
    v17 = _mm_loadu_si128(v11);
    v7 = sub_7EF1F0((__int64)a1, v17.m128i_i64[0], v17.m128i_i64[1], a4, a5, a6);
  }
  else
  {
LABEL_2:
    v7 = sub_7EF1F0((__int64)a1, 0, 0, a4, a5, a6);
  }
  if ( !v7 )
    return 0;
  v8 = sub_7E1600(a1, a2 + 64);
  if ( !(_BYTE)v8 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v13 = nullptr;
    v14 = sub_79A2B0(a2);
    v15 = *v14 + 8LL * *((unsigned int *)v14 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v13 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v15 != v13 )
    {
      while ( 1 )
      {
        v16 = *a1;
        v18[0] = *v13;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v18[0], v18[0], v18, a1, v16) )
          break;
        if ( (__int64 *)v15 == ++v13 )
          return v8;
      }
      return 0;
    }
  }
  return v8;
}

