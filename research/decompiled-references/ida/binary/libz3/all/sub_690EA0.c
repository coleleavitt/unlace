__int64 __fastcall sub_690EA0(__m128 *a1)
{
  __int8 *v2; // rdi
  __int64 v3; // rax
  __int64 *v4; // rbp
  char *v5; // rbp
  char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  char *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  double *v14; // rdi
  size_t v15; // xmm0_8
  __m128 v16; // xmm0
  double v17; // rdx
  __int64 v18; // rcx
  char *v19; // rdx
  std::ios_base *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rsi
  unsigned int v27; // ebx
  __m128i v28; // [rsp+0h] [rbp-248h] BYREF
  std::ios_base *v29; // [rsp+10h] [rbp-238h]
  char *v30; // [rsp+18h] [rbp-230h]
  __int64 v31; // [rsp+20h] [rbp-228h]
  __int64 v32; // [rsp+28h] [rbp-220h]
  std::locale *v33; // [rsp+30h] [rbp-218h]
  __m128i v34; // [rsp+38h] [rbp-210h] BYREF
  __int64 v35; // [rsp+48h] [rbp-200h]
  __int64 v36; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 *v37; // [rsp+58h] [rbp-1F0h]
  double *v38; // [rsp+60h] [rbp-1E8h] BYREF
  size_t n; // [rsp+68h] [rbp-1E0h]
  double src[2]; // [rsp+70h] [rbp-1D8h] BYREF
  char *v41; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v42; // [rsp+88h] [rbp-1C0h]
  _OWORD v43[4]; // [rsp+90h] [rbp-1B8h] BYREF
  char v44[8]; // [rsp+D0h] [rbp-178h] BYREF
  int v45; // [rsp+D8h] [rbp-170h]
  _QWORD v46[2]; // [rsp+E0h] [rbp-168h] BYREF
  char v47; // [rsp+F0h] [rbp-158h] BYREF
  _QWORD v48[28]; // [rsp+100h] [rbp-148h] BYREF
  __int16 v49; // [rsp+1E0h] [rbp-68h]
  __int128 v50; // [rsp+1E8h] [rbp-60h]
  __int128 v51; // [rsp+1F8h] [rbp-50h]

  v2 = &a1[273].m128_i8[8];
  v3 = *((_QWORD *)v2 - 546);
  v37 = nullptr;
  v36 = v3;
  sub_787030(v2, &v36);
  v4 = v37;
  if ( !v37 )
    return 1;
  if ( !*((_DWORD *)v37 - 1) )
  {
    v27 = 1;
    goto LABEL_20;
  }
  a1[272].m128_i8[8] = 1;
  v34.m128i_i64[1] = (__int64)&v41;
  v29 = (std::ios_base *)v48;
  std::ios_base::ios_base((std::ios_base *)v48);
  v49 = 0;
  v5 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v50 = 0;
  v6 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v51 = 0;
  v48[0] = (char *)&`vtable for'std::ios + 16;
  v7 = *((_QWORD *)v5 - 3);
  v48[27] = 0;
  v41 = v5;
  *(char **)((char *)&v41 + v7) = v6;
  v42 = 0;
  v30 = v6;
  std::ios::init();
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v10 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)&v43[0] = v8;
  v31 = v9;
  *(_QWORD *)((char *)v43 + v10) = v9;
  std::ios::init();
  v11 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v12 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
  v32 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  *(char **)((char *)&v41 + v12) = v11;
  v34.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v41 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v48[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v33 = (std::locale *)v44;
  v43[0] = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64),
             (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  memset(&v43[1], 0, 48);
  std::locale::locale((std::locale *)v44);
  v45 = 24;
  v46[1] = 0;
  v47 = 0;
  *((_QWORD *)&v43[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v46[0] = &v47;
  v28.m128i_i64[0] = (__int64)v43 + 8;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = sub_160ED60(v43, &v36);
  std::operator<<<std::char_traits<char>>();
  if ( (unsigned int)sub_180B130(v13) )
  {
    if ( (unsigned __int8)sub_186A530(0.0) )
    {
      sub_186A4C0(0.0);
      v35 = sub_180B150(v13, ")");
      std::stringbuf::str(&v38, v28.m128i_i64[0]);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      sub_233E40((__int64)&v38);
      sub_186A500(&v38, "\n");
    }
    else
    {
      v35 = sub_180B150(v13, ")");
      std::stringbuf::str(&v38, v28.m128i_i64[0]);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      sub_233E40((__int64)&v38);
    }
  }
  std::stringbuf::str(&v38, v28.m128i_i64[0]);
  v14 = (double *)a1[298].m128_u64[1];
  v15 = n;
  v28 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v34), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v14 == (double *)&a1[299].m128_u16[4] )
  {
    if ( v38 != src )
    {
      a1[298].m128_u64[1] = (unsigned __int64)v38;
      a1[299] = _mm_loadh_ps(src);
LABEL_26:
      v38 = src;
      v14 = src;
      goto LABEL_10;
    }
  }
  else if ( v38 != src )
  {
    v16 = _mm_loadh_ps(src);
    v17 = *(double *)&a1[299].m128_u64[1];
    a1[298].m128_u64[1] = (unsigned __int64)v38;
    a1[299] = v16;
    if ( v14 )
    {
      v38 = v14;
      src[0] = v17;
      goto LABEL_10;
    }
    goto LABEL_26;
  }
  if ( n )
  {
    if ( n == 1 )
      *(_BYTE *)v14 = LOBYTE(src[0]);
    else
      memcpy(v14, src, n);
    v15 = n;
    v14 = (double *)a1[298].m128_u64[1];
  }
  a1[299].m128_u64[0] = v15;
  *((_BYTE *)v14 + v15) = 0;
  v14 = v38;
LABEL_10:
  n = 0;
  *(_BYTE *)v14 = 0;
  sub_233E40((__int64)&v38);
  v43[0] = _mm_load_si128(&v28);
  v41 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v48[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  sub_233E40((__int64)v46);
  *((_QWORD *)&v43[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v33);
  v18 = v31;
  v19 = v30;
  v20 = v29;
  *(char **)((char *)&v41 + *(_QWORD *)(v32 - 24)) = v11;
  v21 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)&v43[0] = v8;
  *(_QWORD *)((char *)v43 + v21) = v18;
  v22 = *((_QWORD *)v5 - 3);
  v41 = v5;
  *(char **)((char *)&v41 + v22) = v19;
  v42 = 0;
  v48[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v20);
  v4 = v37;
  if ( !v37 )
    return 0;
  v23 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
  if ( (unsigned __int64)v37 >= v23 )
  {
    v27 = 0;
LABEL_20:
    sub_186B220(v4 - 1);
    return v27;
  }
  do
  {
    while ( 1 )
    {
      v24 = *v4;
      if ( *v4 )
      {
        if ( (*(_DWORD *)(v24 + 8))-- == 1 )
          break;
      }
      if ( (unsigned __int64)++v4 >= v23 )
        goto LABEL_17;
    }
    sub_15D7BC0(v36, v24);
    ++v4;
  }
  while ( (unsigned __int64)v4 < v23 );
LABEL_17:
  v4 = v37;
  v27 = 0;
  if ( v37 )
    goto LABEL_20;
  return v27;
}

