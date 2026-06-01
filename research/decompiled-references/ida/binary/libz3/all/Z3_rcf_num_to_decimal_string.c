__int64 __fastcall Z3_rcf_num_to_decimal_string(__int64 a1, void *a2, unsigned int a3)
{
  char v5; // al
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r15
  __m128i si128; // xmm3
  __int64 v10; // rax
  void *v11; // rdx
  __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __int64 v16; // rax
  _DWORD *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  char v24; // [rsp+Fh] [rbp-209h]
  __m128i v25; // [rsp+10h] [rbp-208h] BYREF
  std::locale *v26[2]; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v27; // [rsp+30h] [rbp-1E8h] BYREF
  void *v28[2]; // [rsp+40h] [rbp-1D8h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _OWORD v30[2]; // [rsp+60h] [rbp-1B8h] BYREF
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

  v27.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v26 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v24 = v5;
  if ( v5 )
    sub_29F840(a1, (__int64)a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v25.m128i_i64[0] = (__int64)v30;
  std::ios_base::ios_base((std::ios_base *)v38);
  v40 = 0;
  v41 = 0;
  v38[0] = (char *)&`vtable for'std::ios + 16;
  v39 = 0;
  v38[27] = 0;
  v6 = `VTT for'std::ostringstream[1];
  v7 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v30[0] = v6;
  v8 = `VTT for'std::ostringstream[2];
  *(_QWORD *)((char *)v30 + v7) = v8;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v26);
  v30[1] = 0;
  v30[0] = si128;
  v38[0] = (char *)&`vtable for'std::ostringstream + 64;
  v26[0] = (std::locale *)v33;
  v31 = 0;
  v32 = 0;
  std::locale::locale((std::locale *)v33);
  v34 = 16;
  v35 = v37;
  LOBYTE(v37[0]) = 0;
  *((_QWORD *)&v30[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v27.m128i_i64[1] = (__int64)v30 + 8;
  v36 = nullptr;
  std::ios::init();
  v10 = sub_24F090(a1);
  v28[0] = a2;
  sub_16FE2E0(v10, v25.m128i_i64[0], v28, a3);
  v11 = v35;
  if ( (_QWORD)v32 )
  {
    v12 = v31;
    if ( !(_QWORD)v31 || (unsigned __int64)v31 < (unsigned __int64)v32 )
      v12 = v32;
    v36 = (void *)(v12 - *((_QWORD *)&v31 + 1));
    *((_BYTE *)v35 + v12 - *((_QWORD *)&v31 + 1)) = 0;
    v11 = v35;
    v28[0] = v29;
    if ( v35 != v37 )
      goto LABEL_7;
  }
  else
  {
    v28[0] = v29;
    if ( v35 != v37 )
    {
LABEL_7:
      v28[0] = v11;
      v29[0] = v37[0];
      v13 = v36;
      goto LABEL_8;
    }
  }
  v13 = v36;
  v18 = v29;
  v19 = v37;
  v20 = (_DWORD)v36 + 1;
  if ( (unsigned int)((_DWORD)v36 + 1) >= 8 )
  {
    LODWORD(v22) = 0;
    do
    {
      v23 = (unsigned int)v22;
      v22 = (unsigned int)(v22 + 8);
      *(_QWORD *)((char *)v29 + v23) = *(_QWORD *)((char *)v37 + v23);
    }
    while ( (unsigned int)v22 < (v20 & 0xFFFFFFF8) );
    v18 = (_DWORD *)((char *)v29 + v22);
    v19 = (_DWORD *)((char *)v37 + v22);
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
LABEL_8:
  v28[1] = v13;
  v35 = v37;
  v36 = nullptr;
  LOBYTE(v37[0]) = 0;
  std::stringbuf::_M_sync();
  v14 = sub_24ED70((_QWORD *)a1, (__int64)v28);
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v27), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v28[0] != v29 )
  {
    v25 = v15;
    operator delete(v28[0], v29[0] + 1LL);
    v15 = _mm_load_si128(&v25);
  }
  v30[0] = v15;
  v38[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v35 != v37 )
    operator delete(v35, v37[0] + 1LL);
  *((_QWORD *)&v30[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v26[0]);
  v16 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v30[0] = v6;
  *(_QWORD *)((char *)v30 + v16) = v8;
  v38[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v38);
  if ( v24 )
    byte_1C7EBA0 = 1;
  return v14;
}

