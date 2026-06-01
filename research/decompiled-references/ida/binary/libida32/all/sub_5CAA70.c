unsigned __int64 __fastcall sub_5CAA70(const __m128i *a1)
{
  unsigned __int64 v1; // rbx
  __int32 v2; // r13d
  __int32 v4; // eax
  __int16 v5; // r15
  __m128i v6; // xmm0
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  char *v18; // r12
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  void *v24; // rdi
  const void *v26; // rsi
  __int32 v27; // eax
  __m128i v28; // xmm0
  __int64 v29; // [rsp+0h] [rbp-F0h]
  __m128i n; // [rsp+8h] [rbp-E8h] BYREF
  __int32 v31; // [rsp+1Ch] [rbp-D4h]
  __int64 v32; // [rsp+20h] [rbp-D0h]
  void *src; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+30h] [rbp-C0h]
  __int64 v35; // [rsp+40h] [rbp-B0h]
  __int64 v36; // [rsp+48h] [rbp-A8h]
  __m128i v37; // [rsp+50h] [rbp-A0h] BYREF
  __int32 v38; // [rsp+60h] [rbp-90h]
  char v39; // [rsp+88h] [rbp-68h]
  __m128i v40[2]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp-40h]

  v1 = a1[3].m128i_u64[0];
  v2 = a1[30].m128i_i32[0];
  v41 = __readfsqword(0x28u);
  v34 = 0;
  src = nullptr;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( v1 <= 1 )
  {
    v4 = a1[4].m128i_i32[1];
    v5 = a1[4].m128i_i16[0];
    v38 = v2;
    n.m128i_i64[0] = 0;
    v31 = v4;
    HIDWORD(v35) = v4;
    LOBYTE(v4) = a1[4].m128i_i8[8];
    LOWORD(v35) = v5;
    LOBYTE(v36) = v4;
    v37 = _mm_loadu_si128(a1 + 5);
LABEL_3:
    n.m128i_i64[1] = 0;
    goto LABEL_4;
  }
  v26 = (const void *)a1[2].m128i_i64[1];
  src = (void *)qvector_reserve(&src, 0, v1, 1);
  *(_QWORD *)&v34 = v1;
  memmove(src, v26, v1 - 1);
  *((char *)src + v1 - 1) = 0;
  v27 = a1[4].m128i_i32[1];
  v5 = a1[4].m128i_i16[0];
  v38 = v2;
  v31 = v27;
  v28 = _mm_loadu_si128(a1 + 5);
  HIDWORD(v35) = v27;
  LOBYTE(v27) = a1[4].m128i_i8[8];
  n.m128i_i64[0] = v34;
  LOWORD(v35) = v5;
  LOBYTE(v36) = v27;
  v37 = v28;
  if ( !(_QWORD)v34 )
    goto LABEL_3;
  n.m128i_i64[1] = qalloc_or_throw(n.m128i_i64[0], (const char *)v26);
  memcpy((void *)n.m128i_i64[1], src, n.m128i_u64[0]);
  v2 = v38;
  v5 = v35;
  v31 = HIDWORD(v35);
LABEL_4:
  v6 = _mm_loadu_si128(&v37);
  v7 = a1[29].m128i_u64[1];
  v39 = v36;
  v8 = a1[29].m128i_i64[0];
  v40[0] = v6;
  if ( v7 < v8 + 1 )
  {
    v15 = qvector_reserve(&a1[28].m128i_u64[1], 0, v8 + 1, 64);
    v16 = a1[29].m128i_i64[1];
    v17 = a1[29].m128i_i64[0];
    v29 = v15;
    a1[29].m128i_i64[1] = v7;
    v18 = (char *)a1[28].m128i_i64[1];
    v32 = v16;
    v19 = v17 - 1;
    if ( v19 >= 0 )
    {
      v20 = v15;
      do
      {
        v21 = *(_QWORD *)v18;
        v22 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        *(_QWORD *)v18 = 0;
        *((_QWORD *)v18 + 2) = 0;
        *(_QWORD *)v20 = v21;
        *(__m128i *)(v20 + 8) = v22;
        v23 = _mm_loadu_si128((const __m128i *)(v18 + 40));
        *(_WORD *)(v20 + 24) = *((_WORD *)v18 + 12);
        LODWORD(v21) = *((_DWORD *)v18 + 7);
        *(__m128i *)(v20 + 40) = v23;
        *(_DWORD *)(v20 + 28) = v21;
        *(_BYTE *)(v20 + 32) = v18[32];
        *(_DWORD *)(v20 + 56) = *((_DWORD *)v18 + 14);
        v24 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v24);
        }
        v18 += 64;
        v20 += 64;
      }
      while ( v19-- != 0 );
      v18 = (char *)a1[28].m128i_i64[1];
    }
    qfree(v18);
    a1[28].m128i_i64[1] = v29;
    a1[29].m128i_i64[1] = v32;
    v8 = a1[29].m128i_i64[0];
  }
  else
  {
    v29 = a1[28].m128i_i64[1];
  }
  v9 = _mm_loadl_epi64(&n);
  v10 = (v8 << 6) + v29;
  v11 = n.m128i_i64[1];
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v9, v9);
  v12 = _mm_loadu_si128(v40);
  *(_QWORD *)v10 = v11;
  LODWORD(v11) = v31;
  v13 = src;
  *(_WORD *)(v10 + 24) = v5;
  *(_DWORD *)(v10 + 28) = v11;
  LOBYTE(v11) = v39;
  *(_DWORD *)(v10 + 56) = v2;
  *(_BYTE *)(v10 + 32) = v11;
  *(__m128i *)(v10 + 40) = v12;
  ++a1[29].m128i_i64[0];
  if ( v13 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v13);
  }
  return v41 - __readfsqword(0x28u);
}

