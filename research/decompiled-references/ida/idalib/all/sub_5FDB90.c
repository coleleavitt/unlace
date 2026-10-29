__int64 __fastcall sub_5FDB90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  size_t v8; // rbp
  __int16 v10; // ax
  void *v11; // rdi
  char v12; // dl
  __int64 v13; // r13
  int v14; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  void *v26; // rax
  const void *v27; // rsi
  _BYTE s2[26]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v29[26]; // [rsp+30h] [rbp-A8h] BYREF
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __int128 v31; // [rsp+58h] [rbp-80h]
  __int16 v32; // [rsp+68h] [rbp-70h]
  __int64 v33; // [rsp+70h] [rbp-68h]
  char v34; // [rsp+78h] [rbp-60h]
  __m128i v35; // [rsp+80h] [rbp-58h]
  unsigned __int64 v36; // [rsp+98h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 8);
  v36 = __readfsqword(0x28u);
  v31 = 0;
  ptr = nullptr;
  if ( v8 )
  {
    v26 = (void *)qalloc_or_throw(v8);
    v27 = *(const void **)a3;
    *((_QWORD *)&v31 + 1) = v8;
    ptr = v26;
    memcpy(v26, v27, v8);
    *(_QWORD *)&v31 = v8;
  }
  v10 = *(_WORD *)(a3 + 24);
  v11 = (void *)a6[2];
  v33 = *(_QWORD *)(a3 + 32);
  v12 = *(_BYTE *)(a3 + 40);
  v32 = v10;
  v34 = v12;
  v35 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  if ( v11 )
  {
    a6[3] = 0;
    qfree(v11);
    a6[2] = 0;
    v10 = v32;
    a6[4] = 0;
  }
  if ( v10 == 123 )
  {
    while ( (unsigned __int8)sub_7480A0(a1, &ptr) )
    {
      if ( v32 == 125 )
      {
        v24 = 0;
        goto LABEL_26;
      }
      if ( !(unsigned __int8)sub_748250(s2, 10, a1, &ptr) || !(unsigned __int8)sub_7480A0(a1, &ptr) )
        break;
      if ( v32 != 58 )
        goto LABEL_24;
      if ( !(unsigned __int8)sub_7480A0(a1, &ptr) || !(unsigned __int8)sub_748250(&s2[10], 16, a1, &ptr) )
        break;
      v13 = a6[2];
      if ( a6[3] )
      {
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          v17 = v13 + 26 * v15;
          if ( !strcmp((const char *)v17, s2) )
            break;
          if ( (unsigned int)sub_5FB5D0(s2, (unsigned __int8 *)v17, 0) )
          {
            v18 = _mm_loadu_si128((const __m128i *)v17);
            v15 = ++v14;
            *(__m128i *)v29 = _mm_load_si128((const __m128i *)s2);
            v19 = _mm_loadu_si128((const __m128i *)&s2[10]);
            *(__m128i *)s2 = v18;
            v20 = _mm_loadu_si128((const __m128i *)(v17 + 10));
            *(__m128i *)&v29[10] = v19;
            *(__m128i *)&s2[10] = v20;
            *(__m128i *)v17 = _mm_load_si128((const __m128i *)v29);
            *(__m128i *)(v17 + 10) = v19;
            v16 = a6[3];
            v13 = a6[2];
            if ( v14 >= v16 )
            {
LABEL_19:
              v21 = v16 + 1;
              goto LABEL_20;
            }
          }
          else
          {
            ++v14;
            v16 = a6[3];
            v15 = v14;
            if ( v14 >= v16 )
              goto LABEL_19;
          }
        }
        *(__m128i *)v17 = _mm_load_si128((const __m128i *)s2);
        *(__m128i *)(v17 + 10) = _mm_loadu_si128((const __m128i *)&s2[10]);
      }
      else
      {
        v21 = 1;
LABEL_20:
        *(__m128i *)v29 = _mm_load_si128((const __m128i *)s2);
        *(__m128i *)&v29[10] = _mm_loadu_si128((const __m128i *)&s2[10]);
        if ( a6[4] < v21 )
        {
          v23 = qvector_reserve(a6 + 2, v13, v21, 26);
          a6[2] = v23;
          v13 = v23;
        }
        v22 = v13 + 26LL * a6[3];
        *(__m128i *)v22 = _mm_load_si128((const __m128i *)v29);
        *(__m128i *)(v22 + 10) = _mm_loadu_si128((const __m128i *)&v29[10]);
        ++a6[3];
      }
    }
  }
  else
  {
LABEL_24:
    sub_747D50(a1, 1362);
  }
  v24 = 3;
LABEL_26:
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  return v24;
}
