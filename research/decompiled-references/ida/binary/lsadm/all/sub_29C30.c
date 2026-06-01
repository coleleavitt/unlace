int __fastcall sub_29C30(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  sub_26E40(1u);
  *__errno_location() = 9;
  sub_26E40(1u);
  return -1;
}

