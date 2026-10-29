__int64 __fastcall open_database(const char *src, char a2, const char *a3)
{
  unsigned int v3; // r12d
  _WORD *v6; // rax
  _BYTE *v7; // r15
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  __int64 v12; // r15
  size_t v13; // r13
  __int64 v14; // rax
  char *v15; // rsi
  unsigned __int64 v16; // rdi
  _BYTE *v17; // rbp
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  char *v20; // rax
  __int32 v21; // eax
  __m128i v22; // xmm0
  char *v23; // rax
  __int64 *v24; // r14
  char *v25; // r15
  char *v26; // rbp
  char *v27; // rbx
  char *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rax
  char *v33; // rdx
  __int64 v34; // rbp
  __int64 v35; // rbx
  char *v36; // rax
  const char *plugin_options; // rdi
  _BYTE *v38; // r13
  __int64 v39; // rbp
  _BYTE *v40; // rbx
  _BYTE *v41; // rbp
  __m128i v42; // [rsp+0h] [rbp-D8h] BYREF
  signed int v43; // [rsp+1Ch] [rbp-BCh] BYREF
  void *srca; // [rsp+20h] [rbp-B8h]
  __int128 v45; // [rsp+28h] [rbp-B0h]
  __int64 v46; // [rsp+40h] [rbp-98h]
  __int128 v47; // [rsp+48h] [rbp-90h]
  _BYTE *v48; // [rsp+60h] [rbp-78h] BYREF
  __m128i v49; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v50[2]; // [rsp+80h] [rbp-58h] BYREF
  char v51[7]; // [rsp+91h] [rbp-47h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v3 = dword_250334;
  v52 = __readfsqword(0x28u);
  if ( dword_250334 == -1 )
  {
    sub_92120((__int64)"Error: open_database() can only be called after successfully initializing the IDA library. Call i"
                       "nit_library() first.\n");
  }
  else if ( a3 && strlen(a3) )
  {
    srca = nullptr;
    v46 = 0;
    v45 = 0;
    v47 = 0;
    parse_command_line();
    v49 = 0;
    v6 = (_WORD *)qvector_reserve();
    v48 = v6;
    v49.m128i_i64[0] = 7;
    *(_DWORD *)v6 = 1818322025;
    v6[2] = 25193;
    v48[6] = 0;
    v7 = v48;
    v8 = srca;
    v48 = nullptr;
    v9 = v49.m128i_i64[1];
    v42.m128i_i64[0] = v49.m128i_i64[0];
    v49 = 0;
    v42.m128i_i64[1] = v9;
    v10 = v45;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      srca = (void *)qvector_reserve();
      v8 = srca;
      v10 = v45;
    }
    memmove(v8 + 3, v8, 24 * v10);
    *v8 = v7;
    *(__m128 *)(v8 + 1) = _mm_loadh_ps((const double *)&v42.m128i_i64[1]);
    *(_QWORD *)&v45 = v45 + 1;
    if ( v48 )
    {
      v49.m128i_i64[0] = 0;
      qfree();
    }
    v48 = nullptr;
    v49 = 0;
    if ( src )
    {
      v11 = strlen(src);
      v12 = v11 + 1;
      v13 = v11;
      v48 = (_BYTE *)qvector_reserve();
      v49.m128i_i64[0] = v12;
      memmove(v48, src, v13);
      v48[v13] = 0;
    }
    v14 = v45;
    v15 = (char *)srca;
    v16 = v45 + 1;
    if ( &v48 < srca || &v48 >= (_BYTE **)((char *)srca + 24 * *((_QWORD *)&v45 + 1)) )
    {
      if ( *((_QWORD *)&v45 + 1) < v16 )
      {
        srca = (void *)qvector_reserve();
        v15 = (char *)srca;
        v14 = v45;
      }
      v22 = _mm_loadu_si128(&v49);
      v23 = &v15[24 * v14];
      *(_QWORD *)v23 = v48;
      *(__m128i *)(v23 + 8) = v22;
      v21 = v45 + 1;
      *(_QWORD *)&v45 = v45 + 1;
    }
    else
    {
      v17 = v48;
      v18 = _mm_loadl_epi64(&v49);
      v48 = nullptr;
      v19 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
      v49 = 0;
      if ( *((_QWORD *)&v45 + 1) < v16 )
      {
        v42.m128i_i64[1] = v19.m128i_i64[0];
        v42.m128i_i64[0] = v18.m128i_i64[0];
        srca = (void *)qvector_reserve();
        v15 = (char *)srca;
        v19 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
        v14 = v45;
        v18 = _mm_loadl_epi64(&v42);
      }
      v20 = &v15[24 * v14];
      *(_QWORD *)v20 = v17;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v18, v19);
      v21 = v45 + 1;
      *(_QWORD *)&v45 = v45 + 1;
      if ( v48 )
      {
        v49.m128i_i64[0] = 0;
        qfree();
        v21 = v45;
      }
    }
    v42.m128i_i32[0] = v21;
    v43 = v21;
    v42.m128i_i64[1] = qalloc();
    v24 = (__int64 *)v42.m128i_i64[1];
    v25 = (char *)srca;
    v48 = (_BYTE *)v42.m128i_i64[1];
    v26 = (char *)srca + 24 * v45;
    if ( srca != v26 )
    {
      do
      {
        v25 += 24;
        *v24++ = qstrdup();
      }
      while ( v26 != v25 );
    }
    v3 = sub_1726F0(v42.m128i_i32[0], v42.m128i_i64[1], &v43, (__int64 *)&v48);
    if ( v3 )
    {
      if ( v48 )
      {
        v27 = v48;
        v28 = &v48[8 * v43];
        if ( v43 > 0 )
        {
          do
          {
            qfree();
            v27 += 8;
          }
          while ( v28 != v27 );
        }
        qfree();
      }
      sub_92120((__int64)"Kernel reinitialization failed, error: %d.\n", v3);
    }
    else
    {
      plugin_options = (const char *)get_plugin_options();
      if ( plugin_options )
        strstr(plugin_options, "enable_history");
      qsetenv();
      v38 = v48;
      v39 = v43;
      v3 = sub_172570(v43, (__int64)v48, a2);
      if ( v38 )
      {
        if ( (int)v39 > 0 )
        {
          v40 = v38;
          v41 = &v38[8 * v39];
          do
          {
            qfree();
            v40 += 8;
          }
          while ( v41 != v40 );
        }
        qfree();
      }
    }
    v29 = v46;
    if ( v46 )
    {
      v30 = v47;
      if ( (_QWORD)v47 )
      {
        v31 = 0;
        do
        {
          v32 = v29 + 48 * v31;
          if ( *(_QWORD *)(v32 + 8) )
          {
            *(_QWORD *)(v32 + 16) = 0;
            qfree();
            v29 = v46;
          }
          ++v31;
        }
        while ( v30 != v31 );
      }
      *(_QWORD *)&v47 = 0;
      qfree();
    }
    v33 = (char *)srca;
    if ( srca )
    {
      v34 = v45;
      if ( (_QWORD)v45 )
      {
        v35 = 0;
        do
        {
          v36 = &v33[24 * v35];
          if ( *(_QWORD *)v36 )
          {
            *((_QWORD *)v36 + 1) = 0;
            qfree();
            v33 = (char *)srca;
          }
          ++v35;
        }
        while ( v34 != v35 );
      }
      *(_QWORD *)&v45 = 0;
      qfree();
    }
  }
  else
  {
    qsetenv();
    v50[0] = v51;
    strcpy(v51, "idalib");
    v50[1] = src;
    return (unsigned int)sub_172570(2u, (__int64)v50, a2);
  }
  return v3;
}

