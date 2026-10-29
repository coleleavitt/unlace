/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_alloc::~bad_alloc
// Address: 0x00000000004AEE90

//----- (00000000004AEE90) ----------------------------------------------------
void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_QWORD *)this = &off_51E738;
  nullsub_4(this);
}
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
// 51E738: using guessed type void (__fastcall *)(std::bad_alloc *__hidden this);
