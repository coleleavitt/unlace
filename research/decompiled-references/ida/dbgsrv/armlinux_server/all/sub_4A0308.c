/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0308
// Address: 0x00000000004A0308

//----- (00000000004A0308) ----------------------------------------------------
void __noreturn sub_4A0308()
{
  _QWORD *v0; // x0

  v0 = sub_49DA58(8);
  *v0 = &off_51E738;
  sub_49DCD8((__int64)v0, (__int64)&`typeinfo for'std::bad_alloc, (__int64)std::bad_alloc::~bad_alloc);
}
// 51DC30: using guessed type __int64 *`typeinfo for'std::bad_alloc;
// 51E738: using guessed type void (__fastcall *off_51E738)(std::bad_alloc *__hidden this);
