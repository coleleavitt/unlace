int __fastcall sub_10C10(int a1, __off64_t a2)
{
  int result; // eax

  result = ftruncate64(a1, a2);
  if ( result )
  {
    sub_F2F0(1u);
    return -1;
  }
  return result;
}

