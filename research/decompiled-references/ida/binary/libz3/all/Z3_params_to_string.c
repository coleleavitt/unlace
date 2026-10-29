__int64 __fastcall Z3_params_to_string(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __m128i si128; // xmm3
  void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __m128i v11; // xmm0
  __int64 v12; // rax
  std::ios_base *v13; // rdi
  _DWORD *v15; // rdi
  _DWORD *v16; // rcx
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rsi
  __m128i v21; // [rsp+0h] [rbp-218h] BYREF
  std::ios_base *v22; // [rsp+18h] [rbp-200h]
  std::locale *v23[2]; // [rsp+20h] [rbp-1F8h] BYREF
  _OWORD *v24; // [rsp+30h] [rbp-1E8h]
  __m128i v25; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-1D0h]
  _QWORD v27[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _OWORD v28[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v29; // [rsp+80h] [rbp-198h]
  __int128 v30; // [rsp+90h] [rbp-188h]
  _BYTE v31[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v32; // [rsp+A8h] [rbp-170h]
  void *v33; // [rsp+B0h] [rbp-168h]
  __int64 v34; // [rsp+B8h] [rbp-160h]
  _QWORD v35[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v36[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v37; // [rsp+1B0h] [rbp-68h]
  __int128 v38; // [rsp+1B8h] [rbp-60h]
  __int128 v39; // [rsp+1C8h] [rbp-50h]

  v21.m128i_i64[0] = a1;
  v25.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v23 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_294E90(v21.m128i_i64[0], a2);
  v24 = v28;
  *(_DWORD *)(v21.m128i_i64[0] + 1520) = 0;
  v22 = (std::ios_base *)v36;
  std::ios_base::ios_base((std::ios_base *)v36);
  v38 = 0;
  v39 = 0;
  v36[0] = (char *)&`vtable for'std::ios + 16;
  v37 = 0;
  v36[27] = 0;
  v3 = `VTT for'std::ostringstream[1];
  v4 = `VTT for'std::ostringstream[2];
  v5 = (_QWORD *)((char *)v28 + *(_QWORD *)(v3 - 24));
  *(_QWORD *)&v28[0] = v3;
  *v5 = v4;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v23);
  v28[1] = 0;
  v28[0] = si128;
  v36[0] = (char *)&`vtable for'std::ostringstream + 64;
  v23[0] = (std::locale *)v31;
  v29 = 0;
  v30 = 0;
  std::locale::locale((std::locale *)v31);
  v32 = 16;
  v33 = v35;
  *((_QWORD *)&v28[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v34 = 0;
  LOBYTE(v35[0]) = 0;
  std::ios::init();
  sub_185CA40(a2 + 24, v24);
  v7 = v33;
  if ( (_QWORD)v30 )
  {
    v8 = v29;
    if ( !(_QWORD)v29 || (unsigned __int64)v29 < (unsigned __int64)v30 )
      v8 = v30;
    v34 = v8 - *((_QWORD *)&v29 + 1);
    *((_BYTE *)v33 + v8 - *((_QWORD *)&v29 + 1)) = 0;
    v7 = v33;
    v25.m128i_i64[1] = (__int64)v27;
    if ( v33 != v35 )
      goto LABEL_7;
  }
  else
  {
    v25.m128i_i64[1] = (__int64)v27;
    if ( v33 != v35 )
    {
LABEL_7:
      v25.m128i_i64[1] = (__int64)v7;
      v27[0] = v35[0];
      v9 = v34;
      goto LABEL_8;
    }
  }
  v9 = v34;
  v15 = v27;
  v16 = v35;
  v17 = v34 + 1;
  if ( (unsigned int)(v34 + 1) >= 8 )
  {
    LODWORD(v19) = 0;
    do
    {
      v20 = (unsigned int)v19;
      v19 = (unsigned int)(v19 + 8);
      *(_QWORD *)((char *)v27 + v20) = *(_QWORD *)((char *)v35 + v20);
    }
    while ( (unsigned int)v19 < (v17 & 0xFFFFFFF8) );
    v15 = (_DWORD *)((char *)v27 + v19);
    v16 = (_DWORD *)((char *)v35 + v19);
  }
  v18 = 0;
  if ( (v17 & 4) != 0 )
  {
    *v15 = *v16;
    v18 = 4;
  }
  if ( (v17 & 2) != 0 )
  {
    *(_WORD *)((char *)v15 + v18) = *(_WORD *)((char *)v16 + v18);
    v18 += 2;
  }
  if ( (v17 & 1) != 0 )
    *((_BYTE *)v15 + v18) = *((_BYTE *)v16 + v18);
LABEL_8:
  v26 = v9;
  v33 = v35;
  v34 = 0;
  LOBYTE(v35[0]) = 0;
  std::stringbuf::_M_sync();
  v10 = sub_24ED70(v21.m128i_i64[0], (__int64)&v25.m128i_i64[1]);
  v11 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v25), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( (_QWORD *)v25.m128i_i64[1] != v27 )
  {
    v21 = v11;
    operator delete((void *)v25.m128i_i64[1], v27[0] + 1LL);
    v11 = _mm_load_si128(&v21);
  }
  v28[0] = v11;
  v36[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v33 != v35 )
    operator delete(v33, v35[0] + 1LL);
  *((_QWORD *)&v28[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v23[0]);
  v12 = *(_QWORD *)(v3 - 24);
  *(_QWORD *)&v28[0] = v3;
  v13 = v22;
  *(_QWORD *)((char *)v28 + v12) = v4;
  v36[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v13);
  if ( v2 )
    byte_1C7EBA0 = 1;
  return v10;
}

