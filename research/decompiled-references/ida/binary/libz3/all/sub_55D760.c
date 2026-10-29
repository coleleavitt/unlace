__int64 __fastcall sub_55D760(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdi
  __m128i si128; // xmm1
  const char *v6; // r12
  _BYTE *v7; // rax
  size_t v8; // rax
  size_t v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  size_t v14; // rdx
  void *v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdi
  std::locale *v22[2]; // [rsp+0h] [rbp-228h] BYREF
  __m128i v23; // [rsp+10h] [rbp-218h] BYREF
  _QWORD *v24; // [rsp+20h] [rbp-208h]
  __int64 v25; // [rsp+28h] [rbp-200h]
  size_t v26; // [rsp+30h] [rbp-1F8h]
  size_t n; // [rsp+38h] [rbp-1F0h]
  __int64 v28; // [rsp+48h] [rbp-1E0h] BYREF
  void *v29; // [rsp+50h] [rbp-1D8h] BYREF
  size_t v30; // [rsp+58h] [rbp-1D0h]
  _QWORD dest[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v32[2]; // [rsp+70h] [rbp-1B8h]
  void *src[2]; // [rsp+90h] [rbp-198h]
  __int128 v34; // [rsp+A0h] [rbp-188h]
  _BYTE v35[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v36; // [rsp+B8h] [rbp-170h]
  void *v37; // [rsp+C0h] [rbp-168h]
  size_t v38; // [rsp+C8h] [rbp-160h]
  _QWORD v39[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v40[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v41; // [rsp+1C0h] [rbp-68h]
  __int128 v42; // [rsp+1C8h] [rbp-60h]
  __int128 v43; // [rsp+1D8h] [rbp-50h]

  v23.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v22 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v40);
  v42 = 0;
  v43 = 0;
  v40[0] = (char *)&`vtable for'std::ios + 16;
  v41 = 0;
  v40[27] = 0;
  v2 = `VTT for'std::ostringstream[1];
  v3 = `VTT for'std::ostringstream[2];
  v4 = *(_QWORD *)(v2 - 24);
  *(_QWORD *)&v32[0] = v2;
  *(_QWORD *)((char *)v32 + v4) = v3;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v22);
  v32[1] = 0;
  v32[0] = si128;
  v40[0] = (char *)&`vtable for'std::ostringstream + 64;
  v22[0] = (std::locale *)v35;
  *(_OWORD *)src = 0;
  v34 = 0;
  std::locale::locale((std::locale *)v35);
  v36 = 16;
  v37 = v39;
  *((_QWORD *)&v32[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v38 = 0;
  LOBYTE(v39[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *(const char **)(a1 + 16);
  if ( ((unsigned __int8)v6 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v6 )
      strlen(v6);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v7 = (_BYTE *)v34;
  LOBYTE(dest[0]) = 0;
  v29 = dest;
  v30 = 0;
  if ( !(_QWORD)v34 )
  {
    v14 = v38;
    if ( v38 > 0xF )
    {
      if ( (v38 & 0x8000000000000000LL) != 0LL )
      {
        v24 = &v29;
        std::__throw_length_error("basic_string::_M_create");
      }
      if ( v38 > 0x1D )
      {
        v25 = v38;
        v21 = v38 + 1;
        if ( (__int64)(v38 + 1) < 0 )
        {
          v24 = &v29;
          std::__throw_bad_alloc();
        }
      }
      else
      {
        v25 = 30;
        v21 = 31;
      }
      v26 = v38;
      v24 = &v29;
      v16 = (_QWORD *)operator new(v21);
      v14 = v26;
      if ( v29 != dest )
      {
        v24 = v16;
        operator delete(v29, dest[0] + 1LL);
        v14 = v26;
        v16 = v24;
      }
      v29 = v16;
      v15 = v37;
      dest[0] = v25;
    }
    else
    {
      if ( !v38 )
      {
LABEL_30:
        v17 = dest;
LABEL_31:
        v30 = v14;
        *((_BYTE *)v17 + v14) = 0;
        goto LABEL_16;
      }
      v15 = v37;
      v16 = dest;
      if ( v38 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v37;
        goto LABEL_30;
      }
    }
    v24 = (_QWORD *)v14;
    memcpy(v16, v15, v14);
    v17 = v29;
    v14 = (size_t)v24;
    goto LABEL_31;
  }
  if ( src[0] >= (void *)v34 )
    v7 = src[0];
  if ( !src[0] )
    v7 = (_BYTE *)v34;
  v8 = v7 - (char *)src[1];
  v9 = v8;
  if ( (v8 & 0x8000000000000000LL) != 0LL )
  {
    v24 = &v29;
    std::__throw_length_error("basic_string::_M_replace");
  }
  if ( v8 > 0xF )
  {
    if ( v8 > 0x1D )
    {
      v25 = v8;
      v18 = v8 + 1;
      if ( (__int64)(v8 + 1) < 0 )
      {
        v24 = &v29;
        std::__throw_bad_alloc();
      }
    }
    else
    {
      v25 = 30;
      v18 = 31;
    }
    n = v8;
    v26 = (size_t)src[1];
    v24 = &v29;
    v19 = (_QWORD *)operator new(v18);
    v9 = n;
    v10 = v19;
    if ( v26 )
    {
      v24 = (_QWORD *)n;
      v20 = memcpy(v19, (const void *)v26, n);
      v9 = (size_t)v24;
      v10 = v20;
    }
    if ( v29 != dest )
    {
      v26 = (size_t)v10;
      v24 = (_QWORD *)v9;
      operator delete(v29, dest[0] + 1LL);
      v10 = (_QWORD *)v26;
      v9 = (size_t)v24;
    }
    v29 = v10;
    dest[0] = v25;
  }
  else
  {
    v24 = &v29;
    if ( src[1] == dest )
    {
      v25 = v8;
      std::string::_M_replace_cold();
      v9 = v25;
      v10 = v29;
    }
    else
    {
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)src[1];
        }
        else
        {
          v24 = (_QWORD *)v8;
          memcpy(dest, src[1], v8);
          v9 = (size_t)v24;
        }
      }
      v10 = dest;
    }
  }
  v30 = v9;
  *((_BYTE *)v10 + v9) = 0;
LABEL_16:
  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v23), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_180C5A0(&v28, v29);
  v11 = v28;
  if ( v29 != dest )
    operator delete(v29, dest[0] + 1LL);
  v32[0] = _mm_load_si128(&v23);
  v40[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v37 != v39 )
    operator delete(v37, v39[0] + 1LL);
  *((_QWORD *)&v32[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v22[0]);
  v12 = *(_QWORD *)(v2 - 24);
  *(_QWORD *)&v32[0] = v2;
  *(_QWORD *)((char *)v32 + v12) = v3;
  v40[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v40);
  return v11;
}

