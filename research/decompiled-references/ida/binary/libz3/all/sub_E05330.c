void __fastcall sub_E05330(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r15
  __m128i si128; // xmm1
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 (__fastcall *v13)(__int64); // rax
  std::ostream *v14; // rbx
  _BYTE *v15; // r8
  __int64 *p_dest; // rcx
  _BYTE *v17; // rsi
  signed __int64 v18; // r8
  size_t v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64); // rax
  std::ostream *v23; // r14
  void *v24; // rdx
  int v25; // esi
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64); // rax
  std::ostream *v29; // rbx
  __int64 *v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rdi
  void *v33[2]; // [rsp+0h] [rbp-248h] BYREF
  int v34[4]; // [rsp+10h] [rbp-238h] BYREF
  std::locale *v35; // [rsp+20h] [rbp-228h]
  __m128i v36; // [rsp+28h] [rbp-220h] BYREF
  void *v37; // [rsp+38h] [rbp-210h]
  __int64 v38; // [rsp+40h] [rbp-208h]
  int v39; // [rsp+48h] [rbp-200h]
  char v40; // [rsp+4Fh] [rbp-1F9h]
  int v41[2]; // [rsp+50h] [rbp-1F8h]
  int v42; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 *v43; // [rsp+60h] [rbp-1E8h] BYREF
  int v44; // [rsp+68h] [rbp-1E0h]
  int v45; // [rsp+6Ch] [rbp-1DCh]
  __int64 *v46; // [rsp+70h] [rbp-1D8h] BYREF
  size_t v47; // [rsp+78h] [rbp-1D0h]
  __int64 dest; // [rsp+80h] [rbp-1C8h] BYREF
  int v49; // [rsp+88h] [rbp-1C0h]
  int v50[4]; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-1A8h]
  void *src[2]; // [rsp+B0h] [rbp-198h]
  __int128 v53; // [rsp+C0h] [rbp-188h]
  int v54; // [rsp+D0h] [rbp-178h] BYREF
  int v55; // [rsp+D8h] [rbp-170h]
  void *v56; // [rsp+E0h] [rbp-168h] BYREF
  size_t n; // [rsp+E8h] [rbp-160h]
  char v58; // [rsp+F0h] [rbp-158h] BYREF
  int v59; // [rsp+F8h] [rbp-150h]
  char *v60; // [rsp+100h] [rbp-148h] BYREF
  int v61; // [rsp+108h] [rbp-140h]
  void *v62; // [rsp+110h] [rbp-138h]
  __int64 v63; // [rsp+1D8h] [rbp-70h]
  __int16 v64; // [rsp+1E0h] [rbp-68h]
  __int128 v65; // [rsp+1E8h] [rbp-60h]
  __int128 v66; // [rsp+1F8h] [rbp-50h]

  if ( *a2 )
  {
    v2 = 0x7FFFFFFF8LL;
    v4 = a1[36];
    if ( v4 )
      v2 = 8LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
    v5 = *(_QWORD *)(v4 + v2);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)v41 = &qword_1C7F4C8;
    sub_17F9A60(&v42, "model");
    if ( (unsigned __int8)sub_1859630(&qword_1C7F4C8, "compact", &v42, 1) )
      sub_137A410(
        *a2,
        (int)v33[0],
        v33[1],
        *(__int64 *)v34,
        v34[2],
        (int)v35,
        v36.m128i_i32[0],
        v36.m128i_i64[1],
        v37,
        v38,
        v39,
        v41[0],
        v42,
        (int)v43,
        v44,
        (int)v46,
        v47,
        dest,
        v49,
        v50[0],
        v50[2],
        v51,
        SDWORD2(v51),
        (int)src[0],
        (int)src[1],
        v53,
        SDWORD2(v53),
        v54,
        v55,
        (int)v56,
        n,
        v58,
        v59,
        (int)v60,
        v61,
        v62);
    sub_DFD910((__int64)a1, *a2);
    if ( !(unsigned __int8)sub_1859630(*(_QWORD *)v41, "v1", &v42, 0)
      && !(unsigned __int8)sub_1859630(*(_QWORD *)v41, "v2", &v42, 0) )
    {
      v22 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
      if ( v22 == sub_305010 )
        v23 = (std::ostream *)a1[51];
      else
        v23 = (std::ostream *)v22((__int64)a1);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_DF6320(v23);
      v24 = (void *)*a2;
      v25 = (_DWORD)a1 + 104;
      v26 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
      if ( v26 == sub_305010 )
      {
        v27 = a1[51];
      }
      else
      {
        *(_QWORD *)v34 = a1 + 13;
        v33[0] = v24;
        v31 = v26((__int64)a1);
        v25 = (_DWORD)a1 + 104;
        LODWORD(v24) = v33[0];
        LODWORD(v27) = v31;
      }
      sub_134F450(v27, v25, (int)v24, 2);
      v28 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
      if ( v28 == sub_305010 )
        v29 = (std::ostream *)a1[51];
      else
        v29 = (std::ostream *)v28((__int64)a1);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_DF6320(v29);
LABEL_25:
      sub_18572D0(&v42);
      return;
    }
    *(_QWORD *)v34 = v50;
    v36.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
    *(__m128i *)v33 = _mm_unpacklo_epi64(
                        (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                        (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    std::ios_base::ios_base((std::ios_base *)&v60);
    v65 = 0;
    v66 = 0;
    v60 = (char *)&`vtable for'std::ios + 16;
    v64 = 0;
    v63 = 0;
    v6 = `VTT for'std::ostringstream[1];
    v7 = *(_QWORD *)(v6 - 24);
    *(_QWORD *)v50 = v6;
    v8 = `VTT for'std::ostringstream[2];
    *(_QWORD *)((char *)v50 + v7) = v8;
    std::ios::init();
    si128 = _mm_load_si128((const __m128i *)v33);
    v51 = 0;
    *(__m128i *)v50 = si128;
    v60 = (char *)&`vtable for'std::ostringstream + 64;
    v35 = (std::locale *)&v54;
    *(_OWORD *)src = 0;
    v53 = 0;
    std::locale::locale((std::locale *)&v54);
    v55 = 16;
    v58 = 0;
    *(_QWORD *)&v50[2] = (char *)&`vtable for'std::stringbuf + 16;
    v56 = &v58;
    n = 0;
    std::ios::init();
    sub_135DE10(
      v34[0],
      *a2,
      0,
      v10,
      v11,
      v12,
      v33[0],
      (int)v33[1],
      v34[0],
      v34[2],
      (int)v35,
      v36.m128i_i32[0],
      v36.m128i_i32[2],
      (int)v37,
      v38,
      v39,
      v41[0],
      v42);
    v13 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
    if ( v13 == sub_305010 )
      v14 = (std::ostream *)a1[51];
    else
      v14 = (std::ostream *)v13((__int64)a1);
    LOBYTE(v46) = 34;
    if ( *(_QWORD *)((char *)v14 + *(_QWORD *)(*(_QWORD *)v14 - 24LL) + 16) )
    {
      v33[0] = &v46;
      v14 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::ostream::put(v14, 34);
      v33[0] = &v46;
    }
    v15 = (_BYTE *)v53;
    p_dest = &dest;
    v47 = 0;
    v46 = &dest;
    LOBYTE(dest) = 0;
    if ( (_QWORD)v53 )
    {
      v17 = src[1];
      if ( src[0] >= (void *)v53 )
        v15 = src[0];
      if ( !src[0] )
        v15 = (_BYTE *)v53;
      v18 = v15 - (char *)src[1];
      v19 = v18;
      if ( v18 < 0 )
        std::__throw_length_error("basic_string::_M_replace");
      if ( (unsigned __int64)v18 <= 0xF )
      {
        if ( src[1] == &dest )
        {
          std::string::_M_replace_cold();
          p_dest = v46;
          goto LABEL_22;
        }
        if ( !v18 )
        {
LABEL_22:
          v47 = v19;
          *((_BYTE *)p_dest + v19) = 0;
          LOBYTE(v44) = 1;
          v43 = v46;
          v45 = 0;
          sub_180B300(&v43, v14);
          v20 = *(_QWORD *)v14;
          v40 = 34;
          if ( *(_QWORD *)((char *)v14 + *(_QWORD *)(v20 - 24) + 16) )
            v14 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put(v14, 34);
          sub_DF6320(v14);
          *(__m128i *)v34 = _mm_unpacklo_epi64(
                              _mm_loadl_epi64(&v36),
                              (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
          sub_233E40((__int64)v33[0]);
          *(__m128i *)v50 = _mm_load_si128((const __m128i *)v34);
          v60 = (char *)&`vtable for'std::ostringstream + 64;
          sub_233E40((__int64)&v56);
          *(_QWORD *)&v50[2] = (char *)&`vtable for'std::streambuf + 16;
          std::locale::~locale(v35);
          v21 = *(_QWORD *)(v6 - 24);
          *(_QWORD *)v50 = v6;
          *(_QWORD *)((char *)v50 + v21) = v8;
          v60 = (char *)&`vtable for'std::ios + 16;
          std::ios_base::~ios_base((std::ios_base *)&v60);
          goto LABEL_25;
        }
        if ( v18 != 1 )
        {
          p_dest = (__int64 *)memcpy(&dest, src[1], v18);
          goto LABEL_22;
        }
LABEL_46:
        LOBYTE(dest) = *v17;
        goto LABEL_22;
      }
      sub_23A830((_QWORD *)v33[0], 0, 0, (char *)src[1], v18);
    }
    else
    {
      v19 = n;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( n > 0x1D )
        {
          v36.m128i_i64[1] = n;
          v32 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v36.m128i_i64[1] = 30;
          v32 = 31;
        }
        v37 = (void *)operator new(v32);
        sub_233E40((__int64)v33[0]);
        v30 = (__int64 *)v37;
        v17 = v56;
        v46 = (__int64 *)v37;
        dest = v36.m128i_i64[1];
      }
      else
      {
        if ( !n )
          goto LABEL_22;
        v17 = v56;
        v30 = &dest;
        if ( n == 1 )
          goto LABEL_46;
      }
      memcpy(v30, v17, v19);
    }
    p_dest = v46;
    goto LABEL_22;
  }
}

