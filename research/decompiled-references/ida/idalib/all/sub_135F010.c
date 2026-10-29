void __fastcall sub_135F010(
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
  __int64 v11; // rax
  void *v12; // rdi
  __int64 (__fastcall ***v13)(); // rcx
  __m128i *v14; // rax
  __m128i *v15; // rdx
  __int64 (__fastcall ***v16)(); // rcx
  size_t v17; // rax
  __int64 v18; // rcx
  size_t v19; // r8
  unsigned __int64 v20; // rax
  char *v21; // rdi
  __int64 (__fastcall ***srca)(); // [rsp+10h] [rbp-168h]
  char *srcb; // [rsp+10h] [rbp-168h]
  __int64 (__fastcall ***v26)(); // [rsp+18h] [rbp-160h]
  __int64 (__fastcall ***v27)(); // [rsp+18h] [rbp-160h]
  __int64 (__fastcall **v28)(); // [rsp+20h] [rbp-158h] BYREF
  int v29; // [rsp+28h] [rbp-150h]
  __int128 v30; // [rsp+30h] [rbp-148h]
  __m128i *v31; // [rsp+40h] [rbp-138h]
  char v32; // [rsp+48h] [rbp-130h]
  int v33; // [rsp+4Ch] [rbp-12Ch]
  void **p_ptr; // [rsp+50h] [rbp-128h]
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  __m128i si128; // [rsp+68h] [rbp-110h]
  _BYTE v37[256]; // [rsp+78h] [rbp-100h] BYREF

  ptr = v37;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA020);
  v29 = 2;
  v28 = &off_2BEBEE0;
  v32 = 0;
  v33 = 1;
  v31 = nullptr;
  v30 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v28, 0, 0, 0);
  v10 = v31;
  if ( *((_QWORD *)&v30 + 1) - (_QWORD)v31 > 0xAu )
  {
    v31->m128i_i8[10] = 39;
    v13 = &v28;
    qmemcpy(v10, "in module ", 10);
    v12 = (char *)&v31->m128i_u64[1] + 3;
    v31 = (__m128i *)((char *)v31 + 11);
  }
  else
  {
    v11 = sub_227BF10(&v28, "in module '", 11);
    v12 = *(void **)(v11 + 32);
    v13 = (__int64 (__fastcall ***)())v11;
  }
  if ( (char *)v13[3] - (_BYTE *)v12 < a5 )
  {
    sub_227BF10(v13, a4, a5);
  }
  else if ( a5 )
  {
    v26 = v13;
    memcpy(v12, a4, a5);
    v26[4] = (__int64 (__fastcall **)())((char *)v26[4] + a5);
  }
  v14 = *((__m128i **)&v30 + 1);
  v15 = v31;
  if ( s )
  {
    if ( *((_QWORD *)&v30 + 1) - (_QWORD)v31 > 0xFu )
    {
      v16 = &v28;
      *v31++ = _mm_load_si128((const __m128i *)&xmmword_23AA040);
    }
    else
    {
      v16 = (__int64 (__fastcall ***)())sub_227BF10(&v28, "' imported from ", 16);
    }
    srca = v16;
    v17 = strlen(s);
    v18 = (__int64)srca;
    v19 = v17;
    v20 = (unsigned __int64)srca[3];
    v21 = (char *)srca[4];
    if ( v19 > v20 - (unsigned __int64)v21 )
    {
      v18 = sub_227BF10(srca, s, v19);
      v21 = *(char **)(v18 + 32);
      v20 = *(_QWORD *)(v18 + 24);
    }
    else if ( v19 )
    {
      v27 = srca;
      srcb = (char *)v19;
      memcpy(v21, s, v19);
      v18 = (__int64)v27;
      v21 = &srcb[(_QWORD)v27[4]];
      v20 = (unsigned __int64)v27[3];
      v27[4] = (__int64 (__fastcall **)())v21;
    }
    if ( (unsigned __int64)v21 >= v20 )
    {
      v18 = sub_227BA10(v18, 58);
    }
    else
    {
      *(_QWORD *)(v18 + 32) = v21 + 1;
      *v21 = 58;
    }
    sub_227B910(v18, HIDWORD(a8));
    v14 = *((__m128i **)&v30 + 1);
    v15 = v31;
  }
  if ( v14 == v15 )
  {
    sub_227BF10(&v28, ":", 1);
  }
  else
  {
    v15->m128i_i8[0] = 58;
    v31 = (__m128i *)((char *)v31 + 1);
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, void *, void *))(*(_QWORD *)a1 + 80LL))(
    a1,
    a2,
    a3,
    *p_ptr,
    p_ptr[1]);
  v28 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v28);
  if ( ptr != v37 )
    free(ptr);
}
