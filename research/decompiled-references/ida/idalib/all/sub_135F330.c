void __fastcall sub_135F330(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        char *s,
        __int64 a8)
{
  __m128i *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __m128i *v13; // rdi
  __int64 (__fastcall ***v14)(); // r15
  unsigned __int64 v15; // rax
  size_t v16; // rax
  _BYTE *v17; // rdi
  size_t v18; // r14
  __int64 (__fastcall **v19)(); // rax
  __int64 v20; // rax
  _BYTE *v21; // rdx
  __int64 v22; // rax
  char *v23; // rdi
  __int64 (__fastcall ***v24)(); // r12
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 (__fastcall **v29)(); // rax
  __int64 v30; // rax
  __int64 (__fastcall **v31)(); // rax
  __int64 (__fastcall **v34)(); // [rsp+20h] [rbp-158h] BYREF
  int v35; // [rsp+28h] [rbp-150h]
  __int128 v36; // [rsp+30h] [rbp-148h]
  __int64 v37; // [rsp+40h] [rbp-138h]
  char v38; // [rsp+48h] [rbp-130h]
  int v39; // [rsp+4Ch] [rbp-12Ch]
  void **p_ptr; // [rsp+50h] [rbp-128h]
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  __m128i si128; // [rsp+68h] [rbp-110h]
  _BYTE v43[256]; // [rsp+78h] [rbp-100h] BYREF

  ptr = v43;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA020);
  v34 = &off_2BEBEE0;
  v35 = 2;
  v38 = 0;
  v39 = 1;
  v37 = 0;
  v36 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v34, 0, 0, 0);
  v10 = (__m128i *)v37;
  v11 = *((_QWORD *)&v36 + 1) - v37;
  if ( s )
  {
    if ( v11 > 0x16 )
    {
      v27 = _mm_load_si128((const __m128i *)&xmmword_23AA050);
      *(_BYTE *)(v37 + 22) = 39;
      v14 = &v34;
      v10[1].m128i_i32[0] = 1819632751;
      *v10 = v27;
      v10[1].m128i_i16[2] = 8293;
      v13 = (__m128i *)(v37 + 23);
      v37 += 23;
    }
    else
    {
      v12 = sub_227BF10(&v34, "while building module '", 23);
      v13 = *(__m128i **)(v12 + 32);
      v14 = (__int64 (__fastcall ***)())v12;
    }
    v15 = (char *)v14[3] - (char *)v13;
    if ( v15 < a5 )
    {
      v26 = sub_227BF10(v14, a4, a5);
      v13 = *(__m128i **)(v26 + 32);
      v14 = (__int64 (__fastcall ***)())v26;
      if ( *(_QWORD *)(v26 + 24) - (_QWORD)v13 <= 0xFu )
      {
LABEL_8:
        v14 = (__int64 (__fastcall ***)())sub_227BF10(v14, "' imported from ", 16);
LABEL_9:
        v16 = strlen(s);
        v17 = v14[4];
        v18 = v16;
        v19 = v14[3];
        if ( v18 > (char *)v19 - v17 )
        {
          v14 = (__int64 (__fastcall ***)())sub_227BF10(v14, s, v18);
          v17 = v14[4];
          v19 = v14[3];
        }
        else if ( v18 )
        {
          memcpy(v17, s, v18);
          v19 = v14[3];
          v17 = (char *)v14[4] + v18;
          v14[4] = (__int64 (__fastcall **)())v17;
        }
        if ( v17 >= (_BYTE *)v19 )
        {
          v14 = (__int64 (__fastcall ***)())sub_227BA10(v14, 58);
        }
        else
        {
          v14[4] = (__int64 (__fastcall **)())(v17 + 1);
          *v17 = 58;
        }
        v20 = sub_227B910(v14, HIDWORD(a8));
        v21 = *(_BYTE **)(v20 + 32);
        if ( v21 == *(_BYTE **)(v20 + 24) )
        {
          sub_227BF10(v20, ":", 1);
        }
        else
        {
          *v21 = 58;
          ++*(_QWORD *)(v20 + 32);
        }
        goto LABEL_16;
      }
    }
    else
    {
      if ( a5 )
      {
        memcpy(v13, a4, a5);
        v29 = v14[3];
        v13 = (__m128i *)((char *)v14[4] + a5);
        v14[4] = (__int64 (__fastcall **)())v13;
        v15 = (char *)v29 - (char *)v13;
      }
      if ( v15 <= 0xF )
        goto LABEL_8;
    }
    *v13 = _mm_load_si128((const __m128i *)&xmmword_23AA040);
    v14[4] += 2;
    goto LABEL_9;
  }
  if ( v11 > 0x16 )
  {
    v28 = _mm_load_si128((const __m128i *)&xmmword_23AA050);
    *(_BYTE *)(v37 + 22) = 39;
    v24 = &v34;
    v10[1].m128i_i32[0] = 1819632751;
    *v10 = v28;
    v10[1].m128i_i16[2] = 8293;
    v23 = (char *)(v37 + 23);
    v37 += 23;
  }
  else
  {
    v22 = sub_227BF10(&v34, "while building module '", 23);
    v23 = *(char **)(v22 + 32);
    v24 = (__int64 (__fastcall ***)())v22;
  }
  v25 = (char *)v24[3] - v23;
  if ( v25 < a5 )
  {
    v30 = sub_227BF10(v24, a4, a5);
    v23 = *(char **)(v30 + 32);
    v24 = (__int64 (__fastcall ***)())v30;
    v25 = *(_QWORD *)(v30 + 24) - (_QWORD)v23;
  }
  else if ( a5 )
  {
    memcpy(v23, a4, a5);
    v31 = v24[3];
    v23 = (char *)v24[4] + a5;
    v24[4] = (__int64 (__fastcall **)())v23;
    v25 = (char *)v31 - v23;
  }
  if ( v25 > 1 )
  {
    *(_WORD *)v23 = 14887;
    v24[4] = (__int64 (__fastcall **)())((char *)v24[4] + 2);
  }
  else
  {
    sub_227BF10(v24, "':", 2);
  }
LABEL_16:
  (*(void (__fastcall **)(__int64, _QWORD, __int64, void *, void *))(*(_QWORD *)a1 + 80LL))(
    a1,
    a2,
    a3,
    *p_ptr,
    p_ptr[1]);
  v34 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v34);
  if ( ptr != v43 )
    free(ptr);
}
