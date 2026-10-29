_QWORD *__fastcall sub_AA9180(_QWORD *a1, __int64 a2)
{
  char *v3; // r13
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r15
  char *v10; // rdx
  __m128i si128; // xmm1
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // esi
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v24; // edx
  unsigned __int64 v25; // rsi
  char *v26; // rax
  char *v27; // r8
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rdi
  char *v32; // [rsp+10h] [rbp-218h]
  __int64 v33; // [rsp+18h] [rbp-210h]
  std::locale *v34[2]; // [rsp+20h] [rbp-208h] BYREF
  char *v35; // [rsp+30h] [rbp-1F8h]
  __m128i v36; // [rsp+38h] [rbp-1F0h] BYREF
  char *v37; // [rsp+48h] [rbp-1E0h]
  pthread_t v38; // [rsp+50h] [rbp-1D8h]
  char **v39; // [rsp+58h] [rbp-1D0h]
  char *v40; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-1C0h]
  _OWORD v42[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v43; // [rsp+90h] [rbp-198h]
  __int128 v44; // [rsp+A0h] [rbp-188h]
  _BYTE v45[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v46; // [rsp+B8h] [rbp-170h]
  void *v47; // [rsp+C0h] [rbp-168h]
  __int64 v48; // [rsp+C8h] [rbp-160h]
  _QWORD v49[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v50[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v51; // [rsp+1C0h] [rbp-68h]
  __int128 v52; // [rsp+1C8h] [rbp-60h]
  __int128 v53; // [rsp+1D8h] [rbp-50h]

  v36.m128i_i64[1] = a2;
  v39 = &v40;
  v36.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v34 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v50);
  v51 = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v52 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v53 = 0;
  v50[0] = (char *)&`vtable for'std::ios + 16;
  v5 = *((_QWORD *)v3 - 3);
  v50[27] = 0;
  v40 = v3;
  *(char **)((char *)&v40 + v5) = v4;
  v41 = 0;
  v32 = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v8 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v42[0] = v6;
  v33 = v7;
  *(_QWORD *)((char *)v42 + v8) = v7;
  std::ios::init();
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v34);
  v34[0] = (std::locale *)v45;
  v12 = *(_QWORD *)(v9 - 24);
  v35 = v10;
  *(char **)((char *)&v40 + v12) = v10;
  v40 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v50[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v42[0] = si128;
  v42[1] = 0;
  v43 = 0;
  v44 = 0;
  std::locale::locale((std::locale *)v45);
  v46 = 24;
  v47 = v49;
  v48 = 0;
  *((_QWORD *)&v42[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  LOBYTE(v49[0]) = 0;
  v37 = (char *)v42 + 8;
  std::ios::init();
  v38 = pthread_self();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v38 )
    std::ostream::_M_insert<unsigned long>();
  else
    std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = v36.m128i_i64[1];
  v14 = *(_DWORD *)(v36.m128i_i64[1] + 7512) + 1;
  v36.m128i_i32[2] = *(_DWORD *)(v36.m128i_i64[1] + 7512);
  *(_DWORD *)(v13 + 7512) = v14;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v15 = v47;
  if ( (_QWORD)v44 )
  {
    v16 = v43;
    if ( !(_QWORD)v43 || (unsigned __int64)v43 < (unsigned __int64)v44 )
      v16 = v44;
    v48 = v16 - *((_QWORD *)&v43 + 1);
    *((_BYTE *)v47 + v16 - *((_QWORD *)&v43 + 1)) = 0;
    v15 = v47;
    v17 = a1 + 2;
    *a1 = a1 + 2;
    if ( v15 != v49 )
      goto LABEL_7;
  }
  else
  {
    v17 = a1 + 2;
    *a1 = a1 + 2;
    if ( v15 != v49 )
    {
LABEL_7:
      v18 = v49[0];
      *a1 = v15;
      v19 = v48;
      a1[2] = v18;
      goto LABEL_8;
    }
  }
  v19 = v48;
  v24 = v48 + 1;
  if ( (unsigned int)(v48 + 1) >= 8 )
  {
    *v17 = v49[0];
    *(_QWORD *)((char *)v17 + v24 - 8) = *(_QWORD *)((char *)&v49[-1] + v24);
    v25 = (unsigned __int64)(v17 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v26 = (char *)v17 - v25;
    v27 = (char *)((char *)v49 - v26);
    v28 = (v24 + (_DWORD)v26) & 0xFFFFFFF8;
    if ( v28 >= 8 )
    {
      v29 = v28 & 0xFFFFFFF8;
      v30 = 0;
      do
      {
        v31 = v30;
        v30 += 8;
        *(_QWORD *)(v25 + v31) = *(_QWORD *)&v27[v31];
      }
      while ( v30 < v29 );
    }
  }
  else if ( (v24 & 4) != 0 )
  {
    *(_DWORD *)v17 = v49[0];
    *(_DWORD *)((char *)v17 + v24 - 4) = *(_DWORD *)((char *)&v48 + v24 + 4);
  }
  else if ( (_DWORD)v48 != -1 )
  {
    *(_BYTE *)v17 = v49[0];
    if ( (v24 & 2) != 0 )
      *(_WORD *)((char *)v17 + v24 - 2) = *(_WORD *)((char *)&v48 + v24 + 6);
  }
LABEL_8:
  a1[1] = v19;
  v47 = v49;
  v48 = 0;
  LOBYTE(v49[0]) = 0;
  std::stringbuf::_M_sync();
  v20 = _mm_loadl_epi64(&v36);
  v40 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v50[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v42[0] = _mm_unpacklo_epi64(v20, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v47 != v49 )
    operator delete(v47, v49[0] + 1LL);
  *((_QWORD *)&v42[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v34[0]);
  *(char **)((char *)&v40 + *(_QWORD *)(v9 - 24)) = v35;
  v21 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v42[0] = v6;
  *(_QWORD *)((char *)v42 + v21) = v33;
  v22 = *((_QWORD *)v3 - 3);
  v40 = v3;
  *(char **)((char *)&v40 + v22) = v32;
  v41 = 0;
  v50[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v50);
  return a1;
}

