/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E050
// Address: 0x000000000049E050

//----- (000000000049E050) ----------------------------------------------------
void *__fastcall sub_49E050(size_t a1)
{
  size_t v1; // x19
  void *result; // x0
  void (*v3)(void); // x0
  _QWORD *v4; // x0

  if ( a1 )
    v1 = a1;
  else
    v1 = 1;
  while ( 1 )
  {
    result = malloc(v1);
    if ( result )
      break;
    v3 = (void (*)(void))sub_4AEE28();
    if ( !v3 )
    {
      v4 = sub_49DA58(8);
      *v4 = &off_51E738;
      sub_49DCD8((__int64)v4, (__int64)&`typeinfo for'std::bad_alloc, (__int64)std::bad_alloc::~bad_alloc);
    }
    v3();
  }
  return result;
}
// 51DC30: using guessed type __int64 *`typeinfo for'std::bad_alloc;
// 51E738: using guessed type void (__fastcall *off_51E738)(std::bad_alloc *__hidden this);
