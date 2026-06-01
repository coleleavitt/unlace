__int64 __fastcall Z3_stats_to_string(__int64 a1, int a2)
{
  char v3; // al
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __m128i si128; // xmm3
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  void *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 *v20; // rdi
  _DWORD *v21; // rcx
  int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26[4]; // [rsp+0h] [rbp-218h] BYREF
  std::locale *v27[2]; // [rsp+10h] [rbp-208h] BYREF
  int v28; // [rsp+20h] [rbp-1F8h]
  void *v29; // [rsp+28h] [rbp-1F0h]
  int v30[2]; // [rsp+30h] [rbp-1E8h]
  __m128i v31; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-1D0h]
  __int64 v33[2]; // [rsp+50h] [rbp-1C8h] BYREF
  int v34[4]; // [rsp+60h] [rbp-1B8h] BYREF
  int v35[4]; // [rsp+70h] [rbp-1A8h]
  int v36[4]; // [rsp+80h] [rbp-198h]
  int v37[4]; // [rsp+90h] [rbp-188h]
  int v38[4]; // [rsp+A0h] [rbp-178h] BYREF
  void *v39; // [rsp+B0h] [rbp-168h]
  __int64 v40; // [rsp+B8h] [rbp-160h]
  _QWORD v41[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v42[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v43; // [rsp+1B0h] [rbp-68h]
  __int128 v44; // [rsp+1B8h] [rbp-60h]
  __int128 v45; // [rsp+1C8h] [rbp-50h]

  v31.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v27 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  HIBYTE(v29) = v3;
  if ( v3 )
    sub_29E5A0();
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)v26 = v34;
  std::ios_base::ios_base((std::ios_base *)v42);
  v44 = 0;
  v45 = 0;
  v42[0] = (char *)&`vtable for'std::ios + 16;
  v43 = 0;
  v42[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = (_QWORD *)((char *)v34 + *(_QWORD *)(v4 - 24));
  *(_QWORD *)v34 = v4;
  *v6 = v5;
  *(_QWORD *)v30 = v5;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v27);
  *(_OWORD *)v35 = 0;
  *(__m128i *)v34 = si128;
  v42[0] = (char *)&`vtable for'std::ostringstream + 64;
  v27[0] = (std::locale *)v38;
  *(_OWORD *)v36 = 0;
  *(_OWORD *)v37 = 0;
  std::locale::locale((std::locale *)v38);
  v38[2] = 16;
  v39 = v41;
  *(_QWORD *)&v34[2] = (char *)&`vtable for'std::stringbuf + 16;
  v40 = 0;
  LOBYTE(v41[0]) = 0;
  std::ios::init();
  sub_1816A00(
    a2 + 24,
    v26[0],
    v8,
    v9,
    v10,
    v11,
    v26[0],
    *(void **)&v26[2],
    (int)v27[0],
    (int)v27[1],
    v28,
    v29,
    v30[0],
    v31.m128i_i32[0],
    v31.m128i_i32[2],
    v32,
    v33[0],
    v33[1],
    v34[0],
    v34[2],
    v35[0],
    *(__int64 *)&v35[2],
    v36[0],
    v36[2],
    v37[0],
    *(void **)&v37[2]);
  v12 = v39;
  if ( *(_QWORD *)v37 )
  {
    v13 = *(_QWORD *)v36;
    if ( !*(_QWORD *)v36 || *(_QWORD *)v36 < *(_QWORD *)v37 )
      v13 = *(_QWORD *)v37;
    v40 = v13 - *(_QWORD *)&v36[2];
    *((_BYTE *)v39 + v13 - *(_QWORD *)&v36[2]) = 0;
    v12 = v39;
    v31.m128i_i64[1] = (__int64)v33;
    if ( v39 != v41 )
      goto LABEL_7;
  }
  else
  {
    v31.m128i_i64[1] = (__int64)v33;
    if ( v39 != v41 )
    {
LABEL_7:
      v31.m128i_i64[1] = (__int64)v12;
      v33[0] = v41[0];
      v14 = v40;
      goto LABEL_8;
    }
  }
  v14 = v40;
  v20 = v33;
  v21 = v41;
  v22 = v40 + 1;
  if ( (unsigned int)(v40 + 1) >= 8 )
  {
    LODWORD(v24) = 0;
    do
    {
      v25 = (unsigned int)v24;
      v24 = (unsigned int)(v24 + 8);
      *(__int64 *)((char *)v33 + v25) = *(_QWORD *)((char *)v41 + v25);
    }
    while ( (unsigned int)v24 < (v22 & 0xFFFFFFF8) );
    v20 = (__int64 *)((char *)v33 + v24);
    v21 = (_DWORD *)((char *)v41 + v24);
  }
  v23 = 0;
  if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)v20 = *v21;
    v23 = 4;
  }
  if ( (v22 & 2) != 0 )
  {
    *(_WORD *)((char *)v20 + v23) = *(_WORD *)((char *)v21 + v23);
    v23 += 2;
  }
  if ( (v22 & 1) != 0 )
    *((_BYTE *)v20 + v23) = *((_BYTE *)v21 + v23);
LABEL_8:
  v32 = v14;
  v39 = v41;
  v40 = 0;
  LOBYTE(v41[0]) = 0;
  std::stringbuf::_M_sync();
  v15 = v32;
  if ( !v32 )
    std::__throw_length_error("basic_string::_M_replace_aux");
  --v32;
  *(_BYTE *)(v31.m128i_i64[1] + v15 - 1) = 0;
  v16 = sub_24ED70((_QWORD *)a1, (__int64)&v31.m128i_i64[1]);
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v31), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( (__int64 *)v31.m128i_i64[1] != v33 )
  {
    *(__m128i *)v26 = v17;
    operator delete((void *)v31.m128i_i64[1], v33[0] + 1);
    v17 = _mm_load_si128((const __m128i *)v26);
  }
  *(__m128i *)v34 = v17;
  v42[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v39 != v41 )
    operator delete(v39, v41[0] + 1LL);
  *(_QWORD *)&v34[2] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v27[0]);
  v18 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)v34 = v4;
  *(_QWORD *)((char *)v34 + v18) = *(_QWORD *)v30;
  v42[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v42);
  if ( HIBYTE(v29) )
    byte_1C7EBA0 = 1;
  return v16;
}

