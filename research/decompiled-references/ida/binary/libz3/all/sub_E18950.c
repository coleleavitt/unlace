void __fastcall sub_E18950(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdi
  std::ostream *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // si
  std::ostream *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r12
  __int64 (__fastcall *v15)(__int64, unsigned int); // rax
  _QWORD *exception; // rbx
  int v17; // [rsp+0h] [rbp-268h]
  int v18[2]; // [rsp+8h] [rbp-260h] BYREF
  __m128i v19; // [rsp+10h] [rbp-258h] BYREF
  __m128i v20; // [rsp+20h] [rbp-248h] BYREF
  __m128i v21; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v22[48]; // [rsp+70h] [rbp-1F8h] BYREF
  _QWORD v23[28]; // [rsp+128h] [rbp-140h] BYREF
  __int16 v24; // [rsp+208h] [rbp-60h]
  __int128 v25; // [rsp+210h] [rbp-58h]
  __int128 v26; // [rsp+220h] [rbp-48h]

  if ( !(unsigned __int8)sub_DF7C80(a2) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "proof construction is not enabled, use command (set-option :produce-proofs true)");
LABEL_18:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( !*(_QWORD *)(a2 + 296) || (unsigned int)sub_DF7CC0(a2) )
    goto LABEL_17;
  sub_DFBCB0(a2);
  v2 = *(_BYTE *)(a2 + 273) == 0;
  *(_QWORD *)v18 = *(_QWORD *)(a2 + 296);
  if ( !v2 )
    return;
  v3 = sub_E39670(*(_QWORD *)(a2 + 872));
  v4 = v3;
  if ( !v3 )
  {
LABEL_17:
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "proof is not available");
    goto LABEL_18;
  }
  ++*(_DWORD *)(v3 + 8);
  if ( (unsigned __int8)sub_DF7CA0(a2) )
  {
    sub_DFBCB0(a2);
    if ( !(unsigned __int8)sub_1664530(*(_QWORD *)(a2 + 296), v17, v18[0], v19.m128i_i32[0], (void *)v19.m128i_i64[1]) )
    {
      v14 = __cxa_allocate_exception(0x30u);
      sub_305660(v14, "proof is not well sorted");
      __cxa_throw(v14, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
  std::ios_base::ios_base((std::ios_base *)v23);
  v25 = 0;
  v26 = 0;
  v23[0] = (char *)&`vtable for'std::ios + 16;
  v24 = 0;
  v23[27] = 0;
  v5 = `VTT for'std::ofstream[1];
  v6 = `VTT for'std::ofstream[2];
  v7 = *(_QWORD *)(v5 - 24);
  v21.m128i_i64[0] = v5;
  *(__int64 *)((char *)v21.m128i_i64 + v7) = v6;
  std::ios::init();
  v21.m128i_i64[0] = (__int64)&`vtable for'std::ofstream + 24;
  v23[0] = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)v18), (__m128i)(unsigned __int64)v4);
  v8 = (std::ostream *)sub_1603F80(&v21, &v20);
  v9 = *(_QWORD *)(*(_QWORD *)v8 - 24LL);
  v10 = *(_QWORD *)((char *)v8 + v9 + 240);
  if ( !v10 )
    std::__throw_bad_cast();
  if ( *(_BYTE *)(v10 + 56) )
  {
    v11 = *(_BYTE *)(v10 + 67);
  }
  else
  {
    v19.m128i_i64[0] = *(_QWORD *)((char *)v8 + v9 + 240);
    std::ctype<char>::_M_widen_init();
    v11 = 10;
    v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19.m128i_i64[0] + 48LL);
    if ( v15 != sub_26BE90 )
      v11 = v15(v19.m128i_i64[0], 10u);
  }
  v12 = (std::ostream *)std::ostream::put(v8, v11);
  v19 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
  std::ostream::flush(v12);
  v21 = _mm_load_si128(&v19);
  v23[0] = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v21.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v22);
  v13 = *(_QWORD *)(v5 - 24);
  v21.m128i_i64[0] = v5;
  *(__int64 *)((char *)v21.m128i_i64 + v13) = v6;
  v23[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v23);
  v2 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( v2 )
    sub_15D7BC0(*(_QWORD *)v18, v4);
}

