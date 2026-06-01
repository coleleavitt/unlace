void __fastcall sub_AE3EE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // r12
  __int64 v5; // rax
  char *v6; // r13
  const __m128i *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i si128; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  size_t v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v20[24]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-90h]
  __m128i v22; // [rsp+20h] [rbp-88h] BYREF
  __int128 v23; // [rsp+40h] [rbp-68h]
  __int128 v24; // [rsp+50h] [rbp-58h]
  __int128 v25; // [rsp+60h] [rbp-48h]
  char *v26; // [rsp+70h] [rbp-38h]

  v2 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 16) == 16 )
    {
      if ( *(_QWORD *)(v2 + 32) )
      {
        v3 = *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88);
        if ( v3 )
          sub_ADE7F0(a1 + 8, 0, 0, v3, a1);
      }
    }
  }
  v4 = (_QWORD *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v4 )
  {
    v5 = (*(__int64 *)(a2 + 72) >> 1) & 3;
    if ( v5 == 1 )
    {
      v6 = "inherited from";
    }
    else
    {
      if ( v5 != 2 )
      {
        v6 = "previous";
        v4 = nullptr;
        if ( (_BYTE)byte_2CCC440 )
          goto LABEL_11;
        goto LABEL_16;
      }
      v4 = (_QWORD *)*v4;
      v6 = "previous";
    }
    if ( (_BYTE)byte_2CCC440 )
      goto LABEL_11;
LABEL_16:
    if ( __cxa_guard_acquire(&byte_2CCC440) )
    {
      qword_2CCC460 &= 0xFFFFFFFE00000000LL;
      qword_2CCC468 = 0;
      qword_2CCC478 = 0;
      __cxa_guard_release(&byte_2CCC440);
    }
LABEL_11:
    v7 = (const __m128i *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v7 )
    {
      v18 = (*(__int64 *)(a2 + 72) >> 1) & 3;
      if ( v18 == 1 )
      {
        v19 = v7[4].m128i_i64[1];
        v7 = nullptr;
        if ( !v19 )
          goto LABEL_13;
        v7 = (const __m128i *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v19 >> 1) & 3) != 2 || !v7 )
          goto LABEL_13;
      }
      else if ( v18 != 2 )
      {
        goto LABEL_13;
      }
      v7 = (const __m128i *)v7->m128i_i64[1];
    }
    else
    {
      v7 = (const __m128i *)&qword_2CCC460;
    }
LABEL_13:
    v8 = sub_F1E510(v7);
    v9 = v7[1].m128i_i64[0];
    v10 = _mm_loadu_si128(v7);
    *(_QWORD *)v20 = a1;
    v22.m128i_i64[0] = v8;
    *(__m128i *)&v20[8] = v10;
    si128 = _mm_load_si128((const __m128i *)v20);
    v21 = v9;
    v12 = _mm_load_si128((const __m128i *)&v20[16]);
    v22.m128i_i64[1] = (__int64)v4;
    v13 = _mm_load_si128(&v22);
    v23 = (__int128)si128;
    v24 = (__int128)v12;
    v25 = (__int128)v13;
    v26 = v6;
    v14 = sub_ACAA10(v7);
    sub_AE3830((char *)(a1 + 8), (char *)&byte_22F0C30, v14, v15, v16, v17, v23, v24, v25, (__int64)v26);
  }
}
