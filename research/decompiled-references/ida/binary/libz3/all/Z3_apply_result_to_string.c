__int64 __fastcall Z3_apply_result_to_string(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __m128i si128; // xmm3
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  void *v10; // rdx
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rbp
  __m128i v14; // xmm0
  __int64 v15; // rax
  std::ios_base *v16; // rdi
  _DWORD *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __m128i v24; // [rsp+0h] [rbp-228h] BYREF
  std::ios_base *v25; // [rsp+18h] [rbp-210h]
  char v26; // [rsp+27h] [rbp-201h]
  __int64 v27; // [rsp+28h] [rbp-200h]
  std::locale *v28[2]; // [rsp+30h] [rbp-1F8h] BYREF
  __m128i v29; // [rsp+40h] [rbp-1E8h] BYREF
  void *v30[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-1C8h] BYREF
  __m128i v32; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v33; // [rsp+80h] [rbp-1A8h]
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

  v24.m128i_i64[0] = a1;
  v29.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v28 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v26 = v2;
  if ( v2 )
    sub_29D4A0(v24.m128i_i64[0]);
  *(_DWORD *)(v24.m128i_i64[0] + 1520) = 0;
  v25 = (std::ios_base *)v41;
  std::ios_base::ios_base((std::ios_base *)v41);
  v43 = 0;
  v44 = 0;
  v41[0] = (char *)&`vtable for'std::ios + 16;
  v42 = 0;
  v41[27] = 0;
  v3 = `VTT for'std::ostringstream[1];
  v4 = `VTT for'std::ostringstream[2];
  v5 = *(_QWORD *)(v3 - 24);
  v32.m128i_i64[0] = v3;
  v27 = v4;
  *(__int64 *)((char *)v32.m128i_i64 + v5) = v4;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v28);
  v33 = 0;
  v32 = si128;
  v41[0] = (char *)&`vtable for'std::ostringstream + 64;
  v28[0] = (std::locale *)v36;
  v34 = 0;
  v35 = 0;
  std::locale::locale((std::locale *)v36);
  v37 = 16;
  v38 = v40;
  LOBYTE(v40[0]) = 0;
  v32.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
  v29.m128i_i64[1] = (__int64)&v32.m128i_i64[1];
  v39 = nullptr;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = 0;
  v8 = *(unsigned int *)(a2 + 32);
  v9 = 8 * v8;
  if ( (_DWORD)v8 )
  {
    do
    {
      sub_ED65F0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + v7), &v32);
      v7 += 8;
    }
    while ( v9 != v7 );
  }
  LOBYTE(v30[0]) = 41;
  if ( *(_QWORD *)((char *)&v33 + *(_QWORD *)(v32.m128i_i64[0] - 24)) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put((std::ostream *)&v32, 41);
  v10 = v38;
  if ( (_QWORD)v35 )
  {
    v11 = v34;
    if ( !(_QWORD)v34 || (unsigned __int64)v34 < (unsigned __int64)v35 )
      v11 = v35;
    v39 = (void *)(v11 - *((_QWORD *)&v34 + 1));
    *((_BYTE *)v38 + v11 - *((_QWORD *)&v34 + 1)) = 0;
    v10 = v38;
    v30[0] = v31;
    if ( v38 != v40 )
      goto LABEL_11;
  }
  else
  {
    v30[0] = v31;
    if ( v38 != v40 )
    {
LABEL_11:
      v30[0] = v10;
      v31[0] = v40[0];
      v12 = v39;
      goto LABEL_12;
    }
  }
  v12 = v39;
  v18 = v31;
  v19 = v40;
  v20 = (_DWORD)v39 + 1;
  if ( (unsigned int)((_DWORD)v39 + 1) >= 8 )
  {
    LODWORD(v22) = 0;
    do
    {
      v23 = (unsigned int)v22;
      v22 = (unsigned int)(v22 + 8);
      *(_QWORD *)((char *)v31 + v23) = *(_QWORD *)((char *)v40 + v23);
    }
    while ( (unsigned int)v22 < (v20 & 0xFFFFFFF8) );
    v18 = (_DWORD *)((char *)v31 + v22);
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
LABEL_12:
  v30[1] = v12;
  v38 = v40;
  v39 = nullptr;
  LOBYTE(v40[0]) = 0;
  std::stringbuf::_M_sync();
  v13 = sub_24ED70(v24.m128i_i64[0], v30);
  v14 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v29), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v30[0] != v31 )
  {
    v24 = v14;
    operator delete(v30[0], v31[0] + 1LL);
    v14 = _mm_load_si128(&v24);
  }
  v32 = v14;
  v41[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v38 != v40 )
    operator delete(v38, v40[0] + 1LL);
  v32.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v28[0]);
  v15 = *(_QWORD *)(v3 - 24);
  v32.m128i_i64[0] = v3;
  v16 = v25;
  *(__int64 *)((char *)v32.m128i_i64 + v15) = v27;
  v41[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v16);
  if ( v26 )
    byte_1C7EBA0 = 1;
  return v13;
}

