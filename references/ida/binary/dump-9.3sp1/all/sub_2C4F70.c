__int64 *__fastcall sub_2C4F70(__int64 a1, __int64 a2, __m128i *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // r12
  char v7; // al
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 i; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64(a3), (__m128i)(unsigned __int64)a4);
  v5 = qalloc_or_throw(24, a2, (__int64)a3, a4);
  *(_QWORD *)v5 = 0;
  v6 = (__int64 *)v5;
  *(_OWORD *)(v5 + 8) = 0;
  v7 = sub_2C48E0(*(_QWORD *)(a1 + 24), (__int64 *)v5, (__int64)&v15, nullptr);
  a3->m128i_i64[0] = v15.m128i_i64[0];
  if ( !v7 )
  {
    if ( v6 )
    {
      v9 = *v6;
      if ( *v6 )
      {
        v10 = v6[1];
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = (_QWORD *)(v9 + 80 * i);
            clear_tinfo_t();
            v13 = v12[5];
            if ( v13 )
            {
              v12[6] = 0;
              qfree(v13);
            }
            v14 = v12[2];
            if ( v14 )
            {
              v12[3] = 0;
              qfree(v14);
            }
            cleanup_argloc();
            v9 = *v6;
          }
        }
        v6[1] = 0;
        qfree(v9);
      }
      qfree((__int64)v6);
    }
    return nullptr;
  }
  return v6;
}
