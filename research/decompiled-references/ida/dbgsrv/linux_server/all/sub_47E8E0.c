/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E8E0
// Address: 0x000000000047E8E0

//----- (000000000047E8E0) ----------------------------------------------------
__int64 *sub_47E8E0()
{
  char v1; // dl
  __int64 v2; // rax
  size_t v3; // rbx
  void *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  pthread_mutex_t *v8; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_482EF0(&v8);
  if ( (_QWORD)xmmword_4C8488 )
    goto LABEL_6;
  ptr = nullptr;
  *(_OWORD *)n = 0;
  if ( !(unsigned __int8)sub_4837D0("IDAUSR", (__int64)&ptr) )
  {
    if ( (_QWORD)xmmword_4C8488 )
      goto LABEL_4;
LABEL_7:
    v1 = sub_47E4C0((__int64)&ptr);
    v2 = xmmword_4C8488;
    if ( v1 )
    {
      v3 = n[0];
      v4 = nullptr;
      if ( n[0] )
      {
        v4 = sub_4814F0(n[0]);
        memcpy(v4, ptr, v3);
      }
      v5 = xmmword_4C8488;
      v6 = qword_4C8480;
      if ( *((_QWORD *)&xmmword_4C8488 + 1) < (unsigned __int64)(xmmword_4C8488 + 1) )
      {
        qword_4C8480 = (__int64)sub_481540((__int64)&qword_4C8480, (void *)qword_4C8480, xmmword_4C8488 + 1, 0x18u);
        v5 = xmmword_4C8488;
        v6 = qword_4C8480;
      }
      v7 = v6 + 24 * v5;
      *(_QWORD *)v7 = v4;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
      v2 = xmmword_4C8488 + 1;
      *(_QWORD *)&xmmword_4C8488 = xmmword_4C8488 + 1;
    }
    if ( !v2 )
      sub_410DF0(
        "IDA could not find a valid user directory.\n"
        "Please make sure that the HOME or IDAUSR environment variables are set.\n");
    goto LABEL_4;
  }
  sub_47E6B0((char **)&qword_4C8480, (char *)ptr);
  if ( !(_QWORD)xmmword_4C8488 )
    goto LABEL_7;
LABEL_4:
  if ( ptr )
  {
    n[0] = 0;
    j__free(ptr);
  }
LABEL_6:
  sub_482F10(v8);
  return &qword_4C8480;
}
// 4C8480: using guessed type __int64 qword_4C8480;
// 4C8488: using guessed type __int128 xmmword_4C8488;
