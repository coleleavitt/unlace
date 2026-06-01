__int64 __fastcall sub_10D940(const char *a1)
{
  unsigned int v1; // ebp

  v1 = 1;
  if ( (int)convert_encoding() < 0 )
  {
    sub_92200(
      (__int64)"Encoding name '%s' not recognized.\n"
               "\n"
               "You can use most of the encodings supported by iconv (see iconv -l).",
      a1);
    return 0;
  }
  return v1;
}

