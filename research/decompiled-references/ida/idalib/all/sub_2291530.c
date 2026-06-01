__int64 __fastcall sub_2291530(__int64 a1, int a2, _QWORD *a3, posix_spawn_file_actions_t *a4)
{
  const char *v4; // rax
  int v6; // ebp
  __int64 result; // rax
  __m128i *v8; // rax
  __m128i si128; // xmm0
  _QWORD *v10; // rax
  size_t v11; // r14
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rdi
  size_t v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __m128i *v17; // rax
  size_t v18; // rcx
  _OWORD *v19; // rsi
  _BYTE *v20; // rdi
  __int64 v21; // rdx
  _BYTE *v22; // rdi
  size_t v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-C0h] BYREF
  void *src; // [rsp+8h] [rbp-B8h]
  size_t n; // [rsp+10h] [rbp-B0h]
  __int64 v27; // [rsp+18h] [rbp-A8h] BYREF
  void *v28; // [rsp+28h] [rbp-98h] BYREF
  size_t v29; // [rsp+30h] [rbp-90h]
  _QWORD v30[2]; // [rsp+38h] [rbp-88h] BYREF
  void *v31; // [rsp+48h] [rbp-78h] BYREF
  size_t v32; // [rsp+50h] [rbp-70h]
  _QWORD v33[2]; // [rsp+58h] [rbp-68h] BYREF
  void *v34; // [rsp+68h] [rbp-58h]
  size_t v35; // [rsp+70h] [rbp-50h]
  _OWORD v36[4]; // [rsp+78h] [rbp-48h] BYREF

  if ( !a1 )
    return 0;
  v4 = "/dev/null";
  if ( *(_QWORD *)(a1 + 8) )
    v4 = *(const char **)a1;
  v6 = posix_spawn_file_actions_addopen(a4, a2, v4, a2 != 0 ? 0x41 : 0, 0x1B6u);
  result = 0;
  if ( v6 )
  {
    v8 = (__m128i *)operator new(0x28u);
    v27 = 39;
    src = v8;
    *v8 = _mm_load_si128((const __m128i *)&xmmword_23ABD50);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23ABD60);
    v8[2].m128i_i32[0] = 1868850273;
    v8[1] = si128;
    v8[2].m128i_i16[2] = 25968;
    v8[2].m128i_i8[6] = 110;
    n = 39;
    v8[2].m128i_i8[7] = 0;
    if ( !a3 )
    {
LABEL_43:
      operator delete(v8);
      return 1;
    }
    if ( v6 == -1 )
      v6 = *__errno_location();
    sub_2287FA0((__int64)&v31, v6);
    v28 = v30;
    if ( (char *)src + n && !src )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v10 = (_QWORD *)operator new(n + 1);
      v30[0] = n;
      v28 = v10;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v30[0]) = *(_BYTE *)src;
        v10 = v30;
        goto LABEL_13;
      }
      v10 = v30;
      if ( !n )
      {
LABEL_13:
        v29 = n;
        *((_BYTE *)v10 + n) = 0;
        v11 = v29;
        if ( v29 == 0x7FFFFFFFFFFFFFFFLL || v29 == 9223372036854775806LL )
          std::__throw_length_error("basic_string::append");
        if ( v28 == v30 )
          v12 = 15;
        else
          v12 = v30[0];
        if ( v29 + 2 > v12 )
          sub_998B30((__int64)&v28, v29, 0, ": ", 2u);
        else
          *(_WORD *)((char *)v28 + v29) = 8250;
        v29 = v11 + 2;
        *((_BYTE *)v28 + v11 + 2) = 0;
        v13 = v28;
        v14 = v29 + v32;
        if ( v28 == v30 )
          v15 = 15;
        else
          v15 = v30[0];
        if ( v14 <= v15 )
        {
          if ( v32 )
          {
            v22 = (char *)v28 + v29;
            if ( v32 == 1 )
              *v22 = *(_BYTE *)v31;
            else
              memcpy(v22, v31, v32);
            v13 = v28;
          }
        }
        else
        {
          if ( v31 == v33 )
            v16 = 15;
          else
            v16 = v33[0];
          if ( v14 <= v16 )
          {
            v17 = (__m128i *)sub_99BDC0(&v31, 0, 0, v28, v29);
LABEL_26:
            v34 = v36;
            if ( (__m128i *)v17->m128i_i64[0] == &v17[1] )
            {
              v36[0] = _mm_loadu_si128(v17 + 1);
            }
            else
            {
              v34 = (void *)v17->m128i_i64[0];
              *(_QWORD *)&v36[0] = v17[1].m128i_i64[0];
            }
            v18 = v17->m128i_u64[1];
            v17[1].m128i_i8[0] = 0;
            v35 = v18;
            v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
            v19 = v34;
            v17->m128i_i64[1] = 0;
            v20 = (_BYTE *)*a3;
            if ( v19 == v36 )
            {
              v23 = v35;
              if ( v35 )
              {
                if ( v35 == 1 )
                  *v20 = v36[0];
                else
                  memcpy(v20, v19, v35);
                v23 = v35;
                v20 = (_BYTE *)*a3;
              }
              a3[1] = v23;
              v20[v23] = 0;
              v20 = v34;
            }
            else
            {
              if ( v20 == (_BYTE *)(a3 + 2) )
              {
                v24 = *(_QWORD *)&v36[0];
                *a3 = v19;
                *(__m128 *)(a3 + 1) = _mm_loadh_ps((const double *)&v24);
              }
              else
              {
                v24 = *(_QWORD *)&v36[0];
                v21 = a3[2];
                *a3 = v19;
                *(__m128 *)(a3 + 1) = _mm_loadh_ps((const double *)&v24);
                if ( v20 )
                {
                  v34 = v20;
                  *(_QWORD *)&v36[0] = v21;
                  goto LABEL_32;
                }
              }
              v20 = v36;
              v34 = v36;
            }
LABEL_32:
            v35 = 0;
            *v20 = 0;
            if ( v34 != v36 )
              operator delete(v34);
            if ( v28 != v30 )
              operator delete(v28);
            if ( v31 != v33 )
              operator delete(v31);
            v8 = (__m128i *)src;
            if ( src == &v27 )
              return 1;
            goto LABEL_43;
          }
          sub_998B30((__int64)&v28, v29, 0, v31, v32);
          v13 = v28;
        }
        v29 = v14;
        v17 = (__m128i *)&v28;
        v13[v14] = 0;
        goto LABEL_26;
      }
    }
    memcpy(v10, src, n);
    v10 = v28;
    goto LABEL_13;
  }
  return result;
}
