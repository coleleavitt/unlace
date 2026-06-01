void __fastcall sub_135EDE0(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, char *s, __int64 a8)
{
  __m128i *v10; // rdx
  __int64 (__fastcall ***v11)(); // rbx
  size_t v12; // rax
  char *v13; // rdi
  size_t v14; // rcx
  __int64 (__fastcall **v15)(); // rax
  __int64 v16; // rax
  _BYTE *v17; // rdx
  __int64 (__fastcall **v18)(); // rax
  __m128i v19; // xmm0
  char *src; // [rsp+8h] [rbp-160h]
  __int64 (__fastcall **v21)(); // [rsp+10h] [rbp-158h] BYREF
  int v22; // [rsp+18h] [rbp-150h]
  __int128 v23; // [rsp+20h] [rbp-148h]
  __m128i *v24; // [rsp+30h] [rbp-138h]
  char v25; // [rsp+38h] [rbp-130h]
  int v26; // [rsp+3Ch] [rbp-12Ch]
  void **p_ptr; // [rsp+40h] [rbp-128h]
  void *ptr; // [rsp+50h] [rbp-118h] BYREF
  __m128i si128; // [rsp+58h] [rbp-110h]
  _BYTE v30[256]; // [rsp+68h] [rbp-100h] BYREF

  v22 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA020);
  ptr = v30;
  v25 = 0;
  v26 = 1;
  v21 = &off_2BEBEE0;
  v24 = nullptr;
  v23 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v21, 0, 0, 0);
  v10 = v24;
  if ( *((_QWORD *)&v23 + 1) - (_QWORD)v24 > 0x15u )
  {
    v19 = _mm_load_si128((const __m128i *)&xmmword_23AA030);
    v24[1].m128i_i32[0] = 1869768224;
    v11 = &v21;
    v10[1].m128i_i16[2] = 8301;
    *v10 = v19;
    v24 = (__m128i *)((char *)v24 + 22);
  }
  else
  {
    v11 = (__int64 (__fastcall ***)())sub_227BF10(&v21, "in file included from ", 22);
  }
  if ( !s )
    goto LABEL_6;
  v12 = strlen(s);
  v13 = (char *)v11[4];
  v14 = v12;
  v15 = v11[3];
  if ( v14 > (char *)v15 - v13 )
  {
    v11 = (__int64 (__fastcall ***)())sub_227BF10(v11, s, v14);
LABEL_6:
    v13 = (char *)v11[4];
    v15 = v11[3];
    goto LABEL_7;
  }
  if ( v14 )
  {
    src = (char *)v14;
    memcpy(v13, s, v14);
    v18 = v11[3];
    v13 = &src[(_QWORD)v11[4]];
    v11[4] = (__int64 (__fastcall **)())v13;
    if ( v18 > (__int64 (__fastcall **)())v13 )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_7:
  if ( v15 > (__int64 (__fastcall **)())v13 )
  {
LABEL_8:
    v11[4] = (__int64 (__fastcall **)())(v13 + 1);
    *v13 = 58;
    goto LABEL_9;
  }
LABEL_16:
  v11 = (__int64 (__fastcall ***)())sub_227BA10(v11, 58);
LABEL_9:
  v16 = sub_227B910(v11, HIDWORD(a8));
  v17 = *(_BYTE **)(v16 + 32);
  if ( v17 == *(_BYTE **)(v16 + 24) )
  {
    sub_227BF10(v16, ":", 1);
  }
  else
  {
    *v17 = 58;
    ++*(_QWORD *)(v16 + 32);
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, void *, void *))(*(_QWORD *)a1 + 80LL))(
    a1,
    a2,
    a3,
    *p_ptr,
    p_ptr[1]);
  v21 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v21);
  if ( ptr != v30 )
    free(ptr);
}
