_BYTE *__fastcall sub_24FE40(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rax
  std::ostream *v11; // rdi
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // rax
  void *v15; // rax
  std::ios_base *v16; // rdi
  char *v17; // rdi
  int v18; // edx
  _DWORD *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rsi
  void *v23; // [rsp+0h] [rbp-248h]
  __int64 v24; // [rsp+18h] [rbp-230h]
  __int64 v25; // [rsp+20h] [rbp-228h]
  __m128i v26; // [rsp+30h] [rbp-218h] BYREF
  std::ios_base *v27; // [rsp+40h] [rbp-208h]
  __int8 *v28; // [rsp+48h] [rbp-200h]
  char v29; // [rsp+5Eh] [rbp-1EAh]
  char v30; // [rsp+5Fh] [rbp-1E9h]
  void *v31[2]; // [rsp+60h] [rbp-1E8h] BYREF
  char v32[8]; // [rsp+70h] [rbp-1D8h] BYREF
  __m128i v33; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-1A8h]
  __int128 v35; // [rsp+B0h] [rbp-198h]
  __int128 v36; // [rsp+C0h] [rbp-188h]
  char v37[8]; // [rsp+D0h] [rbp-178h] BYREF
  int v38; // [rsp+D8h] [rbp-170h]
  void *v39; // [rsp+E0h] [rbp-168h]
  void *v40; // [rsp+E8h] [rbp-160h]
  _QWORD v41[2]; // [rsp+F0h] [rbp-158h] BYREF
  _QWORD v42[28]; // [rsp+100h] [rbp-148h] BYREF
  __int16 v43; // [rsp+1E0h] [rbp-68h]
  __int128 v44; // [rsp+1E8h] [rbp-60h]
  __int128 v45; // [rsp+1F8h] [rbp-50h]

  result = (_BYTE *)sub_15D7BA0(*(_QWORD *)(a1 + 232));
  if ( !(_BYTE)result )
  {
    if ( *(_WORD *)(a2 + 4) )
    {
LABEL_20:
      result = *(_BYTE **)(a1 + 1536);
      *(_DWORD *)(a1 + 1520) = 1;
      *(_QWORD *)(a1 + 1544) = 0;
      *result = 0;
      if ( *(_QWORD *)(a1 + 1528) )
      {
        sub_2BC170();
        return (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 1);
      }
      return result;
    }
    v27 = (std::ios_base *)v42;
    std::ios_base::ios_base((std::ios_base *)v42);
    v44 = 0;
    v45 = 0;
    v42[0] = (char *)&`vtable for'std::ios + 16;
    v43 = 0;
    v42[27] = 0;
    v4 = `VTT for'std::ostringstream[1];
    v5 = `VTT for'std::ostringstream[2];
    v6 = *(_QWORD *)(v4 - 24);
    v33.m128i_i64[0] = v4;
    v24 = v4;
    v25 = v5;
    *(__int64 *)((char *)v33.m128i_i64 + v6) = v5;
    std::ios::init();
    v42[0] = (char *)&`vtable for'std::ostringstream + 64;
    v26.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
    v33 = _mm_unpacklo_epi64(
            (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    v34 = 0;
    v35 = 0;
    v36 = 0;
    std::locale::locale((std::locale *)v37);
    v38 = 16;
    v40 = nullptr;
    LOBYTE(v41[0]) = 0;
    v33.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
    v39 = v41;
    v28 = &v33.m128i_i8[8];
    std::ios::init();
    sub_1606360(v31, *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 232), 0, 0, 0);
    sub_160E8B0(&v33, v31);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v32);
    v7 = *(_DWORD *)(a2 + 24);
    if ( v7 > 1 )
    {
      v29 = 10;
      if ( *(_QWORD *)((char *)&v34 + *(_QWORD *)(v33.m128i_i64[0] - 24)) )
        std::__ostream_insert<char,std::char_traits<char>>();
      else
        std::ostream::put((std::ostream *)&v33, 10);
      v7 = *(_DWORD *)(a2 + 24);
    }
    v8 = 0;
    if ( v7 )
    {
      do
      {
        sub_1648CA0(&v33, *(_QWORD *)(a1 + 232), *(_QWORD *)(a2 + 8LL * v8 + 32), 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        v9 = *(_QWORD *)(a1 + 232);
        v10 = sub_15D1F10(*(_QWORD *)(a2 + 8LL * v8 + 32));
        sub_1606360(v31, v10, v9, 0, 0, 0);
        v11 = (std::ostream *)sub_160E8B0(&v33, v31);
        v12 = *(_QWORD *)v11;
        v30 = 10;
        if ( *(_QWORD *)((char *)v11 + *(_QWORD *)(v12 - 24) + 16) )
          std::__ostream_insert<char,std::char_traits<char>>();
        else
          std::ostream::put(v11, 10);
        ++v8;
        sub_18572D0(v32);
      }
      while ( v8 < *(_DWORD *)(a2 + 24) );
    }
    v13 = v39;
    v26 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v26), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    if ( (_QWORD)v36 )
    {
      v14 = v35;
      if ( !(_QWORD)v35 || (unsigned __int64)v35 < (unsigned __int64)v36 )
        v14 = v36;
      v40 = (void *)(v14 - *((_QWORD *)&v35 + 1));
      *((_BYTE *)v39 + v14 - *((_QWORD *)&v35 + 1)) = 0;
      v13 = v39;
      v31[0] = v32;
      if ( v39 != v41 )
        goto LABEL_14;
    }
    else
    {
      v31[0] = v32;
      if ( v39 != v41 )
      {
LABEL_14:
        v31[0] = v13;
        *(_QWORD *)v32 = v41[0];
        v15 = v40;
LABEL_15:
        v31[1] = v15;
        LOBYTE(v41[0]) = 0;
        v39 = v41;
        v40 = nullptr;
        std::stringbuf::_M_sync();
        sub_1875640("%s", (char)v32);
        if ( v31[0] != v23 )
          operator delete(v31[0], *(_QWORD *)v32 + 1LL);
        v33 = _mm_load_si128(&v26);
        v42[0] = (char *)&`vtable for'std::ostringstream + 64;
        if ( v39 != v41 )
          operator delete(v39, v41[0] + 1LL);
        v33.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
        std::locale::~locale((std::locale *)v37);
        v16 = v27;
        v33.m128i_i64[0] = v24;
        *(__int64 *)((char *)v33.m128i_i64 + *(_QWORD *)(v24 - 24)) = v25;
        v42[0] = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base(v16);
        goto LABEL_20;
      }
    }
    v15 = v40;
    v17 = v32;
    v18 = (_DWORD)v40 + 1;
    v19 = v41;
    if ( (unsigned int)((_DWORD)v40 + 1) >= 8 )
    {
      LODWORD(v21) = 0;
      do
      {
        v22 = (unsigned int)v21;
        v21 = (unsigned int)(v21 + 8);
        *(_QWORD *)&v32[v22] = *(_QWORD *)((char *)v41 + v22);
      }
      while ( (unsigned int)v21 < (v18 & 0xFFFFFFF8) );
      v17 = &v32[v21];
      v19 = (_DWORD *)((char *)v41 + v21);
    }
    v20 = 0;
    if ( (v18 & 4) != 0 )
    {
      *(_DWORD *)v17 = *v19;
      v20 = 4;
    }
    if ( (v18 & 2) != 0 )
    {
      *(_WORD *)&v17[v20] = *(_WORD *)((char *)v19 + v20);
      v20 += 2;
    }
    if ( (v18 & 1) != 0 )
      v17[v20] = *((_BYTE *)v19 + v20);
    goto LABEL_15;
  }
  return result;
}

