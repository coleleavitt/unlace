__int64 __fastcall sub_10C0CE0(__int64 *a1, __int64 a2)
{
  char *v3; // rdi
  size_t v4; // rax
  unsigned __int64 v5; // r15
  size_t v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebx
  _BYTE *v13; // rax
  __int64 v14; // rdx
  void *v15; // [rsp+8h] [rbp-250h]
  _QWORD v16[4]; // [rsp+20h] [rbp-238h] BYREF
  __int16 v17; // [rsp+40h] [rbp-218h]
  _QWORD v18[4]; // [rsp+50h] [rbp-208h] BYREF
  __int16 v19; // [rsp+70h] [rbp-1E8h]
  _BYTE v20[32]; // [rsp+80h] [rbp-1D8h] BYREF
  __int16 v21; // [rsp+A0h] [rbp-1B8h]
  char *v22; // [rsp+B0h] [rbp-1A8h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp-1A0h]
  __int16 v24; // [rsp+D0h] [rbp-188h]
  void *ptr; // [rsp+E0h] [rbp-178h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-170h]
  _BYTE v27[136]; // [rsp+F8h] [rbp-160h] BYREF
  void *v28; // [rsp+180h] [rbp-D8h] BYREF
  __m128i v29; // [rsp+188h] [rbp-D0h]
  __int64 v30; // [rsp+198h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+1A0h] [rbp-B8h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  ptr = v27;
  v3 = getenv("CLANG_CONFIG_PATH");
  v28 = v3;
  v4 = 0;
  if ( v3 )
    v4 = j__strlen(v3);
  v29.m128i_i64[0] = v4;
  v5 = 0;
  v6 = j__strlen(asc_22BE270);
  v7 = sub_2223270(&v28, asc_22BE270, v6, 0);
  v8 = v29.m128i_i64[0];
  if ( v7 < v29.m128i_i64[0] )
  {
    v5 = v29.m128i_i64[0] - v7;
    v8 = v7;
  }
  v23 = v5;
  v22 = (char *)v28 + v8;
  v9 = sub_22233F0(&v22, asc_22BE270, v6, -1) + 1;
  if ( v9 > v23 )
    v9 = v23;
  v10 = v23 - v5 + v9;
  if ( v10 > v23 )
    v10 = v23;
  if ( v10 )
  {
    v24 = 257;
    v19 = 261;
    v21 = 257;
    v18[0] = v22;
    v15 = v22;
    v31 = 257;
    v18[1] = v10;
    sub_2266670(&ptr, v18, v20, &v22, &v28);
    v31 = 261;
    v28 = v15;
    v29.m128i_i64[0] = v10;
    if ( !(unsigned int)sub_22674F0(&v28, &v22) && (_BYTE)v22 )
    {
      v31 = 257;
      v24 = 257;
      v18[0] = "/clang.cfg";
      v19 = 259;
      v21 = 257;
      sub_2266670(&ptr, v18, v20, &v22, &v28);
    }
    v31 = 261;
    v28 = ptr;
    v29.m128i_i64[0] = si128.m128i_i64[0];
    if ( !(unsigned int)sub_2267570(&v28, &v22) && (_BYTE)v22 )
    {
      v11 = sub_10C03A0(a1, ptr, (void *)si128.m128i_i64[0], a2);
    }
    else
    {
      v11 = 1;
      sub_FA3370((__int64)&v28, *a1, 0, 341);
      sub_AC84E0((unsigned __int8 **)&v28, ptr, si128.m128i_i64[0]);
      sub_AC6300((__int64)&v28);
    }
  }
  else
  {
    v13 = (_BYTE *)sub_2266770(a1[13], a1[14], 0);
    v28 = &v30;
    v29 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    sub_9FC110(&v28, v13, &v13[v14]);
    v24 = 257;
    v21 = 257;
    v19 = 257;
    v16[0] = v28;
    v17 = 773;
    v16[1] = v29.m128i_i64[0];
    v16[2] = "/etc/clang.cfg";
    sub_2266670(&ptr, v16, v18, v20, &v22);
    v24 = 261;
    v11 = 0;
    v22 = (char *)ptr;
    v23 = si128.m128i_i64[0];
    if ( !(unsigned int)sub_2267570(&v22, v20) )
    {
      v11 = v20[0];
      if ( v20[0] )
        v11 = sub_10C03A0(a1, ptr, (void *)si128.m128i_i64[0], a2);
    }
    if ( v28 != &v30 )
      free(v28);
  }
  if ( ptr != v27 )
    free(ptr);
  return v11;
}

