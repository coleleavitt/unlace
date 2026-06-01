__int64 __fastcall parse_json(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  void *v5; // rax
  __m128i v6; // xmm1
  unsigned int qerrno; // r13d
  char *v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rbx
  void *v12; // rdi
  _QWORD v14[2]; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v15; // [rsp+10h] [rbp-E8h]
  char v16; // [rsp+20h] [rbp-D8h]
  void *v17; // [rsp+28h] [rbp-D0h]
  __int128 v18; // [rsp+30h] [rbp-C8h]
  __int64 v19; // [rsp+40h] [rbp-B8h]
  __int64 v20; // [rsp+48h] [rbp-B0h]
  __int128 v21; // [rsp+50h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-98h]
  void *v23; // [rsp+68h] [rbp-90h]
  __int128 v24; // [rsp+70h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-78h] BYREF
  __int64 v26; // [rsp+88h] [rbp-70h]
  void *v27; // [rsp+90h] [rbp-68h]
  __m128i v28; // [rsp+98h] [rbp-60h]
  void *ptr; // [rsp+A8h] [rbp-50h]
  __int128 v30; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v31; // [rsp+C8h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v4 = lex_set_options(a2, 0);
  lex_set_options(a2, v4 | 0x10);
  v14[0] = sub_789A40;
  v16 = 0;
  v22 = a2;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B10758), (__m128i)(unsigned __int64)&off_2B106A0);
  v14[1] = 0;
  v17 = nullptr;
  v19 = 0;
  v20 = 0;
  v23 = nullptr;
  v25 = 0;
  v26 = 0;
  v27 = nullptr;
  ptr = nullptr;
  v18 = 0;
  v21 = 0;
  v24 = 0;
  v28 = 0;
  v30 = 0;
  if ( a3 )
  {
    v5 = *(void **)a3;
    v6 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    *(_OWORD *)(a3 + 8) = 0;
    *(_QWORD *)a3 = 0;
    v27 = v5;
    v28 = v6;
  }
  if ( (unsigned __int8)basic_parser_parse_0((__int64)v14, 0) )
  {
    jvalue_t_copy(a1, &v25);
    qerrno = 0;
  }
  else
  {
    qerrno = get_qerrno(v14);
  }
  lex_set_options(a2, v4);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  v8 = (char *)v27;
  if ( v27 )
  {
    v9 = v28.m128i_i64[0];
    if ( v28.m128i_i64[0] )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = *(void **)&v8[v10];
        if ( v12 )
        {
          *(_QWORD *)&v8[v10 + 8] = 0;
          qfree(v12);
          v8 = (char *)v27;
        }
        ++v11;
        v10 += 56;
      }
      while ( v9 != v11 );
    }
    v28.m128i_i64[0] = 0;
    qfree(v8);
  }
  jvalue_t_clear(&v25);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return qerrno;
}

