__int64 __fastcall sub_3349B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // r15
  __int64 v10; // rax
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v22; // [rsp+18h] [rbp-C0h] BYREF
  void *v23; // [rsp+28h] [rbp-B0h]
  __int128 v24; // [rsp+30h] [rbp-A8h]
  __int64 v25; // [rsp+40h] [rbp-98h]
  __int64 v26; // [rsp+48h] [rbp-90h]
  __int64 v27; // [rsp+50h] [rbp-88h]
  __int128 v28; // [rsp+58h] [rbp-80h]
  __int64 v29; // [rsp+68h] [rbp-70h]
  __int128 v30; // [rsp+70h] [rbp-68h]
  __int64 v31; // [rsp+80h] [rbp-58h]
  int v32; // [rsp+88h] [rbp-50h]
  unsigned __int64 v33; // [rsp+98h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( a4 )
  {
    v8 = *(_QWORD *)(a4 + 8);
    v21 = 0;
    v23 = nullptr;
    v22 = 0;
    v24 = 0;
    if ( v8 )
    {
      v19 = (void *)qalloc_or_throw();
      v20 = *(const void **)a4;
      v23 = v19;
      *((_QWORD *)&v24 + 1) = v8;
      memcpy(v19, v20, 4 * v8);
      *(_QWORD *)&v24 = v8;
    }
  }
  else
  {
    v21 = 0;
    v23 = nullptr;
    v22 = 0;
    v24 = 0;
  }
  v25 = -1;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v32 = a5;
  v26 = a3;
  v28 = 0;
  v30 = 0;
  sub_333A60((__int64)&v21, a2);
  v10 = *a1;
  v11 = _mm_loadu_si128(&v22);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *a1 = v21;
  v13 = v25;
  *(__m128i *)(a1 + 1) = v11;
  v21 = v10;
  v22 = v12;
  clear_tinfo_t();
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  v14 = v21;
  if ( v21 )
  {
    v15 = v22.m128i_i64[0];
    if ( v22.m128i_i64[0] )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + (v16 << 6));
        clear_tinfo_t();
        if ( v17[4] )
        {
          v17[5] = 0;
          qfree();
        }
        if ( v17[1] )
        {
          v17[2] = 0;
          qfree();
        }
        ++v16;
        v14 = v21;
      }
      while ( v15 != v16 );
    }
    v22.m128i_i64[0] = 0;
    qfree();
  }
  return v13;
}
