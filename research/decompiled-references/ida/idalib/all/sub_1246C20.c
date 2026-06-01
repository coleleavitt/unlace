void __fastcall sub_1246C20(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  bool v6; // r13
  bool v7; // r9
  __int64 v8; // r14
  size_t v9; // r8
  void *v10; // rax
  size_t v11; // r8
  size_t v12; // r12
  size_t v13; // rax
  unsigned __int64 v14; // rcx
  char *v15; // rdi
  const void *v16; // r14
  char *v17; // rax
  char *v18; // rdi
  size_t n; // [rsp+8h] [rbp-250h]
  size_t na; // [rsp+8h] [rbp-250h]
  size_t nb; // [rsp+8h] [rbp-250h]
  size_t srca; // [rsp+10h] [rbp-248h]
  void *srcb; // [rsp+10h] [rbp-248h]
  bool srcc; // [rsp+10h] [rbp-248h]
  void *src; // [rsp+10h] [rbp-248h]
  bool v26; // [rsp+1Fh] [rbp-239h]
  char *v27; // [rsp+20h] [rbp-238h] BYREF
  __int16 v28; // [rsp+40h] [rbp-218h]
  _QWORD v29[4]; // [rsp+50h] [rbp-208h] BYREF
  __int16 v30; // [rsp+70h] [rbp-1E8h]
  __m128i v31; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v32; // [rsp+90h] [rbp-1C8h] BYREF
  __int16 v33; // [rsp+A0h] [rbp-1B8h]
  void *v34; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-1A0h]
  _QWORD v36[2]; // [rsp+C0h] [rbp-198h] BYREF
  __int16 v37; // [rsp+D0h] [rbp-188h]
  void *ptr; // [rsp+E0h] [rbp-178h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-170h]
  _BYTE v40[136]; // [rsp+F8h] [rbp-160h] BYREF
  void *v41; // [rsp+180h] [rbp-D8h] BYREF
  __m128i v42; // [rsp+188h] [rbp-D0h]
  _BYTE dest[8]; // [rsp+198h] [rbp-C0h] BYREF
  __int16 v44; // [rsp+1A0h] [rbp-B8h]

  if ( sub_10DCD30(a2, 0xBEDu) )
    return;
  v5 = *(_DWORD *)(a1 + 60);
  v6 = *(_DWORD *)(a1 + 64) == 49 || (unsigned int)(*(_DWORD *)(a1 + 64) - 18) <= 7;
  if ( v6 || v5 == 39 )
  {
    v6 = v5 == 7;
    v7 = 0;
  }
  else
  {
    v7 = v5 != 7;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 + 256);
  v10 = *(void **)(v8 + 248);
  ptr = v40;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v9 > 0x80 )
  {
    v26 = v7;
    srcb = v10;
    n = v9;
    sub_2236E10(&ptr, v40, v9, 1);
    v9 = n;
    v10 = srcb;
    v7 = v26;
    v18 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v9 )
      goto LABEL_7;
    v18 = v40;
  }
  srcc = v7;
  na = v9;
  memcpy(v18, v10, v9);
  v7 = srcc;
  v9 = si128.m128i_i64[0] + na;
LABEL_7:
  si128.m128i_i64[0] = v9;
  if ( !v7 )
  {
    v37 = 257;
    v33 = 257;
    v29[0] = "include";
    v30 = 259;
    v44 = 257;
    sub_228A3B0(&ptr, v29, &v31, &v34, &v41);
    if ( !sub_10DCD30(a2, 0xBD9u) && (!v6 || sub_10DCD30(a2, 0xBEFu)) )
    {
      v41 = ptr;
      v44 = 261;
      v42.m128i_i64[0] = si128.m128i_i64[0];
      sub_112FA80(a2, a3, (__int64)&v41);
    }
  }
  if ( !sub_10DCD30(a2, 0xBEFu) )
  {
    v11 = *(_QWORD *)(v8 + 496);
    if ( v11 )
    {
      v15 = dest;
      v16 = *(const void **)(v8 + 488);
      v41 = dest;
      v42 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v11 > 0x80 )
      {
        src = (void *)v11;
        sub_2236E10(&v41, dest, v11, 1);
        v11 = (size_t)src;
        v15 = (char *)v41 + v42.m128i_i64[0];
      }
      srca = v11;
      memcpy(v15, v16, v11);
      v42.m128i_i64[0] += srca;
      v37 = 257;
      v17 = "usr/include";
      v33 = 257;
      v30 = 257;
      if ( !v6 )
        v17 = "include";
      v28 = 259;
      v27 = v17;
      sub_228A3B0(&v41, &v27, v29, &v31, &v34);
      v37 = 261;
      v34 = v41;
      v35 = v42.m128i_i64[0];
      sub_112FAC0(a2, a3, (__int64)&v34);
      v37 = 773;
      v34 = v41;
      v35 = v42.m128i_i64[0];
      v36[0] = "/usr/local/include";
      sub_112FA80(a2, a3, (__int64)&v34);
      sub_1216510(a1, a2, a3);
      if ( v41 != dest )
        free(v41);
      if ( !sub_10DCD30(a2, 0xBD9u) && v6 )
      {
        v44 = 261;
        v41 = ptr;
        v42.m128i_i64[0] = si128.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)&v41);
      }
    }
    else
    {
      if ( !sub_10DCD30(a2, 0xBD9u) && v6 )
      {
        v44 = 261;
        v41 = ptr;
        v42.m128i_i64[0] = si128.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)&v41);
      }
      sub_1246300(&v31, a1, (_BYTE **)(v8 + 104), (__int64 *)(v8 + 344));
      v34 = v36;
      sub_1244640(&v34, v31.m128i_i64[0], v31.m128i_i64[0] + v31.m128i_i64[1]);
      v12 = v35;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v35) <= 0xF )
        std::__throw_length_error("basic_string::append");
      v13 = v35 + 16;
      if ( v34 == v36 )
        v14 = 15;
      else
        v14 = v36[0];
      if ( v13 > v14 )
      {
        nb = v35 + 16;
        sub_998B30((__int64)&v34, v35, 0, "/hexagon/include", 0x10u);
        v13 = nb;
      }
      else
      {
        *(__m128i *)((char *)v34 + v35) = _mm_load_si128((const __m128i *)&xmmword_23A9CF0);
      }
      v35 = v13;
      *((_BYTE *)v34 + v12 + 16) = 0;
      v41 = &v34;
      v44 = 260;
      sub_112FAC0(a2, a3, (__int64)&v41);
      if ( v34 != v36 )
        operator delete(v34);
      if ( (__int64 *)v31.m128i_i64[0] != &v32 )
        operator delete((void *)v31.m128i_i64[0]);
    }
  }
  if ( ptr != v40 )
    free(ptr);
}
