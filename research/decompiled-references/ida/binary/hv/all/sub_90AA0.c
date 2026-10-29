__int64 *sub_90AA0()
{
  char *p_ptr; // rsi
  char v2; // dl
  __int64 v3; // rax
  size_t v4; // rbx
  void *v5; // rbp
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_98430(&v8);
  if ( (_QWORD)xmmword_166148 )
    goto LABEL_6;
  ptr = nullptr;
  p_ptr = (char *)&ptr;
  *(_OWORD *)n = 0;
  if ( !(unsigned __int8)sub_98D10("IDAUSR") )
  {
    if ( (_QWORD)xmmword_166148 )
      goto LABEL_4;
LABEL_7:
    v2 = sub_90680(&ptr);
    v3 = xmmword_166148;
    if ( v2 )
    {
      v4 = n[0];
      v5 = nullptr;
      if ( n[0] )
      {
        v5 = (void *)sub_96030(n[0]);
        memcpy(v5, ptr, v4);
      }
      v6 = xmmword_166148;
      p_ptr = (char *)qword_166140;
      if ( *((_QWORD *)&xmmword_166148 + 1) < (unsigned __int64)(xmmword_166148 + 1) )
      {
        qword_166140 = sub_96080(&qword_166140, qword_166140, xmmword_166148 + 1, 24);
        v6 = xmmword_166148;
        p_ptr = (char *)qword_166140;
      }
      v7 = &p_ptr[24 * v6];
      *(_QWORD *)v7 = v5;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
      v3 = xmmword_166148 + 1;
      *(_QWORD *)&xmmword_166148 = xmmword_166148 + 1;
    }
    if ( !v3 )
      sub_16AB0(
        (__int64)"IDA could not find a valid user directory.\n"
                 "Please make sure that the HOME or IDAUSR environment variables are set.\n",
        p_ptr);
    goto LABEL_4;
  }
  p_ptr = (char *)ptr;
  sub_90870(&qword_166140, (char *)ptr);
  if ( !(_QWORD)xmmword_166148 )
    goto LABEL_7;
LABEL_4:
  if ( ptr )
  {
    n[0] = 0;
    j__free(ptr);
  }
LABEL_6:
  sub_98450(v8);
  return &qword_166140;
}

