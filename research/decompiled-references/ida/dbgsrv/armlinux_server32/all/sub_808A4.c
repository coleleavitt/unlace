/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A4
// Address: 0x000808A4

//----- (000808A4) --------------------------------------------------------
void *__fastcall sub_808A4(size_t a1)
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
    v3 = (void (*)(void))sub_80E30();
    if ( !v3 )
    {
      v4 = sub_807D4(4);
      *(_DWORD *)v4 = &off_D2D74;
      sub_8109C((int)v4, (int)&`typeinfo for'std::bad_alloc, (int)std::bad_alloc::~bad_alloc);
    }
    v3();
  }
  return result;
}
// D2D60: using guessed type int *`typeinfo for'std::bad_alloc;
// D2D74: using guessed type _UNKNOWN *off_D2D74;
