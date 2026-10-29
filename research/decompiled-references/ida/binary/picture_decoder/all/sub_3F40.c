int __fastcall sub_3F40(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  sub_4D60(1);
  *__errno_location() = 9;
  sub_4D60(1);
  return -1;
}

