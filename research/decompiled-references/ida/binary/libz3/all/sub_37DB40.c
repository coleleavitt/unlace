__int64 __fastcall sub_37DB40(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __m128i si128; // xmm2
  void *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 *v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rbp
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  void *v25; // rdi
  __m128i v27[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 552);
  v27[0] = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64),
             (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v2 )
    sub_186B220(v2);
  v3 = *(void **)(a1 + 528);
  if ( v3 )
    sub_186B220(v3);
  si128 = _mm_load_si128(v27);
  v5 = *(void **)(a1 + 216);
  *(_QWORD *)(a1 + 120) = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                        + 24;
  *(_QWORD *)(a1 + 248) = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                        + 104;
  *(__m128i *)(a1 + 136) = si128;
  if ( v5 != (void *)(a1 + 232) )
    operator delete(v5, *(_QWORD *)(a1 + 232) + 1LL);
  *(_QWORD *)(a1 + 144) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)(a1 + 200));
  *(_QWORD *)(a1
            + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)
            + 120) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(_QWORD *)(a1 + 136) = v6;
  *(_QWORD *)(a1 + *(_QWORD *)(v6 - 24) + 136) = v7;
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  *(_QWORD *)(a1 + 120) = v8;
  *(_QWORD *)(a1 + *(_QWORD *)(v8 - 24) + 120) = v9;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 248) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(a1 + 248));
  v10 = *(__int64 **)(a1 + 112);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *(_QWORD *)(a1 + 104);
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_14;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_14:
    v10 = *(__int64 **)(a1 + 112);
    if ( v10 )
LABEL_15:
      sub_186B220(v10 - 1);
  }
  v15 = *(__int64 **)(a1 + 96);
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *(_QWORD *)(a1 + 88);
          v14 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_23;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_23:
    v15 = *(__int64 **)(a1 + 96);
    if ( v15 )
LABEL_24:
      sub_186B220(v15 - 1);
  }
  v19 = *(__int64 **)(a1 + 80);
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = *(_QWORD *)(a1 + 72);
          v14 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_32;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_32:
    v19 = *(__int64 **)(a1 + 80);
    if ( v19 )
LABEL_33:
      sub_186B220(v19 - 1);
  }
  v23 = *(_QWORD *)(a1 + 64);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = *(_QWORD *)(a1 + 56);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(void **)(a1 + 32);
  if ( v25 )
    sub_186B220(v25);
  return sub_14B63F0(a1 + 16);
}

