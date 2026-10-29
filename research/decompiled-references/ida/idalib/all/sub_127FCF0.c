void __fastcall sub_127FCF0(__int64 a1, __int64 a2, const __m128i *a3, void *a4)
{
  bool v6; // zf
  __m128i v7; // xmm0
  size_t v8; // r8
  size_t *v9; // rax
  char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __m128i v15; // xmm2
  __int64 v16; // rcx
  __int64 v17; // [rsp+8h] [rbp-270h]
  const char *v18; // [rsp+10h] [rbp-268h]
  __m128i si128; // [rsp+20h] [rbp-258h] BYREF
  __int64 v20; // [rsp+30h] [rbp-248h]
  size_t *v21; // [rsp+38h] [rbp-240h]
  _QWORD v22[4]; // [rsp+40h] [rbp-238h] BYREF
  __int16 v23; // [rsp+60h] [rbp-218h]
  const char *v24; // [rsp+70h] [rbp-208h] BYREF
  __int64 v25; // [rsp+78h] [rbp-200h]
  __int16 v26; // [rsp+90h] [rbp-1E8h]
  _QWORD v27[4]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int16 v28; // [rsp+C0h] [rbp-1B8h]
  char *v29; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-1A0h]
  __int16 v31; // [rsp+F0h] [rbp-188h]
  void *src; // [rsp+100h] [rbp-178h] BYREF
  size_t n[2]; // [rsp+108h] [rbp-170h] BYREF
  __int64 v34; // [rsp+118h] [rbp-160h] BYREF
  __int16 v35; // [rsp+120h] [rbp-158h]
  void *ptr; // [rsp+1A0h] [rbp-D8h] BYREF
  __m128i v37; // [rsp+1A8h] [rbp-D0h]
  __int64 v38; // [rsp+1B8h] [rbp-C0h] BYREF
  __int16 v39; // [rsp+1C0h] [rbp-B8h]

  sub_121FCF0(a1, a2, a3, (__int64)a4);
  *(_QWORD *)a1 = off_2C3DD68;
  sub_122CEF0(a1 + 2384, (__int64)a3, a4);
  v6 = *(_BYTE *)(a1 + 2384) == 0;
  v20 = a1 + 624;
  if ( v6 )
  {
    v17 = 0;
    v18 = &byte_22F0C30;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 2528);
    v12 = *(const char **)(a1 + 2488);
    v18 = *(const char **)(a1 + 2520);
    src = &v34;
    v13 = *(_QWORD *)(a1 + 2496);
    v17 = v11;
    v29 = "bin";
    v39 = 257;
    v27[0] = "..";
    v24 = v12;
    v25 = v13;
    v28 = 259;
    v26 = 261;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    *(__m128i *)n = si128;
    v31 = 259;
    sub_228A3B0(&src, &v24, v27, &v29, &ptr);
    v39 = 261;
    ptr = src;
    v37.m128i_i64[0] = n[0];
    sub_11C52D0(a2, (__int64)&ptr, a1 + 1152);
    v14 = *(_QWORD *)(a1 + 2464);
    v15 = _mm_load_si128(&si128);
    v24 = v18;
    v31 = 257;
    v25 = v11;
    v16 = *(_QWORD *)(a1 + 2456);
    v28 = 257;
    v22[1] = v14;
    v26 = 261;
    v22[0] = v16;
    ptr = &v38;
    v21 = (size_t *)&v38;
    v37 = v15;
    v23 = 261;
    sub_228A3B0(&ptr, v22, &v24, v27, &v29);
    v31 = 261;
    v29 = (char *)ptr;
    v30 = v37.m128i_i64[0];
    sub_11C52D0(a2, (__int64)&v29, a1 + 624);
    if ( ptr != v21 )
      free(ptr);
    if ( src != &v34 )
      free(src);
  }
  sub_127B060(&src, a1);
  v7 = _mm_load_si128(&si128);
  v8 = n[0];
  v9 = (size_t *)src;
  ptr = &v38;
  v37 = v7;
  if ( n[0] > 0x80 )
  {
    v21 = (size_t *)src;
    si128.m128i_i64[0] = n[0];
    sub_2236E10(&ptr, &v38, n[0], 1);
    v8 = si128.m128i_i64[0];
    v9 = v21;
    v10 = (char *)ptr + v37.m128i_i64[0];
  }
  else
  {
    if ( !n[0] )
      goto LABEL_5;
    v10 = (char *)&v38;
  }
  si128.m128i_i64[0] = v8;
  memcpy(v10, v9, v8);
  v9 = (size_t *)src;
  v8 = v37.m128i_i64[0] + si128.m128i_i64[0];
LABEL_5:
  v37.m128i_i64[0] = v8;
  if ( v9 != &n[1] )
    operator delete(v9);
  v35 = 257;
  v26 = 259;
  v29 = (char *)v18;
  v31 = 261;
  v30 = v17;
  v27[0] = "lib";
  v28 = 259;
  v24 = "msp430-elf";
  sub_228A3B0(&ptr, &v24, v27, &v29, &src);
  v35 = 261;
  src = ptr;
  n[0] = v37.m128i_i64[0];
  sub_11C52D0(a2, (__int64)&src, v20);
  if ( ptr != &v38 )
    free(ptr);
}
