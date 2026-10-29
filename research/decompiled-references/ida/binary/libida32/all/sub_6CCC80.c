__int64 __fastcall sub_6CCC80(
        _QWORD *a1,
        double a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // r12
  __m128i v14; // xmm0
  void *v15; // r14
  unsigned __int64 v16; // r12
  _QWORD *v17; // r13
  unsigned __int64 v18; // r15
  double v19; // xmm4_8
  double v20; // xmm5_8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r13
  double v24; // xmm4_8
  double v25; // xmm5_8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  const char *v28; // rcx
  const char *v29; // r8
  const char *v30; // rcx
  __m128i v31; // [rsp+0h] [rbp-98h] BYREF
  __int64 v32; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i v34; // [rsp+28h] [rbp-70h]
  void *v35; // [rsp+40h] [rbp-58h] BYREF
  __m128i v36; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  sub_6B7750((__int64)&ptr, (__int64)a1, a11, 1);
  if ( v34.m128i_i64[0] <= 1uLL )
    goto LABEL_2;
  sub_6B7B10((__int64)&v35, (__int64)a1, a11, 1);
  v14 = _mm_loadu_si128(&v36);
  v15 = v35;
  v36 = 0;
  v35 = nullptr;
  v16 = v14.m128i_i64[0];
  if ( ptr )
  {
    v31 = v14;
    v34.m128i_i64[0] = 0;
    qfree(ptr);
    v14 = _mm_load_si128(&v31);
    ptr = v15;
    v34 = v14;
    if ( v35 )
    {
      v36.m128i_i64[0] = 0;
      qfree(v35);
      v16 = v34.m128i_i64[0];
    }
  }
  else
  {
    ptr = v15;
    v34 = v14;
  }
  if ( v16 <= 1 || *(char *)(a11 + 28) < 0 || *(_QWORD *)(a11 + 96) )
    goto LABEL_2;
  v12 = *(_QWORD *)(a11 + 88);
  if ( !v12 )
  {
    sub_6BB730(a1, a11, (__int64)"unknown interface for category %s", (const char *)ptr);
    goto LABEL_3;
  }
  if ( sub_B8A810(*(_QWORD *)(a11 + 88)) )
  {
LABEL_2:
    LODWORD(v12) = 1;
    goto LABEL_3;
  }
  sub_6B7750((__int64)&v35, (__int64)a1, v12, 1);
  if ( v36.m128i_i64[0] <= 1uLL )
  {
    v28 = haystack;
    if ( v34.m128i_i64[0] )
      v28 = (const char *)ptr;
    sub_6BB730(a1, a11, (__int64)"unnamed interface for category %s", v28);
    LODWORD(v12) = 0;
    goto LABEL_39;
  }
  v32 = 0;
  LODWORD(v12) = sub_6BC100((__int64)a1, &v32, (const char *)v35);
  if ( (_BYTE)v12 )
  {
    v17 = *(_QWORD **)(a11 + 104);
    v31.m128i_i64[0] = (__int64)&v17[*(unsigned int *)(a11 + 112)];
    while ( (_QWORD *)v31.m128i_i64[0] != v17 )
    {
      v18 = sub_B6AC30(*v17 + 48LL);
      if ( v18 )
      {
        while ( (*(_BYTE *)(v18 + 28) & 0x7F) != 0x12 )
        {
          v21 = *(_QWORD *)(v18 + 8);
          v18 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v21 <= 7 )
            goto LABEL_25;
        }
LABEL_21:
        if ( !(unsigned __int8)sub_6CC3E0(
                                 (__int64)a1,
                                 a11,
                                 &v32,
                                 v18,
                                 *(double *)v14.m128i_i64,
                                 (__m128i)0LL,
                                 a4,
                                 a5,
                                 v19,
                                 v20,
                                 a8,
                                 a9) )
          goto LABEL_47;
        while ( 1 )
        {
          v22 = *(_QWORD *)(v18 + 8);
          v18 = v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 <= 7 )
            break;
          if ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x12 )
            goto LABEL_21;
        }
      }
LABEL_25:
      ++v17;
    }
    v23 = sub_B6AC30(a11 + 48);
    if ( !v23 )
      goto LABEL_34;
    while ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x12 )
    {
      v26 = *(_QWORD *)(v23 + 8);
      v23 = v26 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v26 <= 7 )
        goto LABEL_34;
    }
LABEL_30:
    if ( (unsigned __int8)sub_6CC3E0(
                            (__int64)a1,
                            a11,
                            &v32,
                            v23,
                            *(double *)v14.m128i_i64,
                            (__m128i)0LL,
                            a4,
                            a5,
                            v24,
                            v25,
                            a8,
                            a9) )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)(v23 + 8);
        v23 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v27 <= 7 )
          goto LABEL_34;
        if ( (*(_BYTE *)(v23 + 28) & 0x7F) == 0x12 )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v29 = haystack;
    if ( v34.m128i_i64[0] )
      v29 = (const char *)ptr;
    v30 = haystack;
    if ( v36.m128i_i64[0] )
      v30 = (const char *)v35;
    sub_6BB730(a1, a11, (__int64)"unknown interface %s for category %s", v30, v29);
  }
LABEL_47:
  LODWORD(v12) = 0;
LABEL_34:
  clear_tinfo_t(&v32);
LABEL_39:
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    qfree(v35);
  }
LABEL_3:
  if ( ptr )
  {
    v34.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return (unsigned int)v12;
}

