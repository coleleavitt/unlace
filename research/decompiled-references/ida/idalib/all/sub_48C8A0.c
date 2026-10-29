__int64 *__fastcall sub_48C8A0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 *v8; // rax
  __m128i v9; // xmm0
  char *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v13; // rax
  void *v14; // rdi
  void *v16; // [rsp+0h] [rbp-98h] BYREF
  int v17[4]; // [rsp+8h] [rbp-90h]
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  __m128i v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+68h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v16 = nullptr;
  *(_OWORD *)v17 = 0;
  if ( (unsigned __int8)sub_485E30((unsigned __int64 *)a2, a3) )
  {
    v5 = (unsigned __int64 *)(**(_QWORD **)(a2 + 40) + 16 * a3);
    sub_484340((__int64)ptr, v5);
    sub_4790E0((__int64 *)&v16, (unsigned __int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    v6 = switch_dbctx(*(int *)(a2 + 8));
    v20 = 0u;
    v7 = *(_QWORD *)(v6 + 1672);
    v19 = 0;
    v8 = (__int64 *)operator new(0x18u);
    v8[2] = v7;
    v9 = _mm_loadl_epi64((const __m128i *)&off_2B2C418);
    *v8 = a2;
    v8[1] = (__int64)&v16;
    *(_QWORD *)&v19 = v8;
    v20 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_48D7F0);
    sub_486110(a2, v5, (__int64)&v19);
    if ( v20.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20.m128i_i64[0])(&v19, &v19, 3);
  }
  sub_421D60(a1, (__int64 *)&v16, ", ");
  v10 = (char *)v16;
  if ( v16 )
  {
    v11 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[24 * v12];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          qfree(v14);
          v10 = (char *)v16;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)v17 = 0;
    qfree(v10);
  }
  return a1;
}
