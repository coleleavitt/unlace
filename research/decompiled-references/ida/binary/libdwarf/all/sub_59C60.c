_QWORD *__fastcall sub_59C60(
        __int64 a1,
        const __m128i *a2,
        unsigned int (__fastcall *a3)(__int64, _QWORD),
        int a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 (*v6)(void); // rax
  __m128i *v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // r11
  unsigned __int64 v13; // r12
  _QWORD *v14; // r12
  _QWORD *v15; // r14
  _QWORD *v16; // r13
  __int64 v18; // rax
  size_t v19; // rdi
  unsigned __int64 v20; // r13
  void *v21; // rax
  void *v22; // r14
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // r12
  __int64 *v26; // r14
  __int64 v27; // rdi
  __int64 *v28; // r15
  __int64 v29; // rdi
  void *v30; // r11
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __m128i si128; // xmm0
  _QWORD *v34; // rax
  __m128i v38; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v39; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-98h]
  const __m128i *v42; // [rsp+58h] [rbp-90h]
  int v43; // [rsp+6Ch] [rbp-7Ch] BYREF
  __m128i v44; // [rsp+70h] [rbp-78h] BYREF
  __m128i v45; // [rsp+80h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v6 = (__int64 (*)(void))a2[2].m128i_i64[1];
  if ( !v6 )
    return nullptr;
  v7 = (__m128i *)a2;
  v8 = a1;
  v10 = v6();
  v11 = a2->m128i_i64[0];
  v12 = a2[2].m128i_i64[0];
  v13 = v10;
  if ( !a4 )
  {
    if ( a2[1].m128i_i64[0] < (unsigned __int64)a2[1].m128i_i64[1] )
    {
      v18 = a2->m128i_i64[1];
      v44 = _mm_loadu_si128(a2);
      v19 = qword_A6680[(unsigned int)(v18 + 1)];
      v45 = _mm_loadu_si128(a2 + 1);
      *(__m128i *)ptr = _mm_loadu_si128(a2 + 2);
      if ( v19 )
      {
        v20 = v19 <= 0x1869F ? 90 * v19 / 0x64 : 90 * (v19 / 0x64);
        if ( v20 >= v19 >> 1 )
        {
          v40.m128i_i64[0] = v11;
          v39.m128i_i64[0] = v12;
          v38 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)(unsigned int)(v18 + 1));
          v21 = calloc(v19, 0x18u);
          v12 = v39.m128i_i64[0];
          v11 = v40.m128i_i64[0];
          v22 = v21;
          if ( v21 )
          {
            v23 = _mm_load_si128(&v38);
            v24 = (__m128i)v20;
            if ( v40.m128i_i64[0] )
            {
              v38.m128i_i32[0] = 0;
              v39.m128i_i64[0] = v40.m128i_i64[0];
              v41 = v8;
              v42 = a2;
              v40.m128i_i64[0] = v13;
              v25 = 0;
              v26 = (__int64 *)v12;
LABEL_25:
              v43 = 0;
              if ( !v38.m128i_i32[0] )
              {
                while ( 1 )
                {
                  v27 = *v26;
                  if ( *v26 )
                  {
                    v44 = v23;
                    v45 = v24;
                    ptr[0] = v21;
                    sub_59C60(v27, &v44, a3, 0, &v43, 0);
                    v23 = _mm_load_si128(&v44);
                    v24 = _mm_load_si128(&v45);
                    v21 = ptr[0];
                    if ( !v43 )
                      break;
                  }
                  v28 = (__int64 *)v26[2];
                  if ( v28 )
                  {
                    while ( 1 )
                    {
                      v29 = *v28;
                      v44 = v23;
                      v45 = v24;
                      v43 = 0;
                      ptr[0] = v21;
                      sub_59C60(v29, &v44, a3, 0, &v43, 0);
                      v23 = _mm_load_si128(&v44);
                      v24 = _mm_load_si128(&v45);
                      v21 = ptr[0];
                      if ( !v43 )
                        break;
                      v28 = (__int64 *)v28[2];
                      if ( !v28 )
                        goto LABEL_33;
                    }
                    v38.m128i_i32[0] = 1;
LABEL_33:
                    ++v25;
                    v26 += 3;
                    if ( v39.m128i_i64[0] != v25 )
                      goto LABEL_25;
                    v13 = v40.m128i_i64[0];
                    v22 = ptr[0];
                    v30 = ptr[0];
                    v8 = v41;
                    v7 = (__m128i *)v42;
                    if ( v38.m128i_i32[0] )
                      goto LABEL_47;
                    goto LABEL_35;
                  }
                  ++v25;
                  v26 += 3;
                  if ( v39.m128i_i64[0] == v25 )
                  {
                    v13 = v40.m128i_i64[0];
                    v8 = v41;
                    v22 = v21;
                    v7 = (__m128i *)v42;
                    goto LABEL_51;
                  }
                  v43 = 0;
                }
              }
              v13 = v40.m128i_i64[0];
              v8 = v41;
              v22 = v21;
              v7 = (__m128i *)v42;
LABEL_47:
              free(v22);
              v11 = v7->m128i_i64[0];
              v12 = v7[2].m128i_i64[0];
            }
            else
            {
LABEL_51:
              v30 = v22;
LABEL_35:
              v38.m128i_i64[0] = (__int64)v30;
              v40 = v24;
              v39 = v23;
              sub_59BB0(v7->m128i_i64, nullptr);
              free((void *)v7[2].m128i_i64[0]);
              v31 = _mm_load_si128(&v40);
              v32 = _mm_load_si128(&v39);
              ptr[0] = v22;
              v12 = v38.m128i_i64[0];
              v45 = v31;
              v11 = v32.m128i_i64[0];
              v7[1] = v31;
              si128 = _mm_load_si128((const __m128i *)ptr);
              v44 = v32;
              *v7 = v32;
              v7[2] = si128;
            }
          }
        }
      }
    }
    v14 = (_QWORD *)(v12 + 24 * (v13 % v11));
    if ( !*((_BYTE *)v14 + 8) )
    {
      *a5 = 1;
      ++v7[1].m128i_i64[1];
      *v14 = v8;
      *((_BYTE *)v14 + 8) = 1;
      v14[2] = 0;
      return v14;
    }
    if ( !a3(v8, *v14) )
      return v14;
    v15 = (_QWORD *)v14[2];
    if ( !v15 )
      goto LABEL_37;
    goto LABEL_6;
  }
  v14 = (_QWORD *)(v12 + 24 * (v10 % v11));
  if ( !*((_BYTE *)v14 + 8) )
    return nullptr;
  if ( a3(a1, *v14) )
  {
    v15 = (_QWORD *)v14[2];
    if ( v15 )
    {
LABEL_6:
      v16 = v14;
      while ( 1 )
      {
        if ( !a3(v8, *v15) )
        {
          if ( a4 == 2 )
            *a6 = v16;
          return v15;
        }
        v16 = v15;
        if ( !v15[2] )
          break;
        v15 = (_QWORD *)v15[2];
      }
      if ( a4 )
        return nullptr;
LABEL_37:
      v34 = malloc(0x18u);
      if ( v34 )
      {
        v34[2] = 0;
        *v34 = v8;
        *((_BYTE *)v34 + 8) = 1;
        v34[2] = v14[2];
        v14[2] = v34;
        ++v7[1].m128i_i64[1];
        *a5 = 1;
      }
      return v34;
    }
    return nullptr;
  }
  if ( a4 == 2 )
    *a6 = 0;
  return v14;
}

