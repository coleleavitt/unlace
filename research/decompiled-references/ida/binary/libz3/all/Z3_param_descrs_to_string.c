__int64 __fastcall Z3_param_descrs_to_string(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __m128i si128; // xmm3
  int v8; // r13d
  unsigned int v9; // ebx
  const char *v10; // rax
  void *v11; // rdx
  __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rbp
  __m128i v15; // xmm0
  std::ios_base *v16; // rdi
  _DWORD *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __m128i v24; // [rsp+0h] [rbp-228h] BYREF
  std::ios_base *v25; // [rsp+10h] [rbp-218h]
  char v26; // [rsp+1Fh] [rbp-209h]
  __int64 v27; // [rsp+20h] [rbp-208h]
  __int64 v28; // [rsp+28h] [rbp-200h]
  std::locale *v29[2]; // [rsp+30h] [rbp-1F8h] BYREF
  __m128i v30; // [rsp+40h] [rbp-1E8h] BYREF
  void *v31[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v33[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v34; // [rsp+90h] [rbp-198h]
  __int128 v35; // [rsp+A0h] [rbp-188h]
  char v36[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v37; // [rsp+B8h] [rbp-170h]
  void *v38; // [rsp+C0h] [rbp-168h]
  void *v39; // [rsp+C8h] [rbp-160h]
  _QWORD v40[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v41[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v42; // [rsp+1C0h] [rbp-68h]
  __int128 v43; // [rsp+1C8h] [rbp-60h]
  __int128 v44; // [rsp+1D8h] [rbp-50h]

  v2 = a2;
  v24.m128i_i64[0] = a1;
  v30.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v29 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v26 = v3;
  if ( v3 )
    sub_295090(v24.m128i_i64[0], a2);
  *(_DWORD *)(v24.m128i_i64[0] + 1520) = 0;
  v25 = (std::ios_base *)v41;
  std::ios_base::ios_base((std::ios_base *)v41);
  v43 = 0;
  v44 = 0;
  v41[0] = (char *)&`vtable for'std::ios + 16;
  v42 = 0;
  v41[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v33[0] = v4;
  v27 = v4;
  v28 = v5;
  *(_QWORD *)((char *)v33 + v6) = v5;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v29);
  v33[1] = 0;
  v33[0] = si128;
  v41[0] = (char *)&`vtable for'std::ostringstream + 64;
  v29[0] = (std::locale *)v36;
  v34 = 0;
  v35 = 0;
  std::locale::locale((std::locale *)v36);
  v37 = 16;
  v38 = v40;
  LOBYTE(v40[0]) = 0;
  *((_QWORD *)&v33[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v30.m128i_i64[1] = (__int64)v33 + 8;
  v39 = nullptr;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( a2 )
    v2 = a2 + 24;
  v8 = sub_1858490(v2);
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = (const char *)sub_18584B0(v2, v9);
      if ( ((unsigned __int8)v10 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        if ( v8 == ++v9 )
          break;
      }
      else
      {
        if ( v10 )
          strlen(v10);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v8 == ++v9 )
          break;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v11 = v38;
  if ( (_QWORD)v35 )
  {
    v12 = v34;
    if ( !(_QWORD)v34 || (unsigned __int64)v34 < (unsigned __int64)v35 )
      v12 = v35;
    v39 = (void *)(v12 - *((_QWORD *)&v34 + 1));
    *((_BYTE *)v38 + v12 - *((_QWORD *)&v34 + 1)) = 0;
    v11 = v38;
    v31[0] = v32;
    if ( v38 != v40 )
      goto LABEL_17;
  }
  else
  {
    v31[0] = v32;
    if ( v38 != v40 )
    {
LABEL_17:
      v31[0] = v11;
      v32[0] = v40[0];
      v13 = v39;
      goto LABEL_18;
    }
  }
  v13 = v39;
  v18 = v32;
  v19 = v40;
  v20 = (_DWORD)v39 + 1;
  if ( (unsigned int)((_DWORD)v39 + 1) >= 8 )
  {
    LODWORD(v22) = 0;
    do
    {
      v23 = (unsigned int)v22;
      v22 = (unsigned int)(v22 + 8);
      *(_QWORD *)((char *)v32 + v23) = *(_QWORD *)((char *)v40 + v23);
    }
    while ( (unsigned int)v22 < (v20 & 0xFFFFFFF8) );
    v18 = (_DWORD *)((char *)v32 + v22);
    v19 = (_DWORD *)((char *)v40 + v22);
  }
  v21 = 0;
  if ( (v20 & 4) != 0 )
  {
    *v18 = *v19;
    v21 = 4;
  }
  if ( (v20 & 2) != 0 )
  {
    *(_WORD *)((char *)v18 + v21) = *(_WORD *)((char *)v19 + v21);
    v21 += 2;
  }
  if ( (v20 & 1) != 0 )
    *((_BYTE *)v18 + v21) = *((_BYTE *)v19 + v21);
LABEL_18:
  v31[1] = v13;
  v38 = v40;
  v39 = nullptr;
  LOBYTE(v40[0]) = 0;
  std::stringbuf::_M_sync();
  v14 = sub_24ED70(v24.m128i_i64[0], (__int64)v31);
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v30), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v31[0] != v32 )
  {
    v24 = v15;
    operator delete(v31[0], v32[0] + 1LL);
    v15 = _mm_load_si128(&v24);
  }
  v33[0] = v15;
  v41[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v38 != v40 )
    operator delete(v38, v40[0] + 1LL);
  *((_QWORD *)&v33[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v29[0]);
  v16 = v25;
  *(_QWORD *)&v33[0] = v27;
  *(_QWORD *)((char *)v33 + *(_QWORD *)(v27 - 24)) = v28;
  v41[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v16);
  if ( v26 )
    byte_1C7EBA0 = 1;
  return v14;
}

