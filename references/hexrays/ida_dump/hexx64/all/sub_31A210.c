__int64 *__fastcall sub_31A210(__int64 *a1, __int64 *a2)
{
  _QWORD *exception; // rax
  __int64 v3; // rdi
  size_t v4; // r14
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // r12
  bool v10; // zf
  size_t v11; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  __m128i v15; // xmm0
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 *v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  void *v24; // rax
  void *v25; // rax
  __int64 i; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  void *v29; // rdi

  if ( a1 != a2 )
  {
    v6 = *a1;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = (_QWORD *)*a2;
    if ( !*a2 )
      goto LABEL_10;
    v8 = (_QWORD *)operator new(0x50u);
    v9 = (_QWORD *)*a2;
    v7 = v8;
    *v8 = &off_4E3320;
    v10 = v9[2] == 0;
    v8[1] = 0;
    v8[2] = 0;
    if ( v10 )
    {
LABEL_6:
      v7[3] = 0;
      *((_OWORD *)v7 + 2) = 0;
      v11 = v9[4];
      if ( v11 )
      {
        v25 = (void *)qalloc_or_throw(v9[4]);
        v7[3] = v25;
        v7[5] = v11;
        memcpy(v25, (const void *)v9[3], v11);
        v7[4] = v11;
      }
      v7[6] = 0;
      *(_OWORD *)(v7 + 7) = 0;
      v4 = v9[7];
      if ( !v4 )
        goto LABEL_9;
      goto LABEL_19;
    }
    v13 = qalloc(40);
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
    if ( !v13 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    *(__m128i *)(v13 + 8) = v15;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v7[1] = v13;
    v7[2] = 0;
    v16 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    *(_QWORD *)v13 = v16;
    *(__m128i *)(v7[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7[1], (__m128i)(unsigned __int64)v7[1]);
    *(_QWORD *)v7[1] &= ~1uLL;
    *(_QWORD *)v7[1] |= 2uLL;
    if ( v9[2] )
    {
      v17 = (_QWORD *)v9[1];
      if ( v17 )
        v18 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
      else
        v18 = 0;
      v19 = sub_31A100((const __m128i *)(v7 + 1), v18, v7[1]);
      v21 = (unsigned __int64 *)v7[1];
      v22 = v19 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = v19 & 0xFFFFFFFFFFFFFFFCLL | *v21 & 3;
      *v21 = v23;
      if ( (*(_BYTE *)v19 & 2) == 0 )
      {
        for ( i = v19; (**(_BYTE **)(i + 8) & 2) == 0; i = *(_QWORD *)(i + 8) )
          ;
        v27 = v7[1];
        *(_QWORD *)(v27 + 8) = i;
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          if ( under_debugger )
            goto LABEL_35;
          v19 = interr(3438, v22, i, v27, v20);
        }
        do
        {
          v28 = v19;
          v19 = *(_QWORD *)(v19 + 16);
        }
        while ( (*(_BYTE *)v19 & 2) == 0 );
        *(_QWORD *)(v7[1] + 16LL) = v28;
        v7[2] = v9[2];
        goto LABEL_6;
      }
      if ( !under_debugger )
      {
        interr(3437, v22, v23, v21, v20);
LABEL_19:
        v24 = (void *)qalloc_or_throw(v4);
        v7[6] = v24;
        v7[8] = v4;
        memcpy(v24, (const void *)v9[6], v4);
        v7[7] = v4;
LABEL_9:
        v7[9] = v9[9];
        *v7 = &off_4E32F8;
LABEL_10:
        *a1 = (__int64)v7;
        return a1;
      }
    }
    else if ( !under_debugger )
    {
      v29 = (void *)interr(3439, a2, v16, v13 & 0xFFFFFFFFFFFFFFFCLL, v14);
      __cxa_begin_catch(v29);
      v3 = v7[1];
      if ( v3 )
        qfree(v3);
      __cxa_rethrow();
    }
LABEL_35:
    BUG();
  }
  return a1;
}
