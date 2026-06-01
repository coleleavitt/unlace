void __fastcall sub_1274CD0(_QWORD *a1, __m128i *a2)
{
  __int32 v2; // eax
  signed __int64 v4; // r14
  __int8 *v5; // rsi
  __int64 v6; // rdx
  __int32 v7; // eax
  __m128i v8; // xmm3
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __m128i v11; // xmm4
  __m128i *v12; // rdi
  size_t v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i *v16; // rdi
  __int64 v17; // rax
  const char *v18; // r15
  double *v19; // rbx
  __m128i *v20; // rax
  double v21; // rdx
  __int64 v22; // rax
  double v23; // rax
  double v24[2]; // [rsp+0h] [rbp-120h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-110h]
  _QWORD *v26; // [rsp+18h] [rbp-108h]
  __int64 v27; // [rsp+20h] [rbp-100h]
  void *v28; // [rsp+28h] [rbp-F8h] BYREF
  size_t n; // [rsp+30h] [rbp-F0h]
  __m128i v30; // [rsp+38h] [rbp-E8h] BYREF
  __m128i v31; // [rsp+48h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-C8h]
  void *v33; // [rsp+68h] [rbp-B8h] BYREF
  size_t v34; // [rsp+70h] [rbp-B0h]
  __m128i v35; // [rsp+78h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+88h] [rbp-98h] BYREF
  __int64 v37; // [rsp+98h] [rbp-88h]
  void *ptr; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-70h]
  const char *v40; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-60h]
  const char *v42; // [rsp+C8h] [rbp-58h]
  __int64 v43; // [rsp+D0h] [rbp-50h]
  const char *v44; // [rsp+D8h] [rbp-48h]
  __int64 v45; // [rsp+E0h] [rbp-40h]

  v2 = a2[2].m128i_i32[0];
  if ( ((v2 - 35) & 0xFFFFFFFD) == 0 || v2 == 1 )
  {
    v26 = a1;
    if ( (unsigned __int8)sub_1274B20(a1, (__int64)a2) )
    {
      v9 = (_BYTE *)a2->m128i_i64[0];
      v10 = a2->m128i_i64[0] + a2->m128i_i64[1];
      v28 = &v30;
      sub_1270B70(&v28, v9, v10);
      v11 = _mm_loadu_si128(a2 + 2);
      v32 = a2[3].m128i_i64[0];
      v31 = v11;
      goto LABEL_11;
    }
    v4 = a2->m128i_i64[1];
    v5 = (__int8 *)a2->m128i_i64[0];
    p_ptr = &ptr;
    ptr = &v40;
    v6 = (__int64)&v5[v4];
    v39 = 0x300000000LL;
    v7 = a2[2].m128i_i32[0];
    if ( v7 == 37 )
    {
      v41 = 4;
      v40 = "i386";
      v42 = "i586";
      v44 = "i686";
      v17 = 6;
      v43 = 4;
      v45 = 4;
      LODWORD(v39) = 3;
    }
    else
    {
      if ( v7 != 1 && v7 != 35 )
      {
LABEL_7:
        v28 = &v30;
        sub_1270B70(&v28, v5, v6);
        v8 = _mm_loadu_si128(a2 + 2);
        v32 = a2[3].m128i_i64[0];
        v31 = v8;
LABEL_8:
        if ( ptr != p_ptr + 2 )
          free(ptr);
LABEL_11:
        v12 = (__m128i *)a2->m128i_i64[0];
        v13 = n;
        if ( v28 == &v30 )
        {
          if ( n )
          {
            if ( n == 1 )
              v12->m128i_i8[0] = v30.m128i_i8[0];
            else
              memcpy(v12, v28, n);
            v13 = n;
            v12 = (__m128i *)a2->m128i_i64[0];
          }
          a2->m128i_i64[1] = v13;
          v12->m128i_i8[v13] = 0;
          v12 = (__m128i *)v28;
          goto LABEL_15;
        }
        if ( v12 == &a2[1] )
        {
          v24[0] = *(double *)v30.m128i_i64;
          a2->m128i_i64[0] = (__int64)v28;
          *(__m128 *)((char *)a2 + 8) = _mm_loadh_ps(v24);
        }
        else
        {
          v24[0] = *(double *)v30.m128i_i64;
          v14 = a2[1].m128i_i64[0];
          a2->m128i_i64[0] = (__int64)v28;
          *(__m128 *)((char *)a2 + 8) = _mm_loadh_ps(v24);
          if ( v12 )
          {
            v28 = v12;
            v30.m128i_i64[0] = v14;
            goto LABEL_15;
          }
        }
        v12 = &v30;
        v28 = &v30;
LABEL_15:
        n = 0;
        v12->m128i_i8[0] = 0;
        v15 = v32;
        v16 = (__m128i *)v28;
        a2[2] = _mm_load_si128(&v31);
        a2[3].m128i_i64[0] = v15;
        if ( v16 != &v30 )
          operator delete(v16);
        return;
      }
      v41 = 5;
      LODWORD(v39) = 1;
      v40 = "armv7";
      v17 = 2;
    }
    v18 = v40;
    v27 = (__int64)&p_ptr[v17 + 2];
    *(_QWORD *)&v24[0] = v41;
    v33 = &v35;
    if ( !v5 && v6 )
LABEL_31:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v19 = (double *)(p_ptr + 4);
    while ( (unsigned __int64)v4 <= 0xF )
    {
      if ( v4 == 1 )
      {
        v35.m128i_i8[0] = *v5;
        v20 = (__m128i *)v33;
        goto LABEL_25;
      }
      v20 = &v35;
      if ( v4 )
        goto LABEL_36;
LABEL_25:
      v34 = v4;
      v21 = v24[0];
      v20->m128i_i8[v4] = 0;
      v22 = a2[3].m128i_i64[0];
      v36 = _mm_loadu_si128(a2 + 2);
      v37 = v22;
      sub_22BAF00(&v33, v18, *(_QWORD *)&v21);
      if ( (unsigned __int8)sub_1274B20(v26, (__int64)&v33) )
      {
        v28 = &v30;
        if ( v33 == &v35 )
        {
          v30 = _mm_load_si128(&v35);
        }
        else
        {
          v28 = v33;
          v30.m128i_i64[0] = v35.m128i_i64[0];
        }
        n = v34;
        v31 = _mm_load_si128(&v36);
        v32 = v37;
        goto LABEL_8;
      }
      if ( v33 != &v35 )
        operator delete(v33);
      v5 = (__int8 *)a2->m128i_i64[0];
      v4 = a2->m128i_i64[1];
      v6 = a2->m128i_i64[0] + v4;
      if ( (double *)v27 == v19 )
        goto LABEL_7;
      v23 = v19[1];
      v18 = *(const char **)v19;
      v33 = &v35;
      v19 += 2;
      v24[0] = v23;
      if ( v6 && !v5 )
        goto LABEL_31;
    }
    if ( v4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    *(_QWORD *)&v24[1] = v5;
    v20 = (__m128i *)operator new(v4 + 1);
    v35.m128i_i64[0] = v4;
    v33 = v20;
LABEL_36:
    memcpy(v20, v5, v4);
    v20 = (__m128i *)v33;
    goto LABEL_25;
  }
}
