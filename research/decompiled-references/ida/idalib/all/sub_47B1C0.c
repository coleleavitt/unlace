void __fastcall sub_47B1C0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 (*v4)(void); // rax
  _QWORD *v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 *v9; // r15
  char *v10; // rdx
  __int64 v11; // rbp
  __int64 i; // rbx
  char *v13; // rax
  void *v14; // rdi
  __m128i v15; // xmm2
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rdx
  size_t v23; // r14
  __int64 v24; // rdi
  void *v25; // rax
  const void **v26; // rdx
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+10h] [rbp-48h]
  const void **v29; // [rsp+18h] [rbp-40h]

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v4 == (char *)sub_3DB7B0 )
    v5 = (_QWORD *)(a1 + 16);
  else
    v5 = (_QWORD *)v4();
  if ( (unsigned __int64)a3 >= *v5
    && (unsigned __int64)a3 < v5[1]
    && a3 == (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    if ( sub_457830() )
    {
      v6 = 0;
      v7 = sub_472390(a1, (unsigned __int64)a3);
      v8 = v7[1];
      v9 = v7;
      v27 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      if ( v8 )
      {
        v28 = v8;
        v16 = 0;
        v17 = qalloc_or_throw(24 * v8);
        v18 = v28;
        v19 = 0;
        v6 = v17;
        v20 = v17;
        do
        {
          v21 = *v9;
          *(_QWORD *)v20 = 0;
          *(_OWORD *)(v20 + 8) = v19;
          v22 = v21 + 24 * v16;
          v23 = *(_QWORD *)(v22 + 8);
          if ( v23 )
          {
            v24 = *(_QWORD *)(v22 + 8);
            v28 = v18;
            v29 = (const void **)v22;
            v25 = (void *)qalloc_or_throw(v24);
            v26 = v29;
            *(_QWORD *)(v20 + 16) = v23;
            *(_QWORD *)v20 = v25;
            memcpy(v25, *v26, v23);
            *(_QWORD *)(v20 + 8) = v23;
            v18 = v28;
            v19 = 0;
          }
          ++v16;
          v20 += 24;
        }
        while ( v18 != v16 );
      }
      v10 = (char *)*a2;
      if ( *a2 )
      {
        v11 = a2[1];
        if ( v11 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = &v10[24 * i];
            v14 = *(void **)v13;
            if ( *(_QWORD *)v13 )
            {
              *((_QWORD *)v13 + 1) = 0;
              qfree(v14);
              v10 = (char *)*a2;
            }
          }
        }
        a2[1] = 0;
        qfree(v10);
      }
      v15 = _mm_load_si128(&v27);
      *a2 = v6;
      *(__m128i *)(a2 + 1) = v15;
    }
    else
    {
      sub_47A710(a1, a2, a3);
    }
  }
}
