__int64 __fastcall Z3_optimize_get_help(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbp
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __m128i si128; // xmm4
  void *v7; // rdx
  __int64 v8; // rax
  void *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  std::ios_base *v12; // rdi
  _DWORD *v14; // rdi
  _DWORD *v15; // rcx
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rsi
  __m128i v20; // [rsp+0h] [rbp-228h] BYREF
  std::ios_base *v21; // [rsp+10h] [rbp-218h]
  char v22; // [rsp+1Fh] [rbp-209h]
  std::locale *v23[2]; // [rsp+20h] [rbp-208h] BYREF
  _OWORD *v24; // [rsp+30h] [rbp-1F8h]
  __m128i v25; // [rsp+38h] [rbp-1F0h] BYREF
  char v26[8]; // [rsp+48h] [rbp-1E0h] BYREF
  void *v27[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v29[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+90h] [rbp-198h]
  __int128 v31; // [rsp+A0h] [rbp-188h]
  char v32[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v33; // [rsp+B8h] [rbp-170h]
  void *v34; // [rsp+C0h] [rbp-168h]
  void *v35; // [rsp+C8h] [rbp-160h]
  _QWORD v36[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v37[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v38; // [rsp+1C0h] [rbp-68h]
  __int128 v39; // [rsp+1C8h] [rbp-60h]
  __int128 v40; // [rsp+1D8h] [rbp-50h]

  v20.m128i_i64[0] = a1;
  v25.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v23 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v22 = v2;
  if ( v2 )
    sub_2A0A10(v20.m128i_i64[0], a2);
  v24 = v29;
  *(_DWORD *)(v20.m128i_i64[0] + 1520) = 0;
  v21 = (std::ios_base *)v37;
  std::ios_base::ios_base((std::ios_base *)v37);
  v39 = 0;
  v40 = 0;
  v37[0] = (char *)&`vtable for'std::ios + 16;
  v38 = 0;
  v37[27] = 0;
  v3 = `VTT for'std::ostringstream[1];
  v4 = `VTT for'std::ostringstream[2];
  v5 = (_QWORD *)((char *)v29 + *(_QWORD *)(v3 - 24));
  *(_QWORD *)&v29[0] = v3;
  *v5 = v4;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v23);
  v29[1] = 0;
  v29[0] = si128;
  v37[0] = (char *)&`vtable for'std::ostringstream + 64;
  v23[0] = (std::locale *)v32;
  v30 = 0;
  v31 = 0;
  std::locale::locale((std::locale *)v32);
  v33 = 16;
  v34 = v36;
  *((_QWORD *)&v29[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v35 = nullptr;
  LOBYTE(v36[0]) = 0;
  std::ios::init();
  sub_1857380(v26);
  sub_2ECC20(v26);
  sub_185C3C0(v26, v24, 0, 0, 1);
  v7 = v34;
  if ( (_QWORD)v31 )
  {
    v8 = v30;
    if ( !(_QWORD)v30 || (unsigned __int64)v30 < (unsigned __int64)v31 )
      v8 = v31;
    v35 = (void *)(v8 - *((_QWORD *)&v30 + 1));
    *((_BYTE *)v34 + v8 - *((_QWORD *)&v30 + 1)) = 0;
    v7 = v34;
    v27[0] = v28;
    if ( v34 != v36 )
      goto LABEL_7;
  }
  else
  {
    v27[0] = v28;
    if ( v34 != v36 )
    {
LABEL_7:
      v27[0] = v7;
      v28[0] = v36[0];
      v9 = v35;
      goto LABEL_8;
    }
  }
  v9 = v35;
  v14 = v28;
  v15 = v36;
  v16 = (_DWORD)v35 + 1;
  if ( (unsigned int)((_DWORD)v35 + 1) >= 8 )
  {
    LODWORD(v18) = 0;
    do
    {
      v19 = (unsigned int)v18;
      v18 = (unsigned int)(v18 + 8);
      *(_QWORD *)((char *)v28 + v19) = *(_QWORD *)((char *)v36 + v19);
    }
    while ( (unsigned int)v18 < (v16 & 0xFFFFFFF8) );
    v14 = (_DWORD *)((char *)v28 + v18);
    v15 = (_DWORD *)((char *)v36 + v18);
  }
  v17 = 0;
  if ( (v16 & 4) != 0 )
  {
    *v14 = *v15;
    v17 = 4;
  }
  if ( (v16 & 2) != 0 )
  {
    *(_WORD *)((char *)v14 + v17) = *(_WORD *)((char *)v15 + v17);
    v17 += 2;
  }
  if ( (v16 & 1) != 0 )
    *((_BYTE *)v14 + v17) = *((_BYTE *)v15 + v17);
LABEL_8:
  v27[1] = v9;
  v34 = v36;
  v35 = nullptr;
  LOBYTE(v36[0]) = 0;
  std::stringbuf::_M_sync();
  v10 = sub_24ED70(v20.m128i_i64[0], (__int64)v27);
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v25), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v27[0] != v28 )
    operator delete(v27[0], v28[0] + 1LL);
  sub_1857540(v26);
  v29[0] = _mm_load_si128(&v20);
  v37[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v34 != v36 )
    operator delete(v34, v36[0] + 1LL);
  *((_QWORD *)&v29[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v23[0]);
  v11 = *(_QWORD *)(v3 - 24);
  *(_QWORD *)&v29[0] = v3;
  v12 = v21;
  *(_QWORD *)((char *)v29 + v11) = v4;
  v37[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v12);
  if ( v22 )
    byte_1C7EBA0 = 1;
  return v10;
}

