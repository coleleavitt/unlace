__int64 __fastcall Z3_ast_map_to_string(_QWORD *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __m128i v6; // xmm3
  __int64 v7; // r12
  _QWORD *v8; // r13
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbp
  _QWORD *v12; // rax
  void *v13; // rdx
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rbp
  __m128i v17; // xmm0
  std::ios_base *v18; // rdi
  _QWORD *v20; // r9
  _DWORD *v21; // rdi
  int v22; // esi
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __m128i v27; // [rsp+0h] [rbp-278h] BYREF
  _QWORD *v28; // [rsp+18h] [rbp-260h]
  _QWORD *v29; // [rsp+20h] [rbp-258h]
  std::ios_base *v30; // [rsp+28h] [rbp-250h]
  char v31; // [rsp+37h] [rbp-241h]
  __int64 v32; // [rsp+38h] [rbp-240h]
  __int64 v33; // [rsp+40h] [rbp-238h]
  std::locale *v34; // [rsp+48h] [rbp-230h]
  __m128i v35; // [rsp+50h] [rbp-228h] BYREF
  char v36; // [rsp+60h] [rbp-218h] BYREF
  char v37[32]; // [rsp+70h] [rbp-208h] BYREF
  void *v38[2]; // [rsp+90h] [rbp-1E8h] BYREF
  _QWORD v39[4]; // [rsp+A0h] [rbp-1D8h] BYREF
  __m128i v40; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-1A8h]
  __int128 v42; // [rsp+E0h] [rbp-198h]
  __int128 v43; // [rsp+F0h] [rbp-188h]
  char v44[8]; // [rsp+100h] [rbp-178h] BYREF
  int v45; // [rsp+108h] [rbp-170h]
  void *v46; // [rsp+110h] [rbp-168h]
  void *v47; // [rsp+118h] [rbp-160h]
  _QWORD v48[2]; // [rsp+120h] [rbp-158h] BYREF
  _QWORD v49[28]; // [rsp+130h] [rbp-148h] BYREF
  __int16 v50; // [rsp+210h] [rbp-68h]
  __int128 v51; // [rsp+218h] [rbp-60h]
  __int128 v52; // [rsp+228h] [rbp-50h]

  v29 = a1;
  v35.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v27 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v31 = v2;
  if ( v2 )
    sub_29ECE0(v29);
  *((_DWORD *)v29 + 380) = 0;
  v30 = (std::ios_base *)v49;
  std::ios_base::ios_base((std::ios_base *)v49);
  v51 = 0;
  v52 = 0;
  v49[0] = (char *)&`vtable for'std::ios + 16;
  v50 = 0;
  v49[27] = 0;
  v3 = `VTT for'std::ostringstream[1];
  v4 = `VTT for'std::ostringstream[2];
  v5 = *(_QWORD *)(v3 - 24);
  v40.m128i_i64[0] = v3;
  v32 = v3;
  v33 = v4;
  *(__int64 *)((char *)v40.m128i_i64 + v5) = v4;
  std::ios::init();
  v6 = _mm_load_si128(&v27);
  v41 = 0;
  v40 = v6;
  v49[0] = (char *)&`vtable for'std::ostringstream + 64;
  v34 = (std::locale *)v44;
  v42 = 0;
  v43 = 0;
  std::locale::locale((std::locale *)v44);
  v45 = 16;
  v47 = nullptr;
  LOBYTE(v48[0]) = 0;
  v40.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
  v28 = v48;
  v46 = v48;
  v35.m128i_i64[1] = (__int64)&v40.m128i_i64[1];
  std::ios::init();
  v7 = *(_QWORD *)(a2 + 24);
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = *(_QWORD **)(a2 + 32);
  v9 = &v8[2 * *(unsigned int *)(a2 + 40)];
  if ( v8 != v9 )
  {
    while ( *v8 <= 1u )
    {
      v8 += 2;
      if ( v9 == v8 )
        goto LABEL_14;
    }
    if ( v9 != v8 )
    {
      v27.m128i_i64[0] = (__int64)&v36;
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v10 = v27.m128i_i64[0];
        sub_1606360(v27.m128i_i64[0], *v8, v7, 3, 0, 0);
        v11 = sub_160E8B0(&v40, v10);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v38, v8[1], v7, 3, 0, 0);
        sub_160E8B0(v11, v38);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v39);
        sub_18572D0(v37);
        v12 = v8 + 2;
        if ( v9 == v8 + 2 )
          break;
        while ( 1 )
        {
          v8 = v12;
          if ( *v12 > 1u )
            break;
          v12 += 2;
          if ( v9 == v12 )
            goto LABEL_14;
        }
      }
      while ( v12 != v9 );
    }
  }
LABEL_14:
  LOBYTE(v38[0]) = 41;
  if ( *(_QWORD *)((char *)&v41 + *(_QWORD *)(v40.m128i_i64[0] - 24)) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put((std::ostream *)&v40, 41);
  v13 = v46;
  if ( (_QWORD)v43 )
  {
    v14 = v42;
    if ( !(_QWORD)v42 || (unsigned __int64)v42 < (unsigned __int64)v43 )
      v14 = v43;
    v47 = (void *)(v14 - *((_QWORD *)&v42 + 1));
    *((_BYTE *)v46 + v14 - *((_QWORD *)&v42 + 1)) = 0;
    v13 = v46;
    v38[0] = v39;
    if ( v46 != v28 )
      goto LABEL_20;
  }
  else
  {
    v38[0] = v39;
    if ( v46 != v28 )
    {
LABEL_20:
      v38[0] = v13;
      v39[0] = v48[0];
      v15 = v47;
      goto LABEL_21;
    }
  }
  v15 = v47;
  v20 = v28;
  v21 = v39;
  v22 = (_DWORD)v47 + 1;
  v23 = v28;
  if ( (unsigned int)((_DWORD)v47 + 1) >= 8 )
  {
    LODWORD(v25) = 0;
    do
    {
      v26 = (unsigned int)v25;
      v25 = (unsigned int)(v25 + 8);
      *(_QWORD *)((char *)v39 + v26) = *(_QWORD *)((char *)v20 + v26);
    }
    while ( (unsigned int)v25 < (v22 & 0xFFFFFFF8) );
    v21 = (_DWORD *)((char *)v39 + v25);
    v23 = (_DWORD *)((char *)v28 + v25);
  }
  v24 = 0;
  if ( (v22 & 4) != 0 )
  {
    *v21 = *v23;
    v24 = 4;
  }
  if ( (v22 & 2) != 0 )
  {
    *(_WORD *)((char *)v21 + v24) = *(_WORD *)((char *)v23 + v24);
    v24 += 2;
  }
  if ( (v22 & 1) != 0 )
    *((_BYTE *)v21 + v24) = *((_BYTE *)v23 + v24);
LABEL_21:
  v38[1] = v15;
  LOBYTE(v48[0]) = 0;
  v46 = v28;
  v47 = nullptr;
  std::stringbuf::_M_sync();
  v16 = sub_24ED70(v29, (__int64)v38);
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v35), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v38[0] != v39 )
  {
    v27 = v17;
    operator delete(v38[0], v39[0] + 1LL);
    v17 = _mm_load_si128(&v27);
  }
  v40 = v17;
  v49[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v46 != v28 )
    operator delete(v46, v48[0] + 1LL);
  v40.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v34);
  v18 = v30;
  v40.m128i_i64[0] = v32;
  *(__int64 *)((char *)v40.m128i_i64 + *(_QWORD *)(v32 - 24)) = v33;
  v49[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v18);
  if ( v31 )
    byte_1C7EBA0 = 1;
  return v16;
}

