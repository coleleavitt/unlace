/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_exception::~bad_exception
// Address: 0x0007FC88

//----- (0007FC88) --------------------------------------------------------
void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  *(_DWORD *)this = &off_D1C28;
  nullsub_1(this);
}
// 7FC84: using guessed type int __fastcall nullsub_1(_DWORD);
// D1C28: using guessed type _UNKNOWN *off_D1C28;
