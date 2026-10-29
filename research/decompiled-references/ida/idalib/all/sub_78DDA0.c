size_t __fastcall sub_78DDA0(const char *a1, char *a2)
{
  size_t result; // rax
  char v3; // cl
  const char *v4; // rdi

  result = strlen(a1);
  v3 = 0;
  v4 = &a1[(int)result - 1];
  while ( (int)result > 0 )
  {
    if ( *v4-- != 4 )
      break;
    result = (unsigned int)(result - 1);
    v3 = 1;
  }
  if ( a2 )
    *a2 = v3;
  return result;
}
