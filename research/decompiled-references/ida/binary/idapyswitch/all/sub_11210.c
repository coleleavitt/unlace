int __fastcall sub_11210(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  sub_F2F0(1u);
  *__errno_location() = 9;
  sub_F2F0(1u);
  return -1;
}

