void __fastcall sub_466CC0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  const char *v7; // rsi
  __int64 v8; // r13
  __int64 *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 *v11; // r15
  char *v12; // rdx
  __int64 v13; // rbp
  __int64 i; // rbx
  char *v15; // rax
  void *v16; // rdi
  __m128i v17; // xmm2
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rdx
  size_t v25; // r14
  __int64 v26; // rdi
  void *v27; // rax
  const void **v28; // rdx
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+10h] [rbp-48h]
  const void **v31; // [rsp+18h] [rbp-40h]

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v5 == (char *)sub_3D58E0 )
    v6 = (unsigned __int64 *)(a1 + 16);
  else
    v6 = (unsigned __int64 *)v5();
  if ( a3 >= *v6
    && a3 < v6[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    if ( sub_443A40() )
    {
      v7 = (const char *)(unsigned int)a3;
      v8 = 0;
      v9 = sub_45DF20(a1, a3);
      v10 = v9[1];
      v11 = v9;
      v29 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
      if ( v10 )
      {
        v30 = v10;
        v18 = 0;
        v19 = qalloc_or_throw(24 * v10, (const char *)(unsigned int)a3);
        v20 = v30;
        v21 = 0;
        v8 = v19;
        v22 = v19;
        do
        {
          v23 = *v11;
          *(_QWORD *)v22 = 0;
          *(_OWORD *)(v22 + 8) = v21;
          v24 = v23 + 24 * v18;
          v25 = *(_QWORD *)(v24 + 8);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v24 + 8);
            v30 = v20;
            v31 = (const void **)v24;
            v27 = (void *)qalloc_or_throw(v26, v7);
            v28 = v31;
            *(_QWORD *)(v22 + 16) = v25;
            *(_QWORD *)v22 = v27;
            v7 = (const char *)*v28;
            memcpy(v27, *v28, v25);
            *(_QWORD *)(v22 + 8) = v25;
            v20 = v30;
            v21 = 0;
          }
          ++v18;
          v22 += 24;
        }
        while ( v20 != v18 );
      }
      v12 = (char *)*a2;
      if ( *a2 )
      {
        v13 = a2[1];
        if ( v13 )
        {
          for ( i = 0; i != v13; ++i )
          {
            v15 = &v12[24 * i];
            v16 = *(void **)v15;
            if ( *(_QWORD *)v15 )
            {
              *((_QWORD *)v15 + 1) = 0;
              qfree(v16);
              v12 = (char *)*a2;
            }
          }
        }
        a2[1] = 0;
        qfree(v12);
      }
      v17 = _mm_load_si128(&v29);
      *a2 = v8;
      *(__m128i *)(a2 + 1) = v17;
    }
    else
    {
      sub_466210(a1, a2, a3);
    }
  }
}

