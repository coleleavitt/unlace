void __fastcall sub_11EEFF0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  size_t v6; // r9
  char v7; // r15
  char *v8; // rdi
  size_t v9; // r9
  char v10; // r15
  size_t v11; // rax
  __m128i v12; // xmm3
  __int64 v13; // r9
  char v14; // al
  size_t v15; // r9
  size_t v16; // rax
  __m128i v17; // xmm4
  __int64 v18; // r9
  size_t v19; // [rsp+8h] [rbp-240h]
  size_t v20; // [rsp+8h] [rbp-240h]
  size_t v21; // [rsp+8h] [rbp-240h]
  size_t v22; // [rsp+8h] [rbp-240h]
  size_t v23; // [rsp+8h] [rbp-240h]
  size_t v24; // [rsp+18h] [rbp-230h]
  size_t v25; // [rsp+18h] [rbp-230h]
  size_t v26; // [rsp+18h] [rbp-230h]
  size_t v27; // [rsp+18h] [rbp-230h]
  size_t v28; // [rsp+18h] [rbp-230h]
  __m128i si128; // [rsp+20h] [rbp-228h] BYREF
  size_t v30; // [rsp+38h] [rbp-210h]
  char *v31; // [rsp+40h] [rbp-208h] BYREF
  __int16 v32; // [rsp+60h] [rbp-1E8h]
  char *v33; // [rsp+70h] [rbp-1D8h] BYREF
  __int16 v34; // [rsp+90h] [rbp-1B8h]
  const char *v35; // [rsp+A0h] [rbp-1A8h] BYREF
  __int16 v36; // [rsp+C0h] [rbp-188h]
  void *v37; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-170h]
  __int64 v39; // [rsp+E8h] [rbp-160h] BYREF
  void *ptr; // [rsp+170h] [rbp-D8h] BYREF
  __m128i v41; // [rsp+178h] [rbp-D0h]
  _WORD v42[96]; // [rsp+188h] [rbp-C0h] BYREF

  sub_11EDD40((__int64)&v37, a1, a2);
  v42[4] = 257;
  v36 = 259;
  v35 = "c++";
  v33 = "include";
  v34 = 259;
  v32 = 259;
  v31 = "usr";
  sub_228A3B0(&v37, &v31, &v33, &v35, &ptr);
  v5 = *(_DWORD *)(a1 + 48);
  switch ( v5 )
  {
    case 1:
    case 35:
      v27 = j__strlen("v7");
      v22 = j__strlen("arm-apple-darwin10");
      v15 = j__strlen("4.2.1");
      ptr = v42;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v41 = si128;
      if ( v38 )
      {
        v30 = v15;
        sub_9C3DB0(&ptr, (const void **)&v37);
        v15 = v30;
      }
      v10 = sub_11EE640(a1, a2, a3, (__int64)&ptr, (__int64)"4.2.1", v15, "arm-apple-darwin10", v22, "v7", v27);
      if ( ptr != v42 )
        free(ptr);
      v28 = j__strlen("v6");
      v23 = j__strlen("arm-apple-darwin10");
      v16 = j__strlen("4.2.1");
      v17 = _mm_load_si128(&si128);
      v18 = v16;
      ptr = v42;
      v41 = v17;
      if ( v38 )
      {
        si128.m128i_i64[0] = v16;
        sub_9C3DB0(&ptr, (const void **)&v37);
        v18 = si128.m128i_i64[0];
      }
      v14 = sub_11EE640(a1, a2, a3, (__int64)&ptr, (__int64)"4.2.1", v18, "arm-apple-darwin10", v23, "v6", v28);
      goto LABEL_28;
    case 3:
      v24 = j__strlen(&byte_22F0C30);
      v19 = j__strlen("arm64-apple-darwin10");
      v6 = j__strlen("4.2.1");
      ptr = v42;
      v41 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v38 )
      {
        si128.m128i_i64[0] = v6;
        sub_9C3DB0(&ptr, (const void **)&v37);
        v6 = si128.m128i_i64[0];
      }
      v7 = sub_11EE640(
             a1,
             a2,
             a3,
             (__int64)&ptr,
             (__int64)"4.2.1",
             v6,
             "arm64-apple-darwin10",
             v19,
             (char *)&byte_22F0C30,
             v24);
      goto LABEL_5;
    case 37:
    case 38:
      v8 = "x86_64";
      if ( v5 != 38 )
        v8 = (char *)&byte_22F0C30;
      v25 = j__strlen(v8);
      v20 = j__strlen("i686-apple-darwin10");
      v9 = j__strlen("4.2.1");
      ptr = v42;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v41 = si128;
      if ( v38 )
      {
        v30 = v9;
        sub_9C3DB0(&ptr, (const void **)&v37);
        v9 = v30;
      }
      v10 = sub_11EE640(a1, a2, a3, (__int64)&ptr, (__int64)"4.2.1", v9, "i686-apple-darwin10", v20, v8, v25);
      if ( ptr != v42 )
        free(ptr);
      v26 = j__strlen(&byte_22F0C30);
      v21 = j__strlen("i686-apple-darwin8");
      v11 = j__strlen("4.0.0");
      v12 = _mm_load_si128(&si128);
      v13 = v11;
      ptr = v42;
      v41 = v12;
      if ( v38 )
      {
        si128.m128i_i64[0] = v11;
        sub_9C3DB0(&ptr, (const void **)&v37);
        v13 = si128.m128i_i64[0];
      }
      v14 = sub_11EE640(
              a1,
              a2,
              a3,
              (__int64)&ptr,
              (__int64)"4.0.0",
              v13,
              "i686-apple-darwin8",
              v21,
              (char *)&byte_22F0C30,
              v26);
LABEL_28:
      v7 = v14 | v10;
LABEL_5:
      if ( ptr != v42 )
        free(ptr);
      if ( !v7 )
      {
        sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 564);
        sub_AEA040((__int64)&ptr);
      }
      break;
    default:
      break;
  }
  if ( v37 != &v39 )
    free(v37);
}
