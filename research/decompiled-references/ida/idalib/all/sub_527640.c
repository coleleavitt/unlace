unsigned __int64 __fastcall sub_527640(__m128i *a1, __int64 *a2, __int64 a3, const __m128i *a4)
{
  __int64 *v5; // r14
  __int64 v6; // rbp
  void (__fastcall *v7)(__int128 *, const __m128i *, __int64); // rax
  __m128i v8; // xmm0
  void (__fastcall *v9)(__int128 *, __int128 *, __int64); // rax
  __m128i *v10; // rbp
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i *v16; // rbp
  int v17; // edx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  void (__fastcall *v21)(__int128 *, const __m128i *, __int64); // rax
  __m128i v22; // xmm0
  void (__fastcall *v23)(__int128 *, __int128 *, __int64); // rax
  void (__fastcall *v24)(__int128 *, __int128 *, __int64); // rax
  __int64 v25; // r15
  __m128i v26; // xmm0
  __int64 v27; // rbp
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // [rsp+10h] [rbp-98h]
  __int128 v36; // [rsp+20h] [rbp-88h] BYREF
  __m128i v37; // [rsp+30h] [rbp-78h] BYREF
  __int128 v38; // [rsp+40h] [rbp-68h] BYREF
  __m128i v39; // [rsp+50h] [rbp-58h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v35 = a3;
  v40 = __readfsqword(0x28u);
  v6 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v7 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
    if ( a3 )
    {
      do
      {
        v37 = 0u;
        v36 = 0;
        if ( !v7 )
        {
          v39 = 0u;
          v38 = 0;
LABEL_50:
          std::__throw_bad_function_call();
        }
        v7(&v36, a4, 2);
        v8 = _mm_loadu_si128(a4 + 1);
        v9 = (void (__fastcall *)(__int128 *, __int128 *, __int64))a4[1].m128i_i64[0];
        v38 = 0;
        v39 = 0u;
        v10 = &a1[v6 >> 5];
        v37 = v8;
        if ( !v9 )
          goto LABEL_50;
        v9(&v38, &v36, 2);
        v11 = a1 + 1;
        v39 = _mm_load_si128(&v37);
        if ( !v37.m128i_i64[0] )
          goto LABEL_50;
        if ( ((int (__fastcall *)(__int128 *, __int64 *, __m128i *))v39.m128i_i64[1])(&v38, a1[1].m128i_i64, v10) < 0 )
        {
          if ( !v39.m128i_i64[0] )
            std::__throw_bad_function_call();
          if ( ((int (__fastcall *)(__int128 *, __m128i *))v39.m128i_i64[1])(&v38, v10) >= 0 )
          {
            if ( !v39.m128i_i64[0] )
              std::__throw_bad_function_call();
            v34 = ((__int64 (__fastcall *)(__int128 *, __int64 *, __int64 *))v39.m128i_i64[1])(
                    &v38,
                    a1[1].m128i_i64,
                    v5 - 2);
            v12 = a1->m128i_i64[0];
            v13 = a1->m128i_i64[1];
            if ( v34 >= 0 )
              goto LABEL_10;
            *a1 = _mm_loadu_si128((const __m128i *)v5 - 1);
            *(v5 - 2) = v12;
            *(v5 - 1) = v13;
          }
          else
          {
            v29 = a1->m128i_i64[0];
            v30 = a1->m128i_i64[1];
            *a1 = _mm_loadu_si128(v10);
            v10->m128i_i64[0] = v29;
            v10->m128i_i64[1] = v30;
          }
        }
        else
        {
          if ( !v39.m128i_i64[0] )
            std::__throw_bad_function_call();
          if ( ((int (__fastcall *)(__int128 *, __int64 *))v39.m128i_i64[1])(&v38, a1[1].m128i_i64) < 0 )
          {
            v12 = a1->m128i_i64[0];
            v13 = a1->m128i_i64[1];
LABEL_10:
            v14 = _mm_loadu_si128(a1 + 1);
            a1[1].m128i_i64[0] = v12;
            a1[1].m128i_i64[1] = v13;
            *a1 = v14;
            goto LABEL_11;
          }
          if ( !v39.m128i_i64[0] )
            std::__throw_bad_function_call();
          v31 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __int64 *))v39.m128i_i64[1])(&v38, v10, v5 - 2);
          v32 = a1->m128i_i64[0];
          v33 = a1->m128i_i64[1];
          if ( v31 < 0 )
          {
            *a1 = _mm_loadu_si128((const __m128i *)v5 - 1);
            *(v5 - 2) = v32;
            *(v5 - 1) = v33;
          }
          else
          {
            *a1 = _mm_loadu_si128(v10);
            v10->m128i_i64[0] = v32;
            v10->m128i_i64[1] = v33;
          }
        }
LABEL_11:
        if ( v39.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v39.m128i_i64[0])(&v38, &v38, 3);
        v39 = 0u;
        v38 = 0;
        if ( !v37.m128i_i64[0] )
LABEL_63:
          std::__throw_bad_function_call();
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v37.m128i_i64[0])(&v38, &v36, 2);
        v15 = v37.m128i_i64[0];
        v16 = (__m128i *)v5;
        v39 = _mm_load_si128(&v37);
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v15 )
              goto LABEL_63;
            v17 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __m128i *))v39.m128i_i64[1])(&v38, v11, a1);
            v15 = v39.m128i_i64[0];
            if ( v17 >= 0 )
              break;
            ++v11;
          }
          do
          {
            --v16;
            if ( !v15 )
              std::__throw_bad_function_call();
            v18 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __m128i *))v39.m128i_i64[1])(&v38, a1, v16);
            v15 = v39.m128i_i64[0];
          }
          while ( v18 < 0 );
          if ( v11 >= v16 )
            break;
          v19 = v11->m128i_i64[0];
          v20 = v11->m128i_i64[1];
          ++v11;
          v11[-1] = _mm_loadu_si128(v16);
          v16->m128i_i64[0] = v19;
          v16->m128i_i64[1] = v20;
        }
        if ( v39.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v39.m128i_i64[0])(&v38, &v38, 3);
        if ( v37.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v37.m128i_i64[0])(&v36, &v36, 3);
        v21 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
        v39 = 0u;
        v38 = 0;
        if ( v21 )
        {
          v21(&v38, a4, 2);
          v39 = _mm_loadu_si128(a4 + 1);
        }
        sub_527640(v11, v5, --v35, &v38);
        if ( v39.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v39.m128i_i64[0])(&v38, &v38, 3);
        v6 = (char *)v11 - (char *)a1;
        if ( (char *)v11 - (char *)a1 <= 256 )
          return v40 - __readfsqword(0x28u);
        v7 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
        v5 = (__int64 *)v11;
      }
      while ( v35 );
    }
    v37 = 0u;
    v36 = 0;
    if ( v7 )
    {
      v7(&v36, a4, 2);
      v22 = _mm_loadu_si128(a4 + 1);
      v23 = (void (__fastcall *)(__int128 *, __int128 *, __int64))a4[1].m128i_i64[0];
      v39 = 0u;
      v37 = v22;
      v38 = 0;
      if ( v23 )
      {
        v23(&v38, &v36, 2);
        v39 = _mm_load_si128(&v37);
      }
    }
    else
    {
      v39 = 0u;
      v38 = 0;
    }
    sub_5273F0(a1, v5, (unsigned __int64)v5, (__int64)&v38);
    if ( v39.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v39.m128i_i64[0])(&v38, &v38, 3);
    while ( (char *)v5 - (char *)a1 > 16 )
    {
      v5 -= 2;
      v24 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v37.m128i_i64[0];
      v25 = *v5;
      v26 = _mm_loadu_si128(a1);
      v27 = v5[1];
      v39 = 0u;
      *(__m128i *)v5 = v26;
      v38 = 0;
      if ( v24 )
      {
        v24(&v38, &v36, 2);
        v39 = _mm_load_si128(&v37);
      }
      sub_527130((__int64)a1, 0, ((char *)v5 - (char *)a1) >> 4, v25, v27, (__int64)&v38);
      if ( v39.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v39.m128i_i64[0])(&v38, &v38, 3);
    }
    if ( v37.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v37.m128i_i64[0])(&v36, &v36, 3);
  }
  return v40 - __readfsqword(0x28u);
}
