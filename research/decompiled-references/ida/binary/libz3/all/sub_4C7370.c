__int64 __fastcall sub_4C7370(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r15
  __m128i si128; // xmm1
  void *v9; // r13
  _BYTE *v10; // r8
  _BYTE *v11; // rdx
  signed __int64 v12; // r8
  size_t v13; // r12
  __m128i v14; // xmm0
  __int64 v15; // rax
  void *v17; // rsi
  unsigned __int64 v18; // rdi
  size_t v19; // rax
  std::locale *v20[2]; // [rsp+0h] [rbp-218h] BYREF
  _OWORD *v21; // [rsp+10h] [rbp-208h]
  __m128i v22; // [rsp+18h] [rbp-200h] BYREF
  size_t v23; // [rsp+28h] [rbp-1F0h]
  _BYTE v24[16]; // [rsp+30h] [rbp-1E8h] BYREF
  char v25[32]; // [rsp+40h] [rbp-1D8h] BYREF
  _OWORD v26[2]; // [rsp+60h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+80h] [rbp-198h]
  __int128 v28; // [rsp+90h] [rbp-188h]
  char v29[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v30; // [rsp+A8h] [rbp-170h]
  void *v31; // [rsp+B0h] [rbp-168h]
  size_t n; // [rsp+B8h] [rbp-160h]
  _QWORD v33[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v34[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v35; // [rsp+1B0h] [rbp-68h]
  __int128 v36; // [rsp+1B8h] [rbp-60h]
  __int128 v37; // [rsp+1C8h] [rbp-50h]

  v21 = v26;
  v22.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v20 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v34);
  v36 = 0;
  v37 = 0;
  v34[0] = (char *)&`vtable for'std::ios + 16;
  v35 = 0;
  v34[27] = 0;
  v5 = `VTT for'std::ostringstream[1];
  v6 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)&v26[0] = v5;
  v7 = `VTT for'std::ostringstream[2];
  *(_QWORD *)((char *)v26 + v6) = v7;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v20);
  v26[1] = 0;
  v26[0] = si128;
  v34[0] = (char *)&`vtable for'std::ostringstream + 64;
  v20[0] = (std::locale *)v29;
  *(_OWORD *)src = 0;
  v28 = 0;
  std::locale::locale((std::locale *)v29);
  v30 = 16;
  LOBYTE(v33[0]) = 0;
  *((_QWORD *)&v26[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v22.m128i_i64[1] = (__int64)v33;
  v31 = v33;
  n = 0;
  std::ios::init();
  sub_1606360(v24, *a3, **(_QWORD **)(a2 + 8), 0, 0, 0);
  sub_160E8B0(v21, v24);
  v9 = (void *)(a1 + 16);
  sub_18572D0(v25);
  v10 = (_BYTE *)v28;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( !v10 )
  {
    v13 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v23 = n;
        v18 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v23 = 30;
        v18 = 31;
      }
      v9 = (void *)operator new(v18);
      sub_233E40(a1);
      v19 = v23;
      *(_QWORD *)a1 = v9;
      v17 = v31;
      *(_QWORD *)(a1 + 16) = v19;
    }
    else
    {
      if ( !n )
        goto LABEL_10;
      v17 = v31;
      if ( n == 1 )
      {
        *(_BYTE *)(a1 + 16) = *(_BYTE *)v31;
        goto LABEL_10;
      }
    }
    memcpy(v9, v17, v13);
LABEL_16:
    v9 = *(void **)a1;
    goto LABEL_10;
  }
  v11 = v10;
  if ( src[0] >= v10 )
    v10 = src[0];
  if ( !src[0] )
    v10 = v11;
  v12 = v10 - (char *)src[1];
  v13 = v12;
  if ( v12 < 0 )
    std::__throw_length_error("basic_string::_M_replace");
  if ( (unsigned __int64)v12 > 0xF )
  {
    sub_23A830((_QWORD *)a1, 0, 0, (char *)src[1], v12);
    goto LABEL_16;
  }
  if ( src[1] == v9 )
  {
    std::string::_M_replace_cold();
    v9 = *(void **)a1;
  }
  else if ( v12 )
  {
    if ( v12 == 1 )
      *(_BYTE *)(a1 + 16) = *(_BYTE *)src[1];
    else
      memcpy((void *)(a1 + 16), src[1], v12);
  }
LABEL_10:
  *(_QWORD *)(a1 + 8) = v13;
  *((_BYTE *)v9 + v13) = 0;
  v14 = _mm_loadl_epi64(&v22);
  v34[0] = (char *)&`vtable for'std::ostringstream + 64;
  v26[0] = _mm_unpacklo_epi64(v14, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v31 != (void *)v22.m128i_i64[1] )
    operator delete(v31, v33[0] + 1LL);
  *((_QWORD *)&v26[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v20[0]);
  v15 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)&v26[0] = v5;
  *(_QWORD *)((char *)v26 + v15) = v7;
  v34[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v34);
  return a1;
}

