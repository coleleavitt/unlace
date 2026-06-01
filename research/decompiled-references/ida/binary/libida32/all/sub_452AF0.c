unsigned __int64 __fastcall sub_452AF0(__int64 *a1, const char *a2, const char *a3)
{
  __int64 v3; // r12
  size_t v4; // r13
  __int64 v6; // rax
  const char *v7; // rdx
  __int64 v8; // rbp
  size_t v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rbx
  int v14; // eax
  __m128i si128; // xmm1
  void *v16; // rax
  void *v18; // rax
  const void *v19; // rsi
  void *v20; // rax
  void *v21; // rsi
  size_t n; // [rsp+0h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  size_t v24[2]; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v3 = *a1;
  v4 = a1[2];
  v27 = __readfsqword(0x28u);
  *(_OWORD *)v24 = 0;
  src = nullptr;
  if ( v4 )
  {
    v18 = (void *)qalloc_or_throw(v4, a2);
    v19 = (const void *)a1[1];
    v24[1] = v4;
    src = v18;
    memcpy(v18, v19, v4);
    v24[0] = v4;
  }
  v6 = a1[4];
  v26 = 10160640;
  v25 = v6;
  sub_3573A0((char **)&src);
  v8 = operator new(0x98u);
  v9 = v24[0];
  *(_QWORD *)v8 = &off_2AFD020;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 8) = v3;
  *(_OWORD *)(v8 + 24) = 0;
  if ( v9 )
  {
    v20 = (void *)qalloc_or_throw(v9, "Debugger/%s/Exceptions", v7);
    *(_QWORD *)(v8 + 16) = v20;
    v21 = src;
    *(_QWORD *)(v8 + 32) = v9;
    memcpy(v20, v21, v9);
    *(_QWORD *)(v8 + 24) = v9;
  }
  v10 = v25;
  *(_QWORD *)(v8 + 120) = -1;
  *(_QWORD *)(v8 + 40) = v10;
  LODWORD(v10) = v26;
  *(_QWORD *)(v8 + 128) = -1;
  *(_DWORD *)(v8 + 48) = v10;
  *(_QWORD *)(v8 + 136) = 0xFFFFFFFFLL;
  *(_DWORD *)(v8 + 144) = 0;
  *(_OWORD *)(v8 + 56) = 0;
  *(_OWORD *)(v8 + 72) = 0;
  *(_OWORD *)(v8 + 88) = 0;
  *(_OWORD *)(v8 + 104) = 0;
  merge_handler_ctr();
  *(_QWORD *)(v8 + 72) = 0;
  if ( *(int *)(v3 + 28) > 0 )
  {
    v11 = 0;
    do
    {
      v12 = v11;
      v13 = operator new(0x70u);
      v14 = *(_DWORD *)(v3 + 4 * v11 + 16);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      *(_DWORD *)(v13 + 12) = -1;
      *(_DWORD *)(v13 + 8) = v14;
      *(_QWORD *)(v13 + 64) = v13 + 48;
      *(_QWORD *)(v13 + 72) = v13 + 48;
      *(_QWORD *)(v13 + 32) = v3;
      *(_DWORD *)(v13 + 48) = 0;
      *(_QWORD *)(v13 + 56) = 0;
      *(_QWORD *)(v13 + 80) = 0;
      *(_QWORD *)v13 = &off_2AFF060;
      *(_QWORD *)(v13 + 88) = 0;
      *(__m128i *)(v13 + 16) = si128;
      *(_OWORD *)(v13 + 96) = 0;
      if ( a3 )
      {
        n = strlen(a3);
        v16 = (void *)qvector_reserve(v13 + 88, 0, n + 1, 1);
        *(_QWORD *)(v13 + 88) = v16;
        *(_QWORD *)(v13 + 96) = n + 1;
        memmove(v16, a3, n);
        *(_BYTE *)(*(_QWORD *)(v13 + 88) + n) = 0;
      }
      *(_QWORD *)(v8 + 8 * v11++ + 56) = v13;
      *(_DWORD *)(v13 + 12) = v12;
    }
    while ( *(_DWORD *)(v3 + 28) > (int)v11 );
  }
  if ( src )
  {
    v24[0] = 0;
    qfree(src);
  }
  return v27 - __readfsqword(0x28u);
}

