_QWORD *__fastcall sub_1179DC0(_QWORD *a1, __int64 *a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  size_t v6; // r15
  __int64 v7; // rax
  void *v8; // r8
  char *v9; // rdi
  size_t *v10; // rdi
  size_t v11; // r13
  __int64 *v12; // r15
  _BYTE *v13; // rsi
  size_t v14; // rdx
  char *v16; // rdi
  void *v17; // [rsp+8h] [rbp-260h]
  _QWORD v18[4]; // [rsp+10h] [rbp-258h] BYREF
  __int16 v19; // [rsp+30h] [rbp-238h]
  _BYTE v20[32]; // [rsp+40h] [rbp-228h] BYREF
  __int16 v21; // [rsp+60h] [rbp-208h]
  _BYTE v22[32]; // [rsp+70h] [rbp-1F8h] BYREF
  __int16 v23; // [rsp+90h] [rbp-1D8h]
  void *v24; // [rsp+A0h] [rbp-1C8h] BYREF
  size_t v25; // [rsp+A8h] [rbp-1C0h]
  __int64 v26; // [rsp+B0h] [rbp-1B8h] BYREF
  __int16 v27; // [rsp+C0h] [rbp-1A8h]
  void *ptr; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-190h]
  unsigned __int64 v30; // [rsp+E0h] [rbp-188h]
  void *v31[5]; // [rsp+E8h] [rbp-180h] BYREF
  void *src; // [rsp+110h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+118h] [rbp-150h] BYREF
  _BYTE v34[320]; // [rsp+128h] [rbp-140h] BYREF

  qmemcpy(v31, "/libclang_rt.", 13);
  v30 = _mm_load_si128((const __m128i *)&xmmword_23A8D20).m128i_u64[1];
  ptr = v31;
  v29 = 13;
  if ( !a4 )
  {
    v7 = 13;
    goto LABEL_7;
  }
  src = &n[1];
  sub_1179C40(&src, a4, (__int64)&a4[a5]);
  v6 = n[0];
  v7 = v29;
  v8 = src;
  if ( n[0] + v29 > v30 )
  {
    v17 = src;
    sub_2236E10(&ptr, v31, n[0] + v29, 1);
    v7 = v29;
    v8 = v17;
    v9 = (char *)ptr + v29;
    if ( v6 )
      goto LABEL_4;
  }
  else
  {
    v9 = (char *)ptr + v29;
    if ( n[0] )
    {
LABEL_4:
      memcpy(v9, v8, v6);
      v10 = (size_t *)src;
      v7 = v6 + v29;
      goto LABEL_5;
    }
  }
  v10 = (size_t *)src;
LABEL_5:
  v29 = v7;
  if ( v10 != &n[1] )
  {
    operator delete(v10);
    v7 = v29;
  }
LABEL_7:
  if ( v7 + 2 > v30 )
  {
    sub_2236E10(&ptr, v31, v7 + 2, 1);
    v7 = v29;
  }
  *(_WORD *)((char *)ptr + v7) = 24878;
  v29 += 2;
  sub_112FE60(&v24, a2);
  v11 = v25;
  v12 = (__int64 *)v24;
  src = v34;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v25 > 0x100 )
  {
    sub_2236E10(&src, v34, v25, 1);
    v16 = (char *)src + n[0];
  }
  else
  {
    if ( !v25 )
      goto LABEL_11;
    v16 = v34;
  }
  memcpy(v16, v12, v11);
  v12 = (__int64 *)v24;
  v11 += n[0];
LABEL_11:
  n[0] = v11;
  if ( v12 != &v26 )
    operator delete(v12);
  v27 = 257;
  v18[0] = "avr";
  v23 = 257;
  v21 = 257;
  v19 = 259;
  sub_228A3B0(&src, v18, v20, v22, &v24);
  v18[0] = ptr;
  v27 = 257;
  v23 = 257;
  v18[1] = v29;
  v21 = 257;
  v19 = 261;
  sub_228A3B0(&src, v18, v20, v22, &v24);
  v13 = src;
  v14 = n[0];
  *a1 = a1 + 2;
  sub_1179C40(a1, v13, (__int64)&v13[v14]);
  if ( src != v34 )
    free(src);
  if ( ptr != v31 )
    free(ptr);
  return a1;
}
