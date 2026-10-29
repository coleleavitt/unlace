__int64 *sub_FFE0()
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
  sub_11F00(&v8);
  if ( (_QWORD)xmmword_1C358 )
    goto LABEL_6;
  ptr = nullptr;
  p_ptr = (char *)&ptr;
  *(_OWORD *)n = 0;
  if ( !(unsigned __int8)sub_11F50("IDAUSR") )
  {
    if ( (_QWORD)xmmword_1C358 )
      goto LABEL_4;
LABEL_7:
    v2 = sub_FBC0(&ptr);
    v3 = xmmword_1C358;
    if ( v2 )
    {
      v4 = n[0];
      v5 = nullptr;
      if ( n[0] )
      {
        v5 = (void *)sub_113E0(n[0]);
        memcpy(v5, ptr, v4);
      }
      v6 = xmmword_1C358;
      p_ptr = (char *)qword_1C350;
      if ( *((_QWORD *)&xmmword_1C358 + 1) < (unsigned __int64)(xmmword_1C358 + 1) )
      {
        qword_1C350 = sub_11430(&qword_1C350, qword_1C350, xmmword_1C358 + 1, 24);
        v6 = xmmword_1C358;
        p_ptr = (char *)qword_1C350;
      }
      v7 = &p_ptr[24 * v6];
      *(_QWORD *)v7 = v5;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
      v3 = xmmword_1C358 + 1;
      *(_QWORD *)&xmmword_1C358 = xmmword_1C358 + 1;
    }
    if ( !v3 )
      sub_6130(
        (__int64)"IDA could not find a valid user directory.\n"
                 "Please make sure that the HOME or IDAUSR environment variables are set.\n",
        p_ptr);
    goto LABEL_4;
  }
  p_ptr = (char *)ptr;
  sub_FDB0(&qword_1C350, (char *)ptr);
  if ( !(_QWORD)xmmword_1C358 )
    goto LABEL_7;
LABEL_4:
  if ( ptr )
  {
    n[0] = 0;
    j__free(ptr);
  }
LABEL_6:
  sub_11F20(v8);
  return &qword_1C350;
}

