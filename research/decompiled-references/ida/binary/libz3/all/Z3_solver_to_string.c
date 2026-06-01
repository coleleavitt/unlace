__int64 __fastcall Z3_solver_to_string(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __m128i si128; // xmm3
  void *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __int64 v13; // rax
  _DWORD *v15; // rdi
  _DWORD *v16; // rcx
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rsi
  std::locale *v21[2]; // [rsp+10h] [rbp-208h] BYREF
  __m128i v22; // [rsp+20h] [rbp-1F8h] BYREF
  char v23; // [rsp+37h] [rbp-1E1h]
  __m128i v24; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-1D0h]
  _QWORD v26[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _OWORD v27[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v28; // [rsp+80h] [rbp-198h]
  __int128 v29; // [rsp+90h] [rbp-188h]
  _BYTE v30[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v31; // [rsp+A8h] [rbp-170h]
  void *v32; // [rsp+B0h] [rbp-168h]
  __int64 v33; // [rsp+B8h] [rbp-160h]
  _QWORD v34[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v35[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v36; // [rsp+1B0h] [rbp-68h]
  __int128 v37; // [rsp+1B8h] [rbp-60h]
  __int128 v38; // [rsp+1C8h] [rbp-50h]

  v24.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v21 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v23 = v3;
  if ( v3 )
    sub_29E520(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  v22.m128i_i64[0] = (__int64)v27;
  std::ios_base::ios_base((std::ios_base *)v35);
  v37 = 0;
  v38 = 0;
  v35[0] = (char *)&`vtable for'std::ios + 16;
  v36 = 0;
  v35[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = (_QWORD *)((char *)v27 + *(_QWORD *)(v4 - 24));
  *(_QWORD *)&v27[0] = v4;
  *v6 = v5;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v21);
  v21[0] = (std::locale *)v30;
  v27[0] = si128;
  v35[0] = (char *)&`vtable for'std::ostringstream + 64;
  v27[1] = 0;
  v28 = 0;
  v29 = 0;
  std::locale::locale((std::locale *)v30);
  v31 = 16;
  v32 = v34;
  v33 = 0;
  *((_QWORD *)&v27[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  LOBYTE(v34[0]) = 0;
  std::ios::init();
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a2 + 32) + 328LL))(
    *(_QWORD *)(a2 + 32),
    v22.m128i_i64[0],
    0,
    0);
  v8 = v32;
  if ( (_QWORD)v29 )
  {
    v9 = v28;
    if ( !(_QWORD)v28 || (unsigned __int64)v28 < (unsigned __int64)v29 )
      v9 = v29;
    v33 = v9 - *((_QWORD *)&v28 + 1);
    *((_BYTE *)v32 + v9 - *((_QWORD *)&v28 + 1)) = 0;
    v8 = v32;
    v24.m128i_i64[1] = (__int64)v26;
    if ( v32 != v34 )
      goto LABEL_9;
  }
  else
  {
    v24.m128i_i64[1] = (__int64)v26;
    if ( v32 != v34 )
    {
LABEL_9:
      v24.m128i_i64[1] = (__int64)v8;
      v26[0] = v34[0];
      v10 = v33;
      goto LABEL_10;
    }
  }
  v10 = v33;
  v15 = v26;
  v16 = v34;
  v17 = v33 + 1;
  if ( (unsigned int)(v33 + 1) >= 8 )
  {
    LODWORD(v19) = 0;
    do
    {
      v20 = (unsigned int)v19;
      v19 = (unsigned int)(v19 + 8);
      *(_QWORD *)((char *)v26 + v20) = *(_QWORD *)((char *)v34 + v20);
    }
    while ( (unsigned int)v19 < (v17 & 0xFFFFFFF8) );
    v15 = (_DWORD *)((char *)v26 + v19);
    v16 = (_DWORD *)((char *)v34 + v19);
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
LABEL_10:
  v25 = v10;
  v32 = v34;
  v33 = 0;
  LOBYTE(v34[0]) = 0;
  std::stringbuf::_M_sync();
  v11 = sub_24ED70((_QWORD *)a1, (__int64)&v24.m128i_i64[1]);
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v24), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( (_QWORD *)v24.m128i_i64[1] != v26 )
  {
    v22 = v12;
    operator delete((void *)v24.m128i_i64[1], v26[0] + 1LL);
    v12 = _mm_load_si128(&v22);
  }
  v27[0] = v12;
  v35[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v32 != v34 )
    operator delete(v32, v34[0] + 1LL);
  *((_QWORD *)&v27[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v21[0]);
  v13 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v27[0] = v4;
  *(_QWORD *)((char *)v27 + v13) = v5;
  v35[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v35);
  if ( v23 )
    byte_1C7EBA0 = 1;
  return v11;
}

