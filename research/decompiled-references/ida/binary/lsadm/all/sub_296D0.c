int __fastcall sub_296D0(int a1, __off64_t a2)
{
  int result; // eax

  result = ftruncate64(a1, a2);
  if ( result )
  {
    sub_26E40(1u);
    return -1;
  }
  return result;
}

