_QWORD *__fastcall sub_126EAE0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rax
  size_t v10; // rbp
  _BYTE *v11; // rsi
  _BYTE *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rax
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  char *v22; // rdi
  _BYTE *v23; // rax
  __int128 *v24; // r9
  void *v27; // [rsp+18h] [rbp-240h]
  _QWORD v28[4]; // [rsp+30h] [rbp-228h] BYREF
  __int16 v29; // [rsp+50h] [rbp-208h]
  _QWORD v30[4]; // [rsp+60h] [rbp-1F8h] BYREF
  __int16 v31; // [rsp+80h] [rbp-1D8h]
  void *src[2]; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-1A8h]
  __int128 v35; // [rsp+C0h] [rbp-198h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-188h]
  __int64 v37; // [rsp+E0h] [rbp-178h]
  _QWORD v38[4]; // [rsp+F0h] [rbp-168h] BYREF
  __int16 v39; // [rsp+110h] [rbp-148h]
  _QWORD v40[4]; // [rsp+120h] [rbp-138h] BYREF
  __int16 v41; // [rsp+140h] [rbp-118h]
  _BYTE v42[32]; // [rsp+150h] [rbp-108h] BYREF
  __int16 v43; // [rsp+170h] [rbp-E8h]
  void *ptr; // [rsp+180h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+188h] [rbp-D0h]
  _BYTE v46[192]; // [rsp+198h] [rbp-C0h] BYREF

  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v9 + 256);
  v11 = v46;
  v12 = *(_BYTE **)(v9 + 248);
  ptr = v46;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v10 > 0x80 )
  {
    sub_2236E10(&ptr, v46, v10, 1);
    v22 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v10 )
      goto LABEL_3;
    v22 = v46;
  }
  v11 = v12;
  memcpy(v22, v12, v10);
  v10 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v10;
  v43 = 257;
  src[1] = nullptr;
  v40[0] = sub_22B75A0(a2 + 16, v11);
  v13 = *(_QWORD *)(a2 + 5016);
  v41 = 261;
  v14 = v13 + 3;
  v40[1] = v15;
  src[0] = &v33;
  LOBYTE(v33) = 0;
  if ( (unsigned __int64)(v13 + 3) > 0xF )
  {
    if ( v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v14 < 0x1E )
      v14 = 30;
    v23 = (_BYTE *)operator new(v14 + 1);
    v24 = (__int128 *)src[0];
    *v23 = *(_BYTE *)src[0];
    if ( v24 == &v33 )
    {
      src[0] = v23;
      *(_QWORD *)&v33 = v14;
    }
    else
    {
      v27 = v23;
      operator delete(v24);
      src[0] = v27;
      *(_QWORD *)&v33 = v14;
      if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)src[1] <= 2 )
        std::__throw_length_error("basic_string::append");
    }
  }
  sub_9EE560(src, "lib", 3u);
  sub_9EE560(src, *(_BYTE **)(a2 + 5008), *(_QWORD *)(a2 + 5016));
  v16 = *(unsigned int *)(a2 + 2184);
  v17 = *(_QWORD *)(a2 + 2176);
  v39 = 260;
  LOWORD(v37) = 260;
  v38[0] = src;
  *(_QWORD *)&v35 = v17 + 192 * v16 - 160;
  sub_228A3B0(&ptr, &v35, v38, v40, v42);
  if ( src[0] != &v33 )
    operator delete(src[0]);
  switch ( a6 )
  {
    case 1:
      v18 = ".a";
      goto LABEL_10;
    case 0:
      v18 = ".o";
      goto LABEL_10;
    case 2:
      v18 = ".so";
LABEL_10:
      v43 = 257;
      v41 = 257;
      v39 = 257;
      goto LABEL_11;
  }
  v18 = nullptr;
  v43 = 257;
  v41 = 257;
  v39 = 257;
LABEL_11:
  v28[0] = "libclang_rt.";
  v28[2] = a4;
  v30[0] = v28;
  v29 = 1283;
  v30[2] = "-";
  v28[3] = a5;
  v31 = 770;
  src[0] = v30;
  *(_QWORD *)&v33 = "mips";
  LOWORD(v34) = 770;
  *(_QWORD *)&v35 = src;
  *(_QWORD *)&v36 = v18;
  LOWORD(v37) = 770;
  sub_228A3B0(&ptr, &v35, v38, v40, v42);
  v19 = ptr;
  v20 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_126E140(a1, v19, (__int64)&v19[v20]);
  if ( ptr != v46 )
    free(ptr);
  return a1;
}
