int __fastcall sub_952C0(int a1, __off64_t a2)
{
  int result; // eax

  result = ftruncate64(a1, a2);
  if ( result )
  {
    sub_8F860(1u);
    return -1;
  }
  return result;
}

