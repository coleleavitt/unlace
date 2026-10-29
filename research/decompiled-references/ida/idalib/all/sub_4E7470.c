char *__fastcall sub_4E7470(const char *src, __int64 a2, char a3)
{
  char *v5; // rbx
  const char *v6; // rdi
  int v7; // eax
  _OWORD *v9; // rax
  size_t v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __m128i v13; // xmm0
  void *v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  void *v17; // rax
  __m128i v18; // [rsp+0h] [rbp-88h] BYREF
  __m128i v19; // [rsp+10h] [rbp-78h] BYREF
  __m128i v20; // [rsp+20h] [rbp-68h] BYREF
  __m128i v21; // [rsp+30h] [rbp-58h] BYREF
  __m128i v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( qword_2CCBF88 )
    qmutex_lock(qword_2CCBF88);
  v5 = (char *)qword_2CCBF10;
  if ( qword_2CCBF10 )
  {
    while ( 1 )
    {
      v6 = haystack;
      if ( *((_QWORD *)v5 + 3) )
        v6 = *((const char **)v5 + 2);
      if ( !strcmp(v6, src) )
        break;
      v5 = *(char **)v5;
      if ( !v5 )
        goto LABEL_14;
    }
    v7 = *((_DWORD *)v5 + 32) + 1;
    goto LABEL_10;
  }
LABEL_14:
  v18.m128i_i64[0] = 0;
  v23 = 0;
  if ( a3 )
  {
    sub_63FB70(&v18, src, a2);
    goto LABEL_16;
  }
  v5 = nullptr;
  if ( (unsigned __int8)load_core_module(&v18, src, a2) )
  {
LABEL_16:
    v9 = (_OWORD *)operator new(0x88u);
    *((_QWORD *)v9 + 2) = 0;
    v5 = (char *)v9;
    *((_QWORD *)v9 + 5) = 0;
    *((_QWORD *)v9 + 15) = 0;
    *((_DWORD *)v9 + 32) = 0;
    *v9 = 0;
    *(_OWORD *)((char *)v9 + 24) = 0;
    if ( src )
    {
      v10 = strlen(src);
      v7 = 1;
      if ( v10 )
      {
        v17 = (void *)qvector_reserve(v5 + 16, 0, v10 + 1, 1);
        *((_QWORD *)v5 + 2) = v17;
        *((_QWORD *)v5 + 3) = v10 + 1;
        memmove(v17, src, v10);
        *(_BYTE *)(*((_QWORD *)v5 + 2) + v10) = 0;
        v7 = *((_DWORD *)v5 + 32) + 1;
      }
    }
    else
    {
      v7 = 1;
    }
    v11 = _mm_load_si128(&v18);
    v12 = v23;
    *((_QWORD *)v5 + 1) = a2;
    *(__m128i *)(v5 + 40) = v11;
    v13 = _mm_load_si128(&v19);
    *((_QWORD *)v5 + 15) = v12;
    v14 = qword_2CCBF10;
    *(__m128i *)(v5 + 56) = v13;
    v15 = _mm_load_si128(&v20);
    *(_QWORD *)v5 = v14;
    *(__m128i *)(v5 + 72) = v15;
    v16 = _mm_load_si128(&v21);
    qword_2CCBF10 = v5;
    *(__m128i *)(v5 + 88) = v16;
    *(__m128i *)(v5 + 104) = _mm_load_si128(&v22);
LABEL_10:
    *((_DWORD *)v5 + 32) = v7;
  }
  if ( qword_2CCBF88 )
    qmutex_unlock(qword_2CCBF88);
  return v5;
}
