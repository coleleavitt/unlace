_QWORD *sub_AA3F0()
{
  __int64 v0; // rbx
  __m128i v1; // xmm0
  _QWORD *v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  size_t v8; // r13
  __int64 v9; // r14
  const char *v10; // rax
  _QWORD *result; // rax
  bool v12; // cc
  __int64 v13; // rax
  _QWORD *v14; // [rsp+8h] [rbp-40h]
  _QWORD v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  *(_QWORD *)v0 = &stru_236898;
  *(_QWORD *)(v0 + 8) = 0x2008010000004LL;
  *(_OWORD *)(v0 + 16) = -1;
  v1 = _mm_loadl_epi64((const __m128i *)&off_22FC40);
  v2 = (_QWORD *)(v0 + 80);
  *(_QWORD *)(v0 + 32) = 0;
  *(_QWORD *)(v0 + 40) = 0;
  *(_DWORD *)(v0 + 48) = 4;
  *(_DWORD *)(v0 + 72) = -1;
  *(__m128i *)(v0 + 56) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)&off_22FC20);
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != (_QWORD *)(v0 + 176) );
  *(_DWORD *)(v0 + 176) = 0;
  v3 = *(_DWORD *)(v0 + 12);
  if ( ((v3 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v0 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v0 + 11) = ((v3 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v0 + 12) = v3 & 0xFE07FFFF;
  }
  *(_QWORD *)(v0 + 200) = 0;
  *(_QWORD *)v0 = off_22F6F0;
  *(_BYTE *)(v0 + 224) = 0;
  *(_QWORD *)(v0 + 232) = &qword_251BD0;
  *(__m128i *)(v0 + 184) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)xmmword_251F20,
                             (__m128i)(unsigned __int64)xmmword_251F20);
  *(_OWORD *)(v0 + 208) = 0;
  sub_AA330((_QWORD *)v0);
  v4 = *(_QWORD *)(v0 + 208);
  v5 = *(_QWORD *)(v0 + 200);
  v6 = *(_QWORD *)(v0 + 216);
  if ( v4 )
  {
    v7 = v4 + 10;
    v8 = v4 - 1;
    v9 = v4 + 9;
    if ( v6 >= v4 + 10 )
      goto LABEL_8;
  }
  else
  {
    if ( v6 > 0xA )
    {
      *(_QWORD *)(v0 + 208) = 11;
      *(_BYTE *)(v5 + 10) = 0;
      goto LABEL_10;
    }
    v8 = 0;
    v7 = 11;
    v9 = 10;
  }
  v13 = qvector_reserve();
  *(_QWORD *)(v0 + 200) = v13;
  v5 = v13;
LABEL_8:
  *(_QWORD *)(v0 + 208) = v7;
  *(_BYTE *)(v5 + v9) = 0;
  if ( v8 )
    memmove((void *)(*(_QWORD *)(v0 + 200) + 10LL), *(const void **)(v0 + 200), v8);
LABEL_10:
  qmemcpy(*(void **)(v0 + 200), "@0:1444[]\n", 10);
  v10 = s1;
  if ( *(_QWORD *)(v0 + 208) )
    v10 = *(const char **)(v0 + 200);
  *(_QWORD *)(v0 + 40) = v10;
  *(_DWORD *)(v0 + 72) = 141;
  v15[0] = 0;
  sub_198E60(v0, v15);
  result = (_QWORD *)sub_193900(16);
  if ( result )
  {
    v12 = result[323] <= 1u;
    result[286] = 10;
    result[285] = &off_22FB20;
    if ( v12 )
    {
      v14 = result;
      sub_9C440((__int64)(result + 322), "Tracing");
      return v14;
    }
  }
  return result;
}

