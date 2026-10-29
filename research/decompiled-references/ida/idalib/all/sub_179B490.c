void __fastcall sub_179B490(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 *v5; // rbp
  unsigned __int64 v6; // rbx
  char *v7; // rdi
  unsigned __int64 *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // r13
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rax
  char v30; // r8
  unsigned __int8 v31; // al
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // dl
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  char v41; // dl
  unsigned __int64 v42; // [rsp-8h] [rbp-1A0h]
  unsigned __int64 v45; // [rsp+18h] [rbp-180h]
  char v47; // [rsp+30h] [rbp-168h]
  __int64 v48; // [rsp+40h] [rbp-158h]
  bool v51; // [rsp+6Fh] [rbp-129h] BYREF
  __m128i v52; // [rsp+70h] [rbp-128h] BYREF
  void *v53; // [rsp+80h] [rbp-118h] BYREF
  __m128i si128; // [rsp+88h] [rbp-110h]
  char v55[8]; // [rsp+98h] [rbp-100h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-F8h] BYREF
  void *v57; // [rsp+B0h] [rbp-E8h]
  __int64 v58; // [rsp+B8h] [rbp-E0h]
  _BYTE v59[96]; // [rsp+C0h] [rbp-D8h] BYREF
  __int16 v60; // [rsp+120h] [rbp-78h]
  void *ptr; // [rsp+128h] [rbp-70h]
  __int64 v62; // [rsp+130h] [rbp-68h]
  _BYTE v63[96]; // [rsp+138h] [rbp-60h] BYREF

  v5 = &a3[a4];
  v6 = a4;
  v7 = v55;
  v53 = v55;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  if ( v5 != a3 )
  {
    v8 = a3;
    while ( 1 )
    {
      v10 = *v8;
      v11 = *(_QWORD *)(*v8 + 56);
      if ( (v11 & 4) == 0 || !*(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
        break;
      v60 = 0;
      v56 = 0;
      v57 = v59;
      v58 = 0x400000000LL;
      ptr = v63;
      v62 = 0x400000000LL;
      if ( (unsigned __int8)sub_17516B0(a1, v10, (__int64)&v56, 0, 0, 0.0) )
      {
        v12 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          sub_2236E10(&v53, v55, si128.m128i_i64[0] + 1, 1);
          v12 = si128.m128i_i64[0];
        }
        *((_BYTE *)v53 + v12) = 0;
        ++si128.m128i_i64[0];
      }
      else
      {
        v29 = si128.m128i_i64[0];
        v30 = v60;
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          v47 = v60;
          sub_2236E10(&v53, v55, si128.m128i_i64[0] + 1, 1);
          v29 = si128.m128i_i64[0];
          v30 = v47;
        }
        *((_BYTE *)v53 + v29) = v30;
        ++si128.m128i_i64[0];
      }
      if ( ptr != v63 )
        free(ptr);
      if ( v57 == v59 )
      {
LABEL_6:
        if ( v5 == ++v8 )
          goto LABEL_17;
      }
      else
      {
        free(v57);
        if ( v5 == ++v8 )
        {
LABEL_17:
          v6 = a4;
          v7 = (char *)v53;
          if ( !a4 )
            goto LABEL_38;
          goto LABEL_18;
        }
      }
    }
    v9 = si128.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      sub_2236E10(&v53, v55, si128.m128i_i64[0] + 1, 1);
      v9 = si128.m128i_i64[0];
    }
    *((_BYTE *)v53 + v9) = 1;
    ++si128.m128i_i64[0];
    goto LABEL_6;
  }
  if ( !a4 )
    return;
LABEL_18:
  v13 = 0;
  do
  {
    while ( !v7[v13] )
    {
      if ( v6 <= ++v13 )
        goto LABEL_38;
    }
    v14 = a3[v13];
    v48 = v14;
    v16 = sub_B77970(v14);
    if ( !v16 )
      v16 = (_QWORD *)v14;
    v19 = v16[7];
    if ( (v19 & 4) != 0 )
      v52 = _mm_loadu_si128((const __m128i *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 40));
    else
      v52 = _mm_loadu_si128(&xmmword_23DED40);
    v51 = 0;
    v20 = 0;
    do
    {
      while ( 1 )
      {
        if ( v20 == v13 || !*((_BYTE *)v53 + v20) )
          goto LABEL_45;
        v21 = a3[v20];
        v22 = sub_B77970(v21);
        v25 = v22;
        if ( v22 )
          v21 = (__int64)v22;
        else
          v25 = (_QWORD *)v21;
        if ( a5 )
          break;
        v45 = sub_B77A30((__int64)v16);
        v26 = sub_B77A30(v21);
        v15 = v45;
        if ( (v45 == 0) != (v26 != 0) )
          goto LABEL_32;
LABEL_45:
        if ( v6 <= ++v20 )
          goto LABEL_46;
      }
      v31 = sub_B771C0(v21, a5, v23, v24);
      v32 = v25[15];
      v33 = *(_QWORD *)(*(_QWORD *)(v32 + 8LL * v31) + 48LL);
      v35 = *(_QWORD *)(*(_QWORD *)(v16[15] + 8LL * (unsigned __int8)sub_B771C0((__int64)v16, a5, v32, v34)) + 48LL);
      v36 = *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL];
      v37 = v36 | v33;
      v15 = v36 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v35) & 7) != (v15 | v37 & 7) )
        goto LABEL_45;
      v38 = sub_B987D0(v25, a5);
      v39 = sub_B987D0(v16, a5);
      v40 = *(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL];
      v41 = v40 | v38;
      v15 = v40 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v39) & 7) == (v15 | v41 & 7) )
      {
LABEL_32:
        v27 = v25[7];
        if ( (v27 & 4) != 0 )
          v56 = _mm_loadu_si128((const __m128i *)((v27 & 0xFFFFFFFFFFFFFFF8LL) + 40));
        else
          v56 = _mm_loadu_si128(&xmmword_23DED40);
        if ( v56.m128i_i64[0] )
        {
          if ( !v52.m128i_i64[0] )
            goto LABEL_37;
          v28 = sub_175BCD0(a1, (__int64)v25, (__int64)&v56, 1, (__int64)v16, &v51, (__int64)&v52, 1);
          v15 = v42;
          if ( v28 || v51 )
            goto LABEL_37;
        }
        goto LABEL_45;
      }
      ++v20;
    }
    while ( v6 > v20 );
LABEL_46:
    if ( !v51 )
    {
      *(_BYTE *)(v48 + 83) &= ~0x10u;
      sub_B9C2D0(a2, v48, (unsigned int)(1 << a5), v15, v17, v18);
    }
LABEL_37:
    ++v13;
    v7 = (char *)v53;
  }
  while ( v6 > v13 );
LABEL_38:
  if ( v7 != v55 )
    free(v7);
}
