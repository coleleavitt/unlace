/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805CC
// Address: 0x000805CC

//----- (000805CC) --------------------------------------------------------
void *__fastcall sub_805CC(size_t a1)
{
  size_t v1; // r4
  void *result; // r0
  void (*v3)(void); // r0
  char *v4; // r0

  if ( a1 )
    v1 = a1;
  else
    v1 = 1;
  while ( 1 )
  {
    result = malloc(v1);
    if ( result )
      break;
    v3 = (void (*)(void))sub_83EA0();
    if ( !v3 )
    {
      v4 = sub_8117C(4);
      *(_DWORD *)v4 = &off_D1D94;
      sub_80D98((int)v4, (int)&`typeinfo for'std::bad_alloc, (int)std::bad_alloc::~bad_alloc);
    }
    v3();
  }
  return result;
}
// D1D80: using guessed type int *`typeinfo for'std::bad_alloc;
// D1D94: using guessed type _UNKNOWN *off_D1D94;
