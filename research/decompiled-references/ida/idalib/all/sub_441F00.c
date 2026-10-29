void __fastcall sub_441F00(__int64 **a1, _BYTE *a2, const __m128i *a3)
{
  __m128 v3; // xmm0
  __int64 v4; // r12
  __int64 *v5; // rax
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v10; // rsi
  void *v11; // rbp
  __int64 v12; // rax
  __m128i v13; // xmm0
  void **v14; // rbp
  void **v15; // rbx
  __int64 v16; // rax
  __m128i v17; // xmm0
  void **v18; // r13
  void **v19; // rbx
  bool v20; // [rsp+Eh] [rbp-6Ah] BYREF
  bool v21; // [rsp+Fh] [rbp-69h] BYREF
  __int64 v22; // [rsp+18h] [rbp-60h] BYREF
  void *v23[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v3 = (__m128)_mm_loadu_si128(a3);
  v4 = a3[1].m128i_i64[0];
  v25 = __readfsqword(0x28u);
  v5 = *a1;
  a3[1].m128i_i64[0] = 0;
  *a3 = 0;
  v6 = *a2 == 0;
  _mm_storeh_ps((double *)&v22, v3);
  v7 = *v5;
  if ( v6 )
  {
    v11 = (void *)v3.m128_u64[0];
    *(_BYTE *)(v7 + 40) = 1;
    if ( !_InterlockedSub64((volatile signed __int64 *)(v7 + 32), 1u) )
    {
      v16 = *(_QWORD *)(v7 + 64);
      v17 = _mm_loadu_si128((const __m128i *)(v7 + 48));
      *(_OWORD *)(v7 + 48) = 0;
      *(_QWORD *)(v7 + 64) = 0;
      v24 = v16;
      *(__m128i *)v23 = v17;
      v21 = *(_BYTE *)(v7 + 40) == 0;
      if ( !*(_QWORD *)(v7 + 16) )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, bool *, void **))(v7 + 24))(v7, &v21, v23);
      v18 = (void **)v23[1];
      v19 = (void **)v23[0];
      if ( v23[1] != v23[0] )
      {
        do
        {
          if ( *v19 )
            operator delete(*v19, (_BYTE *)v19[2] - (_BYTE *)*v19);
          v19 += 3;
        }
        while ( v18 != v19 );
        v19 = (void **)v23[0];
      }
      if ( v19 )
        operator delete(v19, v24 - (_QWORD)v19);
    }
    if ( v11 )
      operator delete(v11, v4 - (_QWORD)v11);
  }
  else
  {
    v22 = 0;
    v8 = *(_QWORD *)(v7 + 48) + 24LL * *((int *)v5 + 4);
    v9 = *(void **)v8;
    v10 = *(_QWORD *)(v8 + 16);
    *(__m128 *)v8 = v3;
    *(_QWORD *)(v8 + 16) = v4;
    if ( v9 )
      operator delete(v9, v10 - (_QWORD)v9);
    if ( !_InterlockedSub64((volatile signed __int64 *)(v7 + 32), 1u) )
    {
      v12 = *(_QWORD *)(v7 + 64);
      v13 = _mm_loadu_si128((const __m128i *)(v7 + 48));
      *(_QWORD *)(v7 + 64) = 0;
      v24 = v12;
      *(__m128i *)v23 = v13;
      *(_OWORD *)(v7 + 48) = 0;
      v20 = *(_BYTE *)(v7 + 40) == 0;
      if ( !*(_QWORD *)(v7 + 16) )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, bool *, void **))(v7 + 24))(v7, &v20, v23);
      v14 = (void **)v23[1];
      v15 = (void **)v23[0];
      if ( v23[1] != v23[0] )
      {
        do
        {
          if ( *v15 )
            operator delete(*v15, (_BYTE *)v15[2] - (_BYTE *)*v15);
          v15 += 3;
        }
        while ( v14 != v15 );
        v15 = (void **)v23[0];
      }
      if ( v15 )
        operator delete(v15, v24 - (_QWORD)v15);
    }
  }
}
