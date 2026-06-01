_QWORD *__fastcall sub_13C2FD0(_QWORD *a1, __int64 *a2, void *a3, size_t a4, char a5)
{
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  size_t v11; // rbp
  size_t v12; // rdx
  int v13; // eax
  size_t v14; // rbp
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  size_t v18; // r13
  void *v19; // rax
  size_t v20; // r13
  void *v21; // r8
  _BYTE *v22; // rax
  __int64 v23; // rax
  size_t v24; // rcx
  char *v25; // rdx
  size_t v26; // rdx
  size_t v27; // rax
  unsigned __int64 v28; // rax
  char v29; // al
  _QWORD *v30; // rdx
  char v31; // al
  __m128i *v32; // rcx
  char v33; // dl
  _QWORD *v34; // rsi
  __int64 v35; // rax
  char v36; // dl
  __m128i v38; // xmm6
  _BYTE *v39; // rsi
  __int64 v40; // rdx
  char *v41; // rdi
  __m128i v42; // xmm2
  __int64 v43; // [rsp+8h] [rbp-340h]
  void *srca; // [rsp+10h] [rbp-338h]
  void *srcb; // [rsp+10h] [rbp-338h]
  void *srcc; // [rsp+10h] [rbp-338h]
  __int64 v48; // [rsp+18h] [rbp-330h]
  __int64 v49; // [rsp+28h] [rbp-320h]
  __int64 v51; // [rsp+48h] [rbp-300h]
  __int64 v52; // [rsp+50h] [rbp-2F8h]
  __int64 v53; // [rsp+58h] [rbp-2F0h]
  void *s2; // [rsp+60h] [rbp-2E8h] BYREF
  size_t n; // [rsp+68h] [rbp-2E0h]
  __m128i v56; // [rsp+70h] [rbp-2D8h] BYREF
  __m128i v57; // [rsp+80h] [rbp-2C8h] BYREF
  __int64 v58; // [rsp+90h] [rbp-2B8h]
  _QWORD *v59; // [rsp+A0h] [rbp-2A8h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-2A0h]
  __int16 v61; // [rsp+C0h] [rbp-288h]
  __m128i v62; // [rsp+D0h] [rbp-278h] BYREF
  __m128i v63; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-258h]
  _QWORD v65[2]; // [rsp+100h] [rbp-248h] BYREF
  __int64 v66; // [rsp+120h] [rbp-228h]
  __m128i v67; // [rsp+130h] [rbp-218h] BYREF
  __m128i v68; // [rsp+140h] [rbp-208h]
  __int64 v69; // [rsp+150h] [rbp-1F8h]
  char v70[32]; // [rsp+160h] [rbp-1E8h] BYREF
  __int16 v71; // [rsp+180h] [rbp-1C8h]
  char v72[32]; // [rsp+190h] [rbp-1B8h] BYREF
  __int16 v73; // [rsp+1B0h] [rbp-198h]
  __int64 v74[4]; // [rsp+1C0h] [rbp-188h] BYREF
  __int16 v75; // [rsp+1E0h] [rbp-168h]
  void *ptr; // [rsp+1F0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+1F8h] [rbp-150h]
  _BYTE v78[320]; // [rsp+208h] [rbp-140h] BYREF

  v6 = a1;
  v7 = *a2;
  s2 = a3;
  v8 = *(_QWORD *)(v7 + 192);
  v48 = v7;
  v9 = v7 + 184;
  n = a4;
  v43 = v9;
  if ( !v8 )
    goto LABEL_19;
  v10 = v9;
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v8 + 40);
      v12 = v11;
      if ( n <= v11 )
        v12 = n;
      if ( v12 )
      {
        v13 = memcmp(*(const void **)(v8 + 32), s2, v12);
        if ( v13 )
          break;
      }
      if ( n == v11 || n <= v11 )
      {
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        goto LABEL_11;
      }
LABEL_3:
      v8 = *(_QWORD *)(v8 + 24);
      if ( !v8 )
        goto LABEL_12;
    }
    if ( v13 < 0 )
      goto LABEL_3;
    v10 = v8;
    v8 = *(_QWORD *)(v8 + 16);
LABEL_11:
    ;
  }
  while ( v8 );
LABEL_12:
  if ( v43 != v10 )
  {
    v14 = *(_QWORD *)(v10 + 40);
    v15 = v14;
    if ( n <= v14 )
      v15 = n;
    if ( !v15 || (v16 = memcmp(s2, *(const void **)(v10 + 32), v15)) == 0 )
    {
      if ( n != v14 && n < v14 )
        goto LABEL_19;
LABEL_52:
      *a1 = a1 + 2;
      sub_13BF350(a1, *(_BYTE **)(v10 + 64), *(_QWORD *)(v10 + 64) + *(_QWORD *)(v10 + 72));
      return v6;
    }
    if ( v16 >= 0 )
      goto LABEL_52;
  }
LABEL_19:
  if ( a5 || (v17 = *(_QWORD *)(v48 + 224), v49 = *(_QWORD *)(v48 + 232), v49 == v17) )
  {
LABEL_48:
    v6[1] = 0;
    *v6 = v6 + 2;
    *((_BYTE *)v6 + 16) = 0;
    return v6;
  }
  while ( 2 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    v19 = *(void **)v17;
    ptr = v78;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    if ( v18 > 0x100 )
    {
      srcc = v19;
      sub_2236E10(&ptr, v78, v18, 1);
      v19 = srcc;
      v41 = (char *)ptr + si128.m128i_i64[0];
LABEL_64:
      memcpy(v41, v19, v18);
      v18 += si128.m128i_i64[0];
      goto LABEL_23;
    }
    if ( v18 )
    {
      v41 = v78;
      goto LABEL_64;
    }
LABEL_23:
    si128.m128i_i64[0] = v18;
    sub_228EC80(&ptr);
    v20 = n;
    v21 = s2;
    if ( !n || (srca = s2, v22 = memchr(s2, 58, n), v21 = srca, !v22) || v22 - (_BYTE *)srca == -1 )
    {
      v75 = 257;
      v73 = 257;
      v71 = 257;
      LOWORD(v69) = 773;
      v67.m128i_i64[0] = (__int64)v21;
      v67.m128i_i64[1] = v20;
      v68.m128i_i64[0] = (__int64)".pcm";
      goto LABEL_43;
    }
    v75 = 257;
    v73 = 257;
    v71 = 257;
    v65[0] = ".pcm";
    LOWORD(v66) = 259;
    v67.m128i_i8[0] = 58;
    v23 = sub_2246AB0(&s2, &v67, 1, 0);
    v24 = 0;
    v25 = nullptr;
    if ( v23 != -1 )
    {
      v26 = n;
      v27 = v23 + 1;
      v24 = 0;
      if ( v27 <= n )
      {
        v26 = v27;
        v24 = n - v27;
      }
      v25 = (char *)s2 + v26;
    }
    v59 = v25;
    v61 = 261;
    v60 = v24;
    v67.m128i_i8[0] = 58;
    v28 = sub_2246AB0(&s2, &v67, 1, 0);
    if ( v28 == -1 )
    {
      v28 = n;
    }
    else if ( n <= v28 )
    {
      v28 = n;
    }
    v56.m128i_i64[1] = v28;
    v57.m128i_i64[0] = (__int64)"-";
    v29 = v61;
    LOWORD(v58) = 773;
    v56.m128i_i64[0] = (__int64)s2;
    if ( !(_BYTE)v61 )
    {
      LOWORD(v64) = 256;
      goto LABEL_59;
    }
    if ( (_BYTE)v61 != 1 )
    {
      if ( HIBYTE(v61) == 1 )
      {
        v30 = v59;
        v51 = v60;
      }
      else
      {
        v30 = &v59;
        v29 = 2;
      }
      BYTE1(v64) = v29;
      v31 = v66;
      v63.m128i_i64[0] = (__int64)v30;
      v62.m128i_i64[0] = (__int64)&v56;
      LOBYTE(v64) = 2;
      v63.m128i_i64[1] = v51;
      if ( (_BYTE)v66 )
      {
        if ( (_BYTE)v66 != 1 )
          goto LABEL_39;
LABEL_54:
        v38 = _mm_load_si128(&v63);
        v67 = _mm_load_si128(&v62);
        v68 = v38;
        v69 = v64;
        goto LABEL_43;
      }
LABEL_59:
      LOWORD(v69) = 256;
      goto LABEL_43;
    }
    v33 = v58;
    v42 = _mm_load_si128(&v57);
    v62 = _mm_load_si128(&v56);
    v63 = v42;
    v64 = v58;
    v31 = v66;
    if ( !(_BYTE)v66 )
      goto LABEL_59;
    if ( (_BYTE)v66 == 1 )
      goto LABEL_54;
    if ( BYTE1(v64) == 1 )
    {
      v52 = v62.m128i_i64[1];
      v32 = (__m128i *)v62.m128i_i64[0];
    }
    else
    {
LABEL_39:
      v32 = &v62;
      v33 = 2;
    }
    if ( BYTE1(v66) == 1 )
    {
      v53 = v65[1];
      v34 = (_QWORD *)v65[0];
    }
    else
    {
      v34 = v65;
      v31 = 2;
    }
    v67.m128i_i64[0] = (__int64)v32;
    v68.m128i_i64[0] = (__int64)v34;
    v67.m128i_i64[1] = v52;
    LOBYTE(v69) = v33;
    v68.m128i_i64[1] = v53;
    BYTE1(v69) = v31;
LABEL_43:
    sub_228A3B0(&ptr, &v67, v70, v72, v74);
    sub_FD9C70((__int64)v74, a2[5], ptr, si128.m128i_u64[0], 0, 1, 1);
    v35 = sub_A05DE0(v74);
    if ( !v36 )
    {
      sub_A04D90(v74);
      goto LABEL_45;
    }
    srcb = (void *)v35;
    sub_A04D90(v74);
    if ( !srcb )
    {
LABEL_45:
      if ( ptr == v78 )
      {
        v17 += 32;
        if ( v49 == v17 )
        {
LABEL_47:
          v6 = a1;
          goto LABEL_48;
        }
      }
      else
      {
        free(ptr);
        v17 += 32;
        if ( v49 == v17 )
          goto LABEL_47;
      }
      continue;
    }
    break;
  }
  v6 = a1;
  v39 = ptr;
  v40 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_13BF290(a1, v39, (__int64)&v39[v40]);
  if ( ptr != v78 )
    free(ptr);
  return v6;
}
