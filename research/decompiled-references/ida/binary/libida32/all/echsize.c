unsigned __int64 __fastcall echsize(FILE *stream, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned int v5; // eax
  const char *v7; // rsi
  char ptr; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = qftell(stream);
  if ( v2 == -1 )
    goto LABEL_8;
  v3 = v2;
  qfseek(stream, 0, 2);
  v4 = qftell(stream);
  if ( v4 == -1 )
    goto LABEL_8;
  if ( v4 >= a2 )
  {
    qflush(stream);
    v5 = fileno(stream);
    if ( !(unsigned int)qchsize(v5, a2) )
      return v9 - __readfsqword(0x28u);
LABEL_8:
    v7 = (const char *)qerrstr(-1);
    sub_375320((__int64)"chsize: %s", v7);
  }
  ptr = 0;
  if ( (unsigned int)qfseek(stream, a2 - 1, 0) || qfwrite(stream, &ptr) != 1 || (unsigned int)qfseek(stream, v3, 0) )
    goto LABEL_8;
  return v9 - __readfsqword(0x28u);
}

