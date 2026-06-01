__int64 __fastcall sub_AAD480(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  __m128i si128; // xmm0
  unsigned int v10; // ebp
  __int64 v11; // rax
  std::ios_base *v13[2]; // [rsp+0h] [rbp-288h] BYREF
  __int64 v14; // [rsp+10h] [rbp-278h]
  int v15; // [rsp+1Ch] [rbp-26Ch]
  int v16[2]; // [rsp+20h] [rbp-268h]
  __int64 v17; // [rsp+28h] [rbp-260h]
  void *v18[2]; // [rsp+30h] [rbp-258h] BYREF
  __int64 v19; // [rsp+40h] [rbp-248h] BYREF
  __m128i v20; // [rsp+50h] [rbp-238h] BYREF
  _BYTE v21[48]; // [rsp+90h] [rbp-1F8h] BYREF
  int v22[2]; // [rsp+148h] [rbp-140h] BYREF
  int v23[2]; // [rsp+220h] [rbp-68h]
  __int64 v24; // [rsp+228h] [rbp-60h]
  int v25[4]; // [rsp+230h] [rbp-58h]
  void *ptr[2]; // [rsp+240h] [rbp-48h]

  LODWORD(v13[0]) = a2;
  v14 = a3;
  v15 = a4;
  *(_QWORD *)v16 = a5;
  v17 = (__int64)v18;
  sub_AA9180(v18, a1);
  std::ios_base::ios_base((std::ios_base *)v22);
  *(_OWORD *)v25 = 0;
  *(_OWORD *)ptr = 0;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ios + 16;
  LOWORD(v24) = 0;
  *(_QWORD *)v23 = 0;
  v6 = `VTT for'std::ofstream[1];
  v7 = `VTT for'std::ofstream[2];
  v8 = *(_QWORD *)(v6 - 24);
  v20.m128i_i64[0] = v6;
  *(__int64 *)((char *)v20.m128i_i64 + v8) = v7;
  std::ios::init();
  v20.m128i_i64[0] = (__int64)&`vtable for'std::ofstream + 24;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  sub_AA9690(a1, (__int64)&v20, (unsigned int)v13[0], (unsigned int *)v14, v15, *(const char ***)v16);
  si128 = _mm_unpacklo_epi64(
            (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
            (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
  if ( !std::filebuf::close() )
  {
    *(__m128i *)v13 = si128;
    std::ios::clear();
    si128 = _mm_load_si128((const __m128i *)v13);
  }
  v10 = *(_DWORD *)(a1 + 7512);
  v20 = si128;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v20.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v21);
  v11 = *(_QWORD *)(v6 - 24);
  v20.m128i_i64[0] = v6;
  *(__int64 *)((char *)v20.m128i_i64 + v11) = v7;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v22);
  if ( v18[0] != &v19 )
    operator delete(v18[0], v19 + 1);
  return v10;
}

