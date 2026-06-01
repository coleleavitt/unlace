void __fastcall sub_120B760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  const void *v8; // r12
  size_t v9; // rbp
  size_t v10; // rbp
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(__int64, void **); // rdx
  char *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // r8
  size_t v20; // rax
  __int64 v21; // rax
  unsigned __int8 (__fastcall *v22)(__int64, void **); // rdx
  char *v23; // rdi
  char *v24; // rdi
  char *v25; // [rsp+28h] [rbp-340h]
  _QWORD *v26; // [rsp+28h] [rbp-340h]
  _QWORD *v27; // [rsp+28h] [rbp-340h]
  void *v30[2]; // [rsp+50h] [rbp-318h] BYREF
  _BYTE v31[16]; // [rsp+60h] [rbp-308h] BYREF
  void *v32[2]; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+80h] [rbp-2E8h] BYREF
  const char *v34; // [rsp+90h] [rbp-2D8h] BYREF
  __int16 v35; // [rsp+B0h] [rbp-2B8h]
  _QWORD v36[4]; // [rsp+C0h] [rbp-2A8h] BYREF
  __int16 v37; // [rsp+E0h] [rbp-288h]
  _QWORD v38[4]; // [rsp+F0h] [rbp-278h] BYREF
  __int16 v39; // [rsp+110h] [rbp-258h]
  _QWORD v40[4]; // [rsp+120h] [rbp-248h] BYREF
  __int16 v41; // [rsp+140h] [rbp-228h]
  void *src; // [rsp+150h] [rbp-218h] BYREF
  size_t n[2]; // [rsp+158h] [rbp-210h]
  _BYTE dest[136]; // [rsp+168h] [rbp-200h] BYREF
  void *v45; // [rsp+1F0h] [rbp-178h] BYREF
  __m128i v46; // [rsp+1F8h] [rbp-170h]
  __int64 v47; // [rsp+208h] [rbp-160h] BYREF
  __int16 v48; // [rsp+210h] [rbp-158h]
  void *ptr; // [rsp+290h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+298h] [rbp-D0h]
  __int64 v51; // [rsp+2A8h] [rbp-C0h] BYREF
  __int16 v52; // [rsp+2B0h] [rbp-B8h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v30[0] = v31;
  sub_120B5E0(v30, v6, (__int64)&v6[v7]);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 608LL))(a1, a2);
  v8 = *(const void **)(v5 + 104);
  v9 = *(_QWORD *)(v5 + 112);
  src = dest;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v9 > 0x80 )
  {
    sub_2236E10(&src, dest, v9, 1);
    v23 = (char *)src + n[0];
  }
  else
  {
    if ( !v9 )
      goto LABEL_3;
    v23 = dest;
  }
  memcpy(v23, v8, v9);
  v9 += n[0];
LABEL_3:
  v40[0] = "include";
  v48 = 257;
  v38[0] = "..";
  v52 = 257;
  v41 = 259;
  n[0] = v9;
  v39 = 259;
  sub_228A3B0(&src, v38, v40, &v45, &ptr);
  v10 = n[0];
  v11 = (char *)src;
  (*(void (__fastcall **)(void **, __int64, void *, size_t))(*(_QWORD *)a1 + 624LL))(v32, a1, src, n[0]);
  if ( !v32[1] )
    goto LABEL_19;
  v12 = *(unsigned int *)(a1 + 2184);
  if ( (_DWORD)v12 )
  {
    v19 = (_QWORD *)(*(_QWORD *)(a1 + 2176) + 192 * v12 - 192);
    if ( v19[1] || v19[5] || v19[9] )
    {
      ptr = &v51;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v10 > 0x80 )
      {
        v26 = v19;
        sub_2236E10(&ptr, &v51, v10, 1);
        v19 = v26;
        v24 = (char *)ptr + si128.m128i_i64[0];
      }
      else
      {
        v20 = 0;
        if ( !v10 )
        {
LABEL_31:
          si128.m128i_i64[0] = v20;
          v48 = 260;
          v45 = v32;
          v40[0] = "c++";
          v38[0] = v19;
          v41 = 259;
          v39 = 260;
          v37 = 260;
          v36[0] = v30;
          sub_228A3B0(&ptr, v36, v38, v40, &v45);
          v21 = sub_112C5D0(a1);
          v22 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v21 + 96LL);
          v48 = 261;
          v45 = ptr;
          v46.m128i_i64[0] = si128.m128i_i64[0];
          if ( v22(v21, &v45) )
          {
            v48 = 261;
            v45 = ptr;
            v46.m128i_i64[0] = si128.m128i_i64[0];
            sub_112FA80(a2, a3, (__int64)&v45);
          }
          if ( ptr != &v51 )
            free(ptr);
          goto LABEL_5;
        }
        v24 = (char *)&v51;
      }
      v27 = v19;
      memcpy(v24, v11, v10);
      v19 = v27;
      v20 = v10 + si128.m128i_i64[0];
      goto LABEL_31;
    }
  }
LABEL_5:
  v13 = (char *)&v47;
  v25 = &v11[v10];
  v14 = 0;
  v45 = &v47;
  v46 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v10 > 0x80 )
  {
    sub_2236E10(&v45, &v47, v10, 1);
    v14 = v46.m128i_i64[0];
    v13 = (char *)v45 + v46.m128i_i64[0];
  }
  if ( v11 != v25 )
  {
    memcpy(v13, v11, v10);
    v14 = v46.m128i_i64[0];
  }
  v46.m128i_i64[0] = v10 + v14;
  v52 = 257;
  v40[0] = v32;
  v41 = 260;
  v38[0] = "c++";
  v39 = 259;
  v37 = 260;
  v36[0] = v30;
  sub_228A3B0(&v45, v36, v38, v40, &ptr);
  v15 = sub_112C5D0(a1);
  v16 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 96LL);
  v52 = 261;
  ptr = v45;
  si128.m128i_i64[0] = v46.m128i_i64[0];
  if ( v16(v15, &ptr) )
  {
    v52 = 261;
    ptr = v45;
    si128.m128i_i64[0] = v46.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&ptr);
  }
  v17 = (char *)&v51;
  v18 = 0;
  ptr = &v51;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v10 > 0x80 )
  {
    sub_2236E10(&ptr, &v51, v10, 1);
    v18 = si128.m128i_i64[0];
    v17 = (char *)ptr + si128.m128i_i64[0];
  }
  if ( v11 != v25 )
  {
    memcpy(v17, v11, v10);
    v18 = si128.m128i_i64[0];
  }
  v41 = 257;
  v39 = 257;
  v37 = 260;
  v36[0] = v32;
  v35 = 259;
  v34 = "c++";
  si128.m128i_i64[0] = v18 + v10;
  sub_228A3B0(&ptr, &v34, v36, v38, v40);
  v41 = 261;
  v40[0] = ptr;
  v40[1] = si128.m128i_i64[0];
  sub_112FA80(a2, a3, (__int64)v40);
  if ( ptr != &v51 )
    free(ptr);
  if ( v45 != &v47 )
    free(v45);
LABEL_19:
  if ( v32[0] != &v33 )
    operator delete(v32[0]);
  if ( src != dest )
    free(src);
  if ( v30[0] != v31 )
    operator delete(v30[0]);
}
