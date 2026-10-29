unsigned __int64 sub_613040()
{
  FILE *v1; // rbp
  __int64 errdesc; // rsi
  char s1[4]; // [rsp+Ch] [rbp-102Ch] BYREF
  _BYTE src[4104]; // [rsp+10h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1018h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_579240(qword_2CA1698, src, 4096, (__int64)"id1");
  if ( (unsigned __int8)qfileexist(src, src) )
  {
    v1 = (FILE *)openM(src);
    if ( qfread(v1, s1) != 4
      || !strcmp(s1, "Va0") && ((s1[2] = 50, (unsigned int)qfseek(v1, 0, 0)) || qfwrite(v1, s1) != 4) )
    {
      errdesc = get_errdesc(src);
      sub_375320((__int64)&unk_22B285A, errdesc);
    }
    qfclose(v1);
  }
  return v5 - __readfsqword(0x28u);
}

