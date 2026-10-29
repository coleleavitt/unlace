__int64 __fastcall Z3_ast_vector_to_string(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __m128i si128; // xmm3
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // rbx
  _BYTE *v12; // rax
  size_t v13; // rax
  size_t v14; // r13
  _QWORD *v15; // rbp
  __int64 v16; // rbx
  __m128i v17; // xmm0
  size_t v19; // r13
  void *v20; // rsi
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rax
  size_t v25; // rbp
  unsigned __int64 v26; // rdi
  std::locale *v27[2]; // [rsp+10h] [rbp-238h] BYREF
  char v28; // [rsp+27h] [rbp-221h]
  __int64 v29; // [rsp+28h] [rbp-220h]
  __m128i v30; // [rsp+30h] [rbp-218h] BYREF
  __int64 v31; // [rsp+40h] [rbp-208h]
  _QWORD *v32; // [rsp+48h] [rbp-200h]
  __int64 v33; // [rsp+50h] [rbp-1F8h]
  void *v34; // [rsp+58h] [rbp-1F0h]
  void *v35; // [rsp+60h] [rbp-1E8h] BYREF
  size_t v36; // [rsp+68h] [rbp-1E0h]
  _QWORD dest[4]; // [rsp+70h] [rbp-1D8h] BYREF
  _OWORD v38[2]; // [rsp+90h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-198h]
  __int128 v40; // [rsp+C0h] [rbp-188h]
  _BYTE v41[8]; // [rsp+D0h] [rbp-178h] BYREF
  int v42; // [rsp+D8h] [rbp-170h]
  void *v43; // [rsp+E0h] [rbp-168h]
  size_t n; // [rsp+E8h] [rbp-160h]
  _QWORD v45[2]; // [rsp+F0h] [rbp-158h] BYREF
  _QWORD v46[28]; // [rsp+100h] [rbp-148h] BYREF
  __int16 v47; // [rsp+1E0h] [rbp-68h]
  __int128 v48; // [rsp+1E8h] [rbp-60h]
  __int128 v49; // [rsp+1F8h] [rbp-50h]

  v30.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v27 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v28 = v3;
  if ( v3 )
    sub_29EA30();
  *(_DWORD *)(a1 + 1520) = 0;
  std::ios_base::ios_base((std::ios_base *)v46);
  v48 = 0;
  v49 = 0;
  v46[0] = (char *)&`vtable for'std::ios + 16;
  v47 = 0;
  v46[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v38[0] = v4;
  v29 = v4;
  v31 = v5;
  *(_QWORD *)((char *)v38 + v6) = v5;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v27);
  v38[1] = 0;
  v38[0] = si128;
  v46[0] = (char *)&`vtable for'std::ostringstream + 64;
  v27[0] = (std::locale *)v41;
  *(_OWORD *)src = 0;
  v40 = 0;
  std::locale::locale((std::locale *)v41);
  v42 = 16;
  LOBYTE(v45[0]) = 0;
  *((_QWORD *)&v38[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v32 = v45;
  v43 = v45;
  n = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = *(_QWORD *)(a2 + 32);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = 8 * v9;
      v11 = 0;
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v35, *(_QWORD *)(*(_QWORD *)(a2 + 32) + v11), *(_QWORD *)(a1 + 232), 2, 0, 0);
        sub_160E8B0(v38, &v35);
        v11 += 8;
        sub_18572D0(dest);
      }
      while ( v10 != v11 );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v12 = (_BYTE *)v40;
  LOBYTE(dest[0]) = 0;
  v35 = dest;
  v36 = 0;
  if ( !(_QWORD)v40 )
  {
    v19 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v25 = n;
        v26 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v25 = 30;
        v26 = 31;
      }
      v21 = (_QWORD *)operator new(v26);
      if ( v35 != dest )
        operator delete(v35, dest[0] + 1LL);
      v35 = v21;
      v20 = v43;
      dest[0] = v25;
    }
    else
    {
      if ( !n )
      {
LABEL_32:
        v22 = dest;
LABEL_33:
        v36 = v19;
        *((_BYTE *)v22 + v19) = 0;
        goto LABEL_18;
      }
      v20 = v43;
      v21 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v43;
        goto LABEL_32;
      }
    }
    memcpy(v21, v20, v19);
    v22 = v35;
    goto LABEL_33;
  }
  if ( src[0] >= (void *)v40 )
    v12 = src[0];
  if ( !src[0] )
    v12 = (_BYTE *)v40;
  v13 = v12 - (char *)src[1];
  v14 = v13;
  if ( (v13 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v13 > 0xF )
  {
    if ( v13 > 0x1D )
    {
      v33 = v13;
      v23 = v13 + 1;
      if ( (__int64)(v13 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v33 = 30;
      v23 = 31;
    }
    v34 = src[1];
    v24 = (_QWORD *)operator new(v23);
    v15 = v24;
    if ( v34 )
      memcpy(v24, v34, v14);
    if ( v35 != dest )
      operator delete(v35, dest[0] + 1LL);
    v35 = v15;
    dest[0] = v33;
  }
  else if ( src[1] == dest )
  {
    std::string::_M_replace_cold();
    v15 = v35;
  }
  else
  {
    if ( v13 )
    {
      if ( v13 == 1 )
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      else
        memcpy(dest, src[1], v13);
    }
    v15 = dest;
  }
  v36 = v14;
  *((_BYTE *)v15 + v14) = 0;
LABEL_18:
  v16 = sub_24ED70((_QWORD *)a1, (__int64)&v35);
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v30), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v35 != dest )
  {
    v30 = v17;
    operator delete(v35, dest[0] + 1LL);
    v17 = _mm_load_si128(&v30);
  }
  v38[0] = v17;
  v46[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v43 != v32 )
    operator delete(v43, v45[0] + 1LL);
  *((_QWORD *)&v38[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v27[0]);
  *(_QWORD *)&v38[0] = v29;
  *(_QWORD *)((char *)v38 + *(_QWORD *)(v29 - 24)) = v31;
  v46[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v46);
  if ( v28 )
    byte_1C7EBA0 = 1;
  return v16;
}

