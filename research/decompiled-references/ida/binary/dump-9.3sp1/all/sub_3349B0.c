__int64 __fastcall sub_3349B0(__int64 a1, const void *a2, __int64 a3, const void **a4, int a5)
{
  const void *v8; // r15
  __int64 v10; // rax
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  void *v21; // rax
  const void *v22; // rsi
  __int64 v23; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v24; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+28h] [rbp-B0h]
  __int128 v26; // [rsp+30h] [rbp-A8h]
  __int64 v27; // [rsp+40h] [rbp-98h]
  __int64 v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h]
  __int128 v30; // [rsp+58h] [rbp-80h]
  __int64 v31; // [rsp+68h] [rbp-70h]
  __int128 v32; // [rsp+70h] [rbp-68h]
  __int64 v33; // [rsp+80h] [rbp-58h]
  int v34; // [rsp+88h] [rbp-50h]
  unsigned __int64 v35; // [rsp+98h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( a4 )
  {
    v8 = a4[1];
    v23 = 0;
    v25 = 0;
    v24 = 0;
    v26 = 0;
    if ( v8 )
    {
      v21 = (void *)qalloc_or_throw(4LL * (_QWORD)v8, (__int64)a2, 4LL * (_QWORD)v8, (__int64)a4);
      v22 = *a4;
      v25 = (__int64)v21;
      *((_QWORD *)&v26 + 1) = v8;
      memcpy(v21, v22, 4LL * (_QWORD)v8);
      *(_QWORD *)&v26 = v8;
    }
  }
  else
  {
    v23 = 0;
    v25 = 0;
    v24 = 0;
    v26 = 0;
  }
  v27 = -1;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v34 = a5;
  v28 = a3;
  v30 = 0;
  v32 = 0;
  sub_333A60((__int64)&v23, a2);
  v10 = *(_QWORD *)a1;
  v11 = _mm_loadu_si128(&v24);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)a1 = v23;
  v13 = v27;
  *(__m128i *)(a1 + 8) = v11;
  v23 = v10;
  v24 = v12;
  clear_tinfo_t();
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  v14 = v23;
  if ( v23 )
  {
    v15 = v24.m128i_i64[0];
    if ( v24.m128i_i64[0] )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + (v16 << 6));
        clear_tinfo_t();
        v18 = v17[4];
        if ( v18 )
        {
          v17[5] = 0;
          qfree(v18);
        }
        v19 = v17[1];
        if ( v19 )
        {
          v17[2] = 0;
          qfree(v19);
        }
        ++v16;
        v14 = v23;
      }
      while ( v15 != v16 );
    }
    v24.m128i_i64[0] = 0;
    qfree(v14);
  }
  return v13;
}
