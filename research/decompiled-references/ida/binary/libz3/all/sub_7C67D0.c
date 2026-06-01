__int64 (__fastcall **__fastcall sub_7C67D0(__m128i *a1, __int64 a2, __int64 a3, int a4, int a5, int a6))()
{
  __m128i v7; // xmm0
  __int64 v8; // rdi
  void (__fastcall ***v9)(void *); // r13
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rdi
  void (__fastcall ***v13)(void *); // r13
  __m128i si128; // xmm6
  __int64 v15; // rdi
  __int64 v16; // rdi
  __m128i v17; // xmm7
  __int64 v18; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v20; // rdi
  int v21[4]; // [rsp+0h] [rbp-48h] BYREF
  int v22[4]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v23; // [rsp+20h] [rbp-28h]
  __int64 v24; // [rsp+28h] [rbp-20h]
  void *v25; // [rsp+30h] [rbp-18h]

  v7 = _mm_loadl_epi64((const __m128i *)&off_1C548E0);
  a1->m128i_i64[0] = (__int64)&off_1C6B2F0;
  *(__m128i *)v22 = _mm_unpacklo_epi64(
                      (__m128i)(unsigned __int64)qword_1C6C4D8,
                      (__m128i)(unsigned __int64)qword_1C6C528);
  a1[3].m128i_i64[0] = (__int64)off_1C6B600;
  a1[7].m128i_i64[0] = (__int64)off_1C6B658;
  a1[2] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C6B5D8);
  v8 = a1[8].m128i_i64[0];
  *(__m128i *)v21 = _mm_unpacklo_epi64(
                      (__m128i)(unsigned __int64)algn_1C6C7D0,
                      (__m128i)(unsigned __int64)qword_1C6C820);
  if ( v8 )
  {
    sub_12638A0(
      v8,
      (_DWORD)a1 + 120,
      (_DWORD)a1 + 144,
      a4,
      a5,
      a6,
      v21[0],
      v21[2],
      v22[0],
      *(__int64 *)&v22[2],
      v23,
      v24,
      v25);
    v9 = (void (__fastcall ***)(void *))a1[7].m128i_i64[1];
    if ( v9 )
    {
      v10 = (*((_DWORD *)v9 + 4))-- == 1;
      if ( v10 )
      {
        (**v9)(v9);
        sub_186B220(v9);
      }
    }
    *(__m128i *)((char *)&a1[7] + 8) = 0;
  }
  v11 = a1[9].m128i_i64[1];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[9].m128i_i64[0];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = (void (__fastcall ***)(void *))a1[7].m128i_i64[1];
  if ( v13 )
  {
    v10 = (*((_DWORD *)v13 + 4))-- == 1;
    if ( v10 )
    {
      (**v13)(v13);
      sub_186B220(v13);
    }
  }
  si128 = _mm_load_si128((const __m128i *)v21);
  v15 = a1[6].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = si128;
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[5].m128i_i64[1];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = _mm_load_si128((const __m128i *)v22);
  v18 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = v17;
  if ( v18 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v18 - 8));
  v20 = a1[3].m128i_i64[1];
  if ( v20 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v20 - 8));
  return result;
}

