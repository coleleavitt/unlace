void __fastcall sub_2B28C0(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbx
  __m128i *v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rbp
  __int64 *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbp
  __int64 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  __int64 *v37; // rbp
  __int64 *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  void (__fastcall ***v45)(void *); // rbx
  void (__fastcall ***v46)(_QWORD); // rbx

  v2 = (void (__fastcall ***)(_QWORD))a1[9];
  *a1 = &off_1C4CC50;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = (__m128i *)a1[8];
  if ( v3 )
  {
    v4 = v3[77].m128i_i64[0];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    v5 = (__int64 *)v3[76].m128i_i64[1];
    if ( v5 )
    {
      v6 = &v5[*((unsigned int *)v5 - 1)];
      if ( v5 >= v6 )
        goto LABEL_14;
      do
      {
        while ( 1 )
        {
          v7 = *v5;
          if ( *v5 )
          {
            v8 = v3[76].m128i_i64[0];
            v9 = (*(_DWORD *)(v7 + 8))-- == 1;
            if ( v9 )
              break;
          }
          if ( ++v5 >= v6 )
            goto LABEL_13;
        }
        sub_15D7BC0(v8, v7);
        ++v5;
      }
      while ( v5 < v6 );
LABEL_13:
      v5 = (__int64 *)v3[76].m128i_i64[1];
      if ( v5 )
LABEL_14:
        sub_186B220(v5 - 1);
    }
    v3[59].m128i_i64[1] = (__int64)&`vtable for'std::ofstream + 64;
    v3[44] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
               (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
    std::filebuf::close();
    std::__basic_file<char>::~__basic_file();
    v3[44].m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::~locale((std::locale *)&v3[48]);
    v10 = `VTT for'std::ofstream[1];
    v11 = `VTT for'std::ofstream[2];
    v3[44].m128i_i64[0] = v10;
    *(__int64 *)((char *)v3[44].m128i_i64 + *(_QWORD *)(v10 - 24)) = v11;
    v3[59].m128i_i64[1] = (__int64)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base((std::ios_base *)&v3[59].m128i_u64[1]);
    v12 = v3[43].m128i_i64[1];
    if ( v12 )
      sub_186B220((void *)(v12 - 8));
    v13 = v3[39].m128i_i64[1];
    if ( v13 )
      sub_186B220((void *)(v13 - 8));
    v14 = (__int64 *)v3[39].m128i_i64[0];
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 >= v15 )
        goto LABEL_27;
      do
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = v3[38].m128i_i64[1];
            v9 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v9 )
              break;
          }
          if ( ++v14 >= v15 )
            goto LABEL_26;
        }
        sub_15D7BC0(v17, v16);
        ++v14;
      }
      while ( v14 < v15 );
LABEL_26:
      v14 = (__int64 *)v3[39].m128i_i64[0];
      if ( v14 )
LABEL_27:
        sub_186B220(v14 - 1);
    }
    v18 = (void *)v3[38].m128i_i64[0];
    v3[35].m128i_i64[0] = (__int64)&off_1C62200;
    if ( v18 )
      sub_186B220(v18);
    v19 = (void *)v3[36].m128i_i64[1];
    if ( v19 )
      sub_186B220(v19);
    v20 = v3[34].m128i_i64[1];
    if ( v20 )
      sub_186B220((void *)(v20 - 8));
    v21 = v3[34].m128i_i64[0];
    if ( v21 )
      sub_186B220((void *)(v21 - 8));
    v22 = v3[33].m128i_i64[1];
    if ( v22 )
      sub_186B220((void *)(v22 - 8));
    v23 = v3[33].m128i_i64[0];
    if ( v23 )
      sub_186B220((void *)(v23 - 8));
    v24 = v3[32].m128i_i64[1];
    if ( v24 )
      sub_186B220((void *)(v24 - 8));
    v25 = v3[32].m128i_i64[0];
    if ( v25 )
      sub_186B220((void *)(v25 - 8));
    v26 = v3[31].m128i_i64[0];
    if ( v26 )
      sub_186B220((void *)(v26 - 8));
    v27 = (__int64 *)v3[30].m128i_i64[1];
    if ( v27 )
    {
      v28 = &v27[*((unsigned int *)v27 - 1)];
      if ( v27 >= v28 )
        goto LABEL_54;
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v30 = v3[30].m128i_i64[0];
            v9 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v9 )
              break;
          }
          if ( ++v27 >= v28 )
            goto LABEL_53;
        }
        sub_15D7BC0(v30, v29);
        ++v27;
      }
      while ( v27 < v28 );
LABEL_53:
      v27 = (__int64 *)v3[30].m128i_i64[1];
      if ( v27 )
LABEL_54:
        sub_186B220(v27 - 1);
    }
    v31 = (void *)v3[29].m128i_i64[1];
    if ( v31 )
      sub_186B220(v31);
    v32 = v3[28].m128i_i64[0];
    if ( v32 )
      sub_186B220((void *)(v32 - 8));
    v33 = v3[27].m128i_i64[0];
    if ( v33 )
      sub_186B220((void *)(v33 - 8));
    v34 = v3[26].m128i_i64[0];
    if ( v34 )
      sub_186B220((void *)(v34 - 8));
    v35 = (void *)v3[24].m128i_i64[1];
    v3[2].m128i_i64[0] = (__int64)&off_1C63D10;
    if ( v35 )
      sub_186B220(v35);
    v36 = (void *)v3[24].m128i_i64[0];
    if ( v36 )
      sub_186B220(v36);
    v37 = (__int64 *)v3[19].m128i_i64[1];
    if ( v37 )
    {
      v38 = &v37[*((unsigned int *)v37 - 1)];
      if ( v37 >= v38 )
        goto LABEL_75;
      do
      {
        while ( 1 )
        {
          v39 = *v37;
          if ( *v37 )
          {
            v40 = v3[19].m128i_i64[0];
            v9 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v9 )
              break;
          }
          if ( ++v37 >= v38 )
            goto LABEL_74;
        }
        sub_15D7BC0(v40, v39);
        ++v37;
      }
      while ( v37 < v38 );
LABEL_74:
      v37 = (__int64 *)v3[19].m128i_i64[1];
      if ( v37 )
LABEL_75:
        sub_186B220(v37 - 1);
    }
    v41 = v3[18].m128i_i64[1];
    if ( v41 )
      sub_186B220((void *)(v41 - 8));
    v42 = (void *)v3[4].m128i_i64[0];
    v3[2].m128i_i64[0] = (__int64)qword_1C7A350;
    if ( v42 )
      sub_186B220(v42);
    v43 = (void *)v3[2].m128i_i64[1];
    if ( v43 )
      sub_186B220(v43);
    v44 = (void *)v3->m128i_i64[1];
    if ( v44 )
      sub_186B220(v44);
    sub_186B220(v3);
  }
  sub_1857540(a1 + 6);
  sub_18572D0(a1 + 5);
  v45 = (void (__fastcall ***)(void *))a1[4];
  if ( v45 )
  {
    v9 = (*((_DWORD *)v45 + 12))-- == 1;
    if ( v9 )
    {
      (**v45)(v45);
      sub_186B220(v45);
    }
  }
  v46 = (void (__fastcall ***)(_QWORD))a1[3];
  if ( v46 )
  {
    (**v46)(a1[3]);
    sub_186B220(v46);
  }
  operator delete(a1, 0x80u);
}

