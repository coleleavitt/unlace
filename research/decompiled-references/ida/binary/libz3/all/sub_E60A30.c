void __fastcall sub_E60A30(__int64 *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6)
{
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+0h] [rbp-288h]
  std::ios_base *v17; // [rsp+8h] [rbp-280h]
  __m128i v18; // [rsp+10h] [rbp-278h] BYREF
  __int64 v19; // [rsp+20h] [rbp-268h]
  void *v20; // [rsp+30h] [rbp-258h] BYREF
  int v21; // [rsp+38h] [rbp-250h]
  __int64 v22; // [rsp+40h] [rbp-248h] BYREF
  int v23; // [rsp+48h] [rbp-240h]
  __m128i v24; // [rsp+50h] [rbp-238h] BYREF
  int v25; // [rsp+60h] [rbp-228h]
  int v26; // [rsp+68h] [rbp-220h]
  int v27; // [rsp+70h] [rbp-218h]
  int v28; // [rsp+78h] [rbp-210h]
  int v29; // [rsp+80h] [rbp-208h]
  int v30; // [rsp+88h] [rbp-200h]
  int v31[6]; // [rsp+90h] [rbp-1F8h] BYREF
  void *v32; // [rsp+A8h] [rbp-1E0h]
  int v33; // [rsp+B0h] [rbp-1D8h]
  __int64 v34; // [rsp+B8h] [rbp-1D0h]
  _QWORD v35[28]; // [rsp+148h] [rbp-140h] BYREF
  __int16 v36; // [rsp+228h] [rbp-60h]
  __int128 v37; // [rsp+230h] [rbp-58h]
  __int128 v38; // [rsp+240h] [rbp-48h]

  v7 = (_BYTE *)a1[11];
  if ( v7 )
  {
    v8 = a1[11] & 7;
    if ( v8 != 1 )
    {
      if ( *v7 )
      {
        sub_180CE20(
          (int)&v20,
          (_DWORD)a1 + 88,
          v8,
          a4,
          a5,
          a6,
          v16,
          v17,
          v18.m128i_i32[0],
          v18.m128i_i64[1],
          v19,
          (int)&v20,
          (int)v20,
          v21,
          v22,
          v23,
          v24.m128i_i32[0],
          v24.m128i_i32[2],
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31[0],
          v31[2],
          v31[4],
          v32,
          v33,
          v34);
        std::ios_base::ios_base((std::ios_base *)v35);
        v37 = 0;
        v38 = 0;
        v35[0] = (char *)&`vtable for'std::ios + 16;
        v36 = 0;
        v35[27] = 0;
        v10 = `VTT for'std::ofstream[1];
        v11 = *(_QWORD *)(v10 - 24);
        v24.m128i_i64[0] = v10;
        v12 = (__int64 *)((char *)v24.m128i_i64 + v11);
        v13 = `VTT for'std::ofstream[2];
        *v12 = v13;
        v19 = v13;
        std::ios::init();
        v24.m128i_i64[0] = (__int64)&`vtable for'std::ofstream + 24;
        v35[0] = (char *)&`vtable for'std::ofstream + 64;
        std::filebuf::basic_filebuf();
        std::ios::init();
        std::filebuf::open();
        std::ios::clear();
        v14 = *a1;
        v18 = _mm_unpacklo_epi64(
                (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
                (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
        (*(void (__fastcall **)(__int64 *, __m128i *, _QWORD, __int64))(v14 + 328))(a1, &v24, a2, a3);
        v24 = _mm_load_si128(&v18);
        v35[0] = (char *)&`vtable for'std::ofstream + 64;
        std::filebuf::close();
        std::__basic_file<char>::~__basic_file();
        v24.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
        std::locale::~locale((std::locale *)v31);
        v15 = *(_QWORD *)(v10 - 24);
        v24.m128i_i64[0] = v10;
        *(__int64 *)((char *)v24.m128i_i64 + v15) = v19;
        v35[0] = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base((std::ios_base *)v35);
        if ( v20 != &v22 )
          operator delete(v20, v22 + 1);
      }
    }
  }
}

