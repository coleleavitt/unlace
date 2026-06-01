__int64 *__fastcall sub_48D080(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // rbx
  char *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // rax
  void *v10; // rdi
  void *v12; // [rsp+0h] [rbp-98h] BYREF
  int v13[4]; // [rsp+8h] [rbp-90h]
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF
  __m128i v16; // [rsp+50h] [rbp-48h]
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v12 = nullptr;
  *(_OWORD *)v13 = 0;
  if ( (unsigned __int8)sub_485E30((unsigned __int64 *)a2, a3) )
  {
    v5 = (unsigned __int64 *)(**(_QWORD **)(a2 + 40) + 16 * a3);
    sub_484340((__int64)ptr, v5);
    sub_4790E0((__int64 *)&v12, (unsigned __int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    v15[0] = a2;
    v15[1] = &v12;
    v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2C438), (__m128i)(unsigned __int64)&sub_48D6B0);
    sub_486110(a2, v5, (__int64)v15);
    if ( v16.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v16.m128i_i64[0])(v15, v15, 3);
  }
  sub_421D60(a1, (__int64 *)&v12, ", ");
  v6 = (char *)v12;
  if ( v12 )
  {
    v7 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 )
    {
      v8 = 0;
      do
      {
        v9 = &v6[24 * v8];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)v12;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)v13 = 0;
    qfree(v6);
  }
  return a1;
}
