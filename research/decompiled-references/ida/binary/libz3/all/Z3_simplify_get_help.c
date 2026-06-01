__int64 __fastcall Z3_simplify_get_help(__int64 a1)
{
  char v1; // al
  __int64 v2; // rbp
  __int64 v3; // r15
  _QWORD *v4; // rbx
  __m128i si128; // xmm4
  void *v6; // rdx
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  std::ios_base *v11; // rdi
  _DWORD *v13; // rdi
  _DWORD *v14; // rcx
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  __m128i v19; // [rsp+0h] [rbp-228h] BYREF
  std::ios_base *v20; // [rsp+10h] [rbp-218h]
  char v21; // [rsp+1Fh] [rbp-209h]
  std::locale *v22[2]; // [rsp+20h] [rbp-208h] BYREF
  _OWORD *v23; // [rsp+30h] [rbp-1F8h]
  __m128i v24; // [rsp+38h] [rbp-1F0h] BYREF
  char v25[8]; // [rsp+48h] [rbp-1E0h] BYREF
  void *v26[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v28[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v29; // [rsp+90h] [rbp-198h]
  __int128 v30; // [rsp+A0h] [rbp-188h]
  char v31[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v32; // [rsp+B8h] [rbp-170h]
  void *v33; // [rsp+C0h] [rbp-168h]
  void *v34; // [rsp+C8h] [rbp-160h]
  _QWORD v35[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v36[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v37; // [rsp+1C0h] [rbp-68h]
  __int128 v38; // [rsp+1C8h] [rbp-60h]
  __int128 v39; // [rsp+1D8h] [rbp-50h]

  v19.m128i_i64[0] = a1;
  v24.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v22 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v21 = v1;
  if ( v1 )
    sub_29B100(v19.m128i_i64[0]);
  v23 = v28;
  *(_DWORD *)(v19.m128i_i64[0] + 1520) = 0;
  v20 = (std::ios_base *)v36;
  std::ios_base::ios_base((std::ios_base *)v36);
  v38 = 0;
  v39 = 0;
  v36[0] = (char *)&`vtable for'std::ios + 16;
  v37 = 0;
  v36[27] = 0;
  v2 = `VTT for'std::ostringstream[1];
  v3 = `VTT for'std::ostringstream[2];
  v4 = (_QWORD *)((char *)v28 + *(_QWORD *)(v2 - 24));
  *(_QWORD *)&v28[0] = v2;
  *v4 = v3;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v22);
  v28[1] = 0;
  v28[0] = si128;
  v36[0] = (char *)&`vtable for'std::ostringstream + 64;
  v22[0] = (std::locale *)v31;
  v29 = 0;
  v30 = 0;
  std::locale::locale((std::locale *)v31);
  v32 = 16;
  v33 = v35;
  *((_QWORD *)&v28[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v34 = nullptr;
  LOBYTE(v35[0]) = 0;
  std::ios::init();
  sub_1857380(v25);
  sub_14B6210(v25);
  sub_185C3C0(v25, v23, 0, 0, 1);
  v6 = v33;
  if ( (_QWORD)v30 )
  {
    v7 = v29;
    if ( !(_QWORD)v29 || (unsigned __int64)v29 < (unsigned __int64)v30 )
      v7 = v30;
    v34 = (void *)(v7 - *((_QWORD *)&v29 + 1));
    *((_BYTE *)v33 + v7 - *((_QWORD *)&v29 + 1)) = 0;
    v6 = v33;
    v26[0] = v27;
    if ( v33 != v35 )
      goto LABEL_7;
  }
  else
  {
    v26[0] = v27;
    if ( v33 != v35 )
    {
LABEL_7:
      v26[0] = v6;
      v27[0] = v35[0];
      v8 = v34;
      goto LABEL_8;
    }
  }
  v8 = v34;
  v13 = v27;
  v14 = v35;
  v15 = (_DWORD)v34 + 1;
  if ( (unsigned int)((_DWORD)v34 + 1) >= 8 )
  {
    LODWORD(v17) = 0;
    do
    {
      v18 = (unsigned int)v17;
      v17 = (unsigned int)(v17 + 8);
      *(_QWORD *)((char *)v27 + v18) = *(_QWORD *)((char *)v35 + v18);
    }
    while ( (unsigned int)v17 < (v15 & 0xFFFFFFF8) );
    v13 = (_DWORD *)((char *)v27 + v17);
    v14 = (_DWORD *)((char *)v35 + v17);
  }
  v16 = 0;
  if ( (v15 & 4) != 0 )
  {
    *v13 = *v14;
    v16 = 4;
  }
  if ( (v15 & 2) != 0 )
  {
    *(_WORD *)((char *)v13 + v16) = *(_WORD *)((char *)v14 + v16);
    v16 += 2;
  }
  if ( (v15 & 1) != 0 )
    *((_BYTE *)v13 + v16) = *((_BYTE *)v14 + v16);
LABEL_8:
  v26[1] = v8;
  v33 = v35;
  v34 = nullptr;
  LOBYTE(v35[0]) = 0;
  std::stringbuf::_M_sync();
  v9 = sub_24ED70(v19.m128i_i64[0], (__int64)v26);
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v24), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v26[0] != v27 )
    operator delete(v26[0], v27[0] + 1LL);
  sub_1857540(v25);
  v28[0] = _mm_load_si128(&v19);
  v36[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v33 != v35 )
    operator delete(v33, v35[0] + 1LL);
  *((_QWORD *)&v28[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v22[0]);
  v10 = *(_QWORD *)(v2 - 24);
  *(_QWORD *)&v28[0] = v2;
  v11 = v20;
  *(_QWORD *)((char *)v28 + v10) = v3;
  v36[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v11);
  if ( v21 )
    byte_1C7EBA0 = 1;
  return v9;
}

