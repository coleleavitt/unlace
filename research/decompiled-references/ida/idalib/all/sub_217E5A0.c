__int64 __fastcall sub_217E5A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  __m128i *v6; // r15
  __m128i *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i *v11; // rcx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbp
  char v17; // dl
  __m128i *v18; // rcx
  _BYTE *v19; // rax
  _BYTE *v20; // rsi
  __m128i v21; // xmm1
  unsigned __int64 v22; // rbp
  char *v23; // rax
  char *v24; // rcx
  size_t v25; // r13
  __m128i v26; // xmm0
  bool v27; // zf
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm5
  __m128i v31; // xmm7
  __m128i v32; // xmm7
  __m128i v33; // [rsp+8h] [rbp-210h] BYREF
  __int64 v34; // [rsp+18h] [rbp-200h] BYREF
  __m128i v35[2]; // [rsp+20h] [rbp-1F8h] BYREF
  __int16 v36; // [rsp+40h] [rbp-1D8h]
  __m128i v37[2]; // [rsp+50h] [rbp-1C8h] BYREF
  __int16 v38; // [rsp+70h] [rbp-1A8h]
  __m128i v39[3]; // [rsp+80h] [rbp-198h] BYREF
  __m128i v40[2]; // [rsp+B0h] [rbp-168h] BYREF
  __int16 v41; // [rsp+D0h] [rbp-148h]
  __m128i v42; // [rsp+E0h] [rbp-138h] BYREF
  __m128i v43; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v44; // [rsp+100h] [rbp-118h]
  __m128i v45; // [rsp+110h] [rbp-108h] BYREF
  __m128i v46; // [rsp+120h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+130h] [rbp-E8h]
  __m128i v48; // [rsp+140h] [rbp-D8h] BYREF
  __m128i v49; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+160h] [rbp-B8h]
  __m128i v51; // [rsp+170h] [rbp-A8h] BYREF
  __m128i v52; // [rsp+180h] [rbp-98h] BYREF
  __int64 v53; // [rsp+190h] [rbp-88h]
  __m128i v54; // [rsp+1A0h] [rbp-78h] BYREF
  void *src[2]; // [rsp+1B0h] [rbp-68h]
  __int64 v56; // [rsp+1C0h] [rbp-58h]
  void *ptr[3]; // [rsp+1C8h] [rbp-50h] BYREF
  char v58; // [rsp+1E0h] [rbp-38h] BYREF

  if ( a3 <= 0x3F )
  {
    v51.m128i_i64[0] = (__int64)")";
    v45.m128i_i64[0] = (__int64)&v34;
    v6 = &v42;
    v40[0].m128i_i64[0] = (__int64)") is smaller than an ELF header (";
    LOWORD(v47) = 267;
    v41 = 259;
    v33.m128i_i64[1] = a3;
    v35[0].m128i_i64[0] = (__int64)&v33.m128i_i64[1];
    v37[0].m128i_i64[0] = (__int64)"invalid buffer: the size (";
    LOWORD(v53) = 259;
    v36 = 267;
    v38 = 259;
    v34 = 64;
    sub_A41580(v39, v37, v35, 259, 267, 259);
    v7 = v39;
    sub_A41580(&v42, v39, v40, v8, v9, v10);
    v12 = v44;
    if ( (_BYTE)v44 && (v17 = v47) != 0 )
    {
      if ( (_BYTE)v44 == 1 )
      {
        v12 = v47;
        v28 = _mm_load_si128(&v45);
        v29 = _mm_load_si128(&v46);
        v50 = v47;
        v48 = v28;
        v49 = v29;
      }
      else
      {
        if ( (_BYTE)v47 != 1 )
        {
          if ( BYTE1(v44) == 1 )
          {
            v5 = v42.m128i_i64[1];
            v6 = (__m128i *)v42.m128i_i64[0];
          }
          else
          {
            v12 = 2;
          }
          if ( BYTE1(v47) == 1 )
          {
            v4 = v45.m128i_i64[1];
            v11 = (__m128i *)v45.m128i_i64[0];
          }
          else
          {
            v11 = &v45;
            v17 = 2;
          }
          BYTE1(v50) = v17;
          v13 = (unsigned __int8)v53;
          v48.m128i_i64[0] = (__int64)v6;
          v48.m128i_i64[1] = v5;
          v49.m128i_i64[0] = (__int64)v11;
          v49.m128i_i64[1] = v4;
          LOBYTE(v50) = v12;
          if ( (_BYTE)v53 )
            goto LABEL_15;
          goto LABEL_4;
        }
        v12 = v44;
        v31 = _mm_load_si128(&v43);
        v48 = _mm_load_si128(&v42);
        v49 = v31;
        v50 = v44;
      }
      v13 = (unsigned __int8)v53;
      if ( (_BYTE)v53 )
      {
        if ( v12 != 1 )
        {
LABEL_15:
          if ( (_BYTE)v13 == 1 )
          {
            v32 = _mm_load_si128(&v49);
            v54 = _mm_load_si128(&v48);
            *(__m128i *)src = v32;
            v56 = v50;
          }
          else
          {
            if ( BYTE1(v50) == 1 )
            {
              v3 = v48.m128i_i64[1];
              v7 = (__m128i *)v48.m128i_i64[0];
            }
            else
            {
              v7 = &v48;
              v12 = 2;
            }
            if ( BYTE1(v53) == 1 )
            {
              v33.m128i_i64[0] = v51.m128i_i64[1];
              v18 = (__m128i *)v51.m128i_i64[0];
            }
            else
            {
              v18 = &v51;
              v13 = 2;
            }
            src[0] = v18;
            v11 = (__m128i *)v33.m128i_i64[0];
            v54.m128i_i64[0] = (__int64)v7;
            v54.m128i_i64[1] = v3;
            src[1] = (void *)v33.m128i_i64[0];
            LOBYTE(v56) = v12;
            BYTE1(v56) = v13;
          }
          goto LABEL_5;
        }
        v30 = _mm_load_si128(&v52);
        v54 = _mm_load_si128(&v51);
        *(__m128i *)src = v30;
        v56 = v53;
LABEL_5:
        v14 = sub_2195B10(&v42, v7, v13, v11);
        v15 = operator new(0x40u);
        sub_2220590(v15, &v54, 3, v14);
        *(_BYTE *)(a1 + 64) |= 1u;
        *(_QWORD *)a1 = v15;
        return a1;
      }
    }
    else
    {
      v13 = 256;
      LOWORD(v50) = 256;
    }
LABEL_4:
    LOWORD(v56) = 256;
    goto LABEL_5;
  }
  sub_216EA50(&v54, a2, a3);
  v19 = src[1];
  v20 = src[0];
  *(_QWORD *)(a1 + 16) = 0;
  v21 = _mm_load_si128(&v54);
  *(_BYTE *)(a1 + 64) &= ~1u;
  *(_QWORD *)(a1 + 24) = 0;
  v22 = v19 - v20;
  *(__m128i *)a1 = v21;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (v19 - v20) >> 6 )
  {
    if ( (unsigned __int64)((v19 - v20) >> 6) > 0x3FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v23 = (char *)operator new(v22);
    v20 = src[0];
    v24 = v23;
    v19 = src[1];
    v25 = (char *)src[1] - (char *)src[0];
  }
  else
  {
    v25 = v19 - v20;
    v24 = nullptr;
  }
  v33.m128i_i64[0] = (__int64)v24;
  v26 = _mm_loadl_epi64(&v33);
  *(_QWORD *)(a1 + 32) = &v24[v22];
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v26, v26);
  if ( v20 != v19 )
    v24 = (char *)memmove(v24, v20, v25);
  v27 = ptr[1] == nullptr;
  *(_QWORD *)(a1 + 24) = &v24[v25];
  *(_QWORD *)(a1 + 40) = a1 + 64;
  *(_OWORD *)(a1 + 48) = 0;
  if ( !v27 )
    sub_9C3DB0((void **)(a1 + 40), (const void **)ptr);
  if ( ptr[0] != &v58 )
    free(ptr[0]);
  if ( src[0] )
    operator delete(src[0]);
  return a1;
}
