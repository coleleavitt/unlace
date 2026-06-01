__int64 __fastcall Z3_ast_to_string(__int64 a1, __int64 a2)
{
  char v3; // al
  char v4; // r15
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  __m128i v8; // xmm3
  int v9; // r9d
  int v10; // eax
  void *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __int64 v16; // rax
  std::ios_base *v17; // rdi
  __int64 v19; // rdx
  __int64 *v20; // rdi
  int v21; // edx
  _DWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // rsi
  void *v27; // [rsp+0h] [rbp-240h]
  char *v28; // [rsp+18h] [rbp-228h] BYREF
  __m128i v29; // [rsp+20h] [rbp-220h] BYREF
  std::locale *v30; // [rsp+30h] [rbp-210h]
  std::ios_base *v31; // [rsp+38h] [rbp-208h]
  __m128i v32; // [rsp+40h] [rbp-200h] BYREF
  int v33; // [rsp+50h] [rbp-1F0h]
  __int64 v34; // [rsp+58h] [rbp-1E8h] BYREF
  void *v35; // [rsp+60h] [rbp-1E0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-1D8h]
  __int64 v37; // [rsp+70h] [rbp-1D0h] BYREF
  int v38; // [rsp+78h] [rbp-1C8h]
  void *v39; // [rsp+80h] [rbp-1C0h]
  int v40; // [rsp+88h] [rbp-1B8h]
  _OWORD v41[2]; // [rsp+90h] [rbp-1B0h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-190h]
  __int128 v43; // [rsp+C0h] [rbp-180h]
  _BYTE v44[8]; // [rsp+D0h] [rbp-170h] BYREF
  int v45; // [rsp+D8h] [rbp-168h]
  void *v46; // [rsp+E0h] [rbp-160h]
  __int64 v47; // [rsp+E8h] [rbp-158h]
  _QWORD v48[2]; // [rsp+F0h] [rbp-150h] BYREF
  _QWORD v49[28]; // [rsp+100h] [rbp-140h] BYREF
  __int16 v50; // [rsp+1E0h] [rbp-60h]
  __int128 v51; // [rsp+1E8h] [rbp-58h]
  __int128 v52; // [rsp+1F8h] [rbp-48h]

  v28 = (char *)&`vtable for'std::ostringstream + 24;
  v32 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v4 = v3;
  if ( v3 )
    sub_29BC40();
  *(_DWORD *)(a1 + 1520) = 0;
  v31 = (std::ios_base *)v49;
  std::ios_base::ios_base((std::ios_base *)v49);
  v50 = 0;
  v51 = 0;
  v49[0] = (char *)&`vtable for'std::ios + 16;
  v52 = 0;
  v5 = `VTT for'std::ostringstream[1];
  v49[27] = 0;
  v6 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)&v41[0] = v5;
  v7 = `VTT for'std::ostringstream[2];
  *(_QWORD *)((char *)v41 + v6) = v7;
  std::ios::init();
  v8 = _mm_load_si128(&v32);
  v41[1] = 0;
  v41[0] = v8;
  v49[0] = (char *)&`vtable for'std::ostringstream + 64;
  v30 = (std::locale *)v44;
  v42 = 0;
  v43 = 0;
  std::locale::locale((std::locale *)v44);
  v45 = 16;
  v47 = 0;
  LOBYTE(v48[0]) = 0;
  *((_QWORD *)&v41[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v32.m128i_i64[0] = (__int64)v48;
  v46 = v48;
  std::ios::init();
  v10 = *(_DWORD *)(a1 + 1568);
  if ( v10 == 1 )
  {
    sub_1649FE0(
      (int)v41,
      *(_QWORD *)(a1 + 232),
      a2,
      1,
      1,
      v9,
      v27,
      (int)v41,
      (__int64)v41 + 8,
      (int)v28,
      v29.m128i_i32[0],
      v29.m128i_i32[2],
      (int)v30,
      (int)v31,
      v32.m128i_i32[0],
      v32.m128i_i32[2],
      v33,
      v34,
      (int)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41[0],
      *((void **)&v41[0] + 1));
    v29.m128i_i64[0] = (__int64)&v35;
  }
  else if ( v10 == 2 )
  {
    v19 = *(_QWORD *)(a1 + 232);
    v29.m128i_i64[0] = (__int64)&v35;
    sub_1606360(&v35, a2, v19, 0, 0, 0);
    sub_160E8B0(v41, &v35);
    sub_18572D0(&v37);
  }
  else
  {
    if ( v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1046);
    }
    v34 = 0;
    sub_1862370(&v34, "max_depth", 0xFFFFFFFFLL);
    sub_1862370(&v34, "min_alias_size", 0xFFFFFFFFLL);
    v29.m128i_i64[0] = (__int64)&v35;
    sub_1606330((unsigned int)&v35, a2, *(_QWORD *)(a1 + 232), (unsigned int)&v34, 0, 0, 0);
    sub_160E8B0(v41, &v35);
    sub_18572D0(&v37);
    sub_18572D0(&v34);
  }
  v11 = v46;
  if ( (_QWORD)v43 )
  {
    v12 = v42;
    if ( !(_QWORD)v42 || (unsigned __int64)v42 < (unsigned __int64)v43 )
      v12 = v43;
    v47 = v12 - *((_QWORD *)&v42 + 1);
    *((_BYTE *)v46 + v12 - *((_QWORD *)&v42 + 1)) = 0;
    v11 = v46;
    v35 = &v37;
    if ( v46 != (void *)v32.m128i_i64[0] )
      goto LABEL_11;
  }
  else
  {
    v35 = &v37;
    if ( v46 != (void *)v32.m128i_i64[0] )
    {
LABEL_11:
      v35 = v11;
      v37 = v48[0];
      v13 = v47;
      goto LABEL_12;
    }
  }
  v13 = v47;
  v20 = &v37;
  v21 = v47 + 1;
  v22 = (_DWORD *)v32.m128i_i64[0];
  if ( (unsigned int)(v47 + 1) >= 8 )
  {
    LODWORD(v24) = 0;
    v25 = v32.m128i_i64[0];
    do
    {
      v26 = (unsigned int)v24;
      v24 = (unsigned int)(v24 + 8);
      *(__int64 *)((char *)&v37 + v26) = *(_QWORD *)(v25 + v26);
    }
    while ( (unsigned int)v24 < (v21 & 0xFFFFFFF8) );
    v20 = (__int64 *)((char *)&v37 + v24);
    v32.m128i_i64[0] = v25;
    v22 = (_DWORD *)(v25 + v24);
  }
  v23 = 0;
  if ( (v21 & 4) != 0 )
  {
    *(_DWORD *)v20 = *v22;
    v23 = 4;
  }
  if ( (v21 & 2) != 0 )
  {
    *(_WORD *)((char *)v20 + v23) = *(_WORD *)((char *)v22 + v23);
    v23 += 2;
  }
  if ( (v21 & 1) != 0 )
    *((_BYTE *)v20 + v23) = *((_BYTE *)v22 + v23);
LABEL_12:
  v36 = v13;
  LOBYTE(v48[0]) = 0;
  v46 = (void *)v32.m128i_i64[0];
  v47 = 0;
  std::stringbuf::_M_sync();
  v14 = sub_24ED70((_QWORD *)a1, v29.m128i_i64[0]);
  v15 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&v28),
          (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v35 != &v37 )
  {
    v29 = v15;
    operator delete(v35, v37 + 1);
    v15 = _mm_load_si128(&v29);
  }
  v41[0] = v15;
  v49[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v46 != (void *)v32.m128i_i64[0] )
    operator delete(v46, v48[0] + 1LL);
  *((_QWORD *)&v41[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v30);
  v16 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)&v41[0] = v5;
  v17 = v31;
  *(_QWORD *)((char *)v41 + v16) = v7;
  v49[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v17);
  if ( v4 )
    byte_1C7EBA0 = 1;
  return v14;
}

