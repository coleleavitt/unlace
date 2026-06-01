void __fastcall sub_7335C0(_QWORD *a1, __int64 a2, __int64 a3, __int16 a4, __int64 a5)
{
  __int64 v5; // r13
  __int16 v6; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r13
  size_t v19; // r12
  void *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __int16 v28; // si
  unsigned __int64 v29; // r14
  void (__fastcall *v30)(__int64, __int64); // rax
  void *v31; // rbp

  LOWORD(v5) = a4;
  v6 = a4;
  v9 = (unsigned __int64)(a1 + 5);
  *(_QWORD *)(v9 - 24) = a5;
  *(_OWORD *)(v9 + 504) = 0;
  *(_QWORD *)(v9 - 40) = a2;
  *(_WORD *)(v9 - 32) = a4;
  *(_WORD *)(v9 + 528) = 0;
  *(_QWORD *)(v9 - 16) = 0;
  *(_QWORD *)(v9 + 520) = 0;
  *(_QWORD *)(v9 + 536) = 0;
  *(_DWORD *)(v9 + 544) = 0;
  *(_QWORD *)(v9 - 8) = 0;
  *(_QWORD *)(v9 + 496) = 0;
  memset((void *)(v9 & 0xFFFFFFFFFFFFFFF8LL), 0, 8 * (((unsigned int)a1 - (v9 & 0xFFFFFFF8) + 544) >> 3));
  *((_WORD *)a1 + 294) = 56;
  sub_734820(a2, a3);
  v10 = *a1;
  byte_2CCC4C0 = 0;
  v11 = sub_734B20(v10);
  v12 = *a1;
  a1[72] = v11;
  v13 = v11;
  v14 = sub_734830(v12);
  v15 = *a1;
  if ( v13 < v14 )
  {
    v16 = sub_734830(v15);
    if ( (unsigned int)sub_7334C0(a1, v16) )
      goto LABEL_15;
    if ( (unsigned __int16)v5 > 1u )
      goto LABEL_4;
LABEL_12:
    v5 = 64;
    v6 = 64;
    goto LABEL_5;
  }
  v29 = a1[72];
  a1[70] = v29;
  *((_WORD *)a1 + 284) = v29 / sub_734830(v15);
  if ( (unsigned __int16)v5 <= 1u )
    goto LABEL_12;
LABEL_4:
  v5 = (unsigned __int16)v5;
LABEL_5:
  *((_WORD *)a1 + 4) = v6;
  v17 = v5 * (a3 + 56);
  v18 = v17 + 3;
  v19 = v17 + 1;
  v20 = (void *)qalloc(v17 + 3);
  a1[3] = v20;
  if ( v20 )
  {
    memset(v20, 0, v19);
    v21 = _mm_loadl_epi64((const __m128i *)(a1 + 3));
    v22 = *((unsigned __int16 *)a1 + 294);
    a1[68] = v21.m128i_i64[0];
    v23 = a3 + v22;
    *(_WORD *)(v21.m128i_i64[0] + 40) = 0;
    *(_WORD *)v21.m128i_i64[0] = -1;
    *(__m128i *)(v21.m128i_i64[0] + 24) = _mm_unpacklo_epi64(v21, v21);
    *((_WORD *)a1 + 4) = v19 / v23;
    if ( (unsigned __int16)(v19 / v23) > 1u )
    {
      v24 = v21.m128i_i64[0];
      v25 = 1;
      do
      {
        v26 = (__m128i)(unsigned __int64)v24;
        v24 += v23;
        v27 = _mm_unpacklo_epi64(v21, v26);
        v28 = v25++;
        *(_QWORD *)(v24 - v23 + 24) = v24;
        *(_WORD *)(v24 + 40) = 0;
        *(_WORD *)v24 = -1;
        *(__m128i *)(v24 + 24) = v27;
      }
      while ( (unsigned __int16)(v19 / v23) != (_WORD)v25 );
      *(_QWORD *)(v21.m128i_i64[0] + 32) = v24;
      *(_WORD *)(v24 + 40) = 0;
      *(_WORD *)v24 = -1;
      *(__m128i *)(v24 + 24) = v27;
      a1[68] = v21.m128i_i64[0] + v23 + v23 * (unsigned __int16)(v28 - 1);
    }
    a1[69] = v21.m128i_i64[0];
    return;
  }
  v30 = (void (__fastcall *)(__int64, __int64))a1[2];
  if ( !v30 )
    off_2C81BC0();
  v30(34, v18);
LABEL_15:
  v31 = (void *)*a1;
  if ( *a1 )
  {
    sub_7345F0(*a1);
    operator delete(v31, 0x18u);
  }
  *a1 = 0;
}
