__int64 __fastcall sub_4C0490(
        __int64 a1,
        const char *a2,
        int a3,
        int a4,
        const char *a5,
        const char *a6,
        char *s,
        int a8,
        char *a9,
        const __m128i *a10)
{
  void *v14; // rax
  void *v15; // rax
  size_t v16; // r12
  void *v17; // rax
  size_t v18; // rax
  size_t v19; // r12
  size_t v20; // rbp
  void *v21; // rax
  size_t v22; // rax
  size_t v23; // r12
  size_t v24; // rbp
  void *v25; // rax
  __int64 result; // rax
  size_t n; // [rsp+0h] [rbp-50h]
  size_t na; // [rsp+0h] [rbp-50h]

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = message_box_request_t___vtable;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a2 )
  {
    n = strlen(a2);
    v14 = (void *)qvector_reserve(a1 + 24, 0, n + 1, 1);
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 32) = n + 1;
    memmove(v14, a2, n);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + n) = 0;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  if ( a5 )
  {
    na = strlen(a5);
    v15 = (void *)qvector_reserve(a1 + 48, 0, na + 1, 1);
    *(_QWORD *)(a1 + 48) = v15;
    *(_QWORD *)(a1 + 56) = na + 1;
    memmove(v15, a5, na);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + na) = 0;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( a6 )
  {
    v16 = strlen(a6);
    v17 = (void *)qvector_reserve(a1 + 72, 0, v16 + 1, 1);
    *(_QWORD *)(a1 + 72) = v17;
    *(_QWORD *)(a1 + 80) = v16 + 1;
    memmove(v17, a6, v16);
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + v16) = 0;
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( s )
  {
    v18 = strlen(s);
    v19 = v18 + 1;
    v20 = v18;
    v21 = (void *)qvector_reserve(a1 + 96, 0, v18 + 1, 1);
    *(_QWORD *)(a1 + 96) = v21;
    *(_QWORD *)(a1 + 104) = v19;
    memmove(v21, s, v20);
    *(_BYTE *)(*(_QWORD *)(a1 + 96) + v20) = 0;
  }
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  if ( a9 )
  {
    v22 = strlen(a9);
    v23 = v22 + 1;
    v24 = v22;
    v25 = (void *)qvector_reserve(a1 + 120, 0, v22 + 1, 1);
    *(_QWORD *)(a1 + 120) = v25;
    *(_QWORD *)(a1 + 128) = v23;
    memmove(v25, a9, v24);
    *(_BYTE *)(*(_QWORD *)(a1 + 120) + v24) = 0;
  }
  *(_DWORD *)(a1 + 172) = a3;
  *(_DWORD *)(a1 + 176) = a4;
  *(_DWORD *)(a1 + 168) = a8;
  *(__m128i *)(a1 + 144) = _mm_loadu_si128(a10);
  result = a10[1].m128i_i64[0];
  *(_QWORD *)(a1 + 160) = result;
  return result;
}
