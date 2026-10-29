/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003A50
// Address: 0x0000000100003A50

//----- (0000000100003A50) ----------------------------------------------------
__int64 __fastcall sub_100003A50(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // r12
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  size_t v10; // r13
  bool v11; // cf
  size_t v12; // rcx
  void *v13; // rdx
  void *v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  void *__src; // [rsp+8h] [rbp-88h]
  __int64 v23; // [rsp+18h] [rbp-78h] BYREF
  __int64 v24; // [rsp+20h] [rbp-70h]
  char v25; // [rsp+28h] [rbp-68h]
  void *__dst[4]; // [rsp+2Ch] [rbp-64h] BYREF
  __int128 v27; // [rsp+4Ch] [rbp-44h]
  int v28; // [rsp+5Ch] [rbp-34h]

  v1 = *(_QWORD *)(a1 + 1144);
  if ( v1 )
  {
    v3 = a1 + 1136;
    v4 = a1 + 864;
    v5 = *(_QWORD *)(a1 + 920);
    v6 = a1 + 1144;
    do
    {
      if ( *(_QWORD *)(v1 + 32) >= v5 )
        v6 = v1;
      v1 = *(_QWORD *)(v1 + 8LL * (*(_QWORD *)(v1 + 32) < v5));
    }
    while ( v1 );
    if ( v6 != a1 + 1144 && v5 >= *(_QWORD *)(v6 + 32) )
    {
      v23 = 0xFFFFFFFFLL;
      v24 = -1;
      v25 = 0;
      memset(__dst, 0, sizeof(__dst));
      v27 = 0;
      v28 = 0;
      set_debug_event_code((__int64)&v23, 9);
      v7 = (__int64)__dst[0] & 0xFFFFFFF;
      v8 = ((__int64)__dst[0] & 0xFFFFFFF) - 9;
      if ( v8 >= 2 && v7 != 3
        || (LODWORD(v23) = *(_DWORD *)(a1 + 528),
            HIDWORD(v23) = *(_DWORD *)(*(_QWORD *)(a1 + 1208) + 32LL),
            v24 = -1,
            v25 = 1,
            v8 >= 2)
        && v7 != 3 )
      {
        if ( under_debugger != 1 )
          interr(0xCE1u);
        BUG();
      }
      if ( (void **)((char *)__dst + 4) != (void **)(v6 + 56) )
      {
        v9 = *(_QWORD *)(v6 + 64);
        v10 = 0;
        v11 = v9 == 0;
        v12 = v9 - 1;
        if ( !v11 )
          v10 = v12;
        if ( v11 || v12 == 0 )
        {
          *(void **)((char *)&__dst[1] + 4) = nullptr;
        }
        else
        {
          __src = *(void **)(v6 + 56);
          v13 = (void *)(v10 + 1);
          v14 = *(void **)((char *)__dst + 4);
          if ( *(void **)((char *)&__dst[2] + 4) <= (void *)v10 )
          {
            v14 = qvector_reserve((__int64)__dst + 4, *(void **)((char *)__dst + 4), (unsigned __int64)v13, 1u);
            *(void **)((char *)__dst + 4) = v14;
            v13 = (void *)(v10 + 1);
          }
          *(void **)((char *)&__dst[1] + 4) = v13;
          memmove(v14, __src, v10);
          (*(_BYTE **)((char *)__dst + 4))[v10] = 0;
        }
      }
      v15 = *(_QWORD *)(a1 + 152);
      if ( !v15 )
      {
        sub_10000A5A0(a1 + 120);
        v15 = *(_QWORD *)(a1 + 152);
      }
      v16 = *(_QWORD *)(a1 + 128);
      v17 = v15 / 0x38;
      v18 = 0;
      v19 = *(_QWORD *)(v16 + 8 * (v15 / 0x38));
      v20 = v19 + 72 * (v15 % 0x38);
      if ( *(_QWORD *)(a1 + 136) != v16 )
        v18 = v20;
      if ( v18 == v19 )
        v18 = *(_QWORD *)(v16 + 8 * v17 - 8) + 4032LL;
      *(_QWORD *)(v18 - 72) = 0xFFFFFFFFLL;
      *(_QWORD *)(v18 - 64) = -1;
      *(_BYTE *)(v18 - 56) = 0;
      *(_DWORD *)(v18 - 52) = 0;
      ((void (__fastcall *)(__int64, __int64 *))copy_debug_event)(v18 - 72, &v23);
      *(__m128i *)(a1 + 152) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 152)), (__m128i)xmmword_10008FE10);
      sub_10000CD60(v3, (__int64 *)v6);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 672LL))(a1, *(_QWORD *)(a1 + 968));
      sub_10001A080(v4);
      free_debug_event((__int64)&v23);
    }
  }
  return __stack_chk_guard;
}
// 10008FE10: using guessed type __int128 xmmword_10008FE10;
// 1000AE23D: using guessed type char under_debugger;
