unsigned __int64 __fastcall sub_466ED0(__int64 *a1, __int64 a2, const char *a3)
{
  __int64 v3; // r12
  size_t v4; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  size_t v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // r15d
  __int64 v12; // rbx
  int v13; // eax
  __m128i si128; // xmm1
  void *v15; // rax
  void *v17; // rax
  const void *v18; // rsi
  void *v19; // rax
  void *v20; // rsi
  size_t n; // [rsp+0h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  size_t v23[2]; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v3 = *a1;
  v4 = a1[2];
  v26 = __readfsqword(0x28u);
  *(_OWORD *)v23 = 0;
  src = nullptr;
  if ( v4 )
  {
    v17 = (void *)qalloc_or_throw(v4);
    v18 = (const void *)a1[1];
    v23[1] = v4;
    src = v17;
    memcpy(v17, v18, v4);
    v23[0] = v4;
  }
  v6 = a1[4];
  v25 = (int)&loc_9B0A00;
  v24 = v6;
  sub_35A790((char **)&src);
  v7 = operator new(0x98u);
  v8 = v23[0];
  *(_QWORD *)v7 = &off_2B26160;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 8) = v3;
  *(_OWORD *)(v7 + 24) = 0;
  if ( v8 )
  {
    v19 = (void *)qalloc_or_throw(v8);
    *(_QWORD *)(v7 + 16) = v19;
    v20 = src;
    *(_QWORD *)(v7 + 32) = v8;
    memcpy(v19, v20, v8);
    *(_QWORD *)(v7 + 24) = v8;
  }
  v9 = v24;
  *(_QWORD *)(v7 + 120) = -1;
  *(_QWORD *)(v7 + 40) = v9;
  LODWORD(v9) = v25;
  *(_QWORD *)(v7 + 128) = -1;
  *(_DWORD *)(v7 + 48) = v9;
  *(_QWORD *)(v7 + 136) = -1;
  *(_QWORD *)(v7 + 144) = 0;
  *(_OWORD *)(v7 + 56) = 0;
  *(_OWORD *)(v7 + 72) = 0;
  *(_OWORD *)(v7 + 88) = 0;
  *(_OWORD *)(v7 + 104) = 0;
  merge_handler_ctr(v7, 0);
  *(_QWORD *)(v7 + 72) = 0;
  if ( *(int *)(v3 + 28) > 0 )
  {
    v10 = 0;
    do
    {
      v11 = v10;
      v12 = operator new(0x70u);
      v13 = *(_DWORD *)(v3 + 4 * v10 + 16);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      *(_DWORD *)(v12 + 12) = -1;
      *(_DWORD *)(v12 + 8) = v13;
      *(_QWORD *)(v12 + 64) = v12 + 48;
      *(_QWORD *)(v12 + 72) = v12 + 48;
      *(_QWORD *)(v12 + 32) = v3;
      *(_DWORD *)(v12 + 48) = 0;
      *(_QWORD *)(v12 + 56) = 0;
      *(_QWORD *)(v12 + 80) = 0;
      *(_QWORD *)v12 = &off_2B29020;
      *(_QWORD *)(v12 + 88) = 0;
      *(__m128i *)(v12 + 16) = si128;
      *(_OWORD *)(v12 + 96) = 0;
      if ( a3 )
      {
        n = strlen(a3);
        v15 = (void *)qvector_reserve(v12 + 88, 0, n + 1, 1);
        *(_QWORD *)(v12 + 88) = v15;
        *(_QWORD *)(v12 + 96) = n + 1;
        memmove(v15, a3, n);
        *(_BYTE *)(*(_QWORD *)(v12 + 88) + n) = 0;
      }
      *(_QWORD *)(v7 + 8 * v10++ + 56) = v12;
      *(_DWORD *)(v12 + 12) = v11;
    }
    while ( *(_DWORD *)(v3 + 28) > (int)v10 );
  }
  if ( src )
  {
    v23[0] = 0;
    qfree(src);
  }
  return v26 - __readfsqword(0x28u);
}
