__int64 __fastcall sub_4D52E0(__int64 a1)
{
  void *v2; // rax
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rbp
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi

  *(_QWORD *)(a1 + 232) = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                        + 24;
  *(_QWORD *)(a1 + 360) = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                        + 104;
  v2 = (void *)(a1 + 344);
  *(__m128i *)(a1 + 248) = _mm_unpacklo_epi64(
                             (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                     + 64),
                             (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  v3 = *(void **)(a1 + 328);
  if ( v3 != v2 )
    operator delete(v3, *(_QWORD *)(a1 + 344) + 1LL);
  *(_QWORD *)(a1 + 256) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)(a1 + 312));
  *(_QWORD *)(a1
            + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)
            + 232) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v4 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v5 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(_QWORD *)(a1 + 248) = v4;
  *(_QWORD *)(a1 + *(_QWORD *)(v4 - 24) + 248) = v5;
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  *(_QWORD *)(a1 + 232) = v6;
  *(_QWORD *)(a1 + *(_QWORD *)(v6 - 24) + 232) = v7;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 360) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(a1 + 360));
  v8 = *(_QWORD *)(a1 + 224);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(__int64 **)(a1 + 216);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 208);
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_12;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_12:
    v9 = *(__int64 **)(a1 + 216);
    if ( v9 )
LABEL_13:
      sub_186B220(v9 - 1);
  }
  v14 = *(__int64 **)(a1 + 200);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(_QWORD *)(a1 + 192);
          v13 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_21;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_21:
    v14 = *(__int64 **)(a1 + 200);
    if ( v14 )
LABEL_22:
      sub_186B220(v14 - 1);
  }
  v18 = *(__int64 **)(a1 + 184);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(_QWORD *)(a1 + 176);
          v13 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_30;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_30:
    v18 = *(__int64 **)(a1 + 184);
    if ( v18 )
LABEL_31:
      sub_186B220(v18 - 1);
  }
  v22 = *(__int64 **)(a1 + 168);
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 160);
          v13 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_39;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_39:
    v22 = *(__int64 **)(a1 + 168);
    if ( v22 )
LABEL_40:
      sub_186B220(v22 - 1);
  }
  v26 = *(_QWORD *)(a1 + 120);
  while ( v26 )
  {
    sub_4D4FC0(*(_QWORD **)(v26 + 24));
    v27 = (void *)v26;
    v26 = *(_QWORD *)(v26 + 16);
    operator delete(v27, 0x30u);
  }
  v28 = *(void **)(a1 + 72);
  if ( v28 )
    sub_186B220(v28);
  v29 = *(void **)(a1 + 40);
  if ( v29 )
    sub_186B220(v29);
  return sub_DA39E0(a1 + 32);
}

