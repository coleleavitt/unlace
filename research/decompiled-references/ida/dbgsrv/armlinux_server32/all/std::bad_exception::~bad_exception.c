/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_exception::~bad_exception
// Address: 0x00080D70

//----- (00080D70) --------------------------------------------------------
void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  *(_DWORD *)this = &off_D2CD8;
  nullsub_1(this);
}
// 80D6C: using guessed type int __fastcall nullsub_1(_DWORD);
// D2CD8: using guessed type _UNKNOWN *off_D2CD8;
