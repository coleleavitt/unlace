__int64 __fastcall sub_6773B0(
        __int64 (__fastcall **a1)(_QWORD, __int128 *, __int64),
        unsigned __int64 *a2,
        int a3,
        void **a4,
        _QWORD *a5,
        _BYTE *a6)
{
  char v6; // bp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  char *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  char *v15; // rbx
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  char *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r13
  void *v25; // rax
  size_t v26; // rdx
  void *v27; // rax
  __int64 v28; // r9
  size_t v29; // rdx
  void *v30; // rax
  size_t v31; // rdx
  char *v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r12
  char *v35; // rbx
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  __m128i v39; // xmm0
  __int64 v40; // r12
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  _BYTE *v43; // rbx
  __m128i v47; // [rsp+28h] [rbp-C0h] BYREF
  size_t v48; // [rsp+38h] [rbp-B0h]
  void **p_ptr; // [rsp+40h] [rbp-A8h]
  char *v50; // [rsp+48h] [rbp-A0h]
  __int64 (__fastcall **v51[2])(_QWORD, __int128 *, __int64); // [rsp+50h] [rbp-98h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+60h] [rbp-88h]
  void **v53; // [rsp+68h] [rbp-80h]
  _QWORD *v54; // [rsp+70h] [rbp-78h]
  __int64 v55; // [rsp+78h] [rbp-70h]
  int v56; // [rsp+80h] [rbp-68h]
  char v57; // [rsp+84h] [rbp-64h]
  void *ptr; // [rsp+88h] [rbp-60h] BYREF
  __m128i v59; // [rsp+90h] [rbp-58h]
  char v60; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-40h]

  v6 = a3;
  v61 = __readfsqword(0x28u);
  v51[1] = a1;
  v51[0] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))&off_2B373C8;
  v52 = &off_2B37398;
  if ( (a3 & 1) != 0 )
  {
    v54 = a5;
    v55 = -1;
    v53 = a4;
    v56 = a3;
    v57 = 0;
    ptr = nullptr;
    v59 = 0;
  }
  else
  {
    v54 = a5;
    p_ptr = &ptr;
    v53 = &ptr;
    v55 = -1;
    v56 = a3;
    v57 = 0;
    ptr = nullptr;
    v59 = 0;
    if ( (a3 & 5) == 0 )
    {
      v7 = (__int64)a4[1];
      v47.m128i_i64[0] = v7;
      if ( v7 )
      {
        v50 = (char *)qalloc_or_throw(80 * v7);
        v20 = v50;
        v21 = 0;
        do
        {
          v23 = (__int64)*a4 + 80 * v21;
          *(_QWORD *)v20 = 0;
          *(_OWORD *)(v20 + 8) = 0;
          v24 = v23;
          if ( *(_QWORD *)(v23 + 8) )
          {
            v47.m128i_i64[1] = *(_QWORD *)(v23 + 8);
            v25 = (void *)qalloc_or_throw(v47.m128i_i64[1]);
            v26 = v47.m128i_u64[1];
            *(_QWORD *)v20 = v25;
            *((_QWORD *)v20 + 2) = v26;
            memcpy(v25, *(const void **)v24, v26);
            *((_QWORD *)v20 + 1) = v47.m128i_i64[1];
          }
          *((_QWORD *)v20 + 3) = 0;
          *((_OWORD *)v20 + 2) = 0;
          if ( *(_QWORD *)(v24 + 32) )
          {
            v47.m128i_i64[1] = *(_QWORD *)(v24 + 32);
            v30 = (void *)qalloc_or_throw(v47.m128i_i64[1]);
            v31 = v47.m128i_u64[1];
            *((_QWORD *)v20 + 3) = v30;
            *((_QWORD *)v20 + 5) = v31;
            memcpy(v30, *(const void **)(v24 + 24), v31);
            *((_QWORD *)v20 + 4) = v47.m128i_i64[1];
          }
          *((_QWORD *)v20 + 6) = 0;
          *(_OWORD *)(v20 + 56) = 0;
          v22 = *(_QWORD *)(v24 + 56);
          if ( v22 )
          {
            v47.m128i_i64[1] = *(_QWORD *)(v24 + 56);
            v48 = 16 * v22;
            v27 = (void *)qalloc_or_throw(16 * v22);
            v28 = v47.m128i_i64[1];
            v29 = v48;
            *((_QWORD *)v20 + 6) = v27;
            *((_QWORD *)v20 + 8) = v28;
            memcpy(v27, *(const void **)(v24 + 48), v29);
            *((_QWORD *)v20 + 7) = v47.m128i_i64[1];
          }
          ++v21;
          v20 += 80;
          *((_DWORD *)v20 - 2) = *(_DWORD *)(v24 + 72);
        }
        while ( v47.m128i_i64[0] != v21 );
        v32 = (char *)ptr;
        if ( ptr )
        {
          if ( v59.m128i_i64[0] )
          {
            v33 = 0;
            v34 = v59.m128i_i64[0];
            do
            {
              v35 = &v32[80 * v33];
              v36 = *((void **)v35 + 6);
              if ( v36 )
              {
                *((_QWORD *)v35 + 7) = 0;
                qfree(v36);
              }
              v37 = *((void **)v35 + 3);
              if ( v37 )
              {
                *((_QWORD *)v35 + 4) = 0;
                qfree(v37);
              }
              v38 = *(void **)v35;
              if ( *(_QWORD *)v35 )
              {
                *((_QWORD *)v35 + 1) = 0;
                qfree(v38);
              }
              ++v33;
              v32 = (char *)ptr;
            }
            while ( v34 != v33 );
          }
          v59.m128i_i64[0] = 0;
          qfree(v32);
        }
        v39 = _mm_loadl_epi64(&v47);
        v40 = 0;
        v41 = 0;
        ptr = v50;
        v59 = _mm_unpacklo_epi64(v39, v39);
        do
        {
          v42 = *(_QWORD *)(*v54 + 8 * v41);
          if ( v42 != -1 )
          {
            v43 = (_BYTE *)(*(_QWORD *)((char *)ptr + v40) + v42);
            *v43 = toupper((unsigned __int8)*v43);
          }
          ++v41;
          v40 += 80;
        }
        while ( v41 < v59.m128i_i64[0] );
      }
    }
  }
  v60 = 0;
  v8 = a2[1];
  v9 = *a2;
  if ( (v6 & 0x10) != 0 )
    v10 = sub_3C1850(a1, v9, v8, 1, v51);
  else
    v10 = sub_3C1830(a1, v9, v8, 1, v51);
  v11 = v10;
  if ( a6 )
    *a6 = v60;
  v12 = (char *)ptr;
  v51[0] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))&off_2B373C8;
  v52 = &off_2B37398;
  if ( ptr )
  {
    v13 = v59.m128i_i64[0];
    if ( v59.m128i_i64[0] )
    {
      v14 = 0;
      do
      {
        v15 = &v12[80 * v14];
        v16 = *((void **)v15 + 6);
        if ( v16 )
        {
          *((_QWORD *)v15 + 7) = 0;
          qfree(v16);
        }
        v17 = *((void **)v15 + 3);
        if ( v17 )
        {
          *((_QWORD *)v15 + 4) = 0;
          qfree(v17);
        }
        v18 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v18);
        }
        ++v14;
        v12 = (char *)ptr;
      }
      while ( v13 != v14 );
    }
    v59.m128i_i64[0] = 0;
    qfree(v12);
  }
  return v11;
}
