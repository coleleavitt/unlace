unsigned __int64 __fastcall sub_3434C0(__m128i *a1, __m128i *a2)
{
  __m128i *v3; // rbp
  __m128i *v4; // rbx
  size_t v5; // r13
  const char *v6; // rsi
  const char *v7; // rdi
  __int32 v8; // eax
  __int64 v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rax
  size_t v12; // r13
  double v13; // xmm0_8
  __m128i *v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  const __m128i *v17; // rsi
  void *v18; // rax
  void *v20; // rax
  const void *v21; // rsi
  void *v22; // rax
  const void *v23; // rsi
  __m128i *v24; // [rsp+8h] [rbp-D0h]
  __int64 v25; // [rsp+10h] [rbp-C8h]
  void *v26; // [rsp+18h] [rbp-C0h]
  void *v27; // [rsp+20h] [rbp-B8h]
  __m128i v29[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int32 v30; // [rsp+50h] [rbp-88h]
  __int64 v31; // [rsp+58h] [rbp-80h]
  void *v32; // [rsp+60h] [rbp-78h]
  __int128 v33; // [rsp+68h] [rbp-70h]
  void *v34; // [rsp+78h] [rbp-60h]
  __int128 v35; // [rsp+80h] [rbp-58h]
  unsigned __int64 v36; // [rsp+98h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != &a1[6] )
  {
    v3 = a1 + 12;
    do
    {
      v24 = v3;
      v4 = v3 - 6;
      v5 = v3[-3].m128i_u64[1];
      if ( a1[3].m128i_i64[1] )
      {
        v6 = (const char *)a1[3].m128i_i64[0];
        v7 = &s1;
        if ( !v5 )
          goto LABEL_7;
      }
      else
      {
        v6 = &s1;
        if ( !v5 )
        {
LABEL_24:
          sub_3432C0(v3 - 6);
          goto LABEL_21;
        }
      }
      v7 = (const char *)v3[-3].m128i_i64[0];
LABEL_7:
      if ( strcmp(v7, v6) >= 0 )
        goto LABEL_24;
      v8 = v3[-4].m128i_i32[0];
      v9 = v3[-4].m128i_i64[1];
      v29[0] = _mm_loadu_si128(v3 - 6);
      v10 = _mm_loadu_si128(v3 - 5);
      v30 = v8;
      v25 = v9;
      v29[1] = v10;
      if ( v9 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v5 = v3[-3].m128i_u64[1];
        v25 = v11;
      }
      v26 = nullptr;
      v33 = 0;
      if ( v5 )
      {
        v20 = (void *)qalloc_or_throw(v5);
        v21 = (const void *)v3[-3].m128i_i64[0];
        v26 = v20;
        *((_QWORD *)&v33 + 1) = v5;
        memcpy(v20, v21, v5);
        *(_QWORD *)&v33 = v5;
      }
      v12 = v3[-1].m128i_u64[0];
      v13 = 0.0;
      v27 = nullptr;
      v35 = 0;
      if ( v12 )
      {
        v22 = (void *)qalloc_or_throw(v12);
        v23 = (const void *)v3[-2].m128i_i64[1];
        v27 = v22;
        *((_QWORD *)&v35 + 1) = v12;
        memcpy(v22, v23, v12);
        *(_QWORD *)&v35 = v12;
      }
      v14 = v3;
      v15 = (char *)v4 - (char *)a1;
      v16 = 0xAAAAAAAAAAAAAAABLL * (((char *)v4 - (char *)a1) >> 5);
      if ( v15 > 0 )
      {
        do
        {
          v17 = v14 - 12;
          v14 -= 6;
          sub_3428F0(v14, v17);
          --v16;
        }
        while ( v16 );
      }
      v31 = v25;
      v32 = v26;
      v34 = v27;
      sub_3428F0(a1, v29);
      if ( v25 )
        v13 = qfree(v25, v29[0].m128i_i8);
      if ( !v26 )
      {
        v18 = v27;
        if ( !v27 )
          goto LABEL_21;
LABEL_20:
        qfree(v18, v29[0].m128i_i8, v13);
        goto LABEL_21;
      }
      *(_QWORD *)&v33 = 0;
      v13 = qfree(v26, v29[0].m128i_i8);
      v18 = v27;
      *((_QWORD *)&v33 + 1) = 0;
      if ( v27 )
        goto LABEL_20;
LABEL_21:
      v3 += 6;
    }
    while ( a2 != v24 );
  }
  return v36 - __readfsqword(0x28u);
}
