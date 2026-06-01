/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_cast::~bad_cast
// Address: 0x00000000004AEEE0

//----- (00000000004AEEE0) ----------------------------------------------------
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_QWORD *)this = &off_51E778;
  nullsub_4(this);
}
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
// 51E778: using guessed type void (__fastcall *)(std::bad_cast *__hidden this);
