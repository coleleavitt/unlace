void __fastcall sub_DF3460(int a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __m128i si128; // xmm3
  char *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  _BYTE *v14; // rax
  size_t v15; // rax
  size_t v16; // r15
  _QWORD *v17; // rbx
  __int64 (__fastcall *v18)(__int64); // rax
  std::ios_base *v19; // rdi
  size_t v20; // r15
  void *v21; // rsi
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdi
  _QWORD *v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-240h]
  std::locale *v28[2]; // [rsp+10h] [rbp-238h] BYREF
  __int64 v29; // [rsp+20h] [rbp-228h]
  std::ios_base *v30; // [rsp+28h] [rbp-220h]
  __m128i v31; // [rsp+30h] [rbp-218h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-208h]
  __int64 v33; // [rsp+48h] [rbp-200h]
  size_t v34; // [rsp+50h] [rbp-1F8h]
  void *v35; // [rsp+58h] [rbp-1F0h]
  void *v36; // [rsp+60h] [rbp-1E8h] BYREF
  char v37; // [rsp+68h] [rbp-1E0h]
  int v38; // [rsp+6Ch] [rbp-1DCh]
  void *v39; // [rsp+70h] [rbp-1D8h]
  size_t v40; // [rsp+78h] [rbp-1D0h]
  _QWORD dest[2]; // [rsp+80h] [rbp-1C8h] BYREF
  _OWORD v42[2]; // [rsp+90h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-198h]
  __int128 v44; // [rsp+C0h] [rbp-188h]
  char v45[8]; // [rsp+D0h] [rbp-178h] BYREF
  int v46; // [rsp+D8h] [rbp-170h]
  void *v47; // [rsp+E0h] [rbp-168h]
  size_t n; // [rsp+E8h] [rbp-160h]
  _QWORD v49[2]; // [rsp+F0h] [rbp-158h] BYREF
  _QWORD v50[28]; // [rsp+100h] [rbp-148h] BYREF
  __int16 v51; // [rsp+1E0h] [rbp-68h]
  __int128 v52; // [rsp+1E8h] [rbp-60h]
  __int128 v53; // [rsp+1F8h] [rbp-50h]

  v31.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  *(__m128i *)v28 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( v3 != sub_305010 )
    v3(a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v30 = (std::ios_base *)v50;
  std::ios_base::ios_base((std::ios_base *)v50);
  v52 = 0;
  v53 = 0;
  v50[0] = (char *)&`vtable for'std::ios + 16;
  v51 = 0;
  v50[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v42[0] = v4;
  v27 = v4;
  v29 = v5;
  *(_QWORD *)((char *)v42 + v6) = v5;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v28);
  v42[1] = 0;
  v42[0] = si128;
  v50[0] = (char *)&`vtable for'std::ostringstream + 64;
  v28[0] = (std::locale *)v45;
  *(_OWORD *)src = 0;
  v44 = 0;
  std::locale::locale((std::locale *)v45);
  v8 = (char *)v42 + 8;
  v46 = 16;
  LOBYTE(v49[0]) = 0;
  *((_QWORD *)&v42[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v32 = v49;
  v47 = v49;
  n = 0;
  std::ios::init();
  v9 = *(_QWORD *)(a2 + 592);
  v10 = v9 + 24LL * *(unsigned int *)(a2 + 600);
  if ( v9 != v10 )
  {
    while ( *(_DWORD *)(v9 + 4) != 2 )
    {
      v9 += 24;
      if ( v10 == v9 )
        goto LABEL_18;
    }
    if ( v10 != v9 )
    {
      while ( 1 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v11 = *(_QWORD *)(v9 + 8);
        if ( (v11 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v11 )
            strlen(*(const char **)(v9 + 8));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F8DB0(*(_QWORD *)(v9 + 16), v42);
        v8 = ")";
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = v9 + 24;
        if ( v10 == v9 + 24 )
          break;
        while ( 1 )
        {
          v9 = v12;
          if ( *(_DWORD *)(v12 + 4) == 2 )
            break;
          v12 += 24;
          if ( v10 == v12 )
            goto LABEL_18;
        }
        if ( v10 == v12 )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
LABEL_18:
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v13 == sub_305010 )
    v33 = *(_QWORD *)(a2 + 408);
  else
    v33 = ((__int64 (__fastcall *)(__int64, char *))v13)(a2, v8);
  v14 = (_BYTE *)v44;
  v40 = 0;
  v39 = dest;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v44 )
  {
    v20 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v34 = n;
        v26 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v34 = 30;
        v26 = 31;
      }
      v22 = (_QWORD *)operator new(v26);
      if ( v39 != dest )
        operator delete(v39, dest[0] + 1LL);
      v39 = v22;
      v21 = v47;
      dest[0] = v34;
    }
    else
    {
      if ( !n )
      {
LABEL_48:
        v23 = dest;
LABEL_49:
        v40 = v20;
        *((_BYTE *)v23 + v20) = 0;
        goto LABEL_31;
      }
      v21 = v47;
      v22 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v47;
        goto LABEL_48;
      }
    }
    memcpy(v22, v21, v20);
    v23 = v39;
    goto LABEL_49;
  }
  if ( src[0] >= (void *)v44 )
    v14 = src[0];
  if ( !src[0] )
    v14 = (_BYTE *)v44;
  v15 = v14 - (char *)src[1];
  v16 = v15;
  if ( (v15 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v15 > 0xF )
  {
    if ( v15 > 0x1D )
    {
      v34 = v15;
      v24 = v15 + 1;
      if ( (__int64)(v15 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v34 = 30;
      v24 = 31;
    }
    v35 = src[1];
    v25 = (_QWORD *)operator new(v24);
    v17 = v25;
    if ( v35 )
      memcpy(v25, v35, v16);
    if ( v39 != dest )
      operator delete(v39, dest[0] + 1LL);
    v39 = v17;
    dest[0] = v34;
  }
  else if ( src[1] == dest )
  {
    std::string::_M_replace_cold();
    v17 = v39;
  }
  else
  {
    if ( v15 )
    {
      if ( v15 == 1 )
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      else
        memcpy(dest, src[1], v15);
    }
    v17 = dest;
  }
  v40 = v16;
  *((_BYTE *)v17 + v16) = 0;
LABEL_31:
  v37 = 0;
  v38 = 0;
  v36 = v39;
  sub_180B300(&v36, v33);
  if ( v39 != dest )
    operator delete(v39, dest[0] + 1LL);
  v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v18 != sub_305010 )
    v18(a2);
  v31 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v31), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  std::__ostream_insert<char,std::char_traits<char>>();
  v42[0] = _mm_load_si128(&v31);
  v50[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v47 != v32 )
    operator delete(v47, v49[0] + 1LL);
  *((_QWORD *)&v42[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v28[0]);
  v19 = v30;
  *(_QWORD *)&v42[0] = v27;
  *(_QWORD *)((char *)v42 + *(_QWORD *)(v27 - 24)) = v29;
  v50[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v19);
}

