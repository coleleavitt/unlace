__int64 *sub_834980()
{
  char *p_src; // rsi
  char v2; // dl
  __int64 v3; // rax
  size_t v4; // rbx
  void *v5; // rbp
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  void *src; // [rsp+10h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_842D10(&v8);
  if ( (_QWORD)xmmword_2CD4E88 )
    goto LABEL_6;
  src = nullptr;
  p_src = (char *)&src;
  *(_OWORD *)n = 0;
  if ( !(unsigned __int8)qgetenv("IDAUSR") )
  {
    if ( (_QWORD)xmmword_2CD4E88 )
      goto LABEL_4;
LABEL_7:
    v2 = sub_834550(&src);
    v3 = xmmword_2CD4E88;
    if ( v2 )
    {
      v4 = n[0];
      v5 = nullptr;
      if ( n[0] )
      {
        v5 = (void *)qalloc_or_throw(n[0]);
        memcpy(v5, src, v4);
      }
      v6 = xmmword_2CD4E88;
      p_src = (char *)qword_2CD4E80;
      if ( *((_QWORD *)&xmmword_2CD4E88 + 1) < (unsigned __int64)(xmmword_2CD4E88 + 1) )
      {
        qword_2CD4E80 = qvector_reserve(&qword_2CD4E80, qword_2CD4E80, xmmword_2CD4E88 + 1, 24);
        v6 = xmmword_2CD4E88;
        p_src = (char *)qword_2CD4E80;
      }
      v7 = &p_src[24 * v6];
      *(_QWORD *)v7 = v5;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
      v3 = xmmword_2CD4E88 + 1;
      *(_QWORD *)&xmmword_2CD4E88 = xmmword_2CD4E88 + 1;
    }
    if ( !v3 )
      sub_378C70(
        (__int64)"IDA could not find a valid user directory.\n"
                 "Please make sure that the HOME or IDAUSR environment variables are set.\n",
        p_src);
    goto LABEL_4;
  }
  p_src = (char *)src;
  sub_834750(&qword_2CD4E80, (char *)src);
  if ( !(_QWORD)xmmword_2CD4E88 )
    goto LABEL_7;
LABEL_4:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
LABEL_6:
  qmutex_unlock(v8);
  return &qword_2CD4E80;
}
