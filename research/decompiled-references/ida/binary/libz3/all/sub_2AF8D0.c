void __fastcall sub_2AF8D0(__int64 a1, __int64 a2)
{
  char *v3; // rax
  __int64 v4; // r14
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __m128i *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rdx
  unsigned __int64 v14; // rax
  void *v15; // rdx
  __m128i v16; // xmm0
  void *v17; // rax
  __int64 *v18; // r8
  _DWORD *v19; // rdi
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r8
  __m128i v24; // [rsp+0h] [rbp-1F8h] BYREF
  char *s; // [rsp+10h] [rbp-1E8h] BYREF
  char *v26; // [rsp+18h] [rbp-1E0h] BYREF
  int v27[2]; // [rsp+20h] [rbp-1D8h]
  int v28; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 *v29; // [rsp+30h] [rbp-1C8h] BYREF
  void *v30; // [rsp+38h] [rbp-1C0h]
  __int64 v31; // [rsp+40h] [rbp-1B8h] BYREF
  int v32; // [rsp+48h] [rbp-1B0h]
  void *v33[2]; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-198h] BYREF
  int v35; // [rsp+68h] [rbp-190h]
  unsigned __int64 v36; // [rsp+70h] [rbp-188h]
  __int64 v37; // [rsp+78h] [rbp-180h]
  unsigned __int64 v38; // [rsp+80h] [rbp-178h]
  int v39; // [rsp+88h] [rbp-170h]
  int v40[4]; // [rsp+90h] [rbp-168h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp-158h] BYREF
  void *v42; // [rsp+A8h] [rbp-150h]
  _QWORD v43[2]; // [rsp+B0h] [rbp-148h] BYREF
  char *v44; // [rsp+C0h] [rbp-138h] BYREF

  if ( !(_BYTE)byte_1C7EB90 && __cxa_guard_acquire(&byte_1C7EB90) )
  {
    qword_1C7EB98 = pthread_self();
    __cxa_guard_release(&byte_1C7EB90);
  }
  *(_QWORD *)v27 = a2 + 40;
  sub_17F9A60(&v28, "solver");
  sub_180C5A0(v33, "");
  v3 = (char *)sub_185A820(a2 + 40, "smtlib2_log", &v28, v33);
  s = v3;
  if ( v3 && ((unsigned __int8)v3 & 7) != 1 && *v3 && !*(_QWORD *)(a2 + 64) )
  {
    if ( !byte_1C7EB88 && qword_1C7EB98 == pthread_self() )
      goto LABEL_11;
    byte_1C7EB88 = 1;
    std::ostringstream::basic_ostringstream(v33);
    if ( ((unsigned __int8)s & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( s )
        strlen(s);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    LOBYTE(v29) = 45;
    if ( *(__int64 *)((char *)&v34 + *((_QWORD *)v33[0] - 3)) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put((std::ostream *)v33, 45);
    if ( pthread_self() )
      std::ostream::_M_insert<unsigned long>();
    else
      std::__ostream_insert<char,std::char_traits<char>>();
    v13 = v41;
    if ( v38 )
    {
      v14 = v36;
      if ( !v36 || v36 < v38 )
        v14 = v38;
      v42 = (void *)(v14 - v37);
      *((_BYTE *)v41 + v14 - v37) = 0;
      v13 = v41;
      v29 = &v31;
      if ( v41 != v43 )
        goto LABEL_31;
    }
    else
    {
      v29 = &v31;
      if ( v41 != v43 )
      {
LABEL_31:
        v29 = v13;
        v15 = v42;
        v31 = v43[0];
LABEL_32:
        v30 = v15;
        v41 = v43;
        v42 = nullptr;
        LOBYTE(v43[0]) = 0;
        std::stringbuf::_M_sync();
        sub_180C5A0(&v26, v29);
        s = v26;
        v24 = _mm_unpacklo_epi64(
                (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
        sub_233E40((__int64)&v29);
        v16 = _mm_load_si128(&v24);
        v44 = (char *)&`vtable for'std::ostringstream + 64;
        *(__m128i *)v33 = v16;
        sub_233E40((__int64)&v41);
        v33[1] = (char *)&`vtable for'std::streambuf + 16;
        std::locale::~locale((std::locale *)v40);
        v17 = (void *)`VTT for'std::ostringstream[2];
        v33[0] = (void *)`VTT for'std::ostringstream[1];
        *(void **)((char *)v33 + *((_QWORD *)v33[0] - 3)) = v17;
        v44 = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base((std::ios_base *)&v44);
LABEL_11:
        v4 = sub_186B270(0x4D8u);
        sub_180CE20(
          (int)v33,
          (int)&s,
          v5,
          v6,
          v7,
          v8,
          v24.m128i_i32[0],
          (void *)v24.m128i_i64[1],
          (int)s,
          (__int64)v26,
          v27[0],
          v28,
          (int)v29,
          (int)v30,
          v31,
          v32,
          (int)v33[0],
          (int)v33[1],
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40[0],
          v40[2],
          (int)v41,
          v42,
          v43[0],
          v43[1]);
        sub_2AF540(v4, *(_QWORD *)(a1 + 232), (__int64 *)v33);
        v9 = *(__m128i **)(a2 + 64);
        if ( (__m128i *)v4 != v9 )
        {
          if ( v9 )
          {
            v10 = v9[77].m128i_i64[0];
            if ( v10 )
              sub_186B220((void *)(v10 - 8));
            sub_2334C0(v9[76].m128i_i64);
            v9[59].m128i_i64[1] = (__int64)&`vtable for'std::ofstream + 64;
            v9[44] = _mm_unpacklo_epi64(
                       (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
                       (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
            std::filebuf::close();
            std::__basic_file<char>::~__basic_file();
            v9[44].m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
            std::locale::~locale((std::locale *)&v9[48]);
            v11 = `VTT for'std::ofstream[1];
            v12 = `VTT for'std::ofstream[2];
            v9[44].m128i_i64[0] = v11;
            *(__int64 *)((char *)v9[44].m128i_i64 + *(_QWORD *)(v11 - 24)) = v12;
            v9[59].m128i_i64[1] = (__int64)&`vtable for'std::ios + 16;
            std::ios_base::~ios_base((std::ios_base *)&v9[59].m128i_u64[1]);
            sub_2B2E00(v9);
            sub_186B220(v9);
          }
          *(_QWORD *)(a2 + 64) = v4;
        }
        if ( v33[0] != &v34 )
          operator delete(v33[0], v34 + 1);
        goto LABEL_6;
      }
    }
    v15 = v42;
    v18 = &v31;
    v19 = v43;
    v20 = (_DWORD)v42 + 1;
    if ( (unsigned int)((_DWORD)v42 + 1) >= 8 )
    {
      LODWORD(v22) = 0;
      do
      {
        v23 = (unsigned int)v22;
        v22 = (unsigned int)(v22 + 8);
        *(__int64 *)((char *)&v31 + v23) = *(_QWORD *)((char *)v43 + v23);
      }
      while ( (unsigned int)v22 < (v20 & 0xFFFFFFF8) );
      v18 = (__int64 *)((char *)&v31 + v22);
      v19 = (_DWORD *)((char *)v43 + v22);
    }
    v21 = 0;
    if ( (v20 & 4) != 0 )
    {
      *(_DWORD *)v18 = *v19;
      v21 = 4;
    }
    if ( (v20 & 2) != 0 )
    {
      *(_WORD *)((char *)v18 + v21) = *(_WORD *)((char *)v19 + v21);
      v21 += 2;
    }
    if ( (v20 & 1) != 0 )
      *((_BYTE *)v18 + v21) = *((_BYTE *)v19 + v21);
    goto LABEL_32;
  }
LABEL_6:
  sub_18572D0(&v28);
}

