__int64 __fastcall Z3_rcf_num_to_string(__int64 a1, void *a2, unsigned __int8 a3, __int32 a4)
{
  char v6; // al
  char v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __m128i si128; // xmm3
  int v12; // eax
  int v13; // r9d
  void *v14; // rdx
  __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rbx
  __m128i v18; // xmm0
  __int64 v19; // rax
  _DWORD *v21; // rdi
  _DWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rsi
  __m128i v27; // [rsp+10h] [rbp-218h] BYREF
  std::locale *v28[2]; // [rsp+20h] [rbp-208h] BYREF
  __int64 v29; // [rsp+30h] [rbp-1F8h]
  _OWORD *v30; // [rsp+38h] [rbp-1F0h]
  __m128i v31; // [rsp+40h] [rbp-1E8h] BYREF
  void *v32[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v34[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v35; // [rsp+90h] [rbp-198h]
  __int128 v36; // [rsp+A0h] [rbp-188h]
  char v37[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v38; // [rsp+B8h] [rbp-170h]
  void *v39; // [rsp+C0h] [rbp-168h]
  void *v40; // [rsp+C8h] [rbp-160h]
  _QWORD v41[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v42[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v43; // [rsp+1C0h] [rbp-68h]
  __int128 v44; // [rsp+1C8h] [rbp-60h]
  __int128 v45; // [rsp+1D8h] [rbp-50h]

  v27.m128i_i32[0] = a4;
  v31.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v28 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v7 = v6;
  if ( v6 )
    sub_29F7F0(a1, (__int64)a2, a3, v27.m128i_u8[0]);
  *(_DWORD *)(a1 + 1520) = 0;
  v30 = v34;
  std::ios_base::ios_base((std::ios_base *)v42);
  v44 = 0;
  v45 = 0;
  v42[0] = (char *)&`vtable for'std::ios + 16;
  v43 = 0;
  v42[27] = 0;
  v8 = `VTT for'std::ostringstream[1];
  v9 = `VTT for'std::ostringstream[2];
  v10 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)&v34[0] = v8;
  v29 = v9;
  *(_QWORD *)((char *)v34 + v10) = v9;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v28);
  v34[1] = 0;
  v34[0] = si128;
  v42[0] = (char *)&`vtable for'std::ostringstream + 64;
  v28[0] = (std::locale *)v37;
  v35 = 0;
  v36 = 0;
  std::locale::locale((std::locale *)v37);
  v38 = 16;
  v39 = v41;
  LOBYTE(v41[0]) = 0;
  *((_QWORD *)&v34[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v31.m128i_i64[1] = (__int64)v34 + 8;
  v40 = nullptr;
  std::ios::init();
  v12 = sub_24F090(a1);
  v32[0] = a2;
  sub_16FF050(v12, (_DWORD)v30, (unsigned int)v32, a3, v27.m128i_u8[0], v13);
  v14 = v39;
  if ( (_QWORD)v36 )
  {
    v15 = v35;
    if ( !(_QWORD)v35 || (unsigned __int64)v35 < (unsigned __int64)v36 )
      v15 = v36;
    v40 = (void *)(v15 - *((_QWORD *)&v35 + 1));
    *((_BYTE *)v39 + v15 - *((_QWORD *)&v35 + 1)) = 0;
    v14 = v39;
    v32[0] = v33;
    if ( v39 != v41 )
      goto LABEL_7;
  }
  else
  {
    v32[0] = v33;
    if ( v39 != v41 )
    {
LABEL_7:
      v32[0] = v14;
      v33[0] = v41[0];
      v16 = v40;
      goto LABEL_8;
    }
  }
  v16 = v40;
  v21 = v33;
  v22 = v41;
  v23 = (_DWORD)v40 + 1;
  if ( (unsigned int)((_DWORD)v40 + 1) >= 8 )
  {
    LODWORD(v25) = 0;
    do
    {
      v26 = (unsigned int)v25;
      v25 = (unsigned int)(v25 + 8);
      *(_QWORD *)((char *)v33 + v26) = *(_QWORD *)((char *)v41 + v26);
    }
    while ( (unsigned int)v25 < (v23 & 0xFFFFFFF8) );
    v21 = (_DWORD *)((char *)v33 + v25);
    v22 = (_DWORD *)((char *)v41 + v25);
  }
  v24 = 0;
  if ( (v23 & 4) != 0 )
  {
    *v21 = *v22;
    v24 = 4;
  }
  if ( (v23 & 2) != 0 )
  {
    *(_WORD *)((char *)v21 + v24) = *(_WORD *)((char *)v22 + v24);
    v24 += 2;
  }
  if ( (v23 & 1) != 0 )
    *((_BYTE *)v21 + v24) = *((_BYTE *)v22 + v24);
LABEL_8:
  v32[1] = v16;
  v39 = v41;
  v40 = nullptr;
  LOBYTE(v41[0]) = 0;
  std::stringbuf::_M_sync();
  v17 = sub_24ED70((_QWORD *)a1, (__int64)v32);
  v18 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v31), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v32[0] != v33 )
  {
    v27 = v18;
    operator delete(v32[0], v33[0] + 1LL);
    v18 = _mm_load_si128(&v27);
  }
  v34[0] = v18;
  v42[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v39 != v41 )
    operator delete(v39, v41[0] + 1LL);
  *((_QWORD *)&v34[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v28[0]);
  v19 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)&v34[0] = v8;
  *(_QWORD *)((char *)v34 + v19) = v29;
  v42[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v42);
  if ( v7 )
    byte_1C7EBA0 = 1;
  return v17;
}

