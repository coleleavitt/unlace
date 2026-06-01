__int64 __fastcall sub_11C11C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // r13d
  __int64 v9; // rax
  _BYTE *v10; // rdi
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rbx
  size_t v14; // rcx
  const char **v15; // rax
  const char *v16; // rbx
  size_t v17; // rax
  __int64 v18; // rax
  const char **v19; // rax
  char *v20; // rdx
  char *v21; // r15
  const char *v22; // r14
  size_t v23; // rsi
  _BYTE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  size_t v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  _BYTE *v32; // rax
  size_t v33; // rdx
  __int64 v34; // r15
  const char **v35; // rax
  char *v36; // rdx
  char *v37; // r14
  const char **v38; // rax
  size_t v39; // rsi
  const char *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rax
  size_t v43; // [rsp+0h] [rbp-208h]
  void *v44; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v45; // [rsp+18h] [rbp-1F0h]
  _WORD v46[16]; // [rsp+20h] [rbp-1E8h] BYREF
  __m128i v47[2]; // [rsp+40h] [rbp-1C8h] BYREF
  __int16 v48; // [rsp+60h] [rbp-1A8h]
  __m128i v49[2]; // [rsp+70h] [rbp-198h] BYREF
  __int16 v50; // [rsp+90h] [rbp-178h]
  __m128i v51[2]; // [rsp+A0h] [rbp-168h] BYREF
  __int16 v52; // [rsp+C0h] [rbp-148h]
  _QWORD v53[2]; // [rsp+D0h] [rbp-138h] BYREF
  _BYTE *v54; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v55; // [rsp+E8h] [rbp-120h]
  _BYTE v56[28]; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v57; // [rsp+10Ch] [rbp-FCh]
  __m128i v58; // [rsp+118h] [rbp-F0h]
  void *ptr; // [rsp+130h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+138h] [rbp-D0h]
  __int64 v61; // [rsp+148h] [rbp-C0h] BYREF
  __int16 v62; // [rsp+150h] [rbp-B8h]

  v8 = *(_DWORD *)(a1 + 24);
  v53[0] = &off_2B62EF8;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = v56;
  v54 = v56;
  v53[1] = v9;
  v55 = 0x300000000LL;
  if ( v8 )
  {
    v33 = 8LL * v8;
    if ( v8 <= 3uLL || (sub_2237220(&v54, v56, v8, 8), v10 = v54, (v33 = 8LL * *(unsigned int *)(a1 + 24)) != 0) )
      memcpy(v10, *(const void **)(a1 + 16), v33);
    LODWORD(v55) = v8;
  }
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v56[24] = *(_BYTE *)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 60);
  v58 = v11;
  v57 = v12;
  v53[0] = &off_2B62F90;
  v13 = sub_10DCD30(a2, 0x816u);
  if ( !v13 )
    goto LABEL_5;
  v14 = j__strlen("single");
  v15 = *(const char ***)(v13 + 48);
  v16 = *v15;
  if ( *v15 )
  {
    v43 = v14;
    v17 = j__strlen(*v15);
    if ( v17 != v43 )
      goto LABEL_5;
    if ( v17 )
    {
      if ( !memcmp(v16, "single", v17) && *(_DWORD *)(a4 + 8) == 1 )
        goto LABEL_18;
LABEL_5:
      ptr = &v61;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v18 = sub_10DCD30(a2, 0x132u);
      if ( v18 )
      {
        v19 = *(const char ***)(v18 + 48);
        v20 = nullptr;
        v21 = (char *)*v19;
        if ( *v19 )
          v20 = &v21[j__strlen(*v19)];
        si128.m128i_i64[0] = 0;
        sub_A1FE50(&ptr, v21, v20);
      }
      else
      {
        v34 = sub_10DE660(a2, 0xC2Cu, 0xC2Du);
        if ( v34 && sub_10DCD30(a2, 0xF9u) )
        {
          v35 = *(const char ***)(v34 + 48);
          v36 = nullptr;
          v37 = (char *)*v35;
          if ( *v35 )
            v36 = &v37[j__strlen(*v35)];
          si128.m128i_i64[0] = 0;
          sub_A1FE50(&ptr, v37, v36);
          sub_228A5F0(&ptr, 0);
          v38 = *(const char ***)(v34 + 48);
          v39 = 0;
          v48 = 257;
          v52 = 257;
          v40 = *v38;
          v50 = 257;
          if ( v40 )
            v39 = j__strlen(v40);
          v46[8] = 261;
          v44 = (void *)sub_228AAA0(v40, v39, 0);
          v45 = v41;
          sub_228A3B0(&ptr, &v44, v47, v49, v51);
          if ( HIDWORD(v57) == 8 )
          {
            v50 = 257;
            if ( *(_BYTE *)v58.m128i_i64[0] )
            {
              v49[0].m128i_i64[0] = v58.m128i_i64[0];
              LOBYTE(v50) = 3;
            }
            v48 = 259;
            v47[0].m128i_i64[0] = (__int64)"_";
            sub_A41580(v51, v47, v49, (__int64)"_", 257, (__int64)v49);
            sub_2253560(&v44, v51);
            sub_A1FE50(&ptr, v44, (_BYTE *)v44 + v45);
            if ( v44 != v46 )
              operator delete(v44);
          }
          v42 = si128.m128i_i64[0];
          if ( (unsigned __int64)(si128.m128i_i64[0] + 4) > si128.m128i_i64[1] )
          {
            sub_2236E10(&ptr, &v61, si128.m128i_i64[0] + 4, 1);
            v42 = si128.m128i_i64[0];
          }
          *(_DWORD *)((char *)ptr + v42) = 1870095406;
          v52 = 261;
          v29 = si128.m128i_i64[0] + 4;
          si128.m128i_i64[0] += 4;
          v51[0].m128i_i64[0] = (__int64)ptr;
          goto LABEL_13;
        }
      }
      v22 = *(const char **)(a3 + 32);
      v23 = 0;
      if ( v22 )
        v23 = j__strlen(v22);
      v24 = (_BYTE *)sub_228AAA0(v22, v23, 0);
      sub_A1FE50(&ptr, v24, &v24[v25]);
      if ( HIDWORD(v57) == 8 )
      {
        v50 = 257;
        if ( *(_BYTE *)v58.m128i_i64[0] )
        {
          v49[0].m128i_i64[0] = v58.m128i_i64[0];
          LOBYTE(v50) = 3;
        }
        v48 = 259;
        v47[0].m128i_i64[0] = (__int64)"_";
        sub_A41580(v51, v47, v49, 257, v26, v27);
        sub_2253560(&v44, v51);
        sub_A1FE50(&ptr, v44, (_BYTE *)v44 + v45);
        if ( v44 != v46 )
          operator delete(v44);
      }
      v28 = j__strlen(".dwo");
      sub_A1FE50(&ptr, ".dwo", &aDebugLocDwo[v28 + 10]);
      v52 = 261;
      v51[0].m128i_i64[0] = (__int64)ptr;
      v29 = si128.m128i_i64[0];
LABEL_13:
      v51[0].m128i_i64[1] = v29;
      v30 = sub_10DA6C0(a2, (__int64)v51);
      if ( ptr != &v61 )
        free(ptr);
      goto LABEL_15;
    }
  }
  else if ( v14 )
  {
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a4 + 8) != 1 )
    goto LABEL_5;
LABEL_18:
  v32 = *(_BYTE **)a4;
  v62 = 257;
  if ( *v32 )
  {
    ptr = v32;
    LOBYTE(v62) = 3;
  }
  v30 = sub_10DA6C0(a2, (__int64)&ptr);
LABEL_15:
  v53[0] = &off_2B62F90;
  sub_10D1080(v53);
  return v30;
}
