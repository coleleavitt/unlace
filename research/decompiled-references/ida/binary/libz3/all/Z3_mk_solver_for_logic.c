__int64 __fastcall Z3_mk_solver_for_logic(__int64 a1, const char *a2)
{
  char v3; // r12
  __int64 v4; // r15
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __m128i si128; // xmm0
  void *v9; // rdx
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rdi
  _DWORD *v18; // rcx
  int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rsi
  std::locale *v23[2]; // [rsp+10h] [rbp-208h] BYREF
  __m128i v24; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-1E8h]
  void **v26; // [rsp+38h] [rbp-1E0h]
  void *v27[2]; // [rsp+40h] [rbp-1D8h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-1C8h] BYREF
  int v29[4]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+70h] [rbp-1A8h]
  __int128 v31; // [rsp+80h] [rbp-198h]
  __int128 v32; // [rsp+90h] [rbp-188h]
  char v33[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v34; // [rsp+A8h] [rbp-170h]
  void *v35; // [rsp+B0h] [rbp-168h]
  void *v36; // [rsp+B8h] [rbp-160h]
  _QWORD v37[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v38[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v39; // [rsp+1B0h] [rbp-68h]
  __int128 v40; // [rsp+1B8h] [rbp-60h]
  __int128 v41; // [rsp+1C8h] [rbp-50h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29D5A0();
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)v29 = a2;
  if ( !(unsigned __int8)sub_E3B030((int)v29) )
  {
    v24 = _mm_unpacklo_epi64(
            (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
            (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    *(__m128i *)v23 = _mm_unpacklo_epi64(
                        (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                        (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    std::ios_base::ios_base((std::ios_base *)v38);
    v40 = 0;
    v41 = 0;
    v38[0] = (char *)&`vtable for'std::ios + 16;
    v39 = 0;
    v38[27] = 0;
    v4 = `VTT for'std::ostringstream[1];
    v5 = *(_QWORD *)(v4 - 24);
    *(_QWORD *)v29 = v4;
    v6 = (_QWORD *)((char *)v29 + v5);
    v7 = `VTT for'std::ostringstream[2];
    *v6 = v7;
    v25 = v7;
    std::ios::init();
    si128 = _mm_load_si128((const __m128i *)v23);
    v23[0] = (std::locale *)v33;
    *(__m128i *)v29 = si128;
    v38[0] = (char *)&`vtable for'std::ostringstream + 64;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    std::locale::locale((std::locale *)v33);
    v34 = 16;
    v35 = v37;
    *(_QWORD *)&v29[2] = (char *)&`vtable for'std::stringbuf + 16;
    v36 = nullptr;
    LOBYTE(v37[0]) = 0;
    v26 = (void **)&v29[2];
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( ((unsigned __int8)a2 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( a2 )
        strlen(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v9 = v35;
    if ( (_QWORD)v32 )
    {
      v10 = v31;
      if ( !(_QWORD)v31 || (unsigned __int64)v31 < (unsigned __int64)v32 )
        v10 = v32;
      v36 = (void *)(v10 - *((_QWORD *)&v31 + 1));
      *((_BYTE *)v35 + v10 - *((_QWORD *)&v31 + 1)) = 0;
      v9 = v35;
      v27[0] = v28;
      if ( v35 != v37 )
        goto LABEL_12;
    }
    else
    {
      v27[0] = v28;
      if ( v35 != v37 )
      {
LABEL_12:
        v27[0] = v9;
        v28[0] = v37[0];
        v11 = v36;
LABEL_13:
        v27[1] = v11;
        v35 = v37;
        v36 = nullptr;
        LOBYTE(v37[0]) = 0;
        std::stringbuf::_M_sync();
        v26 = v27;
        sub_24EC20(a1, 3u, (__int64)v27);
        if ( v27[0] != v28 )
          operator delete(v27[0], v28[0] + 1LL);
        if ( v3 )
          sub_2BB620(0);
        *(__m128i *)v29 = _mm_load_si128(&v24);
        v38[0] = (char *)&`vtable for'std::ostringstream + 64;
        if ( v35 != v37 )
          operator delete(v35, v37[0] + 1LL);
        *(_QWORD *)&v29[2] = (char *)&`vtable for'std::streambuf + 16;
        std::locale::~locale(v23[0]);
        v12 = *(_QWORD *)(v4 - 24);
        *(_QWORD *)v29 = v4;
        *(_QWORD *)((char *)v29 + v12) = v25;
        v38[0] = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base((std::ios_base *)v38);
        if ( !v3 )
          return 0;
        v13 = 0;
        goto LABEL_21;
      }
    }
    v11 = v36;
    v17 = v28;
    v18 = v37;
    v19 = (_DWORD)v36 + 1;
    if ( (unsigned int)((_DWORD)v36 + 1) >= 8 )
    {
      LODWORD(v21) = 0;
      do
      {
        v22 = (unsigned int)v21;
        v21 = (unsigned int)(v21 + 8);
        *(_QWORD *)((char *)v28 + v22) = *(_QWORD *)((char *)v37 + v22);
      }
      while ( (unsigned int)v21 < (v19 & 0xFFFFFFF8) );
      v17 = (_DWORD *)((char *)v28 + v21);
      v18 = (_DWORD *)((char *)v37 + v21);
    }
    v20 = 0;
    if ( (v19 & 4) != 0 )
    {
      *v17 = *v18;
      v20 = 4;
    }
    if ( (v19 & 2) != 0 )
    {
      *(_WORD *)((char *)v17 + v20) = *(_WORD *)((char *)v18 + v20);
      v20 += 2;
    }
    if ( (v19 & 1) != 0 )
      *((_BYTE *)v17 + v20) = *((_BYTE *)v18 + v20);
    goto LABEL_13;
  }
  v15 = sub_186B270(0x80u);
  *(_QWORD *)v29 = a2;
  v13 = v15;
  v16 = sub_3743C0(v29);
  sub_2518F0(v13, a1);
  *(_QWORD *)(v13 + 24) = v16;
  *(_QWORD *)v13 = &off_1C4CC50;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  sub_1857380(v13 + 48);
  *(_QWORD *)(v13 + 112) = 0;
  *(_QWORD *)(v13 + 120) = 0;
  *(_OWORD *)(v13 + 64) = 0;
  *(_OWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_OWORD *)(v13 + 96) = 0;
  sub_24FBE0(a1, v13);
  sub_2AF8D0(a1, v13);
  if ( !v3 )
    return v13;
  sub_2BB620(v13);
LABEL_21:
  byte_1C7EBA0 = 1;
  return v13;
}

