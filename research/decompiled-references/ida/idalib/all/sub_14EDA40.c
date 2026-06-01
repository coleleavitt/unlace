__int64 __fastcall sub_14EDA40(const __m128i *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v5; // rax
  unsigned __int16 v6; // ax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int32 v10; // r15d
  unsigned __int64 v11; // r12
  __int16 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __int32 v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rdi
  char *v22; // rax
  int v23[3]; // [rsp+1Ch] [rbp-17Ch] BYREF
  __m128 v24; // [rsp+28h] [rbp-170h] BYREF
  __m128i v25; // [rsp+38h] [rbp-160h] BYREF
  __int64 v26; // [rsp+48h] [rbp-150h]
  __m128i v27; // [rsp+50h] [rbp-148h] BYREF
  __int32 v28; // [rsp+60h] [rbp-138h]
  __int128 v29; // [rsp+80h] [rbp-118h] BYREF
  void *ptr; // [rsp+90h] [rbp-108h]
  __int64 v31; // [rsp+98h] [rbp-100h]
  _BYTE v32[248]; // [rsp+A0h] [rbp-F8h] BYREF

  v1 = 1;
  v2 = a1->m128i_i64[1];
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 56) + 1LL) & 8) != 0 )
  {
    v3 = *(_QWORD *)(v2 + 2944);
    if ( v3 >= *(unsigned int *)(v2 + 2912) )
      v5 = sub_14180A0(a1->m128i_i64[1], 1u);
    else
      v5 = *(_QWORD *)(v2 + 2904) + 24 * v3;
    v6 = *(_WORD *)(v5 + 16);
    if ( v6 != 28 )
    {
      v1 = 0;
      if ( v6 > 0x1Cu )
      {
        if ( v6 == 64 )
          return v1;
        if ( v6 != 147 )
        {
          v1 = 1;
          if ( v6 != 31 )
            return v1;
        }
      }
      else
      {
        if ( v6 == 21 )
          return v1;
        if ( v6 == 27 )
          return v1;
        v1 = 1;
        if ( v6 != 5 )
          return v1;
      }
    }
    v8 = a1[5].m128i_i64[0];
    v9 = a1->m128i_i64[1];
    v24 = (__m128)_mm_loadu_si128(a1 + 3);
    v10 = a1[5].m128i_i32[2];
    v26 = v8;
    LODWORD(v8) = a1[2].m128i_i32[0];
    v25 = _mm_loadu_si128(a1 + 4);
    v11 = a1[169].m128i_u32[2];
    v12 = a1[5].m128i_i16[6];
    v27 = _mm_loadu_si128(a1 + 1);
    v28 = v8;
    sub_1418D30(v9, 0);
    ptr = v32;
    v29 = 0;
    v31 = 0x400000000LL;
    v1 = sub_14CACB0((__int64)a1, (__int64 *)&v29, v23, (unsigned __int64)&v29, v13, v14, 0.0, v24);
    if ( !(_BYTE)v1 )
    {
      v1 = 1;
      if ( (unsigned int)(v23[0] - 2) > 1 )
        LOBYTE(v1) = a1[2].m128i_i16[0] == 64;
    }
    if ( ptr != v32 )
      free(ptr);
    sub_1417BC0(a1->m128i_i64[1]);
    v15 = _mm_loadu_si128((const __m128i *)&v24);
    v16 = _mm_loadu_si128(&v25);
    v17 = _mm_load_si128(&v27);
    a1[5].m128i_i64[0] = v26;
    v18 = v28;
    a1[3] = v15;
    a1[2].m128i_i32[0] = v18;
    v19 = a1[169].m128i_u32[2];
    a1[4] = v16;
    a1[1] = v17;
    if ( v11 != v19 )
    {
      if ( v11 >= v19 )
      {
        if ( v11 > a1[169].m128i_u32[3] )
        {
          sub_2237220(&a1[169], &a1[170], v11, 8);
          v19 = a1[169].m128i_u32[2];
        }
        v20 = a1[169].m128i_i64[0];
        v21 = (char *)(v20 + 8 * v19);
        v22 = (char *)(v20 + 8 * v11);
        if ( v21 != v22 )
          memset(v21, 0, 8 * ((unsigned __int64)(v22 - 8 - v21) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v11;
    }
    a1[5].m128i_i32[2] = v10;
    a1[5].m128i_i16[6] = v12;
  }
  return v1;
}
