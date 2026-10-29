__int64 __fastcall sub_AAD1B0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, unsigned int a6, const char **a7)
{
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdi
  __m128i si128; // xmm0
  unsigned int v11; // r13d
  __int64 v12; // rax
  int v17[4]; // [rsp+20h] [rbp-270h] BYREF
  int v18[2]; // [rsp+30h] [rbp-260h]
  int v19[2]; // [rsp+38h] [rbp-258h]
  void *v20; // [rsp+40h] [rbp-250h] BYREF
  __int64 v21; // [rsp+50h] [rbp-240h] BYREF
  __m128i v22; // [rsp+60h] [rbp-230h] BYREF
  _BYTE v23[48]; // [rsp+A0h] [rbp-1F0h] BYREF
  _QWORD v24[28]; // [rsp+158h] [rbp-138h] BYREF
  __int16 v25; // [rsp+238h] [rbp-58h]
  __int128 v26; // [rsp+240h] [rbp-50h]
  __int128 v27; // [rsp+250h] [rbp-40h]

  *(_QWORD *)v19 = a1;
  v17[0] = a2;
  *(_QWORD *)v18 = a3;
  sub_AA9180(&v20, a1);
  std::ios_base::ios_base((std::ios_base *)v24);
  v26 = 0;
  v27 = 0;
  v24[0] = (char *)&`vtable for'std::ios + 16;
  v25 = 0;
  v24[27] = 0;
  v7 = `VTT for'std::ofstream[1];
  v8 = `VTT for'std::ofstream[2];
  v9 = *(_QWORD *)(v7 - 24);
  v22.m128i_i64[0] = v7;
  *(__int64 *)((char *)v22.m128i_i64 + v9) = v8;
  std::ios::init();
  v22.m128i_i64[0] = (__int64)&`vtable for'std::ofstream + 24;
  v24[0] = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  sub_AAA120(*(__int64 *)v19, (__int64)&v22, v17[0], *(unsigned int **)v18, a4, a5, a6, a7, 0, 0);
  si128 = _mm_unpacklo_epi64(
            (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
            (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
  if ( !std::filebuf::close() )
  {
    *(__m128i *)v17 = si128;
    std::ios::clear();
    si128 = _mm_load_si128((const __m128i *)v17);
  }
  v22 = si128;
  v11 = *(_DWORD *)(*(_QWORD *)v19 + 7512LL);
  v24[0] = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v22.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v23);
  v12 = *(_QWORD *)(v7 - 24);
  v22.m128i_i64[0] = v7;
  *(__int64 *)((char *)v22.m128i_i64 + v12) = v8;
  v24[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v24);
  if ( v20 != &v21 )
    operator delete(v20, v21 + 1);
  return v11;
}

