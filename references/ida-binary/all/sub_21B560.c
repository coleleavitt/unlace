_QWORD *__fastcall sub_21B560(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __m128i v3; // xmm0
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  size_t v10; // r13
  __int64 v11; // r14
  const char *v12; // rax
  _QWORD *result; // rax
  bool v14; // cc
  __int64 v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // [rsp+8h] [rbp-40h]
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v18[1] = __readfsqword(0x28u);
  v2 = qalloc_or_throw(240);
  *(_QWORD *)v2 = &stru_86F6A0;
  *(_QWORD *)(v2 + 8) = 0x2008010000004LL;
  *(_OWORD *)(v2 + 16) = -1;
  v3 = _mm_loadl_epi64((const __m128i *)&off_85F220);
  v4 = (_QWORD *)(v2 + 80);
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 48) = 4;
  *(_DWORD *)(v2 + 72) = -1;
  *(__m128i *)(v2 + 56) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)&off_85F200);
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != (_QWORD *)(v2 + 176) );
  *(_DWORD *)(v2 + 176) = 0;
  v5 = *(unsigned int *)(v2 + 12);
  if ( ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v2 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v5, ((*(_DWORD *)(v2 + 12) >> 19) & 0x3Fu) - 1, 0.0);
      BUG();
    }
    *(_BYTE *)(v2 + 11) = ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v2 + 12) = v5 & 0xFE07FFFF;
  }
  *(_QWORD *)(v2 + 200) = 0;
  *(_QWORD *)v2 = tr_chooser_t___vtable;
  *(_BYTE *)(v2 + 224) = 0;
  *(_QWORD *)(v2 + 232) = &qword_8CB750;
  *(__m128i *)(v2 + 184) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)qword_8CBAA0,
                             (__m128i)(unsigned __int64)qword_8CBAA0);
  *(_OWORD *)(v2 + 208) = 0;
  sub_21B4A0((_QWORD *)v2);
  v6 = *(_QWORD *)(v2 + 208);
  v7 = *(_QWORD *)(v2 + 200);
  v8 = *(_QWORD *)(v2 + 216);
  if ( v6 )
  {
    v9 = v6 + 10;
    v10 = v6 - 1;
    v11 = v6 + 9;
    if ( v8 >= v6 + 10 )
      goto LABEL_8;
    v15 = v2 + 200;
  }
  else
  {
    if ( v8 > 0xA )
    {
      *(_QWORD *)(v2 + 208) = 11;
      *(_BYTE *)(v7 + 10) = 0;
      goto LABEL_10;
    }
    v15 = v2 + 200;
    v10 = 0;
    v9 = 11;
    v11 = 10;
  }
  v16 = qvector_reserve(v15, v7, v9, 1);
  *(_QWORD *)(v2 + 200) = v16;
  v7 = v16;
LABEL_8:
  *(_QWORD *)(v2 + 208) = v9;
  *(_BYTE *)(v7 + v11) = 0;
  if ( v10 )
    memmove((void *)(*(_QWORD *)(v2 + 200) + 10LL), *(const void **)(v2 + 200), v10);
LABEL_10:
  qmemcpy(*(void **)(v2 + 200), "@0:1444[]\n", 10);
  v12 = &s1;
  if ( *(_QWORD *)(v2 + 208) )
    v12 = *(const char **)(v2 + 200);
  *(_QWORD *)(v2 + 40) = v12;
  *(_DWORD *)(v2 + 72) = 141;
  v18[0] = 0;
  sub_4AED50(v2, v18, v6, 2653);
  result = (_QWORD *)sub_49EDE0(16);
  if ( result )
  {
    v14 = result[307] <= 1u;
    result[269] = 11;
    result[268] = &off_85F0E0;
    if ( v14 )
    {
      v17 = result;
      sub_20B400(result + 306, "Tracing");
      return v17;
    }
  }
  return result;
}
